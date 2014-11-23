/*
-------------------------------------------------------------------------------
	Fast Digital I/O functions
	Supported controllers:
		ATmega2560
		ATmega1280
-------------------------------------------------------------------------------
	File created by: webmaster442
	https://github.com/webmaster442/ArduinoExtensions
-------------------------------------------------------------------------------
*/
#ifndef Mega_h
#define Mega_h

__inline__ void WriteD0(int value)
{
	if (value) PORTE |= 1 << 0;
	else PORTE &= ~(1 << 0);
}

__inline__ int ReadD0()
{
	return PINE & (1 << 0);
}

__inline__ void WriteD1(int value)
{
	if (value) PORTE |= 1 << 1;
	else PORTE &= ~(1 << 1);
}

__inline__ int ReadD1()
{
	return PINE & (1 << 1);
}

__inline__ void WriteD2(int value)
{
	if (value) PORTE |= 1 << 4;
	else PORTE &= ~(1 << 4);
}

__inline__ int ReadD2()
{
	return PINE & (1 << 4);
}

__inline__ void WriteD3(int value)
{
	if (value) PORTE |= 1 << 5;
	else PORTE &= ~(1 << 5);
}

__inline__ int ReadD3()
{
	return PINE & (1 << 5);
}

__inline__ void WriteD4(int value)
{
	if (value) PORTG |= 1 << 5;
	else PORTG &= ~(1 << 5);
}

__inline__ int ReadD4()
{
	return PING & (1 << 5);
}

__inline__ void WriteD5(int value)
{
	if (value) PORTE |= 1 << 3;
	else PORTE &= ~(1 << 3);
}

__inline__ int ReadD5()
{
	return PINE & (1 << 3);
}

__inline__ void WriteD6(int value)
{
	if (value) PORTH |= 1 << 3;
	else PORTH &= ~(1 << 3);
}

__inline__ int ReadD6()
{
	return PINH & (1 << 3);
}

__inline__ void WriteD7(int value)
{
	if (value) PORTH |= 1 << 4;
	else PORTH &= ~(1 << 4);
}

__inline__ int ReadD7()
{
	return PINH & (1 << 4);
}

__inline__ void WriteD8(int value)
{
	if (value) PORTH |= 1 << 5;
	else PORTH &= ~(1 << 5);
}

__inline__ int ReadD8()
{
	return PINH & (1 << 5);
}

__inline__ void WriteD9(int value)
{
	if (value) PORTH |= 1 << 6;
	else PORTH &= ~(1 << 6);
}

__inline__ int ReadD9()
{
	return PINH & (1 << 6);
}

__inline__ void WriteD10(int value)
{
	if (value) PORTB |= 1 << 4;
	else PORTB &= ~(1 << 4);
}

__inline__ int ReadD10()
{
	return PINB & (1 << 4);
}

__inline__ void WriteD11(int value)
{
	if (value) PORTB |= 1 << 5;
	else PORTB &= ~(1 << 5);
}

__inline__ int ReadD11()
{
	return PINB & (1 << 5);
}

__inline__ void WriteD12(int value)
{
	if (value) PORTB |= 1 << 6;
	else PORTB &= ~(1 << 6);
}

__inline__ int ReadD12()
{
	return PINB & (1 << 6);
}

__inline__ void WriteD13(int value)
{
	if (value) PORTB |= 1 << 7;
	else PORTB &= ~(1 << 7);
}

__inline__ int ReadD13()
{
	return PINB & (1 << 7);
}

__inline__ void WriteD14(int value)
{
	if (value) PORTJ |= 1 << 1;
	else PORTJ &= ~(1 << 1);
}

__inline__ int ReadD14()
{
	return PINJ & (1 << 1);
}

__inline__ void WriteD15(int value)
{
	if (value) PORTJ |= 1 << 0;
	else PORTJ &= ~(1 << 0);
}

__inline__ int ReadD15()
{
	return PINJ & (1 << 0);
}

