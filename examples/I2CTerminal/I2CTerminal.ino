/*-------------------------------------------------------------------------
 I2C Terminal
 Created by: webmaster442
 https://github.com/webmaster442/ArduinoExtensions
 -------------------------------------------------------------------------*/
#include <Wire.h>
#include <Time.h>
#include <DS1307RTC.h>
#include <Adafruit_MCP23017.h>

#define COMMAND_COUNT 5

#if defined (__AVR_ATmega48__) || defined (__AVR_ATmega48P__) || defined (__AVR_ATmega88__) || defined (__AVR_ATmega88P__) || defined (__AVR_ATmega168__) || defined (__AVR_ATmega168P__) || defined (__AVR_ATmega328P__)
#define PIN_SDA A4
#define PIN_SDL A5
#elif defined (__AVR_ATmega2560__) || defined (__AVR_ATmega1280__)
#define PIN_SDA 20
#define PIN_SDL 21
#elif defined (__AVR_ATmega32U4__)
#define PIN_SDA 2
#define PIN_SDL 3
#else
#error "Unsupported CPU. I2C Tools only supports: uno, mega and leonardo modells"
#endif

static const char *commands[] = { 
  "cmd-list", "i2c-scan", "ds1307-read", "ds1307-write", "eeprom-dump"
    "mcp2301-read", "mcp2301-write"};
char cmdbuff[15];
int cmdindex = 0;
int i;
Adafruit_MCP23017 mcp;

void setup()
{
  Serial.begin(9600);
  while (!Serial)
  {
    //leonardo compatibility
  }
  Serial.println("Initializing I2C...");
  Serial.print("SDA pin: ");
  Serial.print(PIN_SDA);
  Serial.print(" SDL pin: ");
  Serial.println(PIN_SDL);
  Wire.begin();
  Serial.println("OK!");
  MenuMain();
}

void loop()
{
  Serial.print("\n\n\n\n\n\n");
  Serial.println("For command list type: cmd-list");
  Serial.println("Enter command:");
  int command = ParseCommand();
  switch (command)
  {
  case 0:
    MenuMain();
    break;
  case 1:
    MenuScanner();
    break;
  case 2:
    MenuDS1307Read();
    break;
  case 3:
    MenuDS1307Write();
    break;
  case 4:
    MenuEepromDump();
    break;
  case 5:
    MenuMCP23017Read();
    break;
  case 6:
    MenuMCP23017Writer();
    break;
  default:
    Serial.print("Unknown command: ");
    Serial.println(cmdbuff);
    break;
  }
}











