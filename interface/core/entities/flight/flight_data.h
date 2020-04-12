#ifndef _FLIGHT_DATA_H
#define _FLIGHT_DATA_H

#include <iostream>
#include <vector>

#include "matrix.h"

class FlightData {
  public:
    FlightData();
    ~FlightData();	

    void Print(); //debug

    int length_vector_;

    std::vector<double> time_;
    std::vector<double> altitude_msl_, altitude_agl_;
    std::vector<double> velocity_;
    std::vector<double> acceleration_;
    std::vector<double> mach_number_, reynolds_number_, dynamic_pressure_;
    std::vector<double> drag_, drag_coefficient_;
    std::vector<double> mass_;
    std::vector<double> pressure_, temperature_;
    double altitude_max_msl_, altitude_max_agl_, velocity_max_, acceleration_max_;
    double time_liftoff_, time_burnout_, time_apogee_, time_main_deploy_, time_landing_;
    double time_of_flight_, time_to_apogee_;
    double velocity_off_rail_;

    std::vector<double> altitude_baro_, altitude_accerlerometer_;
    std::vector<double> acceleration_x_, acceleration_y_, acceleration_z_, acceleration_axial_, acceleration_z_high_g;
    std::vector<double> rotation_x_, rotation_y_, rotation_z_;
    std::vector<double> voltage_;

    
};
#endif



