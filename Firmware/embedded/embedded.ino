/*
 Name:		embedded.ino
 Created:	10/17/2018 9:37:02 PM
 Author:	Jim
*/

#if defined(ARDUINO_SAMD_ZERO) && defined(SERIAL_PORT_USBVIRTUAL)
// Required for Serial on Zero based boards
#define Serial SERIAL_PORT_USBVIRTUAL
#endif

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
#include "src/validateSensorData.h"

#include "src/dataStorage.h"
#include "src/userSettings.h"
#include "src/flightDataStorage.h"
#include "src/manageIO.h"

#include "src/manageSensorsAndControl.h"

//Define global variables

//Pyro control and output
pyro pyroApo(true, pyro::apogee, 800);
pyro pyroMain(true, pyro::main, 800);
pyro pyroThird(true, pyro::third, 800);
pyroContinuity pyro_continuity;

//All sensors and data reduction
manageSensorsAndControl sensorsAndControl;

//Saved user settings and flight data
dataStorage* data_storage = new dataStorage;
userSettings user_settings(data_storage);
flightDataStorage flightData_storage(data_storage);
rawFlightData* recordData = new rawFlightData;
debugFlightData* debugData = new debugFlightData;

validateSensorData validData;

//Serial IO
manageIO GUI_IO;

//Buzzer
buzzer buzzer_(true);
bool flightEnd = false;

// the setup function runs once when you press reset or power the board
void setup() {
	
	//Set pyro pins low
	pinMode(pyroApo.pinOutput, OUTPUT);
	pinMode(pyroMain.pinOutput, OUTPUT);
	pinMode(pyroThird.pinOutput, OUTPUT);
	digitalWrite(pyroApo.pinOutput, LOW);
	digitalWrite(pyroMain.pinOutput, LOW);
	digitalWrite(pyroThird.pinOutput, LOW);

	Serial.begin(38400);

	//Initialize flash chip, read user settings, initialize flightDataStorage
	data_storage->initialize();
	user_settings.readCurrentSettings();
	flightData_storage.initialize(&user_settings);
	
	//Beep to indicate power
	buzzer_.onOffSwitch(user_settings.buzzerSwitch);
	buzzer_.toneStartup();
	delay(2000);

	//Initialize sensors, data processing and filtering
	sensorsAndControl.initialize(user_settings.altitudeMainDeploy);
	sensorsAndControl.update(); //Get one line of sensor data
	delay(100);

	//Initialize pyro pins
	pyroApo.initialize(user_settings.apoFlightEvent, user_settings.apoTimeDelay);
	pyroMain.initialize(user_settings.mainFlightEvent, user_settings.mainTimeDelay);
	pyroThird.initialize(user_settings.thirdFlightEvent, user_settings.thirdTimeDelay);
	pyro_continuity.apo = pyroApo.continuityAnalog;
	pyro_continuity.main = pyroMain.continuityAnalog;
	pyro_continuity.third = pyroThird.continuityAnalog;
	delay(100);

	//Initialize GUI_IO
	GUI_IO.initialize(&user_settings, &flightData_storage);

	//check for good sensor data
	*debugData = sensorsAndControl.getDebugFlightData(pyro_continuity);
	validData.checkAll(*debugData, sensorsAndControl.calibration_data);

	Serial.print("Valid data check: ");  Serial.println(validData.dataValid);
	Serial.print("Valid altitude check: ");  Serial.println(validData.altitude);
	Serial.print("Valid accelAxial check: ");  Serial.println(validData.accelAxial);
	Serial.print("Valid pressure check: ");  Serial.println(validData.pressure);
	Serial.print("Valid temperature check: ");  Serial.println(validData.temperature);
	Serial.print("Valid accelMPU check: ");  Serial.println(validData.accelMPU);
	Serial.print("Valid accelH3LIS check: ");  Serial.println(validData.accelH3LIS);
	Serial.print("Valid accelMPU_padcheck: ");  Serial.println(validData.accelMPU_pad);
	Serial.print("Valid accelH3LIS_pad check: ");  Serial.println(validData.accelH3LIS_pad);
	Serial.print("Battery voltage: "); Serial.println(sensorsAndControl.engineering_data.voltageBattery);

	//beep pre flight
	buzzer_.preFlightChecks(validData.dataValid, sensorsAndControl.engineering_data.voltageBattery/1000, pyroApo.continuityBool, pyroMain.continuityBool, pyroThird.continuityBool);
	delay(2000);
}


// the loop function runs over and over again until power down or reset
void loop() {
  
	//Get new sensor data and process
	sensorsAndControl.update();
	*recordData = sensorsAndControl.getRawFlightData(pyro_continuity);
	*debugData = sensorsAndControl.getDebugFlightData(pyro_continuity);

	//Update pyro pins
	pyroApo.update(sensorsAndControl.sensor_data.time, sensorsAndControl.logic.flightStatus);
	pyroMain.update(sensorsAndControl.sensor_data.time, sensorsAndControl.logic.flightStatus);
	pyroThird.update(sensorsAndControl.sensor_data.time, sensorsAndControl.logic.flightStatus);
	pyro_continuity.apo = pyroApo.continuityAnalog;
	pyro_continuity.main = pyroMain.continuityAnalog;
	pyro_continuity.third = pyroThird.continuityAnalog;
	
	//Check for Serial commands
	GUI_IO.checkForCommand(*debugData);

	if (!GUI_IO.connection) {
	
		//Print data - for testing
		GUI_IO.printDataLine(*debugData);
		//GUI_IO.printRawDataLine(*recordData);

		//Save flight data
		//flightData_storage.writeData(sensorsAndControl.engineering_data.time, sensorsAndControl.logic.flightPhase, user_settings.altitudeMainDeploy, recordData, &sensorsAndControl.calibration_data, debugData);
	}

	//flight ready beep
	if (sensorsAndControl.logic.flightPhase == flightLogic::detectLaunch) {
		buzzer_.onOffSwitch(user_settings.buzzerSwitch);
		buzzer_.flightReady(validData.dataValid, sensorsAndControl.engineering_data.time);
	} 

	//flight end beep
	if (flightEnd == false && sensorsAndControl.logic.flightPhase == flightLogic::ground) {
		flightEnd = true;
		buzzer_.toneFlightReady();
	}
}