__inline__ void WriteD16(int value)
{
	if (value) PORTH |= 1 << 1;
	else PORTH &= ~(1 << 1);
}

__inline__ int ReadD16()
{
	return PINH & (1 << 1);
}

__inline__ void WriteD17(int value)
{
	if (value) PORTH |= 1 << 0;
	else PORTH &= ~(1 << 0);
}

__inline__ int ReadD17()
{
	return PINH & (1 << 0);
}

__inline__ void WriteD18(int value)
{
	if (value) PORTD |= 1 << 3;
	else PORTD &= ~(1 << 3);
}

__inline__ int ReadD18()
{
	return PIND & (1 << 3);
}

__inline__ void WriteD19(int value)
{
	if (value) PORTD |= 1 << 2;
	else PORTD &= ~(1 << 2);
}

__inline__ int ReadD19()
{
	return PIND & (1 << 2);
}

__inline__ void WriteD20(int value)
{
	if (value) PORTD |= 1 << 1;
	else PORTD &= ~(1 << 1);
}

__inline__ int ReadD20()
{
	return PIND & (1 << 1);
}

__inline__ void WriteD21(int value)
{
	if (value) PORTD |= 1 << 0;
	else PORTD &= ~(1 << 0);
}

__inline__ int ReadD21()
{
	return PIND & (1 << 0);
}

__inline__ void WriteD22(int value)
{
	if (value) PORTA |= 1 << 0;
	else PORTA &= ~(1 << 0);
}

__inline__ int ReadD22()
{
	return PINA & (1 << 0);
}

__inline__ void WriteD23(int value)
{
	if (value) PORTA |= 1 << 1;
	else PORTA &= ~(1 << 1);
}

__inline__ int ReadD23()
{
	return PINA & (1 << 1);
}

__inline__ void WriteD24(int value)
{
	if (value) PORTA |= 1 << 2;
	else PORTA &= ~(1 << 2);
}

__inline__ int ReadD24()
{
	return PINA & (1 << 2);
}

__inline__ void WriteD25(int value)
{
	if (value) PORTA |= 1 << 3;
	else PORTA &= ~(1 << 3);
}

__inline__ int ReadD25()
{
	return PINA & (1 << 3);
}

__inline__ void WriteD26(int value)
{
	if (value) PORTA |= 1 << 4;
	else PORTA &= ~(1 << 4);
}

__inline__ int ReadD26()
{
	return PINA & (1 << 4);
}

__inline__ void WriteD27(int value)
{
	if (value) PORTA |= 1 << 5;
	else PORTA &= ~(1 << 5);
}

__inline__ int ReadD27()
{
	return PINA & (1 << 5);
}

__inline__ void WriteD28(int value)
{
	if (value) PORTA |= 1 << 6;
	else PORTA &= ~(1 << 6);
}

__inline__ int ReadD28()
{
	return PINA & (1 << 6);
}

__inline__ void WriteD29(int value)
{
	if (value) PORTA |= 1 << 7;
	else PORTA &= ~(1 << 7);
}

__inline__ int ReadD29()
{
	return PINA & (1 << 7);
}

__inline__ void WriteD30(int value)
{
	if (value) PORTC |= 1 << 7;
	else PORTC &= ~(1 << 7);
}

__inline__ int ReadD30()
{
	return PINC & (1 << 7);
}

__inline__ void WriteD31(int value)
{
	if (value) PORTC |= 1 << 6;
	else PORTC &= ~(1 << 6);
}

__inline__ int ReadD31()
{
	return PINC & (1 << 6);
}

__inline__ void WriteD32(int value)
{
	if (value) PORTC |= 1 << 5;
	else PORTC &= ~(1 << 5);
}

__inline__ int ReadD32()
{
	return PINC & (1 << 5);
}

__inline__ void WriteD33(int value)
{
	if (value) PORTC |= 1 << 4;
	else PORTC &= ~(1 << 4);
}

__inline__ int ReadD33()
{
	return PINC & (1 << 4);
}

