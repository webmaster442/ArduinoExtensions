//include FastDigital lib
#include <FastDigital.h>

//Setup pins
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  //pin 13 ON
  WriteD13(HIGH);
  //pin 13 OFF
  WriteD13(LOW);
  
  //read pin 11 and send it's value trouh serial
  int value = ReadD11();
  Serial.println(value);
}

