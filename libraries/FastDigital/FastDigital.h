/*
-------------------------------------------------------------------------------
	Fast Digital Lib
	Supported Arduino boards:
		Uno
		Leonardo
		Mega
		Tiny44/84
		Tiny45/85
-------------------------------------------------------------------------------
	File created by: webmaster442
	https://github.com/webmaster442/ArduinoExtensions
-------------------------------------------------------------------------------
*/
#ifndef FastDigital_h
#define FastDigital_h

#include <arduino.h>

#if defined (__AVR_ATmega48__) || defined (__AVR_ATmega48P__) || defined (__AVR_ATmega88__) || defined (__AVR_ATmega88P__) || defined (__AVR_ATmega168__) || defined (__AVR_ATmega168P__) || defined (__AVR_ATmega328P__)
	#include "Uno.h"
#elif defined (__AVR_ATmega2560__) || defined (__AVR_ATmega1280__)
	#include "Mega.h"
#elif defined (__AVR_ATmega32U4__)
	#include "Leonardo.h"
#elif defined (__AVR_ATtiny44__) || defined (__AVR_ATtiny84__)
	#include "Attiny4.h"
#elif defined (__AVR_ATtiny45__) || defined (__AVR_ATtiny85__)
	#include "Attiny5.h"
#endif

#endif