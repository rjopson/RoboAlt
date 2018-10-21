/*
 *AT45DB641.h
 *
 * This class interacts with the AT45DB641 memory chip. Read/write to buffer and memory, erase supported

*/

#ifndef _AT45DB641_H
#define _AT45DB641_H

#include <SPI.h>
#include "pins.h"
//#include "wiring_private.h"

//Commands from AT45DB641E datasheet
//Read Commands
#define AT45DB641_MEMORY_PAGE_READ 							0xD2
#define AT45DB641_CONT_ARRAY_READ_LP						0x01
#define AT45DB641_CONT_ARRAY_READ_LF						0x03
#define AT45DB641_CONT_ARRAY_READ_HF						0x1B
#define AT45DB641_BUFFER_1_READ								0xD4
#define AT45DB641_BUFFER_2_READ								0xD6

//Program and Erase Commands
#define AT45DB641_BUFFER_1_WRITE							0x84
#define AT45DB641_BUFFER_2_WRITE							0x87
#define AT45DB641_BUFFER_1_TO_MEMORY						0x83
#define AT45DB641_BUFFER_2_TO_MEMORY						0x86
#define AT45DB641_MEMORY_BUFFER_1_DIRECT_WRITE				0x82
#define AT45DB641_MEMORY_BUFFER_2_DIRECT_WRITE				0x85
#define AT45DB641_PAGE_ERASE								0x81
#define AT45DB641_BLOCK_ERASE								0x50
#define AT45DB641_SECTOR_ERASE								0x7C
#define AT45DB641_READ_MODIFY_WRITE_BUFFER_1				0x58
#define AT45DB641_READ_MODIFY_WRITE_BUFFER_2				0x59

//Additional Commands
#define AT45DB641_MEMORY_PAGE_TO_BUFFER_1					0x53
#define AT45DB641_MEMORY_PAGE_TO_BUFFER_2					0x55
#define AT45DB641_STATUS_REGISTER_READ						0xD7

//Hardware pins
#define DATAOUT 											PIN_DATAOUT 		
#define DATAIN												PIN_DATAIN			
#define SPICLOCK											PIN_SPICLOCK		
#define SLAVESELECT											PIN_SLAVESELECT		
#define WRITE_PROTECT										PIN_WRITE_PROTECT	

#define AT45DB641_TRANSFER_TIMEOUT							100 //time in ms to exit while loops checking for successful transfer

class AT45DB641 {
public:
	AT45DB641();

	uint32_t timeStartTimeout;

	void initialize();
	void spiToggleCS(); //toggle CS pin high then low to send instructions
	unsigned char spiTransfer(unsigned char data); //transfer data
	unsigned char readRegisterStatus(); //Read register status and return. 
	bool checkTimeout(); //make sure we haven't been waiting longer than timeout
	void confirmTransfer(); //wait for success code for memory transfer functions
	uint8_t readByteFromBuffer(const uint8_t& bufferSwitchInput, const uint16_t& bufferAddressInput);
	void memoryToBuffer(const uint8_t& bufferSwitchInput, const uint16_t& pageAddressInput);
	void writeByteToBuffer(const uint8_t& bufferSwitchInput, const uint16_t& bufferAddressInput, const uint16_t& dataInput);
	void transferBufferToMemory(const uint8_t& bufferSwitchInput, const uint16_t& pageAddressInput);
	void erasePage(const uint16_t& pageAddressInput);
};
#endif