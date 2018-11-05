/*
 *dataStorage.h
 *
 * This class abstracts data read/write to AT45DB641 chip as read/write byte, int16, int32

*/

#ifndef _DATASTORAGE_H
#define _DATASTORAGE_H

#include "../driver/AT45DB641.h"

#define BUFFER_LENGTH 264 //number of bytes each buffer can hold 

class dataStorage {
public:
	dataStorage();

	void flipBuffer();

	void startWrite(const uint16_t& pageAddress);
	void endWrite();
	void writeByte(const uint8_t& data);
	void writeInt16(const uint16_t& data);
	void writeInt32(const uint32_t& data);

	void startRead(const uint16_t& pageAddress);
	uint8_t readByte();
	uint16_t readInt16();
	uint32_t readInt32();

	AT45DB641 dataFlashChip;
	uint8_t bufferSwitch; //track which buffer is being read from/written to
	uint16_t bufferCount; //track location within page data being read/written
	uint16_t pageCount; //track page number data being read/written. Update within class
};
#endif