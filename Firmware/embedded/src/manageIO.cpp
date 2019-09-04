
#include "manageIO.h"

/**Default constructor
 */
manageIO::manageIO() {
	connection = false;
	newCommand = false;
}

void manageIO::initialize(userSettings* settingsIn, flightDataStorage* flightDataIn) {
	settings = settingsIn;
	flightData = flightDataIn;
}

void manageIO::checkForCommand(const debugFlightData& dataIn) {

	while (Serial.available()) {
		getSerialCommand();
		respondToSerial(dataIn);
	}
}

//public function which looks for serial command, then runs appropriate function upon receiving

void manageIO::respondToSerial(const debugFlightData& dataIn) {

	if (newCommand == true) {

		switch (command) {

		case LIVE_DATA_REQUEST:
			printDataLine(dataIn); //print line of data to serial
			Serial.println(command);
			Serial.flush();
			break;

		case PROGRAM_ALTIMETER:
			saveIncomingFlightSettings(); //save incoming user flight settings from Qt to flash memory
			Serial.println(command);
			Serial.flush();
			break;

		case RETRIVE_CURRENT_PROGRAMMING:
			getCurrentFlightSettings(); //get current flight settings from flash and write to serial
			Serial.println(command);
			Serial.flush();
			break;

		case DOWNLOAD_FLIGHT_DATA:
			writeFlightData(); //write flight data to Qt
			Serial.println(command);
			Serial.flush();
			break;

		case CLEAR_FLIGHT_DATA:
			Serial.println(command);
			Serial.flush();
			break;

		case TEST_FLIGHT:
			Serial.println(command);
			Serial.flush();
			break;

		case SET_FLIGHT_ID:
			flightData->setFlightID(1);
			Serial.println(command);
			Serial.flush();
			break;

		case DEBUG_DISCONNECT:
			debugDisconnect();
			Serial.println(command);
			Serial.flush();
			break;

		case GET_FLIGHT_ID:
			getFlightID();
			Serial.println(command);
			Serial.flush();
			break;
		}		
	}
}

//get incoming command from Serial to determine function to respond with
void manageIO::getSerialCommand() {
	
	if (Serial.available()) {
		command = (char)Serial.read();
		connection = true;
		newCommand = true;
	}
	else {
		newCommand = false;
	}
}

/** Save incoming user flight settings from Serial to flash memory
* Format:	mainDeploy,apoUse,mainUse,thirdUse,apoDelay,mainDelay,thirdDelay
* Example:	$,500000,3,4,3,0,0,500,0
* example above sets:
*	-main to deploy at 50000
*	-apoUse to fire at apogee, delay 0 ms
*	-mainUse to fire at main, delay 0 ms
*	-third use to fire at apogee, delay 500 ms
*   -buzzer on/off
*/
void manageIO::saveIncomingFlightSettings() {

	//Read serial data, save to flash
	if (Serial.available()) {
		settings->altitudeMainDeploy = Serial.parseInt(); //main detect altitude
		settings->apoFlightEvent = Serial.parseInt(); //apogee output
		settings->mainFlightEvent = Serial.parseInt(); //main output
		settings->thirdFlightEvent = Serial.parseInt(); //third output
		settings->apoTimeDelay = Serial.parseInt(); //apogee output delay
		settings->mainTimeDelay = Serial.parseInt(); //main output delay
		settings->thirdTimeDelay = Serial.parseInt(); //third output delay
		settings->buzzerSwitch = Serial.parseInt(); //buzzerSwitch
		settings->writeNewSettings();
	}
}

/** Get currentflash flight settings and write to serial
 * Format:	mainDeploy,apoUse,mainUse,thirdUse,apoDelay,mainDelay,thirdDelay
 * Example:	50000,3,4,3,0,0,500
 * example above sets:
 *	-main to deploy at 50000
 *	-apoUse to fire at apogee, delay 0 ms
 *	-mainUse to fire at main, delay 0 ms
 *	-third use to fire at apogee, delay 500 ms
 */
void manageIO::getCurrentFlightSettings() {

	settings->readCurrentSettings();

	//Read flash data, write to serial
	Serial.print(settings->altitudeMainDeploy); Serial.print(F(",")); //main detect altitude
	Serial.print(settings->apoFlightEvent); Serial.print(F(","));//apogee output
	Serial.print(settings->mainFlightEvent); Serial.print(F(","));//main output
	Serial.print(settings->thirdFlightEvent); Serial.print(F(","));//third output
	Serial.print(settings->apoTimeDelay); Serial.print(F(","));//apogee output delay
	Serial.print(settings->mainTimeDelay); Serial.print(F(","));//main output delay
	Serial.print(settings->thirdTimeDelay); Serial.print(F(",")); //third output delay
	Serial.println(settings->buzzerSwitch);
	Serial.flush();
}

/** Write flight data to Serial
* ^,0 requests most recent flight
*/
void manageIO::writeFlightData() {

	int flightID_in = Serial.parseInt(); //get flightID which should be downloaded
	int altFlightID = mapFlightID_serialToALT(flightID_in); //convert Serial id to altimeter id

	flightData->readData(altFlightID); //print flight data to serial
}

