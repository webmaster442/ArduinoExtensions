/*
===============================================================================
Message constants
===============================================================================
*/
#define BOARD-ID 0x00
#define DWRITE 0x01
#define DREAD 0x02
#define PMODE 0x03
#define AREAD 0x04
#define AWRITE 0x05
#define TONE 0x06
#define TONED 0x07
#define NOTONE 0x08
#define SHIFTOUT 0x09
#define SHIFTIN 0x0A

/*
===============================================================================
RESPONSES
===============================================================================
*/
#define CMD_ERR 0x00
#define CMD_OK 0xFF
#define BOARD_UNO 0xF0
#define BOARD_MEGA 0xF1
#define BOARD_LEONARDO 0xF2
#define BOARD_UNKNOWN 0xFE

/*
===============================================================================
Message Size
===============================================================================
*/
#define MSG_SIZE 4

/*
===============================================================================
Baud Rate constant
===============================================================================
*/
#define BAUD 9600

byte _msgBuffer[5] = {0};
byte _response = 0;
byte _argument = 0;

void setup()
{
	Serial.begin(BAUD);
	while (!Serial) {} //connect wait for native USB
}

byte BoardID()
{
	byte response = BOARD_UNKNOWN;
	#if defined (__AVR_ATmega168__) || defined (__AVR_ATmega168P__) || defined (__AVR_ATmega328P__)
		response = BOARD_UNO;
	#elif defined (__AVR_ATmega2560__) || defined (__AVR_ATmega1280__)
		response = BOARD_MEGA;
	#elif defined (__AVR_ATmega32U4__)
		response = BOARD_LEONARDO;
	#endif
	return response;
}

void DoInstruction()
{
	_argument = CMD_OK;
	switch (_msgBuffer[0])
	{
		case BOARD-ID:
			_response = BoardID();
			break;
		case DWRITE
			digitalWrite(_msgBuffer[1], _msgBuffer[2]);
			_response = CMD_OK;
			break;
		case DREAD:
			_argument = digitalRead(_msgBuffer[1]);
			_response = CMD_OK;
			break;
		case PMODE:
			pinMode(_msgBuffer[1], _msgBuffer[2]);
			_response = CMD_OK;
			break;
		case AREAD:
			_argument = map(analogRead(_msgBuffer[1]), 0, 1023, 0, 255);
			_response = CMD_OK;
			break;
		default:
			_response = CMD_ERR;
			break;
	}
	Serial.write(_argument);
	Serial.write(_response);
}

void loop()
{
	if (Serial.available() > 4)
	{
		for (int i=0; i<4; i++)
		{
			_msgBuffer[i] = Serial.read();
		}
		while (Serial.available() > 0) Serial.read();
		DoInstruction();
	}
}