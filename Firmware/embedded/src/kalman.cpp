/*
 * kalman.cpp
 */

#include "kalman.h"

/* Default constructor
 */
kalman::kalman()
	:	x_k_p(3,1), //current state vector, contains filtered position, velocity, acceleration data in 100*m/s
		x_k_m(3,1), //previous state vector
		x_k1_p(3,1), //previous state vector
		x_k1_m(3,1), //previous state vector
		z_k(2,1), //matrix of latest measurements	
		P_k1_p(3,3),
		P_k1_m(3,3), //error covariance
		Q_k(3,3), //model covariance
		R_k(2,2), //measurement covariance
		identity(3,3), //3x3 identity matrix
		H_k(3,2),
		H_k_T(2,3),
		omega_k(3,3),
		omega_k_T(3,3),
		K_k(3,2) //Kalman gains
{

}

void kalman::initialize() {

}

void kalman::setUncertainties() {

	float sigma_m = 200.0;
	float sigma_s = 300.0;
	float sigma_a = 200.0; //MPU error
}

void kalman::initializeMatricies() {

	
	//P_k1_m(3,3); //error covariance
	//Q_k; //model covariance
	//R_k; //measurement covariance
	//identity; //3x3 identity matrix
	//H_k;
	//H_k_T;
	//omega_k;
	//omega_k_T;
	//K_k; //Kalman gains
}

void kalman::update() {

}

/*
%Populate matrices to implement Kalman filter

%Error covariance
P_k1_m = [0, 0, 0; 0, 0, 0; 0, 0, 0];
P_k1_p = [0, 0, 0; 0, 0, 0; 0, 0, 0];

x_k1_m = [0; 0; 0];
x_k1_p = [0; 0; 0];

%Model and measurement covariance
Q_k = [0, 0, 0; 0, 0, 0; 0, 0, sigma_m ^ 2];
R_k = [sigma_s ^ 2, 0; 0, sigma_a ^ 2];
Identity = [1, 0, 0; 0, 1, 0; 0, 0, 1];

H_k = [1, 0, 0; 0, 0, 1];
H_k_T = [1, 0; 0, 0; 0, 1]; */