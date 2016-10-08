# Arduino/Genuino Extensions

This package contains additional board definitions & libraries that are not
included in the default installation of the Arduino software for various reasons.

Getting these software components from the Internet is a bit time consuming.
So I created this installer which automatically installs the following components.

Tools tested with Arduino IDE 1.6.x The IDE can be downloaded from: http://arduino.cc/en/Main/Software

##Included drivers
* Adafruit Trinket, Genma, USBTinyISP
	https://github.com/adafruit/Adafruit_Windows_Drivers

* CH340 / CH341 USB Serial adapter used on some Arduino nano clones
	http://pan.baidu.com/s/1c0pNazm

##Included hardware support

* ATMega328 on Breadboard:
	http://arduino.cc/en/Tutorial/ArduinoToBreadboard
 
* ATTiny44/45/84/85:
	http://highlowtech.org/?p=1695
	
* ATtiny24/44/84/25/45/85/2313/4313 core:
	https://github.com/leomil72/tiny
 
* ATMega644p & ATMega1284:
	https://github.com/leomil72/megax4

##Hardware support Libs

* TinyWireM & TinyWireS: Wire (I2C / TWI) library for the ATtiny85 (using USI)
	http://playground.arduino.cc/Code/USIi2c

* Debouncing library for Arduino or Wiring
	https://github.com/thomasfredericks/Bounce2

* PS2Keyboard library (Leonardo compatible)
	https://github.com/yosemitebandit/PS2Keyboard
	http://playground.arduino.cc/Main/PS2Keyboard

* DigitalWriteFast - Interrupt safe version with patch to work under Arduino 1.0
	https://code.google.com/p/digitalwritefast/

* DS1307RTC Library
	http://www.pjrc.com/teensy/td_libs_DS1307RTC.html

* MAX7221 & MAX7219 library
	http://playground.arduino.cc/Main/LedControl#Source

* NewPing Library
	http://playground.arduino.cc/Code/NewPing

* Adafruit MCP23017 I2c Port Expander library
	https://github.com/adafruit/Adafruit-MCP23017-Arduino-Library

* OneWire Library
	http://www.pjrc.com/teensy/td_libs_OneWire.html
	
* Dallas DS18B20/DS1822/DS18S20*/DS1820 Library
	https://milesburton.com/Dallas_Temperature_Control_Library
	
* USB Host Shield 2.0
	https://github.com/felis/USB_Host_Shield_2.0

* Adafruit LiquidCrystal library.
	https://github.com/adafruit/Adafruit_LiquidCrystal
	https://learn.adafruit.com/i2c-spi-lcd-backpack/connect-to-i2c

* Adafruit Nokia 5110 library
	https://github.com/adafruit/Adafruit-PCD8544-Nokia-5110-LCD-library

* Adafruit NeoPixel library
	https://github.com/adafruit/Adafruit_NeoPixel

* TinySPI
	https://github.com/leomil72/tinySPI

##Software Libs

* Time Library
	http://www.pjrc.com/teensy/td_libs_Time.html
	
* AVR OS
	https://github.com/chrismoos/avr-os

* AESLib
	https://github.com/DavyLandman/AESLib

* Cryptosuite
	https://github.com/Cathedrow/Cryptosuite

* pRNG pseudorandom number generator
	https://github.com/leomil72/pRNG

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