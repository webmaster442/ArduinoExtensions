/*
	Fast Digital I/O functions
	Supported controllers:
		ATmega48
		ATmega88
		ATmega168
		ATmega328
*/
#ifndef Uno_h
#define Uno_h

__inline__ void WriteD0(int value)
{
	if (value) PORTD |= 1 << 0;
	else PORTD &= ~(1 << 0);
}

__inline__ int ReadD0()
{
	return PIND & (1 << 0);
}

__inline__ void WriteD1(int value)
{
	if (value) PORTD |= 1 << 1;
	else PORTD &= ~(1 << 1);
}

__inline__ int ReadD1()
{
	return PIND & (1 << 1);
}

__inline__ void WriteD2(int value)
{
	if (value) PORTD |= 1 << 2;
	else PORTD &= ~(1 << 2);
}

__inline__ int ReadD2()
{
	return PIND & (1 << 2);
}

__inline__ void WriteD3(int value)
{
	if (value) PORTD |= 1 << 3;
	else PORTD &= ~(1 << 3);
}

__inline__ int ReadD3()
{
	return PIND & (1 << 3);
}

__inline__ void WriteD4(int value)
{
	if (value) PORTD |= 1 << 4;
	else PORTD &= ~(1 << 4);
}

__inline__ int ReadD4()
{
	return PIND & (1 << 4);
}

__inline__ void WriteD5(int value)
{
	if (value) PORTD |= 1 << 5;
	else PORTD &= ~(1 << 5);
}

__inline__ int ReadD5()
{
	return PIND & (1 << 5);
}

__inline__ void WriteD6(int value)
{
	if (value) PORTD |= 1 << 6;
	else PORTD &= ~(1 << 6);
}

__inline__ int ReadD6()
{
	return PIND & (1 << 6);
}

__inline__ void WriteD7(int value)
{
	if (value) PORTD |= 1 << 7;
	else PORTD &= ~(1 << 7);
}

__inline__ int ReadD7()
{
	return PIND & (1 << 7);
}

__inline__ void WriteD8(int value)
{
	if (value) PORTB |= 1 << 0;
	else PORTB &= ~(1 << 0);
}

__inline__ int ReadD8()
{
	return PINB & (1 << 0);
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
	if (value) PORTB |= 1 << 2;
	else PORTB &= ~(1 << 2);
}

__inline__ int ReadD10()
{
	return PINB & (1 << 2);
}

__inline__ void WriteD11(int value)
{
	if (value) PORTB |= 1 << 3;
	else PORTB &= ~(1 << 3);
}

__inline__ int ReadD11()
{
	return PINB & (1 << 3);
}

__inline__ void WriteD12(int value)
{
	if (value) PORTB |= 1 << 4;
	else PORTB &= ~(1 << 4);
}

__inline__ int ReadD12()
{
	return PINB & (1 << 4);
}

__inline__ void WriteD13(int value)
{
	if (value) PORTB |= 1 << 5;
	else PORTB &= ~(1 << 5);
}

__inline__ int ReadD13()
{
	return PINB & (1 << 5);
}

__inline__ void WriteA0(int value)
{
	if (value) PORTC |= 1 << 0;
	else PORTC &= ~(1 << 0);
}

__inline__ int ReadA0()
{
	return PINC & (1 << 0);
}

__inline__ void WriteA1(int value)
{
	if (value) PORTC |= 1 << 1;
	else PORTC &= ~(1 << 1);
}

__inline__ int ReadA1()
{
	return PINC & (1 << 1);
}

__inline__ void WriteA2(int value)
{
	if (value) PORTC |= 1 << 2;
	else PORTC &= ~(1 << 2);
}

__inline__ int ReadA2()
{
	return PINC & (1 << 2);
}

__inline__ void WriteA3(int value)
{
	if (value) PORTC |= 1 << 3;
	else PORTC &= ~(1 << 3);
}

__inline__ int ReadA3()
{
	return PINC & (1 << 3);
}

__inline__ void WriteA4(int value)
{
	if (value) PORTC |= 1 << 4;
	else PORTC &= ~(1 << 4);
}

__inline__ int ReadA4()
{
	return PINC & (1 << 4);
}

__inline__ void WriteA5(int value)
{
	if (value) PORTC |= 1 << 5;
	else PORTC &= ~(1 << 5);
}

__inline__ int ReadA5()
{
	return PINC & (1 << 5);
}

__inline__ void WriteA6(int value)
{
	if (value) PORTC |= 1 << 6;
	else PORTC &= ~(1 << 6);
}

__inline__ int ReadA6()
{
	return PINC & (1 << 6);
}

__inline__ void WriteA7(int value)
{
	if (value) PORTC |= 1 << 7;
	else PORTC &= ~(1 << 7);
}

__inline__ int ReadA7()
{
	return PINC & (1 << 7);
}

#endif