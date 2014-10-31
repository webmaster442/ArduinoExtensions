#include <RGBLedLib.h>

//Create RGB LED object, Comon Cathode
RGBLed LED(9, 10, 11, CC);

void setup()
{
  LED.CurrentColor(COLOR_WHITE);
}

void loop()
{
  //From Red Fade to Green
  LED.Fade(COLOR_RED, COLOR_GREEN);
  //From Green Fade to Blue
  LED.Fade(COLOR_GREEN, COLOR_BLUE);
  //From Blue Fade to Red
  LED.Fade(COLOR_BLUE, COLOR_RED);
}