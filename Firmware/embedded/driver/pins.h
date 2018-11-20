/*
 * pins.h
*/

#ifndef _PINS_H
#define _PINS_H

//AT45DB641
#define PIN_DATAOUT 				11 //MOSI
#define PIN_DATAIN					12 //MISO
#define PIN_SPICLOCK				13 //sck
#define PIN_SLAVESELECT				10 //ss
#define PIN_WRITE_PROTECT			7 //WP pin for write protection 

//buzzer
#define PIN_BEEPER_DIGITAL_PIN		6 //output digital pin which controls buzzer

//Pyro Channels
#define ALT_APO_CONTINUITY			A2
#define ALT_MAIN_CONTINUITY			A3
#define ALT_THIRD_CONTINUITY		A4
#define ALT_APO_OUTPUT				2//atmega328 4
#define ALT_MAIN_OUTPUT				3//atmega328 3
#define ALT_THIRD_OUTPUT			4//atmega328 5

//Define battery voltage pin
#define ALT_VOLTAGE_BATTERY_PIN		A1 //analogRead pin for battery voltage readings

#endif