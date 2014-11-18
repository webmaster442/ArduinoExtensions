#include <Time.h>
#include <DS1307RTC.h>

/*-------------------------------------------------------------------------
 Main Menu
 -------------------------------------------------------------------------*/
__inline__ void MenuMain()
{
  Serial.println("------------------------------------------------------");
  Serial.println("I2C Tools");
  Serial.println("------------------------------------------------------");
  Serial.println("Available commands:");
  for (int i=0; i<COMMAND_COUNT; i++)
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



