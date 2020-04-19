#ifndef _SIMULATION_DATA_H
#define _SIMULATION_DATA_H

#include "flight_data.h"

class SimulationData : public FlightData {
  public:
    SimulationData(Atmosphere* atmosphere, );
    ~SimulationData();


};
#endif // !_SIMULATION_DATA_H

