/*
 * manageSensors.cpp
 *
 * This class wraps around all sensor drivers to make it easy to request new sensor data from main file
 */

#include "manageSensors.h"

/* Default constructor
*/
manageSensors::manageSensors() {

}

/* Initialize sensors
 *
 */
void manageSensors::initialize(sensorData* data) {

	//Initialize sensors
	accelGyroHighSensitivity.initialize();
	accelLowSensitivity.initialize();
	baroTemp.initialize();
}

/* get new line of data from sensors
 * raw sensor readings from accelerometers, gyros, temp, pressure and voltage
 */
void manageSensors::getData(sensorData* data) {

	//Time
	data->time = millis();

	//Accelerometers
	accelGyroHighSensitivity.getAcceleration(&data->accelX, &data->accelY, &data->accelZ);
	data->accelY_highG = accelLowSensitivity.getAccelerationY();

	//Gyros
	accelGyroHighSensitivity.getRotation(&data->gyroX, &data->gyroY, &data->gyroZ);

	//Barometer
	data->pressure = baroTemp.getRawPressure();

	//Thermometer
	data->temperature = baroTemp.getRawTemperature();

	//battery voltage
	data->voltageBattery = battery.getBatteryVoltage();
}