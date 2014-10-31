#include <arduino.h>
#include "RGBLedLib.h"

/*-----------------------------------------------------------------------------
Color Class implementation
-----------------------------------------------------------------------------*/
Color::Color()
{
	_r = 0;
	_g = 0;
	_b = 0;
}

Color::Color(byte r, byte g, byte b)
{
	_r = r;
	_g = g;
	_b = b;
}

Color::Color(unsigned long int value)
{
	_r = (value & 0x00FF0000) >> 16;
	_g = (value & 0x0000FF00) >> 8;
	_b = (value & 0x000000FF);
}

byte Color::R()
{
	return _r;
}

byte Color::G()
{
	return _g;
}

byte Color::B()
{
	return _b;
}

void Color::R(byte value)
{
	_r = value;
}

void Color::G(byte value)
{
	_g = value;
}

void Color::B(byte value)
{
	_b = value;
}

void Color::Set(unsigned long int value)
{
	_r = (value & 0x00FF0000) >> 16;
	_g = (value & 0x0000FF00) >> 8;
	_b = (value & 0x000000FF);
}

/*-----------------------------------------------------------------------------
RGBLed Class implementation
-----------------------------------------------------------------------------*/

RGBLed::RGBLed(int pwmR, int pwmG, int pwmB)
{
	_pr = pwmR;
	_pg = pwmG;
	_pb = pwmB;
	_alpha = 255;
}

void RGBLed::_RefreshOutput()
{
	float mul = _alpha / 255.0;
	analogWrite(_pr, _current_color.R() * mul);
	analogWrite(_pg, _current_color.G() * mul);
	analogWrite(_pb, _current_color.B() * mul);
}

void RGBLed::SetColor(Color c)
{
	_current_color = c;
	_RefreshOutput();
}

void RGBLed::SetColor(unsigned long int value)
{
	_current_color = Color(value);
	_RefreshOutput();
}

byte RGBLed::Alpha()
{
	return _alpha;
}

void RGBLed::Alpha(byte value)
{
	_alpha = value;
	_RefreshOutput();
}