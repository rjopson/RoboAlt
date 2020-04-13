/*
 * flightDataStorage.cpp
 */

#include "flightDataStorage.h"

 /* Default constructor - requires dataFlash object to be created. 
  */
flightDataStorage::flightDataStorage(dataStorage* dataFlashIn) {
	dataFlash = dataFlashIn;
	pageWriteCount = 0;
	flightInformationSaved = 0;
	descentPeriod = ALT_DESCENT_PERIOD;
	timePreviousRecording = 0;
}

/* Initialize function. Requires dataFlash object to be initialized.
*/
void flightDataStorage::initialize(userSettings* settingsIn) {
	dataFlash->startRead(ALT_PAGE_FLIGHT_ID);
	flightID = dataFlash->readByte();
	setPageNumbers(flightID);
	user_settings = settingsIn;
}

/*public function to save data in logging thread
*/
void flightDataStorage::writeData(const uint32_t& time, const flightLogic::flightPhases& flightPhaseIn, const rawFlightData* dataIn, const calibrationData* calibrationIn, const debugFlightData* debugDataIn) {

	switch (flightPhaseIn) {

	case flightLogic::detectLaunch: //launch detect
		writePreflightData(dataIn, debugDataIn);
		break;

	case flightLogic::motorBurn: //coast detect
		writeFlightData(dataIn, debugDataIn);
		break;

	case flightLogic::coast: //apogee detect
		writeFlightData(dataIn, debugDataIn);
		break;

	case flightLogic::drogueDescent:
		if (checkDescentPeriod(time)) {
			writeFlightData(dataIn, debugDataIn);
		}
		break;

	case flightLogic::mainDescent:
		if (checkDescentPeriod(time)) {
			writeFlightData(dataIn, debugDataIn);
		}
		break;

	case flightLogic::ground:
		writeFlightInformation(user_settings, calibrationIn);
		break;
	}
}

bool flightDataStorage::checkDescentPeriod(const uint32_t& time) {

	if (time - timePreviousRecording > ALT_DESCENT_PERIOD) {
		timePreviousRecording = time;
		return true;
	}
	else {
		return false;
	}
}

/*public function to read flight data from Qt
*/
void flightDataStorage::readData(const uint8_t& requestID) { 
	
	setPageNumbers(requestID); //set pages number for flight to be read
	readFlightInformation(); //get buffer and flight lengths
	readPreFlightData(); //read preflight data with buffers
	readFlightData(); //read flight data
	Serial.flush();
}

/**set page layout for input flight ID. Broken into:
 *	ALT_PAGEOFFSET number of pages saved for other saved data (currently unused)
 *	ALT_PAGELENGTH_FLIGHT_INFORMATION number of pages to save offsets, buffer value, number of data lines written
 *	ALT_PAGELENGTH_PREFLIGHT_BUFFER number of pages for each buffer in double buffer of recorded preflight data
 *	ALT_PAGELENGTH_INFLIGHT number of pages to save in flight data
 */
void flightDataStorage::setPageNumbers(const uint8_t& flightID_in) {
	//total number of pages used to save data for flight
	uint16_t pageFlightTotal = ALT_PAGELENGTH_FLIGHT_INFORMATION + ALT_PAGELENGTH_PREFLIGHT_BUFFER + ALT_PAGELENGTH_INFLIGHT;

	pageFlightInfo = ALT_PAGEOFFSET + (uint16_t)flightID_in*pageFlightTotal;
	pageBufferOneStart = pageFlightInfo + ALT_PAGELENGTH_FLIGHT_INFORMATION;
	pageBufferOneEnd = pageBufferOneStart + ALT_PAGELENGTH_PREFLIGHT_BUFFER;
	pageBufferTwoStart = pageBufferOneEnd + 1;
	pageBufferTwoEnd = pageBufferTwoStart + ALT_PAGELENGTH_PREFLIGHT_BUFFER;
	pageFlightStart = pageBufferTwoEnd + 1;
	pageFlightEnd = pageBufferTwoEnd + ALT_PAGELENGTH_INFLIGHT;
}

/*Used to set flight ID to flash memory for first time, when setting up altimeter
*/
void flightDataStorage::setFlightID(const uint8_t& flightID_in) {
	
	//Read and print current ID
	dataFlash->startRead(ALT_PAGE_FLIGHT_ID);
	Serial.print("Initial Flight ID: ");
	Serial.println(dataFlash->readByte());

	//Set input ID
	dataFlash->startWrite(ALT_PAGE_FLIGHT_ID);
	dataFlash->writeByte(flightID_in);
	dataFlash->endWrite();

	//Read and print current ID
	dataFlash->startRead(ALT_PAGE_FLIGHT_ID);
	Serial.print("Reset Flight ID: ");
	Serial.println(dataFlash->readByte());
}

