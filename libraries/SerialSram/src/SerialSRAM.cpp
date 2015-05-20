/*
-------------------------------------------------------------------------------
	SerialSRam Lib
-------------------------------------------------------------------------------
	File created by: webmaster442
	https://github.com/webmaster442/ArduinoExtensions
-------------------------------------------------------------------------------
*/
#include <arduino.h>
#include "SerialSRAM.h"
#include "pins_arduino.h"
#include <SPI.h>

SerialRam::SerialRam(int CS)
{
	_cspin = CS;
	pinMode(_cspin, OUTPUT);
	digitalWrite(_cspin, HIGH);
	_addr = 0;
};

uint8_t SerialRam::Read()
{
	digitalWrite(_cspin, LOW);
	SPI.transfer(SRAM_CMD_READ);
	SPI.transfer((uint8_t)(_addr >> 16) & 0xff);
	SPI.transfer((uint8_t)(_addr >> 8) & 0xff);
	SPI.transfer((uint8_t)_addr);
	uint8_t read_byte = SPI.transfer(0x00);
	digitalWrite(_cspin, HIGH);
	++_addr;
	return read_byte;
}

uint32_t SerialRam::Read(uint8_t array[], uint32_t startindex, uint32_t count)
{
	for (uint32_t i = startindex; i < startindex + count; i++)
	{
		array[i] = Read();
	}
	return count;
}

int16_t SerialRam::ReadInt()
{
	int16_t ret = 0;
	uint8_t tmp = Read();
	ret += (tmp << 8);
	tmp = Read();
	ret += tmp;
	return ret;
}

void SerialRam::Write(uint8_t data)
{
	digitalWrite(_cspin, LOW);
	SPI.transfer(SRAM_CMD_WRITE);
	SPI.transfer((uint8_t)(_addr >> 16) & 0xff);
	SPI.transfer((uint8_t)(_addr >> 8) & 0xff);
	SPI.transfer((uint8_t)_addr);
	SPI.transfer(data);
	digitalWrite(_cspin, HIGH);
	++_addr;
}

void SerialRam::Write(uint8_t array[], uint32_t startindex, uint32_t count)
{
	for (uint32_t i = startindex; i < startindex + count; i++)
	{
		Write(array[i]);
	}
}

void SerialRam::WriteInt(int16_t data)
{
	uint8_t tmp = (data & 0xff00) >> 8;
	Write(tmp);
	tmp = (data & 0x00ff);
	Write(tmp);
} 

uint32_t SerialRam::Address()
{
	return _addr;
}

void SerialRam::Address(uint32_t addr)
{
	_addr = addr;
}

uint32_t SerialRam::Readln(char *array, uint32_t max_length)
{
	uint32_t len = max_length;
	for (uint32_t i = 0; i< max_length; i++)
	{
		array[i] = (char)Read();
		if (array[i] == '\n')
		{
			array[i] = '\0';
			len = i;
			break;
		}
	}
	for (uint32_t i = len; i< max_length; i++) array[i] = '\0';
	return len;
}

void SerialRam::Println(char *text)
{
	int len = strlen(text);
	for (uint32_t i = 0; i < len; i++)
	{
		Write((uint8_t)text[i]);
	}
	Write((uint8_t)'\n');
}