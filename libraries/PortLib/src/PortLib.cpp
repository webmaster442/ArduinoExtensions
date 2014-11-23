#include "Arduino.h"
#include "PortLib.h"
#include "pins_arduino.h"

void Port4::PortMode(int PORTMODE)
{
	for (int i=0; i<4; i++)
	{
		if (_pins[i] < 0) continue;
		pinMode(_pins[i], PORTMODE); 
	}
	_PORTMODE = PORTMODE;
}

Port4::Port4(int p1, int p2, int p3, int p4, int PORTMODE)
{
	_pins[0] = p1; _pins[1] = p2; _pins[2] = p3; _pins[3] = p4;
	PortMode(PORTMODE);
}

void Port4::Write(byte Data)
{
	if (_PORTMODE == INPUT || _PORTMODE == INPUT_PULLUP) return;
	for (int i=0; i<4; i++)
	{
		if (_pins[i] < 0) continue;
		#ifdef FAST-DIGITAL
			FastWrite(_pins[i], bitRead(Data, i));
		#else
			digitalWrite(_pins[i], bitRead(Data, i));
		#endif
	}
}

byte Port4::Read()
{
	byte ret = 0;
	if (_PORTMODE == OUTPUT) return ret;
	for (int i=0; i<4; i++)
	{
		if (_pins[i] < 0) bitWrite(ret, i, 0);
		#ifdef FAST-DIGITAL
			bitWrite(ret, i, FastRead(_pins[i]));
		#else
			bitWrite(ret, i, digitalRead(_pins[i]));
		#endif
	}
	return ret;
}

//-----------------------------------------------------------------------------
void Port8::PortMode(int PORTMODE)
{
	for (int i=0; i<8; i++)
	{
		if (_pins[i] < 0) continue;
		pinMode(_pins[i], PORTMODE); 
	}
	_PORTMODE = PORTMODE;
}

Port8::Port8(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int PORTMODE)
{
	_pins[0] = p1; _pins[1] = p2; _pins[2] = p3; _pins[3] = p4;
	_pins[4] = p5; _pins[5] = p6; _pins[6] = p7; _pins[7] = p8;
	PortMode(PORTMODE);
}

void Port8::Write(byte Data)
{
	if (_PORTMODE == INPUT || _PORTMODE == INPUT_PULLUP) return;
	for (int i=0; i<8; i++)
	{
		if (_pins[i] < 0) continue;
		#ifdef FAST-DIGITAL
			FastWrite(_pins[i], bitRead(Data, i));
		#else
			digitalWrite(_pins[i], bitRead(Data, i));
		#endif
	}
}

byte Port8::Read()
{
	byte ret = 0;
	if (_PORTMODE == OUTPUT) return ret;
	for (int i=0; i<8; i++)
	{
		if (_pins[i] < 0) bitWrite(ret, i, 0);
		#ifdef FAST-DIGITAL
			bitWrite(ret, i, FastRead(_pins[i]));
		#else
			bitWrite(ret, i, digitalRead(_pins[i]));
		#endif
	}
	return ret;
}

//-----------------------------------------------------------------------------
void Port16::PortMode(int PORTMODE)
{
	for (int i=0; i<16; i++)
	{
		if (_pins[i] < 0) continue;
		pinMode(_pins[i], PORTMODE); 
	}
	_PORTMODE = PORTMODE;
}

Port16::Port16(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16, int PORTMODE)
{
	_pins[0] = p1; _pins[1] = p2; _pins[2] = p3; _pins[3] = p4;
	_pins[4] = p5; _pins[5] = p6; _pins[6] = p7; _pins[7] = p8;
	_pins[8] = p9; _pins[9] = p10; _pins[10] = p11; _pins[11] = p12;
	_pins[12] = p13; _pins[13] = p14; _pins[14] = p15; _pins[15] = p16;
	PortMode(PORTMODE);
}

void Port16::Write(unsigned int Data)
{
	if (_PORTMODE == INPUT || _PORTMODE == INPUT_PULLUP) return;
	for (int i=0; i<16; i++)
	{
		if (_pins[i] < 0) continue;
		#ifdef FAST-DIGITAL
			FastWrite(_pins[i], bitRead(Data, i));
		#else
			digitalWrite(_pins[i], bitRead(Data, i));
		#endif
	}
}

unsigned int Port16::Read()
{
	unsigned int ret = 0;
	if (_PORTMODE == OUTPUT) return ret;
	for (int i=0; i<16; i++)
	{
		if (_pins[i] < 0) bitWrite(ret, i, 0);
		#ifdef FAST-DIGITAL
			bitWrite(ret, i, FastRead(_pins[i]));
		#else
			bitWrite(ret, i, digitalRead(_pins[i]));
		#endif 
	}
	return ret;
}