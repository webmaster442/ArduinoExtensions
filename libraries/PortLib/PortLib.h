#ifndef PortLib_h
#define PortLib_h

#include <Arduino.h>
#include "pins_arduino.h"

class Port4
{
	private:
		byte _pins[4];
		int _PORTMODE;
	public:
		Port8(int p1, int p2, int p3, int p4, int PORTMODE);
		void Write(byte Data);
		byte Read();
};

class Port8
{
	private:
		byte _pins[8];
		int _PORTMODE;
	public:
		Port8(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int PORTMODE);
		void Write(byte Data);
		byte Read();
};

class Port16
{
	private:
		byte _pins[16];
		int _PORTMODE;
	public:
		Port16(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16, int PORTMODE);
		void Write(unsigned int Data);
		unsigned int Read();
};

#endif