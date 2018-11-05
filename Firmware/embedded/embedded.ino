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

#include "src/dataRecord.h"
#include "src/sensorOffset.h"
#include "src/IMU.h"
#include "src/baroAndTemp.h"
#include "src/calculateAltitude.h"
#include "src/flightLogic.h"

#include "src/dataStorage.h"
#include "src/userSettings.h"


// the setup function runs once when you press reset or power the board
void setup() {

}

// the loop function runs over and over again until power down or reset
void loop() {
  
}
