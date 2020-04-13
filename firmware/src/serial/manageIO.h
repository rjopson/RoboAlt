

#ifndef _ALT_MANAGEIO_h
#define _ALT_MANAGEIO_h

#include "Arduino.h"
#include "flightDataStorage.h"
#include "userSettings.h"
#include "dataStructures.h"

#if defined(ARDUINO_SAMD_ZERO) && defined(SERIAL_PORT_USBVIRTUAL)
// Required for Serial on Zero based boards
#define Serial SERIAL_PORT_USBVIRTUAL
#endif

/** Commands:
* @ - Live data request
* $ - program altimeter settings
* ! - retrieve current programming
* ^ - download flight data
* & - clear flight data
* % - test flight
* D - debug toggle for connection class member
*/

#define LIVE_DATA_REQUEST			'@'
#define PROGRAM_ALTIMETER			'$' //example:$,500000,3,4,3,0,0,500,0
#define RETRIVE_CURRENT_PROGRAMMING	'!'
#define DOWNLOAD_FLIGHT_DATA		'^'
#define CLEAR_FLIGHT_DATA			'&'
#define TEST_FLIGHT					'%'
#define DEBUG_DISCONNECT			'D'
#define GET_FLIGHT_ID				'F'

#define SET_FLIGHT_ID				'#' //for programming alt for first time

class manageIO {

public:
	manageIO();
	void initialize(userSettings* settingsIn, flightDataStorage* flightDataIn);
	void checkForCommand(const debugFlightData& dataIn);
	void respondToSerial(const debugFlightData& dataIn); //public function which looks for serial command, then runs appropriate function upon receiving
	void getSerialCommand(); //get incoming command from Serial to determine function to respond with
	void getFlightID();
	void printDataLine(const debugFlightData& dataIn); //print full line of data.
	void printRawDataLine(const rawFlightData& dataIn); //print full line of data.
	int16_t timeThreadSleep; //time for IO thread to sleep, depending on whether live data requested or not 
	bool connection; //false if not connected
	bool newCommand; //false if no new incomming command

private:
	userSettings* settings;
	flightDataStorage* flightData;
	char command; //current incoming command from Serial

	void saveIncomingFlightSettings(); //save incoming user flight settings from Serial to flash memory
	void getCurrentFlightSettings(); //get current flash flight settings and write to Serial
	void writeFlightData(); //write flight data to Serial	
	void debugDisconnect();
	int8_t mapFlightID_serialToALT(const int& SerialFlightID_in); //used to request flight data to download. maps flightID from Serial to altimeter
};

#endif