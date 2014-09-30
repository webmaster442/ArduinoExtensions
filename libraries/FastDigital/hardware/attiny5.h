/*
-------------------------------------------------------------------------------
	Fast Digital I/O functions
	Supported controllers:
		ATtiny45
		ATtiny85
-------------------------------------------------------------------------------
	File created by: webmaster442
	https://github.com/webmaster442/ArduinoExtensions
-------------------------------------------------------------------------------
*/
#ifndef Attiny5_h
#define Attiny5_h

__inline__ void WriteD0(int value)
{
	if (value) PORTB |= 1 << 0;
	else PORTB &= ~(1 << 0);
}

__inline__ int ReadD0()
{
	return PINB & (1 << 0);
}

__inline__ void WriteD1(int value)
{
	if (value) PORTB |= 1 << 1;
	else PORTB &= ~(1 << 1);
}

__inline__ int ReadD1()
{
	return PINB & (1 << 1);
}

__inline__ void WriteD2(int value)
{
	if (value) PORTB |= 1 << 2;
	else PORTB &= ~(1 << 2);
}

__inline__ int ReadD2()
{
	return PINB & (1 << 2);
}

__inline__ void WriteD3(int value)
{
	if (value) PORTB |= 1 << 3;
	else PORTB &= ~(1 << 3);
}

__inline__ int ReadD3()
{
	return PINB & (1 << 3);
}

__inline__ void WriteD4(int value)
{
	if (value) PORTB |= 1 << 4;
	else PORTB &= ~(1 << 4);
}

__inline__ int ReadD4()
{
	return PINB & (1 << 4);
}

__inline__ void WriteA1(int value)
{
	if (value) PORTB |= 1 << 2;
	else PORTB &= ~(1 << 2);
}

__inline__ int ReadA1()
{
	return PINB & (1 << 2);
}

__inline__ void WriteA2(int value)
{
	if (value) PORTB |= 1 << 4;
	else PORTB &= ~(1 << 4);
}

__inline__ int ReadA2()
{
	return PINB & (1 << 4);
}

__inline__ void WriteA3(int value)
{
	if (value) PORTB |= 1 << 3;
	else PORTB &= ~(1 << 3);
}

__inline__ int ReadA3()
{
	return PINB & (1 << 3);
}

void FastWrite(int pin, int value)
{
	switch (pin)
	{
		case 0: WriteD0(value); break;
		case 1: WriteD1(value); break;
		case 2: WriteD2(value); break;
		case 3: WriteD3(value); break;
		case 4: WriteD4(value); break;
		case A0: WriteA0(value); break;
		case A1: WriteA1(value); break;
		case A2: WriteA2(value); break;
		case A3: WriteA3(value); break;
	}
}

int FastRead(int pin)
{
	switch (pin)
	{
		case 0: return ReadD0();
		case 1: return ReadD1();
		case 2: return ReadD2();
		case 3: return ReadD3();
		case 4: return ReadD4();
		case A0: return ReadA0();
		case A1: return ReadA1();
		case A2: return ReadA2();
		case A3: return ReadA3();
	}
}

#endif