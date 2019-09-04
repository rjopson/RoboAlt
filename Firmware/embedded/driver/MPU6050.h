/*
 * MPU6050.h
 *
 * Modified from library originally written by Jeff Rowberg <jeff@rowberg.net> under MIT license
 *
 * This class is used to extract 2 byte accelerometer data from the MPU6050 in
 * the x,y,z directions of the sensor (y direction is vertical). This class abstracts all hardware 
 * interaction, conversions to engineering units used in filtering and flight logic are done in IMU.h
 */

#ifndef _MPU6050_h
#define _MPU6050_h

#include "Arduino.h"
#include "I2C.h"

#define MPU6050_ADDRESS_AD0_LOW		0x68 // address pin low 
#define MPU6050_ADDRESS_AD0_HIGH	0x69 // address pin high 
#define MPU6050_ADDRESS_DEFAULT		MPU6050_ADDRESS_AD0_HIGH

#define MPU6050_RA_CONFIG           0x1A
#define MPU6050_RA_GYRO_CONFIG      0x1B
#define MPU6050_RA_ACCEL_CONFIG     0x1C
#define MPU6050_RA_PWR_MGMT_1       0x6B
#define MPU6050_RA_ACCEL_XOUT_H     0x3B
#define MPU6050_RA_GYRO_XOUT_H      0x43

class MPU6050 {
public:
	MPU6050();
	void initialize(); //initialize sensor - configure power, accelerometer and gyro settings
	void getAcceleration(int16_t* x, int16_t* y, int16_t* z); //get x,y,z acceleration in 16g's as 16bit numbers
	void getRotation(int16_t* x, int16_t* y, int16_t* z); //get x,y,z rotation in 2000deg/s as 16bit numbers

private:
	uint8_t devAddr;
	uint8_t buffer[6];

	void configurePower();
	void configureGyro();
	void configureAccel();

};
#endif