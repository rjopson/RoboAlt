/*
 * AT45DB641.cpp
 */

#include "AT45DB641.h"

/* Default constructor
 */
AT45DB641::AT45DB641() {

}

/* Initialize chip. Set SPI pins and initialize Arduino SPI class
 *
 */
void AT45DB641::initialize() {

	//Set slave and write protect pins
	pinMode(SLAVESELECT, OUTPUT); //ss
	pinMode(WRITE_PROTECT, OUTPUT); //WP
	digitalWrite(SLAVESELECT, HIGH); //disable device
	digitalWrite(WRITE_PROTECT, HIGH); //Write protect high

	//Initialize Arduino SPI class
	SPI.begin();
}

/* Toggle CS pin high then low to signal instructions
 *
 */
void AT45DB641::spiToggleCS() {

	digitalWrite(SLAVESELECT, HIGH);
	digitalWrite(SLAVESELECT, LOW);
}

/* Load output data into data transmission register, then returns data
 * -Poll a bit to the SPI status register (SPSR) to detect when transmission is complete
 * -Returns any data shifted into register
 */
unsigned char AT45DB641::spiTransfer(unsigned char data) {
	
	unsigned char dataOut;
	dataOut = SPI.transfer(data);
	return dataOut;
}

/* Read register status
 *
 */
unsigned char AT45DB641::readRegisterStatus() {
	spiToggleCS(); //toggle to send command
	spiTransfer(AT45DB641_STATUS_REGISTER_READ); //send status register read
	return spiTransfer(0x00); //return register status by writing dummy byte
}

/* make sure we haven't been waiting longer than timeout
 *
 */
bool AT45DB641::checkTimeout() {

	int32_t deltaTime = millis() - timeStartTimeout;
	if (AT45DB641_TRANSFER_TIMEOUT > deltaTime) {
		return 1;
	} 
	else {// past timeout, get out of any while loops
		return 0;
	}
}

/* Check status of register, look for 10111100 (0xBC) to confirm successful transfer
 *
 */
void AT45DB641::confirmTransfer() {	
	
	spiToggleCS(); //toggle to send command
	uint32_t time = millis(); //time read begins, to make sure exit while loop if timeout passed
	while (readRegisterStatus() != 0xBC && checkTimeout()) {}; //monitor status register until busy status is high
}

/* Read byte of data from SRAM buffer
 *
 */
uint8_t AT45DB641::readByteFromBuffer(const uint8_t& bufferSwitch, const uint16_t& bufferAddress) {
	
	spiToggleCS(); //toggle to send command
	if (bufferSwitch == 1) {
		spiTransfer(AT45DB641_BUFFER_1_READ);
	}
	else { //bufferSwitchInput == 2
		spiTransfer(AT45DB641_BUFFER_2_READ);
	}

	//Send 15 dummy bits, 9 buffer address bits (BFA8-BFA0) to choose location to pull from 264 byte buffer
	spiTransfer(0x00);
	spiTransfer((unsigned char)(bufferAddress >> 8)); //Most significant bit
	spiTransfer((unsigned char)(bufferAddress));
	spiTransfer(0x00);
	return spiTransfer(0x00); //send dummy byte to read result
}

/* Transfer page of data from memory to SRAM buffer
 *
 */
void AT45DB641::memoryToBuffer(const uint8_t& bufferSwitch, const uint16_t& pageAddress) {

	spiToggleCS(); //toggle to send command
	if (bufferSwitch == 1) {
		spiTransfer(AT45DB641_MEMORY_PAGE_TO_BUFFER_1);
	}
	else { //bufferSwitchInput == 2
		spiTransfer(AT45DB641_MEMORY_PAGE_TO_BUFFER_2);
	}

	//Send 15 page address bits which specify page in main memory and 9 dummy bits
	spiTransfer((unsigned char)(pageAddress >> 7));
	spiTransfer((unsigned char)(pageAddress << 1));
	spiTransfer(0x00); //dummy bits

	//Wait for signal from chip to confirm successful memory transfer
	confirmTransfer();
}

/* Write byte of data to SRAM buffer
 *
 */
void AT45DB641::writeByteToBuffer(const uint8_t& bufferSwitchInput, const uint16_t& bufferAddress, const uint16_t& dataInput) {

	spiToggleCS(); //toggle to send command
	if (bufferSwitchInput == 1) {
		spiTransfer(AT45DB641_BUFFER_1_WRITE);
	}
	else { //bufferSwitchInput == 2
		spiTransfer(AT45DB641_BUFFER_2_WRITE);
	}

	//Send 15 dummy bits, 9 buffer address bits (BFA8-BFA0) to choose location to place in 264 byte buffer
	spiTransfer(0x00);
	spiTransfer((unsigned char)(bufferAddress>> 8)); //Most significant bit
	spiTransfer((unsigned char)(bufferAddress));
	spiTransfer(dataInput);
}

/* Write page of data from SRAM buffer to main memory
 *
 */
void AT45DB641::bufferToMemory(const uint8_t& bufferSwitch, const uint16_t& pageAddress) {

	spiToggleCS(); //toggle to send command
	if (bufferSwitch == 1) {
		spiTransfer(AT45DB641_BUFFER_1_TO_MEMORY);
	}
	else { //bufferSwitchInput == 2
		spiTransfer(AT45DB641_BUFFER_2_TO_MEMORY);
	}

	//Send 15 page address bits which specify page in main memory and 9 dummy bits
	spiTransfer((unsigned char)(pageAddress >> 7));
	spiTransfer((unsigned char)(pageAddress << 1));
	spiTransfer(0x00); //dummy bits

	//Wait for signal from chip to confirm successful memory transfer
	confirmTransfer();
}

/* Public function to erase page of data
 *
 */
void AT45DB641::erasePage(const uint16_t& pageAddress) {
	
	spiToggleCS(); //toggle to send command
	spiTransfer(AT45DB641_PAGE_ERASE); //send page erase

	//Send 15 page address bits which specify page in main memory and 9 dummy bits
	spiTransfer((unsigned char)(pageAddress >> 7));
	spiTransfer((unsigned char)(pageAddress << 1));
	spiTransfer(0x00); //dummy bits

	//Wait for signal from chip to confirm successful memory transfer
	confirmTransfer();
}