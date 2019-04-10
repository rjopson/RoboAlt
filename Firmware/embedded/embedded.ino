/*
 Name:		embedded.ino
 Created:	10/17/2018 9:37:02 PM
 Author:	Jim
*/

#include <SPI.h>
#include <Wire.h>

//Drivers
#include "driver/pins.h"
#include "driver/AT45DB641.h"
#include "driver/buzzer.h"
#include "driver/I2C.h"
#include "driver/H3LIS331DL.h"
#include "driver/MPU6050.h"
#include "driver/MS5607.h"
#include "driver/analogPinRead.h"
#include "driver/pyro.h"
#include "driver/sensors.h"

#include "src/dataStructures.h"
#include "src/sensorOffset.h"
#include "src/IMU.h"
#include "src/baroAndTemp.h"
#include "src/calculateAltitude.h"
#include "src/flightLogic.h"
#include "src/matrixMath.h"
#include "src/kalman.h"
#include "src/processData.h"

#include "src/dataStorage.h"
#include "src/userSettings.h"
#include "src/flightDataStorage.h"

#include "src/manageSensorsAndControl.h"

//Define global variables

//Pyro control and output
pyro pyroApo(true, pyro::apogee, 800);
pyro pyroMain(true, pyro::main, 800);
pyro pyroThird(true, pyro::third, 800);

//All sensors and data reduction
manageSensorsAndControl sensorsAndControl;

//Saved user settings and flight data
dataStorage* data_storage;
userSettings user_settings(data_storage);
flightDataStorage flightData_storage(data_storage);

//Buzzer
buzzer buzzer_(1);

// the setup function runs once when you press reset or power the board
void setup() {
	
	//Set pyro pins low
	pinMode(pyroApo.pinOutput, OUTPUT);
	pinMode(pyroMain.pinOutput, OUTPUT);
	pinMode(pyroThird.pinOutput, OUTPUT);
	digitalWrite(pyroApo.pinOutput, LOW);
	digitalWrite(pyroMain.pinOutput, LOW);
	digitalWrite(pyroThird.pinOutput, LOW);

	//Beep to indicate power
	buzzer_.toneStartup();

	//Initialize flash chip, read user settings, initialize flightDataStorage
	data_storage->initialize();
	user_settings.readCurrentSettings();
	flightData_storage.initialize();

	//Initialize sensors, data processing and filtering
	sensorsAndControl.initialize(user_settings.altitudeMainDeploy);

	//Initialize pyro pins
	pyroApo.initialize(user_settings.apoFlightEvent, user_settings.apoTimeDelay);
	pyroMain.initialize(user_settings.mainFlightEvent, user_settings.mainTimeDelay);
	pyroThird.initialize(user_settings.thirdFlightEvent, user_settings.thirdTimeDelay);

	//Get one line of sensor data
	sensorsAndControl.update();

}

// the loop function runs over and over again until power down or reset
void loop() {
  
	//Get new sensor data and process
	sensorsAndControl.update();

	//Update pyro pins
	pyroApo.update(sensorsAndControl.sensor_data.time, sensorsAndControl.logic.flightStatus);
	pyroMain.update(sensorsAndControl.sensor_data.time, sensorsAndControl.logic.flightStatus);
	pyroThird.update(sensorsAndControl.sensor_data.time, sensorsAndControl.logic.flightStatus);

	//Save flight data

}
