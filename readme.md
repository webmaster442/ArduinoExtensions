# Arduino Extensions

This package contains additional board definitions & libraries that are not
included in the default installation of the arduino software for various reasons.

Getting these software components from the internet is a bit time consuming.
So I created this installer which automatically installs the following components.

Tools tested with Arduino IDE 1.5.x The IDE can be downloaded from: http://arduino.cc/en/Main/Software

##Included drivers
* USB Tiny ISP Driver
	https://learn.adafruit.com/usbtinyisp

* CH340 / CH341 USB Serial adapter used on some Arduino nano clones
	http://pan.baidu.com/s/1c0pNazm

##Included hardware support

* ATMega328 on Breadboard:
	http://arduino.cc/en/Tutorial/ArduinoToBreadboard
 
* ATTiny44/45/84/85:
	highlowtech.org/?p=1695
 
* ATMega644p & ATMega1284:
	https://code.google.com/p/sanguino/

##Libraries by others

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

##Libraries by me

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

##Tools
* Termite: a simple RS232 terminal
	http://www.compuphase.com/software_termite.htm