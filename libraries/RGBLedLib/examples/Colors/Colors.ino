#include <RGBLedLib.h>

RGBLed LED(9, 10, 11, CC);

void setup()
{
  Serial.begin(9600);
  LED.Alpha(125);
}

void loop()
{
  LED.SetColor(COLOR_RED);
  Serial.println("COLOR_RED");
  delay(1000);
  LED.SetColor(COLOR_BLUE);
  Serial.println("COLOR_BLUE");
  delay(1000);
  LED.SetColor(COLOR_BLACK);
  Serial.println("COLOR_BLACK");
  delay(1000);
  LED.CurrentColor(COLOR_WHITE);
  Serial.println("COLOR_WHITE");
  delay(1000);
  LED.CurrentColor(COLOR_DARKRED);
  Serial.println("COLOR_DARKRED");
  delay(1000);
  LED.CurrentColor(COLOR_PINK);
  Serial.println("COLOR_PINK");
  delay(1000);
  LED.CurrentColor(COLOR_TEAL);
  Serial.println("COLOR_TEAL");
  delay(1000);
  LED.CurrentColor(COLOR_LIGHTGREEN);
  Serial.println("COLOR_LIGHTGREEN");
  delay(1000);
  LED.CurrentColor(COLOR_GREEN);
  Serial.println("COLOR_GREEN");
  delay(1000);
  LED.CurrentColor(COLOR_TURQOISE);
  Serial.println("COLOR_TURQOISE");
  delay(1000);
  LED.CurrentColor(COLOR_DARKBLUE);
  Serial.println("COLOR_DARKBLUE");
  delay(1000);
  LED.CurrentColor(COLOR_VIOLET);
  Serial.println("COLOR_VIOLET");
  delay(1000);
  LED.CurrentColor(COLOR_GRAY25);
  Serial.println("COLOR_GRAY25");
  delay(1000);
  LED.CurrentColor(COLOR_GRAY50);
  Serial.println("COLOR_GRAY50");
  delay(1000);
  LED.CurrentColor(COLOR_DARKYELLOW);
  Serial.println("COLOR_DARKYELLOW");
  delay(1000);
  LED.CurrentColor(COLOR_YELLOW);
  Serial.println("COLOR_YELLOW");
  delay(1000);
}


