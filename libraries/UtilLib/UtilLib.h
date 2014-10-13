/*
-------------------------------------------------------------------------------
	Util Lib
-------------------------------------------------------------------------------
	File created by: webmaster442
	https://github.com/webmaster442/ArduinoExtensions
-------------------------------------------------------------------------------
*/
#ifndef UTILLIB_H
#define UTILLIB_H

/*
-------------------------------------------------------------------------------
	CONSTANTS
-------------------------------------------------------------------------------
*/
#define CC 0
#define CA 1

/*
-------------------------------------------------------------------------------
	UTILS
-------------------------------------------------------------------------------
*/

__inline__ byte BcdDecode(byte value)
{
	byte ret = (value & 0xF0) >> 4;
	return (ret * 10) + (value & 0x0F);
}

__inline__ byte BcdEncode(byte value)
{
	if (value > 99) value = 99;
	if (value < 0) value = 0;
	byte target = (value % 10) << 4;
	return target += (value / 10);
}

__inline__ byte HighByte(int value)
{
	return ((value & 0xFF00) >> 8);
}

__inline__ byte LowByte(int value)
{
	return (value & 0x00FF);
}

__inline__ byte HighByte(unsigned int value)
{
	return ((value & 0xFF00) >> 8);
}

__inline__ byte LowByte(unsigned int value)
{
	return (value & 0x00FF);
}

/*
-------------------------------------------------------------------------------
	I/O Functions
-------------------------------------------------------------------------------
*/
__inline__ void AanlogWriteMilivolts(int milivolts)
{
	return (255 * milivolts) / 500;
}

__inline__ void ShiftOut(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder, byte val)
{
	uint8_t i;
	for (i = 0; i < 8; i++)
	{
		if (bitOrder == LSBFIRST) digitalWrite(dataPin, !!(val & (1 << i)));
		else digitalWrite(dataPin, !!(val & (1 << (7 - i))));
		digitalWrite(clockPin, HIGH);
		digitalWrite(clockPin, LOW);
	}
}

__inline__ void ShiftOut(int8_t dataPin, uint8_t clockPin, uint8_t bitOrder, int val)
{
	uint8_t i;
	for (i = 0; i < 16; i++)
	{
		if (bitOrder == LSBFIRST) digitalWrite(dataPin, !!(val & (1 << i)));
		else digitalWrite(dataPin, !!(val & (1 << (15 - i))));
		digitalWrite(clockPin, HIGH);
		digitalWrite(clockPin, LOW);
	}
}

__inline__ void ShiftOut(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder, long int val)
{
	uint8_t i;
	for (i = 0; i < 32; i++)  {
		if (bitOrder == LSBFIRST) digitalWrite(dataPin, !!(val & (1 << i)));
		else digitalWrite(dataPin, !!(val & (1 << (31 - i))));
		digitalWrite(clockPin, HIGH);
		digitalWrite(clockPin, LOW);
	}
}

byte SevenSegmentNumber(byte number, byte common)
{
	static byte cc = { 0x3F, 0x06, 0x5B, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f, 0x40 };
	static byte ca = { 0xC0, 0xF9, 0xA4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90, 0xbf };
	if (number < 0 || number > 9)
	{
		if (common == CC) return cc[10];
		else return ca[10];
	}
	if (common == CC) return cc[number];
	else return ca[number];
}
#endif