/*update flightID when flight is detected
*/
void flightDataStorage::updateFlightID() {
	
	uint8_t flightID_update;

	//update record ID to loop through flights 0-3
	if (flightID < 3) {
		flightID_update = flightID + 1;
	}
	else {
		flightID_update = 0;
	}

	flightID = flightID_update;

	//write updated flightID
	dataFlash->startWrite(ALT_PAGE_FLIGHT_ID);
	dataFlash->writeByte(flightID_update);
	dataFlash->endWrite();
}

/*save line of flight data
* does NOT set write page - this is done in preflight or flight write functions
* 4bit - 3
* 2bit - 11
* 34bits per line
*/
void flightDataStorage::writeDataLine(const rawFlightData* dataIn, const debugFlightData* debugDataIn) {
	
	dataFlash->writeInt32(dataIn->time);

	dataFlash->writeByte(debugDataIn->flightStatus);
	dataFlash->writeInt32(debugDataIn->altitude);
	dataFlash->writeInt32(debugDataIn->velocity);
	dataFlash->writeInt32(debugDataIn->acceleration);
	dataFlash->writeInt32(debugDataIn->altitudeBaro);
	dataFlash->writeInt32(debugDataIn->accelAxial);
	dataFlash->writeInt32(debugDataIn->pressure);
	dataFlash->writeInt32(debugDataIn->temperature);

	dataFlash->writeInt16(dataIn->MPU_accelX);
	dataFlash->writeInt16(dataIn->MPU_accelY);
	dataFlash->writeInt16(dataIn->MPU_accelZ);
	dataFlash->writeInt16(dataIn->MPU_gyroX);
	dataFlash->writeInt16(dataIn->MPU_gyroY);
	dataFlash->writeInt16(dataIn->MPU_gyroZ);
	dataFlash->writeInt16(dataIn->H3LIS_accelY);
	dataFlash->writeInt32(dataIn->MS5607_pressure);
	dataFlash->writeInt32(dataIn->MS5607_temperature);
	dataFlash->writeInt16(dataIn->voltageAnalog);
	dataFlash->writeInt16(dataIn->continuityApo);
	dataFlash->writeInt16(dataIn->continuityMain);
	dataFlash->writeInt16(dataIn->continuityThird);
}

/**Read line of data and print to serial
 * Does NOT set read page - this is done in pre flight and flight read functions
 * Comma delimited printout
 */
void flightDataStorage::readDataline() {

	Serial.print((uint32_t)dataFlash->readInt32());Serial.print(","); //time
	Serial.print((uint8_t)dataFlash->readByte()); Serial.print(","); //flightStatus
	Serial.print(dataFlash->readInt32()); Serial.print(","); //altitude
	Serial.print(dataFlash->readInt32()); Serial.print(","); //velocity
	Serial.print(dataFlash->readInt32()); Serial.print(","); //acceleration
	Serial.print(dataFlash->readInt32()); Serial.print(","); //altitudeBaro
	Serial.print(dataFlash->readInt32()); Serial.print(","); //accelAxial
	Serial.print((uint32_t)dataFlash->readInt32()); Serial.print(","); //pressure
	Serial.print(dataFlash->readInt32()); Serial.print(","); //temperature

	Serial.print(dataFlash->readInt16()); Serial.print(","); //MPU_accelX
	Serial.print(dataFlash->readInt16()); Serial.print(","); //MPU_accelY
	Serial.print(dataFlash->readInt16()); Serial.print(","); //MPU_accelZ
	Serial.print(dataFlash->readInt16()); Serial.print(","); //MPU_gyroX
	Serial.print(dataFlash->readInt16()); Serial.print(","); //MPU_gyroY
	Serial.print(dataFlash->readInt16()); Serial.print(","); //MPU_gyroZ
	Serial.print(dataFlash->readInt16()); Serial.print(","); //H3LIS
	Serial.print((uint32_t)dataFlash->readInt32()); Serial.print(","); //MS5607_pressure
	Serial.print((uint32_t)dataFlash->readInt32()); Serial.print(","); //MS5607_temperature
	Serial.print((uint16_t)dataFlash->readInt16()); Serial.print(","); //voltageAnalog
	Serial.print((uint16_t)dataFlash->readInt16()); Serial.print(","); //continuityApo
	Serial.print((uint16_t)dataFlash->readInt16()); Serial.print(","); //continuityMain
	Serial.print((uint16_t)dataFlash->readInt16()); Serial.print(","); //continuityThird
	Serial.println();
}

/**Double buffer to save preflight data.
 * Designed to save ~15s of data before takeoff
 *
 */
