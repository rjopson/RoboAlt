/*
 Name:		ALT_I2C.cpp


*/

#include "I2C.h"

/* Default constructor
 *
 */
I2C::I2C() {

}

/* Read data from I2C device at specified registry, place in *data pointer
 * length is number of bytes expected
 * read length limited between 1 byte and 32 bytes
 *
 * return: status, 0 is success, 1 is different number of bytes read than expected
 */
bool I2C::read(const uint8_t& devAddr, const uint8_t& regAddr, const uint8_t& length, uint8_t *data) {

	Wire.beginTransmission(devAddr);
	Wire.write(regAddr);
	Wire.endTransmission();
	Wire.requestFrom(devAddr, length);

	int n = Wire.available();
	if (n != length) {
		return 1; //read has failed
	}
	for (int i = 0; i < n; i++) {   //count to place read data into data array
		data[i] = Wire.read();
	}

	return 0; //read, no error
}

/* Write data to I2C device at specified registry
 * length is number of bytes to be written
 * read length limited between 1 byte and 32 bytes
 *
 * return: status, 0 is success, other number is failure indicated by Wire.endTransmission()
 */
uint8_t I2C::write(const uint8_t& devAddr, const uint8_t& regAddr, const uint8_t& length, uint8_t *data) {

	Wire.beginTransmission(devAddr);
	Wire.write(regAddr);
	uint8_t test = Wire.write(data, length);

	uint8_t status;
	status = Wire.endTransmission();
	return status;
}

/* Wrapper for write function to write single byte (usually to register)
 *
 */
uint8_t I2C::writeByte(const uint8_t& devAddr, const uint8_t& regAddr, uint8_t data) {

	uint8_t status;
	status = write(devAddr, regAddr, 1, &data);
	return status;
}