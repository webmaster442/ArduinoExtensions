# Arduino Extensions

Az Arduino Extensions egy bővítőcsomag az Arduino IDE-hez. Olyan könyvtárakat, illesztőprogramokat és hardver definíciókat tartalmaz, amelyek nem részei az alaptelepítésnek.

A csomag egyes részei külön kölön beszerezhetőek az interneten, de ezek letöltése és egyesével való telepítése igen időigényes. Így született meg ez a telepítőkészlet.

A csomag az Arduino IDE 1.5 vonalához készül, ebből adódóan nem kompatibilis az 1.0.x ággal. A legújabb Arduino szoftver a http://arduino.cc/en/Main/Software oldalon szerezhető be. Annak ellenére, hogy az 1.5 ág még béta fázisban van, már jóval jobb, mint az 1.0.x ág

##Illesztőprogramok

* USB Tiny ISP Driver
	https://learn.adafruit.com/usbtinyisp

* CH340 / CH341 USB Serial adapter. Újabb Nano klón lapokon található meg
	http://pan.baidu.com/s/1c0pNazm

##Extra Chip támogatás 

* ATMega328 on Breadboard (8MHz belső órajel használata):
	http://arduino.cc/en/Tutorial/ArduinoToBreadboard
 
* ATTiny44/45/84/85:
	highlowtech.org/?p=1695
 
* ATMega644p & ATMega1284:
	http://www.leonardomiliani.com/en/2014/atmega644p1284p-nuovo-core-per-lide-1-5-7-di-arduino/

##Könyvtárak mások álltal:

* TinyWireM & TinyWireS: Wire (I2C / TWI) library for the ATtiny85 (using USI)
	http://playground.arduino.cc/Code/USIi2c

* Debouncing library for Arduino or Wiring
	https://github.com/thomasfredericks/Bounce2

* PS2Keyboard library (Leonardo compatible)
	https://github.com/yosemitebandit/PS2Keyboard
	http://playground.arduino.cc/Main/PS2Keyboard

* DigitalWriteFast - Interrupt safe version with patch to work under arduino 1.0
	https://code.google.com/p/digitalwritefast/

* Time Library
	http://www.pjrc.com/teensy/td_libs_Time.html

* DS1307RTC Library
	http://www.pjrc.com/teensy/td_libs_DS1307RTC.html

* MAX7221 & MAX7219 library
	http://playground.arduino.cc/Main/LedControl#Source

* NewPing Library
	http://playground.arduino.cc/Code/NewPing

* Adafruit MCP23017 I2c Port Expander library
	https://github.com/adafruit/Adafruit-MCP23017-Arduino-Library

* AVR OS
	https://github.com/chrismoos/avr-os

* OneWire Library
	http://www.pjrc.com/teensy/td_libs_OneWire.html
	
* USB Host Shield 2.0
	https://github.com/felis/USB_Host_Shield_2.0

##Saját könyvtárak

* FastDigital Library
	https://github.com/webmaster442/ArduinoExtensions/wiki/FastDigital-Lib-documentation

* PortLib
	https://github.com/webmaster442/ArduinoExtensions/wiki/PortLib-Documentation

* UtilLib
	https://github.com/webmaster442/ArduinoExtensions/wiki/UtilLib-Documentation

* ADCLib
	https://github.com/webmaster442/ArduinoExtensions/wiki/ADCLib-Documentation

* RGBLedLib
	https://github.com/webmaster442/ArduinoExtensions/wiki/RGBLedLib-documentation

##Eszközök
* Termite: egy jóval jobb RS232 terminál
	http://www.compuphase.com/software_termite.htm