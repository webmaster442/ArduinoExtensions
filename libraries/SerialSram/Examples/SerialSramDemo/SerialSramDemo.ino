//include SPI header
#include <SPI.h>
//include SerialSRAM header
#include <SerialSRAM.h>

//CS - pin 10
//MISO - SEE Arduino documentation, on UNO it's 11
//MOSI- SEE Arduino documentation, on UNO it's 12
//SCK - SEE Arduino documentation, on UNO it's 13
SerialRam Ram(10); //init the SRAM

void setup()
{
  Serial.begin(9600);
  SPI.begin();
  Serial.println("Writing bytes memory...");
  for (byte i = 0; i < 10; i++)
  {
    Ram.Write(i); //Write to memory. Each Writes jumps to the next address
  }
  Serial.println("Reading bytes memory ...");
  Ram.Address(0); //Reset the address to 0
  for (byte i = 0; i < 10; i++)
  {
    Serial.println(Ram.Read()); //Read a byte and write it to screen. Each read jumps to the next address
  }
  
  Serial.println("Writing int memory...");
  Ram.Address(0); //Reset the address to 0
  for (int i=300; i<310; i++)
  {
    Ram.WriteInt(i);
  }
  Serial.println("Reading int memory ...");
  Ram.Address(0); //Reset the address to 0
  for (byte i = 0; i < 10; i++)
  {
    Serial.println(Ram.ReadInt()); //Read a byte and write it to screen. Each read jumps to the next address
  }
  
}

void loop()
{
}