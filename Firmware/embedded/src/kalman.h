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
	void initialize();
	void setUncertainties();
	void initializeMatricies();
	
	void update();

	//Matrices required to implement
	matrixMath x_k_p; //current state vector, contains filtered position, velocity, acceleration data in 100*m/s
	matrixMath x_k_m; //previous state vector
	matrixMath x_k1_p; //previous state vector
	matrixMath x_k1_m; //previous state vector
	matrixMath z_k; //matrix of latest measurements

	matrixMath P_k1_p; //error covariance
	matrixMath P_k1_m; //error covariance
	matrixMath Q_k; //model covariance
	matrixMath R_k; //measurement covariance
	matrixMath identity; //3x3 identity matrix
	matrixMath H_k;
	matrixMath H_k_T;
	matrixMath omega_k;
	matrixMath omega_k_T;
	matrixMath K_k; //Kalman gains

	//Measurement and model errors
	float sigma_m;
	float sigma_s;
	float sigma_a; //MPU error

	float time_k1;
	float time_k;
};
#endif
