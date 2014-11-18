/*-------------------------------------------------------------------------
 I2C Terminal menu functions
 Created by: webmaster442
 https://github.com/webmaster442/ArduinoExtensions
 -------------------------------------------------------------------------*/
#include <Time.h>
#include <DS1307RTC.h>
#include <Adafruit_MCP23017.h>

/*-------------------------------------------------------------------------
 Main Menu
 -------------------------------------------------------------------------*/
__inline__ void MenuMain()
{
  Serial.println("------------------------------------------------------");
  Serial.println("I2C Tools");
  Serial.println("------------------------------------------------------");
  Serial.println("Available commands:");
  for (i=0; i<COMMAND_COUNT; i++)
  {
    Serial.println(commands[i]);
  }
}

/*-------------------------------------------------------------------------
 I2C Adress scanner
 -------------------------------------------------------------------------*/
__inline__ void MenuScanner()
{
  byte error, address, found;
  Serial.println("--------------- I2C Adress Scanner ---------------");
  Serial.println("Scanning for I2C devices. Please Wait...");
  Serial.print("Available Device adresses: ");
  for(address = 1; address < 127; address++ )
  {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();
    if (error == 0)
    {
      if (found > 8) Serial.println();
      Serial.print("0x");
      if (address<16) Serial.print("0");
      Serial.print(address,HEX);
      Serial.print(" (dec. ");
      Serial.print(address);
      Serial.print(") ");
      switch (address)
      {
      case 0x68:
        Serial.println(" - DS1307 RTC");
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
        Serial.println(" - MCP23017 device");
        break;
      default:
        Serial.println();

      }
      ++found;
    }
    else if (error == 4)
    {
      Serial.print("Unknown error at address 0x");
      if (address<16) Serial.print("0");
      Serial.println(address,HEX);
    }
  }
  Serial.println();
  Serial.print("Total number of devices: ");
  Serial.println(found); 
}

/*-------------------------------------------------------------------------
 DS1307 Reader
 -------------------------------------------------------------------------*/
__inline__ void MenuDS1307Read()
{
  tmElements_t time;
  if (RTC.read(time))
  {
    Serial.println("--------------- DS1307 Reader ---------------");
    Serial.print("Time (H:M:S): ");
    print2digits(time.Hour);
    Serial.write(':');
    print2digits(time.Minute);
    Serial.write(':');
    print2digits(time.Second);
    Serial.print(", Date (Y/M/D) = ");
    Serial.print(tmYearToCalendar(time.Year));
    Serial.write('/');
    Serial.print(time.Month);
    Serial.write('/');
    Serial.print(time.Day);
    Serial.println();
  }
  else
  {
    if (RTC.chipPresent()) Serial.println("The DS1307 is stopped.");
    else Serial.println("Read Error");
    Serial.println();
  }
}

/*-------------------------------------------------------------------------
 DS1307 Writer
 -------------------------------------------------------------------------*/
__inline__ void MenuDS1307Write()
{
  byte values[3];
  tmElements_t time;
  Serial.println("--------------- DS1307 Setup ---------------");
  int val;
  do
  {
    Serial.println("Enter time in the following format: hour:minute:seconds");
    Serial.println("Example input: 11:00:00");
    ReadLine();
    val = sscanf(cmdbuff, "%d:%d:%d", &values[0], &values[1], &values[2]);
  }
  while (val != 3);
  time.Hour = values[0];
  time.Minute = values[1];
  time.Second = values[2];
  do
  {
    Serial.println("Enter date in the following format: year-month-day");
    Serial.println("Example input: 14-01-01");
    ReadLine();
    val = sscanf(cmdbuff, "%d-%d-%d", &values[0], &values[1], &values[2]);
  }
  while (val != 3);
  time.Day = values[3];
  time.Month = values[2];
  time.Year = values[1];
  if (RTC.write(time)) Serial.println("Configuration OK!");
  else Serial.println("Configuration Error! :(");
}

/*-------------------------------------------------------------------------
 EEPROM Dump
 -------------------------------------------------------------------------*/
__inline__ void MenuEepromDump()
{
  Serial.println("--------------- EEPROM Memory dumper ---------------");
  byte devaddress;
  byte data = 0x00;
  unsigned int readlength, startadress;
  Serial.println("Enter Device adress in decimal: ");
  ReadLine();
  devaddress = (byte)atoi(cmdbuff);
  Serial.println("Start memory adress:");
  ReadLine();
  startadress = atoi(cmdbuff);
  Serial.println("Read length: ");
  ReadLine();
  readlength = atoi(cmdbuff);

  Wire.beginTransmission(devaddress);
  Wire.write((int)(startadress >> 8)); // MSB
  Wire.write((int)(startadress & 0xFF)); // LSB
  Wire.endTransmission();
  Wire.requestFrom(devaddress,readlength);
  unsigned int counter = 0;
  Serial.println("EEPROM Data:");
  while (Wire.available())
  {
    Serial.print(Wire.read(), HEX);
    Serial.print(" ");
    ++counter;
    if (counter%8==0 && counter > 0) Serial.println();
  } 
}

/*-------------------------------------------------------------------------
 MCP23017 Reader
 -------------------------------------------------------------------------*/
__inline__ void MenuMCP23017Read()
{
  Serial.println("---------------  MCP23017 Reader ---------------");
  Serial.println("Enter MCP23017 adress: (0->7)");
  ReadLine();
  int adress = atoi(cmdbuff);
  mcp.begin(adress);
  for (i=0; i<16; i++) mcp.pinMode(i, INPUT);
  long int value = mcp.readGPIOAB();
  Serial.print("Port A: ");
  Serial.print((value & 0xFF00) >> 8, HEX);
  Serial.print(" PORT B: ");
  Serial.println((value & 0x00FF), HEX);
}

/*-------------------------------------------------------------------------
 MCP23017 Writer
 -------------------------------------------------------------------------*/
__inline__ void MenuMCP23017Writer()
{
  Serial.println("---------------  MCP23017 Writer ---------------");
  Serial.println("Enter MCP23017 adress: (0->7)");
  ReadLine();
  int adress = atoi(cmdbuff);
  mcp.begin(adress);
  for (i=0; i<16; i++) mcp.pinMode(i, OUTPUT);
  long int value = mcp.readGPIOAB();
  Serial.println("PORT A value (in decimal!): ");
  ReadLine();
  unsigned long int val = atoi(cmdbuff) << 8;
  Serial.println("PORT B value (in decimal!): ");
  ReadLine();
  val += atoi(cmdbuff);
  mcp.writeGPIOAB(val);
  Serial.println("MCP GPIO SET!");
}

