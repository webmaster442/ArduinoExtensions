#include <RGBLedLib.h>

RGBLed LED(9, 10, 11);
Color R(255, 0, 0);
Color G(0, 255, 0);
Color B(0, 0, 255);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int i=0; i<255; i+=25)
  {
    LED.Alpha(i); 
    LED.SetColor(R);
    delay(250);
    LED.SetColor(G);
    delay(250);
    LED.SetColor(B);
    delay(250);
    Serial.print("Alpha: ");
    Serial.println(i);
  }
}