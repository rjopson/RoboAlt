/*
 Name:		sensorClassTest.ino
 Created:	8/26/2019 9:09:19 PM
 Author:	Jim
*/

#define TEST_SWITCH 1

#if defined(ARDUINO_SAMD_ZERO) && defined(SERIAL_PORT_USBVIRTUAL)
// Required for Serial on Zero based boards
#define Serial SERIAL_PORT_USBVIRTUAL
#endif

#include "dataStructures.h"
#include "sensors.h"

sensorData sensor_data;
sensors drivers;

// the setup function runs once when you press reset or power the board
void setup() {

	Serial.begin(38400);
	delay(100);
	drivers.initialize(&sensor_data);
}

// the loop function runs over and over again until power down or reset
void loop() {
  
	//Get sensor data
	drivers.getData(&sensor_data);

	Serial.print(sensor_data.time); Serial.print(" ");
	Serial.print("   ");
	Serial.print(sensor_data.accelX); Serial.print(" ");	
	Serial.print(sensor_data.accelY); Serial.print(" ");
	Serial.print(sensor_data.accelZ); Serial.print(" ");
	Serial.print(sensor_data.gyroX); Serial.print(" ");
	Serial.print(sensor_data.gyroY); Serial.print(" ");
	Serial.print(sensor_data.gyroZ); Serial.print(" ");
	Serial.print("   ");
	Serial.print(sensor_data.accelY_highG); Serial.print(" ");
	Serial.print("   ");
	Serial.print(sensor_data.pressure); Serial.print(" ");
	Serial.print(sensor_data.temperature); Serial.print(" ");
	Serial.println();

	delay(100);
}
