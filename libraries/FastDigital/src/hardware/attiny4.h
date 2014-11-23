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

void FastWrite(int pin, int value)
{
	switch (pin)
	{
		case 0: WriteD0(value); break;
		case 1: WriteD1(value); break;
		case 2: WriteD2(value); break;
		case 3: WriteD3(value); break;
		case 4: WriteD4(value); break;
		case 5: WriteD5(value); break;
		case 6: WriteD6(value); break;
		case 7: WriteD7(value); break;
		case 8: WriteD8(value); break;
		case 9: WriteD9(value); break;
		case 10: WriteD10(value); break;
		case A0: WriteA0(value); break;
		case A1: WriteA1(value); break;
		case A2: WriteA2(value); break;
		case A3: WriteA3(value); break;
		case A4: WriteA4(value); break;
		case A5: WriteA5(value); break;
		case A6: WriteA6(value); break;
		case A7: WriteA7(value); break;
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
		case 5: return ReadD5();
		case 6: return ReadD6();
		case 7: return ReadD7();
		case 8: return ReadD8();
		case 9: return ReadD9();
		case 10: return ReadD10();
		case A0: return ReadA0();
		case A1: return ReadA1();
		case A2: return ReadA2();
		case A3: return ReadA3();
		case A4: return ReadA4();
		case A5: return ReadA5();
		case A6: return ReadA6();
		case A7: return ReadA7();
	}
}

#endif