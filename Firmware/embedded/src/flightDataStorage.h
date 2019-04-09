/*
 * flightDataStorage.h
 *
 * This class abstracts data read/write to AT45DB641 chip as read/write byte, int16, int32

*/

#ifndef _FLIGHT_DATA_STORAGE_H
#define _FLIGHT_DATA_STORAGE_H

#include "dataStorage.h"
#include "flightLogic.h"
#include "dataStructures.h"

#if defined(ARDUINO_SAMD_ZERO) && defined(SERIAL_PORT_USBVIRTUAL)
// Required for Serial on Zero based boards
#define Serial SERIAL_PORT_USBVIRTUAL
#endif

//AT45DB641 has 32,768 pages of memory at 264 bytes per page
#define ALT_PAGE_FLIGHT_ID					2 //page where current flight ID written
#define ALT_PAGEOFFSET						5 //number of pages to offset all flight pages
#define ALT_PAGELENGTH_FLIGHT_INFORMATION	1 //number of pages required for flight info - offsets, length of data, 
#define ALT_PAGELENGTH_PREFLIGHT_BUFFER		30 //number of pages used for 1 preflight double buffer (of 2)
#define ALT_PAGELENGTH_INFLIGHT				8100 //number of pages used for flight recording
#define ALT_LINELENGTH_BUFFER_MAX			200 

class flightDataStorage {
public:
	flightDataStorage(dataStorage* dataFlashIn);

	dataStorage* dataFlash;

	void initialize();
	void writeData(const flightLogic::flightPhases& flightPhase, const rawFlightData* dataIn, const calibrationData* calibrationIn); //public function to save data in logging thread
	void readData(const uint8_t& flightID_readIn); //public function to read flight data from Qt

	uint8_t flightID; //value of 0-3, where flight written to in flash memory
	uint8_t flightID_readRequest; //value of 0-3, where user requests flight data to be read

private:
	void setPageNumbers(const uint8_t& flightID_in); //set the page numbers for saving to flightID (0-3)
	void setFlightID(const uint8_t& flightID_in); //Used to set flight ID to flash memory for first time, when setting up altimeter

	//Write functions
	void updateFlightID(); //update flightID when flight is detected
	void writeDataLine(const rawFlightData* dataIn); //save line of flight data
	void writePreflightData(const rawFlightData* dataIn); //double buffer saved data before takeoff
	void writeFlightData(const rawFlightData* dataIn); //save ascent and descent flight data
	void writeFlightInformation(const calibrationData* dataIn); //save sensor offsets, buffer values, number of lines written

	//Read functions
	void readDataline(); //read line of data	
	void readPreFlightData(); //read preflight data and order buffers appropriately
	void readFlightData(); //read flight data
	void readFlightInformation(); //read offsets, buffer values and number of lines written

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
	enum preFlightBufferCurrent { bufferOne, bufferTwo }; //current preflight buffer
	preFlightBufferCurrent preFlightBufferCurrent_;
	uint32_t flightLine; //number of lines written during flight
	uint32_t pageWriteCount; //number of pages that have been written to
	bool flightInformationSaved; //0 if flight information not saved, 1 if it is 
};
#endif