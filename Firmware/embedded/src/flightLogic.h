/*
 * flightLogic.h
 *
 * This class defines the logic which is used to determine the phase of flight the rocket is in.
 * 
 */

#ifndef _FLIGHTLOGIC_H_
#define _FLIGHTLOGIC_H_

#include <inttypes.h>

/** Flight logic
*		Value		Description				Wait For
*		0			Launch Detect			vel > define cm/s && a > define (cm/s^2) (takeoff)
*		1			CoastDetect			    acc < 0 cm/s^2 (motor burnout)
*		2			ApogeeDetect		    vel < 0 cm/s (apogee)
*		3 			mainDetect				alt < 0 (cm) (main deployment)
*		4 			groundDetect		    gyroX, gyroY, gyroZ < 200 for 100 count in a row (on ground)
*		5			On Ground
*/

//Event state machine definitions			Value	Wait For
#define STATE_MACHINE_LAUNCH_DETECT			0		
#define STATE_MACHINE_MOTOR_BURN			1		//vel > define cm/s && a > define (cm/s^2) (takeoff)
#define STATE_MACHINE_COAST					2		//acc < 0 cm/s^2 (motor burnout)
#define	STATE_MACHINE_DROGUE_DESCENT		3		//vel < 0 cm/s (apogee)
#define STATE_MACHINE_MAIN_DESCENT			4		//alt < 0 (cm) (main deployment)
#define STATE_MACHINE_GROUND				5		//gyroX, gyroY, gyroZ < 200 for 100 count in a row (on ground)

//Control on when to detect events
#define VELOCITY_LAUNCH_DETECT				1500 //(cm/s)
#define ACCELAXIAL_LAUNCH_DETECT			490 //(cm/s^2) (gravity subtracted from this input)
#define ACCELERATION_COAST_DETECT			0 //(cm/s^2)
#define VELOCITY_APOGEE_DETECT				0 //(cm/s)
#define ALTITUDE_MAIN_DETECT				5000 //(cm) minimum main detect value - superseded by user value if user value is greater
#define GYRO_GROUND_DETECT					200 //2 byte result
#define GROUND_COUNT_DETECT					100 //number of gyro counts required on ground

class flightLogic {

public:
	flightLogic();

	uint8_t flightStatus; //keeps track of system state using flight logic above
	int32_t altitudeMainDeploy; //(cm) altitude to deploy main parachute

	void initialize(int32_t altitudeMainDeployUser);
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