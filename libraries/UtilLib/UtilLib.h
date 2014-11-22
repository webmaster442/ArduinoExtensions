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

#include <Arduino.h>
#include "pins_arduino.h"

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

__inline__ byte Map(byte x, byte in_min, byte in_max, byte out_min, byte out_max)
{
	return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

__inline__ int Map(int x, int in_min, int in_max, int out_min, int out_max)
{
	return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

__inline__ long int Map(long int x, long int in_min, long int in_max, long int out_min, long int out_max)
{
	return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

unsigned int UnusedRAM()
{
	unsigned int byteCounter = 0;
	byte *byteArray; 
	while ( (byteArray = (byte*) malloc (byteCounter * sizeof(byte))) != NULL )
	{
		byteCounter++;
		free(byteArray); 
	}
	free(byteArray); 
	return byteCounter;
}

/*
-------------------------------------------------------------------------------
	I/O Functions
-------------------------------------------------------------------------------
*/
__inline__ void AanlogWriteMilivolts(int pin, int milivolts)
{
	analogWrite(pin, (255 * milivolts) / 500);
}

int GetVccMiliVolts()
{
	#if defined(ARDUINO_ARCH_AVR)
	const long intscaleConst = 1156.300 * 1000;
	// Read 1.1V reference against Avcc
	#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		ADMUX = _BV(REFS0) | _BV(MUX4) | _BV(MUX3) | _BV(MUX2) | _BV(MUX1);
	#elif defined (__AVR_ATtiny24__) || defined(__AVR_ATtiny44__) || defined(__AVR_ATtiny84__)
		ADMUX = _BV(MUX5) | _BV(MUX0);
	#elif defined (__AVR_ATtiny25__) || defined(__AVR_ATtiny45__) || defined(__AVR_ATtiny85__)
		ADMUX = _BV(MUX3) | _BV(MUX2);
	#else
		ADMUX = _BV(REFS0) | _BV(MUX3) | _BV(MUX2) | _BV(MUX1);
	#endif 
	delay(2); // Wait for Vref to settle
	ADCSRA |= _BV(ADSC); // Start conversion
	while(bit_is_set(ADCSRA,ADSC)); // measuring
	uint8_t low = ADCL; // must read ADCL first - it then locks ADCH 
	uint8_t high = ADCH; // unlocks both
	long intresult = (high<<8) | low;
	result = scaleConst / result;
	// Calculate Vcc (in mV); 1125300 = 1.1*1023*1000
	return(int)result; // Vcc in millivolts
	#else
		return 3300;
	#endif
	
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
	static byte cc[] = { 0x3F, 0x06, 0x5B, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f, 0x40 };
	static byte ca[] = { 0xC0, 0xF9, 0xA4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90, 0xbf };
	if (number < 0 || number > 9)
	{
		if (common == CC) return cc[10];
		else return ca[10];
	}
	if (common == CC) return cc[number];
	else return ca[number];
}
#endif