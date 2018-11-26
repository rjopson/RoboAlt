/*
 * sensors.h
 *
 * This class wraps around all sensor drivers to make it easy to request new sensor data from main file
 */

#ifndef _SENSORS_h
#define _SENSORS_h

#include <inttypes.h>
#include "Arduino.h"
#include "dataStructures.h"

//Sensor classes
#include "../driver/H3LIS331DL.h"
#include "../driver/MPU6050.h"
#include "../driver/MS5607.h"
#include "../driver/analogPinRead.h"

#define NUMBER_SAMPLES_AVERAGE		50

class sensors {

public:
	sensors();
	void initialize(sensorData* data); //initialize sensors and filter classes
	void getData(sensorData* data); //get raw sensor readings from accelerometers, gyros, temp, pressure and voltage
	void initializeCalibration(calibrationData* calibration); //initialize offset values 

	//Sensor drivers
	MPU6050 accelGyroHighSensitivity;
	H3LIS331DL accelLowSensitivity;
	MS5607 baroTemp;
	analogPinRead analogData;

};
#endif