__inline__ void WriteD34(int value)
{
	if (value) PORTC |= 1 << 3;
	else PORTC &= ~(1 << 3);
}

__inline__ int ReadD34()
{
	return PINC & (1 << 3);
}

__inline__ void WriteD35(int value)
{
	if (value) PORTC |= 1 << 2;
	else PORTC &= ~(1 << 2);
}

__inline__ int ReadD35()
{
	return PINC & (1 << 2);
}

__inline__ void WriteD36(int value)
{
	if (value) PORTC |= 1 << 1;
	else PORTC &= ~(1 << 1);
}

__inline__ int ReadD36()
{
	return PINC & (1 << 1);
}

__inline__ void WriteD37(int value)
{
	if (value) PORTC |= 1 << 0;
	else PORTC &= ~(1 << 0);
}

__inline__ int ReadD37()
{
	return PINC & (1 << 0);
}

__inline__ void WriteD38(int value)
{
	if (value) PORTD |= 1 << 7;
	else PORTD &= ~(1 << 7);
}

__inline__ int ReadD38()
{
	return PIND & (1 << 7);
}

__inline__ void WriteD39(int value)
{
	if (value) PORTG |= 1 << 2;
	else PORTG &= ~(1 << 2);
}

__inline__ int ReadD39()
{
	return PING & (1 << 2);
}

__inline__ void WriteD40(int value)
{
	if (value) PORTG |= 1 << 1;
	else PORTG &= ~(1 << 1);
}

__inline__ int ReadD40()
{
	return PING & (1 << 1);
}

__inline__ void WriteD41(int value)
{
	if (value) PORTG |= 1 << 0;
	else PORTG &= ~(1 << 0);
}

__inline__ int ReadD41()
{
	return PING & (1 << 0);
}

__inline__ void WriteD42(int value)
{
	if (value) PORTL |= 1 << 7;
	else PORTL &= ~(1 << 7);
}

__inline__ int ReadD42()
{
	return PINL & (1 << 7);
}

__inline__ void WriteD43(int value)
{
	if (value) PORTL |= 1 << 6;
	else PORTL &= ~(1 << 6);
}

__inline__ int ReadD43()
{
	return PINL & (1 << 6);
}

__inline__ void WriteD44(int value)
{
	if (value) PORTL |= 1 << 5;
	else PORTL &= ~(1 << 5);
}

__inline__ int ReadD44()
{
	return PINL & (1 << 5);
}

__inline__ void WriteD45(int value)
{
	if (value) PORTL |= 1 << 4;
	else PORTL &= ~(1 << 4);
}

__inline__ int ReadD45()
{
	return PINL & (1 << 4);
}

__inline__ void WriteD46(int value)
{
	if (value) PORTL |= 1 << 3;
	else PORTL &= ~(1 << 3);
}

__inline__ int ReadD46()
{
	return PINL & (1 << 3);
}

__inline__ void WriteD47(int value)
{
	if (value) PORTL |= 1 << 2;
	else PORTL &= ~(1 << 2);
}

__inline__ int ReadD47()
{
	return PINL & (1 << 2);
}

__inline__ void WriteD48(int value)
{
	if (value) PORTL |= 1 << 1;
	else PORTL &= ~(1 << 1);
}

__inline__ int ReadD48()
{
	return PINL & (1 << 1);
}

__inline__ void WriteD49(int value)
{
	if (value) PORTL |= 1 << 0;
	else PORTL &= ~(1 << 0);
}

__inline__ int ReadD49()
{
	return PINL & (1 << 0);
}

__inline__ void WriteD50(int value)
{
	if (value) PORTB |= 1 << 3;
	else PORTB &= ~(1 << 3);
}

__inline__ int ReadD50()
{
	return PINB & (1 << 3);
}

__inline__ void WriteD51(int value)
{
	if (value) PORTB |= 1 << 2;
	else PORTB &= ~(1 << 2);
}

__inline__ int ReadD51()
{
	return PINB & (1 << 2);
}