void flightDataStorage::writePreflightData(const rawFlightData* dataIn, const debugFlightData* debugDataIn) {
	
	if (preFlightBufferLine == 0) { //writing hasn't begun yet, only ever 0 before function has run once(at bottom of function, preFlightBufferLine always incremented)
		dataFlash->startWrite(pageBufferOneStart); //start writing at beginning of first buffer
		preFlightBufferCurrent_ = bufferOne;
	}
	else if (preFlightBufferLine == ALT_LINELENGTH_BUFFER_MAX && preFlightBufferCurrent_ == flightDataStorage::bufferOne) { //end of buffer 1, move to buffer 2
		dataFlash->endWrite();
		preFlightBufferCurrent_ = bufferTwo;
		preFlightBufferLine = 0;
		dataFlash->startWrite(pageBufferTwoStart);
	}
	else if (preFlightBufferLine == ALT_LINELENGTH_BUFFER_MAX && preFlightBufferCurrent_ == flightDataStorage::bufferTwo) { //end of buffer 2, move to buffer 1
		dataFlash->endWrite();
		preFlightBufferCurrent_ = bufferOne;
		preFlightBufferLine = 0;
		dataFlash->startWrite(pageBufferOneStart);
	}

	//save line of data to location defined in logic above
	writeDataLine(dataIn, debugDataIn);

	//increment preFlightBufferLine
	preFlightBufferLine++;
}

/** Read preflight data and order buffers
* Order output of data to account for which buffer of double buffer was written into most recently
*/
void flightDataStorage::readPreFlightData() {

	//number of lines written to buffers (one buffer will always be full, other will be filled to length of preFlightBufferLine
	for (long i = 0; i != ALT_LINELENGTH_BUFFER_MAX + preFlightBufferLine; i++) {

		//Serial.print(preFlightBufferLine); Serial.print(" ");
		//Serial.print(i); Serial.print(" ");
		//
		//uint8_t test;
		//if (preFlightBufferCurrent_== flightDataStorage::bufferOne) {
		//	test = 1;
		//}
		//else {
		//	test = 2;
		//}
		//Serial.println(test);
		

		//Set page to read based on whether buffer 1 or buffer 2 was written into last
		if (i == 0 && preFlightBufferCurrent_ == flightDataStorage::bufferOne) { //buffer 2 full, buffer 1 partially filled
			dataFlash->startRead(pageBufferTwoStart); //location to begin reading
		}
		else if (i == 0 && preFlightBufferCurrent_ == flightDataStorage::bufferTwo) { //buffer 1 full, buffer 2 partially filled
			dataFlash->startRead(pageBufferOneStart); //location to begin reading
		}
		else if (i == ALT_LINELENGTH_BUFFER_MAX && preFlightBufferCurrent_ == flightDataStorage::bufferOne) { //read all buffer 2, now read buffer 1
			dataFlash->startRead(pageBufferOneStart); //location to begin reading
		}
		else if (i == ALT_LINELENGTH_BUFFER_MAX && preFlightBufferCurrent_ == flightDataStorage::bufferTwo) { //read all buffer 1, now read buffer 2
			dataFlash->startRead(pageBufferTwoStart); //location to begin reading
		}

		readDataline(); //read line of data
	}
}

/*save ascent and descent flight data
*/
void flightDataStorage::writeFlightData(const rawFlightData* dataIn, const debugFlightData* debugDataIn) {
	
	if (flightLine == 0) { //flight data has not been written yet
		dataFlash->endWrite();
		dataFlash->startWrite(pageFlightStart);
	}

	if (pageWriteCount != ALT_PAGELENGTH_INFLIGHT) { //make sure data doesn't overflow into another flight
		writeDataLine(dataIn, debugDataIn); //save line of data to location defined in logic above
		flightLine++; //increment number of lines of flight data written
	}
}

/*read flight data
*/
void flightDataStorage::readFlightData() {

	dataFlash->startRead(pageFlightStart); //location to begin reading

	for (long i = 0; i != flightLine; i++) {
		readDataline(); //read line of data
	}
}

