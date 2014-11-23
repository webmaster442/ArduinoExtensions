/*
-------------------------------------------------------------------------------
	ADCLib - Better Arduino ADC handling
-------------------------------------------------------------------------------
	File created by: webmaster442
	https://github.com/webmaster442/ArduinoExtensions
-------------------------------------------------------------------------------
*/
#ifndef ADCLIB_H
#define ADCLIB_H

#include <Arduino.h>

class Adc
{
	private:
		int _vcc;
		int _GetVccMiliVolts();
		int _maxvalue;
	public:
		Adc();
		void Init(int milivolts);
		void Init(int ch, int refv, int suply);
		int GetVcc();
		int Read(int ch);
		int ReadMv(int ch);
		int ReadAvg(int ch, int samples);
};

/*
-------------------------------------------------------------------------------
Implementation
-------------------------------------------------------------------------------
*/

//constructor
Adc::Adc()
{
	_vcc = 0;
	_maxvalue = 0;
}

int Adc::_GetVccMiliVolts()
{
	const long int scaleConst = 1156.300 * 1000;
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
	long int result = (high<<8) | low;
	result = scaleConst / result;
	// Calculate Vcc (in mV); 1125300 = 1.1*1023*1000
	return(int)result; // Vcc in millivolts
}

//initialize using internal vref reference
void Adc::Init(int suply)
{
	_vcc = _GetVccMiliVolts();
	_maxvalue = map(_vcc, 0, suply, 0, 1023);
}

//initialize using external vref;
void Adc::Init(int ch, int refv, int suply)
{
	int val = analogRead(ch);
	float mul = 1023.0 / val;
	_vcc = refv * mul;
	_maxvalue = map(_vcc, 0, suply, 0, 1023);
}

//get Vcc in milivolts
int Adc::GetVcc()
{
	return _vcc;
}

//Read value
int Adc::Read(int ch)
{
	int val = analogRead(ch);
	return map(val, 0, 1023, 0, _maxvalue);
}

int Adc::ReadMv(int ch)
{
	return (analogRead(ch) / 1023.0) * _vcc;
}

int Adc::ReadAvg(int ch, int samples)
{
	long sum = 0;
	for (int i=0; i<samples; i++)
	{
		sum += analogRead(ch);
	}
	sum /= samples;
	return map(sum, 0, 1023, 0, _maxvalue);
}

Adc Analog;

#endif