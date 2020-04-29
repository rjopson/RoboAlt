#ifndef _EXPERIMENTAL_STAGE_H
#define _EXPERIMENTAL_STAGE_H

#include <iostream>
#include <string>
#include <vector>

#include "altimeter_user_commands.h"
#include "experimental_data.h"
#include "motor.h"
#include "stage.h"
#include "parse.h"

class ExperimentalStage {

  public:
    ExperimentalStage(Stage* stage);
    ~ExperimentalStage();    

    Stage* stage_;
    Motor* motor_;
    ExperimentalData* flight_data_;
    double mass_total_measured_;
    double mass_propellant_measured_;
    AltimeterUserCommands altimeter_commands_;        
};
#endif

