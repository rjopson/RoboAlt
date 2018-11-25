/*
 * flightDataStorage.h
 *
 * This class abstracts data read/write to AT45DB641 chip as read/write byte, int16, int32

*/

#ifndef _FLIGHT_DATA_STORAGE_H
#define _FLIGHT_DATA_STORAGE_H

#include "dataStorage.h"
#include "dataStructures.h"

class flightDataStorage {
public:
	flightDataStorage(dataStorage* dataFlashIn);

	void initialize();
	void writeData(const savedFlightData* dataIn); //public function to save data in logging thread
	void readData(const uint8_t& flightID_in); //public function to read flight data from Qt

	uint8_t flightID; //value of 0-3, where flight written to in flash memory
	void setFlightID(); //Used to set flight ID to flash memory for first time, when setting up altimeter
	dataStorage* dataFlash;

private:
	void setPageNumbers(); //set the page numbers for saving to flightID (0-3)

	//Write functions
	void updateFlightID(); //update flightID when flight is detected
	void writeDataLine(const savedFlightData* data); //save line of flight data
	void writePreflightData(const savedFlightData* data); //double buffer saved data before takeoff
	void writeFlightData(const savedFlightData* dataIn); //save ascent and descent flight data
	void writeFlightInformation(const savedFlightData* data); //save sensor offsets, buffer values, number of lines written

	//Read functions
	void readDataline(); //read line of data
	void readFlightInformation(); //read offsets, buffer values and number of lines written
	void readPreFlightData(); //read preflight data and order buffers appropriately
	void readFlightData(); //read flight data

	//variables used to set pages written to and read from
	uint16_t pageFlightInfo; //page offsets written to
	uint16_t pageBufferOneStart; //page preflight written to
	uint16_t pageBufferOneEnd; //page preflight written to
	uint16_t pageBufferTwoStart; //page preflight written to
	uint16_t pageBufferTwoEnd; //page preflight written to
	uint16_t pageFlightStart; //page in flight data begins recording
	uint16_t pageFlightEnd; //page in flight data ends recording

	//Counts which are used when reading data to Qt
	int16_t preFlightBufferLine; //number of lines written to one of the pre flight buffers
	bool preFlightBufferCurrent; //current preflight buffer. 0 is first, 1 is second
	uint32_t flightLines; //number of lines written during flight
};
#endif