/*save sensor offsets, buffer values, number of lines written
*/
void flightDataStorage::writeFlightInformation(const userSettings* settingsIn, const calibrationData* dataIn) {

	if (flightInformationSaved == 0) {

		dataFlash->endWrite();
		updateFlightID(); //launch has been detected, update flightID
		dataFlash->startWrite(pageFlightInfo); //location to begin writing

		//Write offsets
		dataFlash->writeByte(ALT_SOFTWARE_VERSION);		
		dataFlash->writeInt16(dataIn->mpuPad);
		dataFlash->writeInt16(dataIn->h3lisPad);
		dataFlash->writeInt32(dataIn->pressurePad);
		dataFlash->writeInt32(dataIn->temperaturePad);		
		dataFlash->writeInt16(dataIn->C[0]);
		dataFlash->writeInt16(dataIn->C[1]);
		dataFlash->writeInt16(dataIn->C[2]);
		dataFlash->writeInt16(dataIn->C[3]);
		dataFlash->writeInt16(dataIn->C[4]);
		dataFlash->writeInt16(dataIn->C[5]);
		dataFlash->writeInt16(dataIn->voltageStartup);
		dataFlash->writeByte(settingsIn->apoFlightEvent);
		dataFlash->writeInt32(settingsIn->apoTimeDelay);
		dataFlash->writeByte(settingsIn->mainFlightEvent);
		dataFlash->writeInt32(settingsIn->mainTimeDelay);
		dataFlash->writeByte(settingsIn->thirdFlightEvent);
		dataFlash->writeInt32(settingsIn->thirdTimeDelay);
		dataFlash->writeInt32(settingsIn->altitudeMainDeploy);

		//Write saved data lengths - preflight
		dataFlash->writeInt16(preFlightBufferLine);
		if (preFlightBufferCurrent_ == flightDataStorage::bufferOne) {
			dataFlash->writeByte(1);
		}
		else {
			dataFlash->writeByte(2);
		}

		//Write saved data lengths - flight
		dataFlash->writeInt32(flightLine);

		dataFlash->endWrite();

		//Make sure above only written once after alt back on ground
		flightInformationSaved = 1;
		
		Serial.println("complete");	
	}	
}

/* read offsets, buffer values and number of lines written
*/
void flightDataStorage::readFlightInformation() {

	dataFlash->startRead(pageFlightInfo); //location to begin reading

	//Read offsets
	//Serial.print(dataFlash->readByte()); Serial.print(","); //version 
	Serial.print("*VERSION,");  Serial.println(ALT_SOFTWARE_VERSION); //Serial.print(","); //version
	Serial.print("*PAD_MPU,");  Serial.println(dataFlash->readInt16()); //mpuPad
	Serial.print("*PAD_H3LIS,");  Serial.println(dataFlash->readInt16()); //h3lisPad
	Serial.print("*PAD_PRESSURE,");  Serial.println((uint32_t)dataFlash->readInt32()); //pressurePad
	Serial.print("*PAD_TEMPERATURE,");  Serial.println(dataFlash->readInt32()); //temperaturePad	
	Serial.print("*CALIBRATION_MS5607,");  Serial.print((uint16_t)dataFlash->readInt16()); Serial.print(","); //C0
	Serial.print((uint16_t)dataFlash->readInt16()); Serial.print(","); //C1
	Serial.print((uint16_t)dataFlash->readInt16()); Serial.print(","); //C2
	Serial.print((uint16_t)dataFlash->readInt16()); Serial.print(","); //C3
	Serial.print((uint16_t)dataFlash->readInt16()); Serial.print(","); //C4
	Serial.println((uint16_t)dataFlash->readInt16());//C5
	Serial.print("*PAD_VOLTAGE");  Serial.println(dataFlash->readInt16()); //voltageStartup
	Serial.print("*APO_EVENT,");  Serial.println(dataFlash->readByte()); //Apogee event
	Serial.print("*APO_DELAY,");  Serial.println(dataFlash->readInt32()); //Apogee delay
	Serial.print("*MAIN_EVENT,");  Serial.println(dataFlash->readByte()); //Main event
	Serial.print("*MAIN_DELAY,");  Serial.println(dataFlash->readInt32()); //Main delay
	Serial.print("*3RD_EVENT,");  Serial.println(dataFlash->readByte()); //3rd event
	Serial.print("*3RD_DELAY,");  Serial.println(dataFlash->readInt32()); //3rd delay
	Serial.print("*ALTITUDE_MAIN,");  Serial.println(dataFlash->readInt32()); //Altitude main
	Serial.print("*DATA_LINES,");  Serial.println(dataFlash->readInt32()); //data lines 
	Serial.println("*DATA");

	//Read preflight buffer information
	preFlightBufferLine = dataFlash->readInt16();
	uint8_t bufferCurrent = dataFlash->readByte();
	if (bufferCurrent == 1) {
		preFlightBufferCurrent_ = flightDataStorage::bufferOne;
	}
	else {
		preFlightBufferCurrent_ = flightDataStorage::bufferTwo;
	}

	//Read number of lines of flight data written
	flightLine = dataFlash->readInt32();

	//Print number of lines of data
	Serial.println(ALT_LINELENGTH_BUFFER_MAX + preFlightBufferLine + flightLine);
}

void flightDataStorage::getFlightID() {
	dataFlash->startRead(ALT_PAGE_FLIGHT_ID);
	Serial.print("Current Flight ID: ");
	Serial.println(dataFlash->readByte());
}