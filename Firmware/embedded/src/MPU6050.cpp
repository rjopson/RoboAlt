/*
 Name:		ALT_MPU6050.cpp

*/

#include "MPU6050.h"

/* Default constructor
 */
MPU6050::MPU6050() {
	devAddr = MPU6050_ADDRESS_DEFAULT;
}

/* Initialize sensor
 * configure power, accelerometer, gyro settings
 */
void MPU6050::initialize() {

	//wake up (set sleep bit to 0)
	I2C::writeByte(devAddr, MPU6050_RA_PWR_MGMT_1, 0);

	//configure power (select clock, disable temperature sensor)
	configurePower();

	//configure gyro
	configureGyro();

	//configure accelerometer
	configureAccel();
}

/* Get x,y,z axis accelerometer readings as 16bit integers, (set to 16g's in configuration)
 * min value = -32768
 * max value = 32767
 * typical = 2050
 */
void MPU6050::getAcceleration(int16_t* x, int16_t* y, int16_t* z) {
	I2C::read(devAddr, MPU6050_RA_ACCEL_XOUT_H, 6, buffer); //begins at XOUT high register which is first
	*x = (((int16_t)buffer[0]) << 8) | buffer[1];
	*y = (((int16_t)buffer[2]) << 8) | buffer[3];
	*z = (((int16_t)buffer[4]) << 8) | buffer[5];
}

/* Get x,y,z axis gyro readings as 16bit integers (set to 1000 deg/s in configuration)
* min value = -32768
* max value = 32767
* typical = ~0, with noise
*/
void MPU6050::getRotation(int16_t* x, int16_t* y, int16_t* z) {
	I2C::read(devAddr, MPU6050_RA_GYRO_XOUT_H, 6, buffer); //begins at XOUT high register which is first
	*x = (((int16_t)buffer[0]) << 8) | buffer[1];
	*y = (((int16_t)buffer[2]) << 8) | buffer[3];
	*z = (((int16_t)buffer[4]) << 8) | buffer[5];
}

/*Configure power settings
 * register = 6B
 * 0 bit7 = DEVICE_RESET
 * 0 bit6 = SLEEP
 * 0 bit5 = CYCLE
 * 0 bit4 = -
 * 1 bit3 = TEMP_DIS
 * 0 bit2 = CLOCK_SELECTION2
 * 0 bit1 = CLOCK_SELECTION1
 * 1 bit0 = CLOCK_SELECTION0
 *
 *Clock Selection:
 *0 = internal 8Mhz oscillator
 *1 = X gyro
 */
void MPU6050::configurePower() {
	uint8_t registerWrite = 0x09; //00001001 (set clock to x gyro, disable temperature sensor)
	I2C::writeByte(devAddr, MPU6050_RA_PWR_MGMT_1, registerWrite);
}

/* Configure gyro settings
 * register = 1B
 * 0 bit7 = XG_ST
 * 0 bit6 = YG_ST
 * 0 bit5 = ZG_ST
 * 1 bit4 = fullScale1
 * 1 bit3 = fullScale0
 * 0 bit2 = -
 * 0 bit1 = -
 * 0 bit0 = -
 *
 *Full Scale:
 *0 = 250 deg/s
 *1 = 500 deg/s
 *2 = 1000 deg/s
 *3 = 2000 deg/s
 *
 */
void MPU6050::configureGyro() {
	uint8_t registerWrite = 0x18; //00011000 (set FS bits to 2000 deg/s)
	I2C::writeByte(devAddr, MPU6050_RA_GYRO_CONFIG, registerWrite);

}

/* Configure accelerometer settings
 * register = 1C
 * 0 bit7 = XA_ST
 * 0 bit6 = YA_ST
 * 0 bit5 = ZA_ST
 * 1 bit4 = fullScale1
 * 1 bit3 = fullScale0
 * 0 bit2 = -
 * 0 bit1 = -
 * 0 bit0 = -
 *
 *Full Scale:
 *0 = 2g
 *1 = 4g
 *2 = 8g
 *3 = 16g
 *
 */
void MPU6050::configureAccel() {
	uint8_t registerWrite = 0x18; //00011000 (set FS bits to 16g)
	I2C::writeByte(devAddr, MPU6050_RA_ACCEL_CONFIG, registerWrite);
}