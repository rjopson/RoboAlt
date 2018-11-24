/*
 * manageDataReduction.h
 *
 * This class wraps around all data reduction and filtering classes to make it easy to add to main file
 */

#ifndef _MANAGE_DATA_REDUCTION_h
#define _MANAGE_DATA_REDUCTION_h

#include <inttypes.h>
#include "dataStructures.h"

//Data reduction classes
#include "baroAndTemp.h"
#include "calculateAltitude.h"
#include "IMU.h"
#include "kalman.h"

class manageDataReduction {

public:
	manageDataReduction();


};
#endif