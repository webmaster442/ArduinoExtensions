/*-------------------------------------------------------------------------
 I2C Terminal Helper functions
 Created by: webmaster442
 https://github.com/webmaster442/ArduinoExtensions
 -------------------------------------------------------------------------*/
__inline__ void ReadLine()
{
  char last = ' ';
  cmdindex = 0;
  do
  {
    if (Serial.available() > 0)
    {
      last = Serial.read();
      cmdbuff[cmdindex] = last;
      cmdindex++;
    }
  }
  while (last != '\n');
}

__inline__ int ParseCommand()
{
  ReadLine();
  for (i=0; i<COMMAND_COUNT; i++)
  {
    if (strncmp(cmdbuff, commands[i], cmdindex-1) == 0) return i;
  }
}

__inline__ void print2digits(int number)
{
  if (number >= 0 && number < 10)
  {
    Serial.write('0');
  }
  Serial.print(number);
}


