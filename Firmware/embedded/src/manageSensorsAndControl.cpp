/*
 * manageSensorsAndControl.cpp
 *
 * This class ties together all sensor driver, engineering unit and filtering classes.
 */

#include "manageSensorsAndControl.h"

/* Default constructor
 */
manageSensorsAndControl::manageSensorsAndControl() {

}

void manageSensorsAndControl::initialize() {
	drivers.initialize(&sensor_data);

}

void manageSensorsAndControl::update() {

}