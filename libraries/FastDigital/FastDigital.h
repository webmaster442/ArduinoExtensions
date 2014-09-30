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

/* Fast digital lib define instruction */
#ifndef FAST-DIGITAL
	#define FAST-DIGITAL
#endif

/* CPU Defines and includes */
#if defined (__AVR_ATmega48__) || defined (__AVR_ATmega48P__) || defined (__AVR_ATmega88__) || defined (__AVR_ATmega88P__) || defined (__AVR_ATmega168__) || defined (__AVR_ATmega168P__) || defined (__AVR_ATmega328P__)
	#include "hardware/Uno.h"
#elif defined (__AVR_ATmega2560__) || defined (__AVR_ATmega1280__)
	#include "hardware/Mega.h"
#elif defined (__AVR_ATmega32U4__)
	#include "hardware/Leonardo.h"
#elif defined (__AVR_ATtiny44__) || defined (__AVR_ATtiny84__)
	#include "hardware/Attiny4.h"
#elif defined (__AVR_ATtiny45__) || defined (__AVR_ATtiny85__)
	#include "hardware/Attiny5.h"
#endif

#endif