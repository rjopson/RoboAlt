/*
 * flightLogic.cpp
 *
 * This class defines the logic which is used to determine the phase of flight the rocket is in.
 *
 */

#include "flightLogic.h"

/* Default constructor
 */
flightLogic::flightLogic() {
	flightPhase = detectLaunch;
	flightStatus = 0;
}

/* Initialize flight logic with input user altitude main deploy. 
 *
 */
void flightLogic::initialize(const int32_t& altitudeMainDeployUser) {

	if (altitudeMainDeployUser > (int32_t)ALTITUDE_MAIN_DETECT) { //make sure user input is greater than minimum
		altitudeMainDeploy = altitudeMainDeployUser;
	}
	else {
		altitudeMainDeploy = (int32_t)ALTITUDE_MAIN_DETECT;
	}
}

/* Function used in main altimeter loop to determine which phase of flight rocket is in
*
*/
uint8_t flightLogic::update(const int32_t& acceleration, const int32_t& velocity, const int32_t& altitude,
						const int16_t& gyroX, const int16_t& gyroY, const int16_t& gyroZ) {

	switch (flightPhase) {

	case detectLaunch: //launch detect
		launchDetect(acceleration, velocity);
		flightStatus = 0;
		break;

	case motorBurn: //coast detect
		coastDetect(acceleration);
		flightStatus = 1;
		break;

	case coast: //apogee detect
		apogeeDetect(velocity);
		flightStatus = 2;
		break;

	case drogueDescent:
		mainDetect(altitude);
		flightStatus = 3;
		break;

	case mainDescent:
		landingDetect(gyroX, gyroY, gyroZ);
		flightStatus = 4;
		break;

	case ground:
		//On ground, don't do anything to advance flightStatus
		flightStatus = 5;
		break;
	} 
	
	return flightStatus;
}

/* detect launch detect based on:
 * velocity > defineValue cm/s && acceleration > defineValue (takeoff)
 */
void flightLogic::launchDetect(const int32_t& acceleration, const int32_t& velocity) {

	if (velocity > (int32_t)VELOCITY_LAUNCH_DETECT && acceleration > (int32_t)ACCELAXIAL_LAUNCH_DETECT) {
		flightPhase = motorBurn;
	}
}

/* detects boost end/motor burnout based on:
 * acceleration < 0 cm/s^2
 */
void flightLogic::coastDetect(const int32_t& acceleration) {

	if (acceleration < (int32_t)ACCELERATION_COAST_DETECT) {
		flightPhase = coast;
	}
}

/* detects apogee based on:
 * velocity < 0 cm/s
 */
void flightLogic::apogeeDetect(const int32_t& velocity) {

	if (velocity < (int32_t)VELOCITY_APOGEE_DETECT) {
		flightPhase = drogueDescent;
	}
}

/* detects main deploy based on:
 * altitude < user input cm or ALTITUDE_MAIN_DETECT if user input is less
 */
void flightLogic::mainDetect(const int32_t& altitude) {

	static int8_t countBaro = 0;

	if (altitude < altitudeMainDeploy) {
		flightPhase = mainDescent;
	}
}

/* detects landing based on:
 * gyro readings in x,y,z
 */
void flightLogic::landingDetect(const int16_t& gyroX, const int16_t& gyroY, const int16_t& gyroZ) {

	//number of loops which gyros have low readings
	static uint8_t landingCount = 0;

	//Check to see if x and y gyro values are low (not using abs, because 2 different libraries in atmega and c++ 
	if (gyroTest(gyroX) && gyroTest(gyroY) && gyroTest(gyroZ)) {
		landingCount++;
	}
	else { //still detecting movement
		landingCount = 0;
	}

	//if landingCount gets to 100, altimeter has been still long enough to be on ground
	if (landingCount > GROUND_COUNT_DETECT) {
		flightPhase = ground;
	}
}

/* Used to test if individual gyro readings are lower than threshold where rocket assumed to be on ground
 *
 */
bool flightLogic::gyroTest(const int16_t& gyro) {

	if (gyro > -(int16_t)GYRO_GROUND_DETECT && gyro < (int16_t)GYRO_GROUND_DETECT) {
		return 1;
	}
	else {
		return 0;
	}
}