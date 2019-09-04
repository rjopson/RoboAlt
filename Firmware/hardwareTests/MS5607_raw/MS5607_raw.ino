/*
 Name:		MS5607_raw.ino
 Created:	8/26/2019 6:36:20 PM
 Author:	Jim
*/

#if defined(ARDUINO_SAMD_ZERO) && defined(SERIAL_PORT_USBVIRTUAL)
// Required for Serial on Zero based boards
#define Serial SERIAL_PORT_USBVIRTUAL
#endif

#include <SPI.h>
#include <Wire.h>
#include "I2C.h"
#include "MS5607.h"

MS5607 baroTemp;

// the setup function runs once when you press reset or power the board
void setup() {

	Serial.begin(38400);
	Wire.begin();
	delay(500);
	baroTemp.initialize();
	delay(500);

}

// the loop function runs over and over again until power down or reset
void loop() {

	/* Get 3 byte, uncorrected raw pressure
	* min value = 0
	* max value = 16777216
	* typical = ~6465444
	*/
	uint32_t pressure = baroTemp.getRawPressure();
	delay(1);

	/* Get 3 byte, uncorrected raw temperature
	* min value = 0
	* max value = 16777216
	*typical = ~8077636
	*/
	uint32_t temperature = baroTemp.getRawTemperature();
	delay(1);

	//Print
	Serial.print("raw pressure: "); 
	Serial.print(pressure);
	Serial.print("  raw temperature: "); 
	Serial.println(temperature);	
}