__inline__ void WriteD52(int value)
{
	if (value) PORTB |= 1 << 1;
	else PORTB &= ~(1 << 1);
}

__inline__ int ReadD52()
{
	return PINB & (1 << 1);
}

__inline__ void WriteA0(int value)
{
	if (value) PORTF |= 1 << 0;
	else PORTF &= ~(1 << 0);
}

__inline__ int ReadA0()
{
	return PINF & (1 << 0);
}

__inline__ void WriteA1(int value)
{
	if (value) PORTF |= 1 << 1;
	else PORTF &= ~(1 << 1);
}

__inline__ int ReadA1()
{
	return PINF & (1 << 1);
}

__inline__ void WriteA2(int value)
{
	if (value) PORTF |= 1 << 2;
	else PORTF &= ~(1 << 2);
}

__inline__ int ReadA2()
{
	return PINF & (1 << 2);
}

__inline__ void WriteA3(int value)
{
	if (value) PORTF |= 1 << 3;
	else PORTF &= ~(1 << 3);
}

__inline__ int ReadA3()
{
	return PINF & (1 << 3);
}

__inline__ void WriteA4(int value)
{
	if (value) PORTF |= 1 << 4;
	else PORTF &= ~(1 << 4);
}

__inline__ int ReadA4()
{
	return PINF & (1 << 4);
}

__inline__ void WriteA5(int value)
{
	if (value) PORTF |= 1 << 5;
	else PORTF &= ~(1 << 5);
}

__inline__ int ReadA5()
{
	return PINF & (1 << 5);
}

__inline__ void WriteA6(int value)
{
	if (value) PORTF |= 1 << 6;
	else PORTF &= ~(1 << 6);
}

__inline__ int ReadA6()
{
	return PINF & (1 << 6);
}

__inline__ void WriteA7(int value)
{
	if (value) PORTF |= 1 << 7;
	else PORTF &= ~(1 << 7);
}

__inline__ int ReadA7()
{
	return PINF & (1 << 7);
}

__inline__ void WriteA8(int value)
{
	if (value) PORTK |= 1 << 0;
	else PORTK &= ~(1 << 0);
}

__inline__ int ReadA8()
{
	return PINK & (1 << 0);
}

__inline__ void WriteA9(int value)
{
	if (value) PORTK |= 1 << 1;
	else PORTK &= ~(1 << 1);
}

__inline__ int ReadA9()
{
	return PINK & (1 << 1);
}

__inline__ void WriteA10(int value)
{
	if (value) PORTK |= 1 << 2;
	else PORTK &= ~(1 << 2);
}

__inline__ int ReadA10()
{
	return PINK & (1 << 2);
}

__inline__ void WriteA11(int value)
{
	if (value) PORTK |= 1 << 3;
	else PORTK &= ~(1 << 3);
}

__inline__ int ReadA11()
{
	return PINK & (1 << 3);
}

__inline__ void WriteA12(int value)
{
	if (value) PORTK |= 1 << 4;
	else PORTK &= ~(1 << 4);
}

__inline__ int ReadA12()
{
	return PINK & (1 << 4);
}

__inline__ void WriteA13(int value)
{
	if (value) PORTK |= 1 << 5;
	else PORTK &= ~(1 << 5);
}

__inline__ int ReadA13()
{
	return PINK & (1 << 5);
}

__inline__ void WriteA14(int value)
{
	if (value) PORTK |= 1 << 6;
	else PORTK &= ~(1 << 6);
}

__inline__ int ReadA14()
{
	return PINK & (1 << 6);
}

__inline__ void WriteA15(int value)
{
	if (value) PORTK |= 1 << 7;
	else PORTK &= ~(1 << 7);
}

