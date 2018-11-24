/*
 * kalman.h
 *
 * Implements Kalman filter of altitude data from barometer and acceleration data
*  Return in m/s^2, m/s, m
*
*  Math model is s = (1/2)*a*delta_t^2
*				  v = a*delta_t
*				  a = constant
*
*
*
*/

#ifndef _KALMANFILTER_h
#define _KALMANFILTER_h

#include <inttypes.h>
#include "matrixMath.h"

class kalman {

public:
	kalman();
	void initialize(uint32_t time);
	void setUncertainties();	
	void setConsistentUnits(const uint32_t& timeIn, float* time, const int32_t& altitudeIn, float* altitude, const int32_t& accelerationIn, float* acceleration);
	void setOutputUnits(const float& altitudeIn, int32_t* altitude, const float& velocityIn, int32_t* velocity, const float& accelerationIn, int32_t* acceleration);

	void update(const uint32_t& time, const int32_t& altitudeMeasure, const int32_t& accelerationMeasure, int32_t* altitude, int32_t* velocity, int32_t* acceleration);

	//Matrices saved to calculate k+1 iteration
	matrixMath P_k1_p; //error covariance
	matrixMath x_k1_p; //previous state vector

	//Measurement and model errors
	float sigma_m;
	float sigma_s;
	float sigma_a; //MPU error

	//Save previous time to calculate deltaT
	float time_k1;
};
#endif
