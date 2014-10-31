#ifndef RGBLEDLIB_H
#define RGBLEDLIB_H

#include <arduino.h>

#define COLOR_RED			0xFF0000
#define COLOR_BLUE			0x0000FF
#define COLOR_BLACK			0x000000
#define COLOR_WHITE			0xFFFFFF
#define COLOR_DARKRED		0x800000
#define COLOR_PINK			0xFF00FF
#define COLOR_TEAL			0x008080
#define COLOR_LIGHTGREEN	0x00FF00
#define COLOR_GREEN			0x008000
#define COLOR_TURQOISE		0x00FFFF
#define COLOR_DARKBLUE		0x000080
#define COLOR_VIOLET		0x800080
#define COLOR_GRAY25		0xC0C0C0
#define COLOR_GRAY50		0x808080
#define COLOR_DARKYELLOW	0x808000
#define COLOR_YELLOW		0xFFFF00

class Color
{
	private:
		byte _r, _g, _b;
	public:
		Color();
		Color(byte r, byte g, byte b);
		Color(unsigned long int value);
		byte R();
		byte G();
		byte B();
		void R(byte value);
		void G(byte value);
		void B(byte value);
		void Set(unsigned long int value);
};

class RGBLed
{
	private:
		int _pr, _pg, _pb;
		Color _current_color;
		byte _alpha;
		void _RefreshOutput();
	public:
		RGBLed(int pwmR, int pwmG, int pwmB);
		void Alpha(byte value);
		byte Alpha();
		void SetColor(Color c);
		void SetColor(unsigned long int value);
};

#endif