/*
 *IMU.cpp
 *
 */

#include "IMU.h"

/* Default constructor
 */
IMU::IMU() {

}

/* Map MPU raw 2 byte data to acceleration in 100*m/s^2
 * Includes gravity
 * Signed result
 */
int32_t IMU::mapAccelerationMPU(const int16_t& bytesData) {
	return mapAcceleration(bytesData, TWO_BYTES, MPU_MAPPING);
}

/* Map H3LIS raw 2 byte data to acceleration in 100*m/s^2
 * Includes gravity
 * Signed result
 */
int32_t IMU::mapAccelerationH3LIS(const int16_t& bytesData) {
	return mapAcceleration(bytesData, TWO_BYTES, H3LIS_MAPPING);
}

/* Acceleration result in 100*m/s^2
 * Gravity subtracted (by subtracting offset)
 * Signed, but acceleration in the vertical direction is always positive because multiplied by orientation value
 */
int32_t IMU::getReducedAcceleration(const int16_t& bytesAccelMPU, const int16_t& bytesOffsetMPU, const int16_t& bytesAccelH3LIS, const int16_t& bytesOffsetH3LIS) {

	if (chooseAccelerometer(bytesAccelMPU)) {
		return orientation * mapAccelerationMPU(bytesAccelMPU - bytesOffsetMPU);
	}
	else {//acceleration is greater than 16 g's
		return orientation * mapAccelerationH3LIS(bytesAccelH3LIS - bytesOffsetH3LIS);
	}
}

/* Determine orientation of altimeter on pad, and set orientation variable
 * result is 1 or -1, which is used to change sign of mapped accelerometer readings
 *
 */
int8_t IMU::setOrientation(const int16_t& acceleration) {

	//if orientation is positive, return 1, if negative return 0
	if (acceleration > 0) { //sensor postive direction aligns with vertical
		orientation = 1;
		return orientation;
	}
	else {//orientationSum < 0
		orientation = -1;
		return orientation;
	}
}

/* Map input data from input range to output range
 * Used to convert 2 byte acceleration data to engineering units 
 */
int32_t IMU::map(const int32_t& input,
	const int32_t& inputMin, const int32_t& inputMax,
	const int32_t& outputMin, const int32_t& outputMax) {

	//calculate deltas
	int64_t outputDelta = (outputMax - outputMin);
	int64_t inputDelta = (inputMax - inputMin);
	int64_t valueDelta = (input - inputMin);

	//map using deltas 
	return (int32_t)((valueDelta * outputDelta / inputDelta) + outputMin);
}

/* Choose which accelerometer to use for generating generic acceleration used in filters and flight logic
 * Returns 1 if measurement is below 16 g's, 0 if MPU sensor is pegged > 16 g's
 */
bool IMU::chooseAccelerometer(const int16_t& signedBytesMPU) {

	if (signedBytesMPU > -TWO_BYTES + 5 && signedBytesMPU < TWO_BYTES - 5) { //above 16 g's
		return 1;
	}
	else { //above 16 g's
		return 0;
	}
}

/* used in sensor specific functions to map acceleration. This function sets scale in/out in mapping function
 * 
 */
int32_t IMU::mapAcceleration(const int32_t& bytesData, const int32_t& scaleIn, const int32_t& scaleOut) {
	return map(bytesData, -scaleIn, scaleIn, -scaleOut, scaleOut);
}