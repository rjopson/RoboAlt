#ifndef _SIMULATION_DATA_H
#define _SIMULATION_DATA_H

#include "flight_data.h"

struct SolverResult {
    Phase phase;
    Event event;
    double time; //already calced
    double altitude_msl; //already calced
    double altitude_agl;
    double velocity; //already calced
    double acceleration;
    double acceleration_x, acceleration_y, acceleration_z; //already calced     
    double mach_number;
    double dynamic_pressure;
    double drag; //already calced
    double drag_coefficient;
    double mass; //already calced
    double pressure;
    double temperature;
    double thrust; //already calced

    //std::vector<double> reynolds_number;
    //std::vector<double> rotation_x;
    //std::vector<double> rotation_y;
    //std::vector<double> rotation_z;
};

class SimulationData : public FlightData {
  public:
    SimulationData();
    ~SimulationData();

    void Populate(std::vector<SolverResult> solver_result);
};
#endif // !_SIMULATION_DATA_H

