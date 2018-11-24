/*
 * kalman.cpp
 */

#include "kalman.h"

/* Default constructor
 */
kalman::kalman()
	:	x_k1_p(3,1), //previous state vector
		P_k1_p(3,3)//error covariance
{
	//set measurement uncertainties
	setUncertainties();
}

void kalman::initialize(uint32_t time) {

	//set initial time
	time_k1 = (float)time;
}

void kalman::setUncertainties() {

	float sigma_m = 200.0*200.0;
	float sigma_s = 300.0*300.0;
	float sigma_a = 200.0*200.0; //MPU error
}

void kalman::setConsistentUnits(const uint32_t& timeIn, float* time, const int32_t& altitudeIn, float* altitude, const int32_t& accelerationIn, float* acceleration) {

	*time = ((float)timeIn) / 1000.0;
	*altitude = ((float)altitudeIn) / 100.0;
	*acceleration = ((float)accelerationIn) / 100.0;
}

void kalman::update(const uint32_t& time, const int32_t& altitudeMeasure, const int32_t& accelerationMeasure, int32_t* altitude, int32_t* velocity, int32_t* acceleration) {

	//Model and measurement covariance (numbers don't change)
	float Q_k_data[9] = { 0, 0, 0, 0, 0, 0, 0, 0, sigma_m }; matrixMath Q_k(3, 3, Q_k_data);
	float R_k_data[4] = { sigma_s, 0, 0, sigma_a }; matrixMath R_k(2, 2, R_k_data);
	float identity_data[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 }; matrixMath identity(3, 3, identity_data);	
	float H_k_data[6] = { 1, 0, 0, 0, 0, 1 }; 
	matrixMath H_k(2, 3, H_k_data);
	matrixMath H_k_T(H_k.transpose());

	//Set consistent units for measurements
	float time_k;
	float altitudeMeasureConsistent;
	float accelerationMeasureConsistent;
	setConsistentUnits(time, &time_k, altitudeMeasure, &altitudeMeasureConsistent, accelerationMeasure, &accelerationMeasureConsistent);

	//Calculate deltaT
	float dT = time_k - time_k1;
	time_k1 = time_k;

	//Update measurement matrix
	float z_k_data[2] = { altitudeMeasureConsistent, accelerationMeasureConsistent };  
	matrixMath z_k(2, 1, z_k_data);

	//Calculate Omega
	float Omega_k_data[9] = { 1, dT, dT*dT / 2, 0, 1, dT, 0, 0, 1 };
	matrixMath Omega_k(3, 3, Omega_k_data);
	matrixMath Omega_k_T(Omega_k.transpose());

	//Update error covariance and kalman gains
	matrixMath P_k_m = Omega_k * P_k1_p * Omega_k_T + Q_k;
	matrixMath toInvert = H_k * P_k_m * H_k_T + R_k;
	matrixMath K_k = P_k_m * H_k_T * toInvert.inverse2x2();
	matrixMath P_k_p = (identity - K_k * H_k) * P_k_m;

	//Update state vectors
	matrixMath x_k_m = Omega_k * x_k1_p;
	matrixMath x_k_p = x_k_m + K_k * (z_k - H_k * x_k_m);

	//Save error covariance and state vector for k+1 step
	P_k1_p = P_k_p;
	x_k1_p = x_k_p;

	//Output results to pointers
	*altitude = (int32_t)x_k_p.getValue(0, 0)*100;
	*velocity = (int32_t)x_k_p.getValue(1, 0)*100;
	*acceleration = (int32_t)x_k_p.getValue(2, 0)*100;
}
