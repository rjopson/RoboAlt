/*
 * I2C.h

 This class abstracts read/write commands to I2C devices for conveniency. 
 
 Modified from library originally written by Jeff Rowberg <jeff@rowberg.net> under MIT license
*/

#ifndef _I2C_h
#define _I2C_h


#include "Arduino.h"
#include "Wire.h"

class I2C {
public:
	I2C();

	static bool read(const uint8_t& devAddr, const uint8_t& regAddr, const uint8_t& length, uint8_t *data);
	static uint8_t write(const uint8_t& devAddr, const uint8_t& regAddr, const uint8_t& length, uint8_t *data);
	static uint8_t writeByte(const uint8_t& devAddr, const uint8_t& regAddr, uint8_t data);
};
#endif