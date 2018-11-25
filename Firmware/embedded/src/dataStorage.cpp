/*
 * dataStorage.cpp
 */

#include "dataStorage.h"

 /* Default constructor
  */
dataStorage::dataStorage() {

}

void dataStorage::initialize() {
	dataFlashChip.initialize();
}

/* Flip buffer between 1 and 2
 *
 */
void dataStorage::flipBuffer() {

	if (bufferSwitch == 1) {
		bufferSwitch == 2;
	}
	else {
		bufferSwitch = 1;
	}
}

/* Input desired page to begin writing on and reset buffer counter and switch
 *
 */
void dataStorage::startWrite(const uint16_t& pageAddress) {
	pageCount = pageAddress;
	bufferCount = 0;
	bufferSwitch = 1;
}

/* Write any existing data in current SRAM buffer to memory
 *
 */
void dataStorage::endWrite() {

	if (bufferCount != 0) { //make sure page wasn't just written

		dataFlashChip.bufferToMemory(bufferSwitch, pageCount);
		pageCount++;
		bufferCount = 0;
	}
}

/* Write byte of data to flash. Updates internal variables:
 * -bufferSwitch, flips between 1 and 2
 * -bufferCount - between 0 and 264, if equal to 264 write buffer to page
 * -pageCount - if above happens, add 1 to page count
 */
void dataStorage::writeByte(const uint8_t& data) {

	dataFlashChip.writeByteToBuffer(bufferSwitch, bufferCount, data);
	bufferCount++;

	//if max bytes in buffer is reached, transfer to memory
	if (bufferCount == BUFFER_LENGTH) {

		dataFlashChip.bufferToMemory(bufferSwitch, pageCount);
		pageCount++;
		bufferCount = 0;
		flipBuffer();
	}
}

/* Write 16 bit integer
 *
 */
void dataStorage::writeInt16(const uint16_t& data) {
	writeByte((data >> 8) & 0xFF);
	writeByte(data & 0xFF);
}

/* Write 32 bit integer
 *
 */
void dataStorage::writeInt32(const uint32_t& data) {
	writeByte((data >> 24) & 0xFF);
	writeByte((data >> 16) & 0xFF);
	writeByte((data >> 8) & 0xFF);
	writeByte(data & 0xFF);
}

void dataStorage::startRead(const uint16_t& pageAddress) {

	pageCount = pageAddress;
	bufferCount = 0;
	bufferSwitch = 1;

	//Transfer page of data from main memory to buffer to begin read and update count
	dataFlashChip.memoryToBuffer(bufferSwitch, pageCount);
}

/* Read byte of data to flash. Updates internal variables:
 * -bufferSwitch, flips between 1 and 2
 * -bufferCount - between 0 and 264, if equal to 264 write buffer to page
 * -pageCount - if above happens, add 1 to page count
 */
uint8_t dataStorage::readByte() {

	uint8_t data;
	data = dataFlashChip.readByteFromBuffer(bufferSwitch, bufferCount);
	bufferCount++;

	//if buffer count reaches size of page, get new page and update buffer and page numbers
	if (bufferCount == BUFFER_LENGTH) {

		flipBuffer();
		pageCount++;
		dataFlashChip.memoryToBuffer(bufferSwitch, pageCount);
		bufferCount = 0;
	}
}

/* Read 16 bit integer
 *
 */
uint16_t dataStorage::readInt16() {

	uint16_t buffer[2];
	buffer[0] = (uint16_t)readByte();
	buffer[1] = (uint16_t)readByte();

	return (uint16_t)((	buffer[0] << 8) |
						buffer[1]);
}

/* Read 32 bit integer
 *
 */
uint32_t dataStorage::readInt32() {

	uint32_t buffer[4];
	buffer[0] = (uint32_t)readByte();
	buffer[1] = (uint32_t)readByte();
	buffer[2] = (uint32_t)readByte();
	buffer[3] = (uint32_t)readByte();

	return (uint32_t)(	(buffer[0] << 24) |
						(buffer[1] << 16) |
						(buffer[2] << 8) |
						 buffer[3]);
}