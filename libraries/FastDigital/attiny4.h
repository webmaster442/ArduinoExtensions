/*
-------------------------------------------------------------------------------
	Fast Digital I/O functions
	Supported controllers:
		ATtiny44
		ATtiny84
-------------------------------------------------------------------------------
	File created by: webmaster442
	https://github.com/webmaster442/ArduinoExtensions
-------------------------------------------------------------------------------
*/
#ifndef Attiny4_h
#define Attiny4_h

__inline__ void WriteD0(int value)
{
	if (value) PORTA |= 1 << 0;
	else PORTA &= ~(1 << 0);
}

__inline__ int ReadD0()
{
	return PINA & (1 << 0);
}

__inline__ void WriteD1(int value)
{
	if (value) PORTA |= 1 << 1;
	else PORTA &= ~(1 << 1);
}

__inline__ int ReadD1()
{
	return PINA & (1 << 1);
}

__inline__ void WriteD2(int value)
{
	if (value) PORTA |= 1 << 2;
	else PORTA &= ~(1 << 2);
}

__inline__ int ReadD2()
{
	return PINA & (1 << 2);
}

__inline__ void WriteD3(int value)
{
	if (value) PORTA |= 1 << 3;
	else PORTA &= ~(1 << 3);
}

__inline__ int ReadD3()
{
	return PINA & (1 << 3);
}

__inline__ void WriteD4(int value)
{
	if (value) PORTA |= 1 << 4;
	else PORTA &= ~(1 << 4);
}

__inline__ int ReadD4()
{
	return PINA & (1 << 4);
}

__inline__ void WriteD5(int value)
{
	if (value) PORTA |= 1 << 5;
	else PORTA &= ~(1 << 5);
}

__inline__ int ReadD5()
{
	return PINA & (1 << 5);
}

__inline__ void WriteD6(int value)
{
	if (value) PORTA |= 1 << 6;
	else PORTA &= ~(1 << 6);
}

__inline__ int ReadD6()
{
	return PINA & (1 << 6);
}

__inline__ void WriteD7(int value)
{
	if (value) PORTA |= 1 << 7;
	else PORTA &= ~(1 << 7);
}

__inline__ int ReadD7()
{
	return PINA & (1 << 7);
}

__inline__ void WriteD8(int value)
{
	if (value) PORTB |= 1 << 2;
	else PORTB &= ~(1 << 2);
}

__inline__ int ReadD8()
{
	return PINB & (1 << 2);
}

__inline__ void WriteD9(int value)
{
	if (value) PORTB |= 1 << 1;
	else PORTB &= ~(1 << 1);
}

__inline__ int ReadD9()
{
	return PINB & (1 << 1);
}

__inline__ void WriteD10(int value)
{
	if (value) PORTB |= 1 << 0;
	else PORTB &= ~(1 << 0);
}

__inline__ int ReadD10()
{
	return PINB & (1 << 0);
}

__inline__ void WriteA0(int value)
{
	if (value) PORTA |= 1 << 0;
	else PORTA &= ~(1 << 0);
}

__inline__ int ReadA0()
{
	return PINA & (1 << 0);
}

__inline__ void WriteA1(int value)
{
	if (value) PORTA |= 1 << 1;
	else PORTA &= ~(1 << 1);
}

__inline__ int ReadA1()
{
	return PINA & (1 << 1);
}

__inline__ void WriteA2(int value)
{
	if (value) PORTA |= 1 << 2;
	else PORTA &= ~(1 << 2);
}

__inline__ int ReadA2()
{
	return PINA & (1 << 2);
}

__inline__ void WriteA3(int value)
{
	if (value) PORTA |= 1 << 3;
	else PORTA &= ~(1 << 3);
}

__inline__ int ReadA3()
{
	return PINA & (1 << 3);
}

__inline__ void WriteA4(int value)
{
	if (value) PORTA |= 1 << 4;
	else PORTA &= ~(1 << 4);
}

__inline__ int ReadA4()
{
	return PINA & (1 << 4);
}

__inline__ void WriteA5(int value)
{
	if (value) PORTA |= 1 << 5;
	else PORTA &= ~(1 << 5);
}

__inline__ int ReadA5()
{
	return PINA & (1 << 5);
}

__inline__ void WriteA6(int value)
{
	if (value) PORTA |= 1 << 6;
	else PORTA &= ~(1 << 6);
}

__inline__ int ReadA6()
{
	return PINA & (1 << 6);
}

__inline__ void WriteA7(int value)
{
	if (value) PORTA |= 1 << 7;
	else PORTA &= ~(1 << 7);
}

__inline__ int ReadA7()
{
	return PINA & (1 << 7);
}

#endif