__inline__ int ReadA15()
{
	return PINK & (1 << 7);
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
		case 11: WriteD11(value); break;
		case 12: WriteD12(value); break;
		case 13: WriteD13(value); break;
		case 14: WriteD14(value); break;
		case 15: WriteD15(value); break;
		case 16: WriteD16(value); break;
		case 17: WriteD17(value); break;
		case 18: WriteD18(value); break;
		case 19: WriteD19(value); break;
		case 20: WriteD20(value); break;
		case 21: WriteD21(value); break;
		case 22: WriteD22(value); break;
		case 23: WriteD23(value); break;
		case 24: WriteD24(value); break;
		case 25: WriteD25(value); break;
		case 26: WriteD26(value); break;
		case 27: WriteD27(value); break;
		case 28: WriteD28(value); break;
		case 29: WriteD29(value); break;
		case 30: WriteD30(value); break;
		case 31: WriteD31(value); break;
		case 32: WriteD32(value); break;
		case 33: WriteD33(value); break;
		case 34: WriteD34(value); break;
		case 35: WriteD35(value); break;
		case 36: WriteD36(value); break;
		case 37: WriteD37(value); break;
		case 38: WriteD38(value); break;
		case 39: WriteD39(value); break;
		case 40: WriteD40(value); break;
		case 41: WriteD41(value); break;
		case 42: WriteD42(value); break;
		case 43: WriteD43(value); break;
		case 44: WriteD44(value); break;
		case 45: WriteD45(value); break;
		case 46: WriteD46(value); break;
		case 47: WriteD47(value); break;
		case 48: WriteD48(value); break;
		case 49: WriteD49(value); break;
		case 50: WriteD50(value); break;
		case 51: WriteD51(value); break;
		case 52: WriteD52(value); break;
		case A0: WriteA0(value); break;
		case A1: WriteA1(value); break;
		case A2: WriteA2(value); break;
		case A3: WriteA3(value); break;
		case A4: WriteA4(value); break;
		case A5: WriteA5(value); break;
		case A6: WriteA6(value); break;
		case A7: WriteA7(value); break;
		case A8: WriteA8(value); break;
		case A9: WriteA9(value); break;
		case A10: WriteA10(value); break;
		case A11: WriteA11(value); break;
		case A12: WriteA12(value); break;
		case A13: WriteA13(value); break;
		case A14: WriteA14(value); break;
		case A15: WriteA15(value); break;
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
		case 11: return ReadD11();
		case 12: return ReadD12();
		case 13: return ReadD13();
		case 14: return ReadD14();
		case 15: return ReadD15();
		case 16: return ReadD16();
		case 17: return ReadD17();
		case 18: return ReadD18();
		case 19: return ReadD19();
		case 20: return ReadD20();
		case 21: return ReadD21();
		case 22: return ReadD22();
		case 23: return ReadD23();
		case 24: return ReadD24();
		case 25: return ReadD25();
		case 26: return ReadD26();
		case 27: return ReadD27();
		case 28: return ReadD28();
		case 29: return ReadD29();
		case 30: return ReadD30();
		case 31: return ReadD31();
		case 32: return ReadD32();
		case 33: return ReadD33();
		case 34: return ReadD34();
		case 35: return ReadD35();
		case 36: return ReadD36();
		case 37: return ReadD37();
		case 38: return ReadD38();
		case 39: return ReadD39();
		case 40: return ReadD40();
		case 41: return ReadD41();
		case 42: return ReadD42();
		case 43: return ReadD43();
		case 44: return ReadD44();
		case 45: return ReadD45();
		case 46: return ReadD46();
		case 47: return ReadD47();
		case 48: return ReadD48();
		case 49: return ReadD49();
		case 50: return ReadD50();
		case 51: return ReadD51();
		case 52: return ReadD52();
		case A0: return ReadA0();
		case A1: return ReadA1();
		case A2: return ReadA2();
		case A3: return ReadA3();
		case A4: return ReadA4();
		case A5: return ReadA5();
		case A6: return ReadA6();
		case A7: return ReadA7();
		case A8: return ReadA8();
		case A9: return ReadA9();
		case A10: return ReadA10();
		case A11: return ReadA11();
		case A12: return ReadA12();
		case A13: return ReadA13();
		case A14: return ReadA14();
		case A15: return ReadA15();
	}
}

#endif