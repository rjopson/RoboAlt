/*
 * flightLogic.h
 *
 * This class defines the logic which is used to determine the phase of flight the rocket is in.
 * 
 */

#ifndef _FLIGHTLOGIC_H_
#define _FLIGHTLOGIC_H_

#include <inttypes.h>

/** Flight logic written to flash chip
*		Value		Description				Wait For
*		0			Launch Detect			vel > define mm/s && a > define (mm/s^2) (takeoff)
*		1			CoastDetect			    acc < 0 mm/s^2 (motor burnout)
*		2			ApogeeDetect		    vel < 0 mm/s (apogee)
*		3 			mainDetect				alt < 0 (mm) (main deployment)
*		4 			groundDetect		    gyroX, gyroY, gyroZ < 200 for 100 count in a row (on ground)
*		5			On Ground
*/

//Control on when to detect events
#define VELOCITY_LAUNCH_DETECT				15000 //(mm/s)
#define ACCELAXIAL_LAUNCH_DETECT			4900 //(mm/s^2) (gravity subtracted from this input)
#define ACCELERATION_COAST_DETECT			0 //(mm/s^2)
#define VELOCITY_APOGEE_DETECT				0 //(mm/s)
#define ALTITUDE_MAIN_DETECT				500000 //(mm) minimum main detect value - superseded by user value if user value is greater
#define GYRO_GROUND_DETECT					200 //2 byte result
#define GROUND_COUNT_DETECT					100 //number of gyro counts required on ground

class flightLogic {

public:
	flightLogic();

	enum flightPhases {detectLaunch,      //vel > define cm/s && a > define (cm/s^2) (takeoff)
	                   motorBurn,         //acc < 0 mm / s ^ 2 (motor burnout)
	                   coast,             //vel < 0 mm / s(apogee)
	                   drogueDescent,     //alt < mainAltitude (mm) (main deployment)
	                   mainDescent,       //gyroX, gyroY, gyroZ < 200 for 100 count in a row (on ground)
	                   ground};

	flightPhases flightPhase; //keeps track of system state using flight logic above
	uint8_t flightStatus; //flightPhase described as integer. Used for data recording 
	int32_t altitudeMainDeploy; //(cm) altitude to deploy main parachute
	uint8_t flightStatusAsInt; //convert flightPhases enum to integer, used for data storage

	void initialize(const int32_t& altitudeMainDeployUser);
	uint8_t update(const int32_t& acceleration, const int32_t& velocity, const int32_t& altitude,
					const int16_t& gyroX, const int16_t& gyroY, const int16_t& gyroZ);
	void launchDetect(const int32_t& acceleration, const int32_t& velocity); //detect launch
	void coastDetect(const int32_t& acceleration); //detect motor burnout
	void apogeeDetect(const int32_t& velocity); //detect apogee 
	void mainDetect(const int32_t& altitude); //detect main parachute deployment
	void landingDetect(const int16_t& gyroX, const int16_t& gyroY, const int16_t& gyroZ); //detect landing
	bool gyroTest(const int16_t& gyro);

};

#endif 