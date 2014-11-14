#include <Wire.h>
#include <Time.h>
#include <DS1307RTC.h>

#define COMMAND_COUNT 5

static const char *commands[] = { 
  "cmd-list", "i2c-scann", "ds1307-read", "ds1307-write", "eeprom-dump" };
char cmdbuff[15];
int cmdindex = 0;
int i;

void setup()
{
  Wire.begin();
  Serial.begin(9600);
  while (!Serial) { 
  }
}

void loop()
{
  Serial.print("\n\n\n\n\n");
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
  default:
    Serial.print("Unknown command: ");
    Serial.println(cmdbuff);
    break;
  }
}