/** Map request from Serial (latest, -1, -2, oldest represented by 0,1,2,3)
 * to ALT flightID memory (loops through 0,1,2,3)
 * Used to make request when downloading data
 */
int8_t manageIO::mapFlightID_serialToALT(const int& SerialFlightID_in) {
	int8_t flightID_request = (int8_t)flightData->flightID - (int8_t)SerialFlightID_in - 1;
	if (flightID_request < 0) {
		flightID_request += 4;
	}
	return flightID_request;
}

/*print full line of data
0	time(ms)
1	flightStatus
2	altitude(mm)
3	velocity(mm / s)
4	acceleration(mm / s2)
5	altitudeBaro(mm)
6	accelAxial(mm / s2)
7	pressure(Pa)
8	temperature(100 * degC)
9	MPU_accelX(2byte 16g)
10	MPU_accelY(2byte 16g)
11	MPU_accelZ(2byte 16g)
12	MPU_gyroX(2byte 2000deg / s)
13	MPU_gyroY(2byte 2000deg / s)
14	MPU_gyroZ(2byte 2000deg / s)
15	H3LIS_accelY(2byte 200g)
16	MS5607_pressure(4 byte)
17	MS5607_temperature(4byte)
18	voltageAnalog(10 bit)
19	continuityApo(10 bit)
20	continuityMain(10 bit)
21	continuityThird(10 bit)
*/
void manageIO::printDataLine(const debugFlightData& dataIn) {

	Serial.print(dataIn.time);							Serial.print(F(",")); //time
	Serial.print(dataIn.flightStatus);					Serial.print(F(",")); //flightStatus
	Serial.print(dataIn.altitude);						Serial.print(F(",")); //altitude
	Serial.print(dataIn.velocity);						Serial.print(F(",")); //velocity
	Serial.print(dataIn.acceleration);					Serial.print(F(",")); //acceleration
	Serial.print(dataIn.altitudeBaro);					Serial.print(F(",")); //altitudeBaro
	Serial.print(dataIn.accelAxial);					Serial.print(F(",")); //accelAxial
	Serial.print(dataIn.pressure);						Serial.print(F(",")); //pressure
	Serial.print(dataIn.temperature);					Serial.print(F(",")); //temperature
	Serial.print(dataIn.MPU_accelX);					Serial.print(F(",")); //MPU_accelX
	Serial.print(dataIn.MPU_accelY);					Serial.print(F(",")); //MPU_accelY
	Serial.print(dataIn.MPU_accelZ);					Serial.print(F(",")); //MPU_accelZ
	Serial.print(dataIn.MPU_gyroX);					Serial.print(F(",")); //MPU_gyroX
	Serial.print(dataIn.MPU_gyroY);					Serial.print(F(",")); //MPU_gyroY
	Serial.print(dataIn.MPU_gyroZ);					Serial.print(F(",")); //MPU_gyroZ
	Serial.print(dataIn.H3LIS_accelY);					Serial.print(F(",")); //H3LIS_accelY
	Serial.print(dataIn.MS5607_pressure);				Serial.print(F(",")); //MS5607_pressure(4 byte)
	Serial.print(dataIn.MS5607_temperature);			Serial.print(F(",")); //MS5607_temperature(4 byte)	
	Serial.print(dataIn.voltageAnalog);				Serial.print(F(",")); //voltage
	Serial.print(dataIn.continuityApo);				Serial.print(F(",")); //continuityApo
	Serial.print(dataIn.continuityMain);				Serial.print(F(",")); //continuityMain
	Serial.println(dataIn.continuityThird);				   //continuityThird
	Serial.flush();
}

void manageIO::printRawDataLine(const rawFlightData& dataIn) {

	Serial.print(dataIn.time);							Serial.print(F(",")); //time
	Serial.print(dataIn.MPU_accelX);					Serial.print(F(",")); //MPU_accelX
	Serial.print(dataIn.MPU_accelY);					Serial.print(F(",")); //MPU_accelY
	Serial.print(dataIn.MPU_accelZ);					Serial.print(F(",")); //MPU_accelZ
	Serial.print(dataIn.MPU_gyroX);					Serial.print(F(",")); //MPU_gyroX
	Serial.print(dataIn.MPU_gyroY);					Serial.print(F(",")); //MPU_gyroY
	Serial.print(dataIn.MPU_gyroZ);					Serial.print(F(",")); //MPU_gyroZ
	Serial.print(dataIn.H3LIS_accelY);					Serial.print(F(",")); //H3LIS_accelY
	Serial.print(dataIn.MS5607_pressure);				Serial.print(F(",")); //MS5607_pressure(4 byte)
	Serial.print(dataIn.MS5607_temperature);			Serial.print(F(",")); //MS5607_temperature(4 byte)	
	Serial.print(dataIn.voltageAnalog);				Serial.print(F(",")); //voltage
	Serial.print(dataIn.continuityApo);				Serial.print(F(",")); //continuityApo
	Serial.print(dataIn.continuityMain);				Serial.print(F(",")); //continuityMain
	Serial.println(dataIn.continuityThird);				   //continuityThird
	Serial.flush();
}

void manageIO::debugDisconnect() {
	connection = false;
}

void manageIO::getFlightID() {
	flightData->getFlightID();
}