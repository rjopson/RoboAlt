/*
 Name:		I2C.h

*/

#ifndef _I2C_h
#define _I2C_h


#include "Arduino.h"
#include "Wire.h"

#define I2C_READ_TIMEOUT 500

class I2C {
public:
	I2C();
	static bool read(const uint8_t& devAddr, const uint8_t& regAddr, const uint8_t& length, uint8_t *data);
	static uint8_t write(const uint8_t& devAddr, const uint8_t& regAddr, const uint8_t& length, uint8_t *data);
	static uint8_t writeByte(const uint8_t& devAddr, const uint8_t& regAddr, uint8_t data);
};
#endif