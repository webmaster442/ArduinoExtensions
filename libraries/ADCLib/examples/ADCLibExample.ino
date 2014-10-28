#include <ADCLib.h>

void setup()
{
  Serial.begin(9600);
  //initialize using internal vref. Board runs at 5V
  Analog.Init(5000);
}

void loop()
{
  Serial.print("VCC: ");
  Serial.print(Analog.GetVcc()); //Current board Vcc
  Serial.print(" A0: ");
  Serial.print(Analog.Read(0)); //Compensated A0 value
  Serial.print(" A0 in mV: ");
  Serial.println(Analog.ReadMv(0)); //A0 value in miliVolts
  delay(1000);
}