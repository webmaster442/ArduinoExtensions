mkdir work
cd work

function docopy
{
	git clone --depth 1 $1
}
   
liblist=(
     'https://github.com/damellis/attiny.git'
     'https://github.com/leomil72/tiny.git'
     'https://github.com/leomil72/megax4'
     'https://github.com/thomasfredericks/Bounce2'
     'https://github.com/yosemitebandit/PS2Keyboard'
     'https://github.com/PaulStoffregen/DS1307RTC'
	 'https://github.com/wayoda/LedControl'
	 'https://bitbucket.org/teckel12/arduino-new-ping.git'
	 'https://github.com/felis/USB_Host_Shield_2.0'
	 'https://github.com/adafruit/Adafruit_LiquidCrystal'
	 'https://github.com/adafruit/Adafruit-PCD8544-Nokia-5110-LCD-library'
	 'https://github.com/adafruit/Adafruit_NeoPixel'
	 'https://github.com/leomil72/tinySPI'
	 'https://github.com/jcw/ethercard'
	 'https://github.com/PaulStoffregen/Time'
	 'https://github.com/chrismoos/avr-os'
	 'https://github.com/DavyLandman/AESLib'
	 'https://github.com/Cathedrow/Cryptosuite'
	 'https://github.com/leomil72/pRNG'
	 'https://github.com/connornishijima/arduino-volume1'
	 'https://github.com/thijse/Arduino-EEPROMEx'
   )

for item in ${liblist[*]}
do
	docopy $item
done
