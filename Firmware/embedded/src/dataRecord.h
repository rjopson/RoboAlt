/*
 * dataRecord.h
 *
 * Wrapper for all data which is recorded to flash memory. Used in main altimeter loop to gather data, 
 * then pass to recording class
 */

#ifndef _DATA_RECORD_h
#define _DATA_RECORD_h

#include <inttypes.h>

class dataRecord {

public:
	dataRecord() {};

	//4 byte 14 = 56 total
	//2 byte 18 = 36 total
	//1 byte 1 = 1 total

	//data to be used in flight logic and/or recorded
	int32_t time; //(ms) //time used for filtering functions
	uint8_t flightStatus;
	int32_t altitude; //(cm) Kalman filtered altitude used in flight logic
	int32_t velocity; //(cm/s) Kalman filtered velocity used in flight logic
	int32_t acceleration; //(cm/s^2) Kalman filtered acceleration used in flight logic	
	int32_t altitudeBaro; //(cm) unfiltered barometric altitude
	int32_t accelAxial; //(cm/s^2) axial acceleration, chosen between MPU and H3LIS converted to engineering units, gravity subtracted
	uint32_t pressure; //(Pascal)
	int32_t temperature; //(100*degC)
	int16_t MPU_accelX, MPU_accelY, MPU_accelZ; //(16bit at 16g resolution) low g accelerometer measurements
	int16_t MPU_gyroX, MPU_gyroY, MPU_gyroZ; //(16bit at 1000deg/s resolution) gyro measurements
	int16_t H3LIS_accelY; //16bit at 200g seolution high g accelerometer
	uint32_t MS5607_pressure; //raw 4 byte pressure value from sensor
	uint32_t MS5607_temperature; //raw 4 byte temperature value from sensor		
	uint16_t voltageAnalog; //10 bit arduino
	uint16_t continuityApo; //1 is good continuity, 0 is no continuity
	uint16_t continuityMain; //1 is good continuity, 0 is no continuity
	uint16_t continuityThird; //1 is good continuity, 0 is no continuity

	//offsets at liftoff
	int16_t mpuOffset; //16 bit number, -16->16 g's
	int16_t h3lisOffset; //16 bit number, -200->200 g's
	int32_t pressureOffset; //(cm)
};

#endif