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

#include "src/manageSensorsAndControl.h"

//Define global variables
pyro pyroApo(true, 1, 800);
pyro pyroMain(true, 2, 800);
pyro pyroThird(true, 3, 800);
manageSensorsAndControl sensorsAndControl;


// the setup function runs once when you press reset or power the board
void setup() {
	
	//Set pyro pins low
	pinMode(pyroApo.pin, OUTPUT);
	pinMode(pyroMain.pin, OUTPUT);
	pinMode(pyroThird.pin, OUTPUT);
	digitalWrite(pyroApo.pin, LOW);
	digitalWrite(pyroMain.pin, LOW);
	digitalWrite(pyroThird.pin, LOW);

	//Read user settings

	//Initialize sensors, data processing and filtering
	sensorsAndControl.initialize(50000);

	//Initialize pyro pins
	//pyroApo.initialize(userSettings.apoFlightEvent, userSettings.apoTimeDelay);
	//pyroMain.initialize(userSettings.mainFlightEvent, userSettings.mainTimeDelay);
	//pyroThird.initialize(userSettings.thirdFlightEvent, userSettings.thirdTimeDelay);

}

// the loop function runs over and over again until power down or reset
void loop() {
  
	//Get new sensor data and process
	sensorsAndControl.update();

	//Update pyro pins
	//pyroApo.update(sensorsAndControl.sensor_data.time, sensorsAndControl.logic.flightStatus);
	//pyroMain.update(sensorsAndControl.sensor_data.time, sensorsAndControl.logic.flightStatus);
	//pyroThird.update(sensorsAndControl.sensor_data.time, sensorsAndControl.logic.flightStatus);
}
