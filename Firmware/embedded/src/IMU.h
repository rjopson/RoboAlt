/*
 * IMU.h
 * 
 * This class reduces raw accelerometer data from MPU6050 and H3LIS. Specifically:
 * -orientation of altimeter on pad (up or down, safety for MOSFETS for cases where 
    vehicle not vertical done in main loop if statement)
 * -offset and low pass filtering management of previous data, for offsets on pad
 * -conversion to engineering units
 * -determine which accelerometer to use (MPU if less than 16 g's, H3LIS if higher)
 * -final output of engineering accelerometer data with ~1g offset subtracted 
 */

#ifndef _ALT_IMU_h
#define _ALT_IMU_h

//#include "sensorOffset.h"
#include <inttypes.h>

//values used for mapping each accelerometer raw to engineering units 
#define TWO_BYTES		32767
#define MPU_MAPPING		15690 //100 * 16g's * 9.806 m/s^2
#define H3LIS_MAPPING	196130 //100 * 200g's * 9.806 m/s^2

class IMU {

public:
	IMU();
	void initialize(const int16_t& acceleration);

	int32_t mapAccelerationMPU(const int16_t& bytesData); //map mpu raw acceleration to engineering units
	int32_t mapAccelerationH3LIS(const int16_t& bytesData); //map h3lis raw acceleration to engineering units
	int32_t getReducedAcceleration(	const int16_t& bytesAccelMPU, 
									const int16_t& bytesOffsetMPU, 
									const int16_t& bytesAccelH3LIS, 
									const int16_t& bytesOffsetH3LIS); //multiply orientation, subtract offsets, choose which accelerometer to use, map data

	int8_t setOrientation(const int16_t& acceleration); //determine orientation of altimeter on pad
	int32_t map(const int32_t& input,
		const int32_t& inputMin, const int32_t& inputMax,
		const int32_t& outputMin, const int32_t& outputMax); //map input byte data to engineering values
	bool chooseAccelerometer(const int16_t& signedBytesMPU);// choose which accelerometer to use for generating generic "acceleration" used in filters and flight logic
	int32_t mapAcceleration(const int32_t& bytesData, const int32_t& scaleIn, const int32_t& scaleOut);
	int8_t orientation; //up (1) or down (-1) orientation of altimeter on pad. 
};

#endif