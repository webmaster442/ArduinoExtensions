//Include portlib
#include <PortLib.h>

//creates a port using pins: 3, 4, 5, 6. PIN3 is LSB. Direction is output
Port4 port(3, 4, 5, 6, OUTPUT);

void setup()
{
}

void loop()
{
  //Binary counter
  for (int i=0; i<16; i++)
  {
    port.Write(i);
  }
}
