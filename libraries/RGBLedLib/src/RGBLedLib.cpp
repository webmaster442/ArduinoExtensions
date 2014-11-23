/*
-------------------------------------------------------------------------------
	RGBLedLib
-------------------------------------------------------------------------------
	File created by: webmaster442
	https://github.com/webmaster442/ArduinoExtensions
-------------------------------------------------------------------------------
*/
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

RGBLed::RGBLed(int pwmR, int pwmG, int pwmB, int mode)
{
	_pr = pwmR;
	_pg = pwmG;
	_pb = pwmB;
	_mode = mode;
	_alpha = 255;
	pinMode(_pr, OUTPUT);
	pinMode(_pg, OUTPUT);
	pinMode(_pb, OUTPUT);
}

void RGBLed::_RefreshOutput()
{
	float mul = _alpha / 255.0;
	if (_mode == CC)
	{
		analogWrite(_pr, _current_color.R() * mul);
		analogWrite(_pg, _current_color.G() * mul);
		analogWrite(_pb, _current_color.B() * mul);
	}
	else
	{
		analogWrite(_pr, (255 - _current_color.R()) * mul);
		analogWrite(_pg, (255 - _current_color.G()) * mul);
		analogWrite(_pb, (255 - _current_color.B()) * mul);
	}
}

void RGBLed::CurrentColor(Color c)
{
	_current_color = c;
	_RefreshOutput();
}

void RGBLed::CurrentColor(unsigned long int value)
{
	_current_color = Color(value);
	_RefreshOutput();
}

void RGBLed::CurrentColor(byte r, byte b, byte g)
{
	_current_color = Color(r, g, b);
	_RefreshOutput();
}

Color RGBLed::CurrentColor()
{
	return _current_color;
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

void RGBLed::Fade(Color &in, Color &out)
{
	unsigned n_steps = 256;
	unsigned time = 10;
	int red_diff   = out.R() - in.R();
	int green_diff = out.G() - in.G();
	int blue_diff  = out.B() - in.B();
	for ( unsigned i = 0; i < n_steps; ++i)
	{
		Color output ( in.R() + i * red_diff / n_steps, in.G() + i * green_diff / n_steps, in.B() + i * blue_diff/ n_steps);
		/*put the analog pins to the proper output.*/
		_current_color = output;
		_RefreshOutput();
		delay(time);
	}
}

void RGBLed::Fade(unsigned long int in, unsigned long int out)
{
	Color input = Color(in);
	Color output = Color(out);
	Fade(input, output);
}