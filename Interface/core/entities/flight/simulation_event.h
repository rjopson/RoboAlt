
#ifndef _SIMULATION_EVENT_H
#define _SIMULATION_EVENT_H

#include <vector>

#include "part_parachute.h"

enum class Event {
    LIFTOFF,
    BURNOUT,
    APOGEE,
    ALTITUDE_MAIN,
    GROUND,
    AT_TIME_DELAY
};

enum class Action {	
    SEPARATE_STAGE,
    LIGHT_STAGE,
    DEPLOY_DROGUE,
    DEPLOY_MAIN
};

class SimulationEvent {
  public:
    SimulationEvent(Event event, Action action, const double& time_delay, 
        Parachute* parachute, const double& altitude_main_deploy); 
    ~SimulationEvent();    

    void SetTimeToActivateAction(const double& time_of_flight);

    Event event_;
    Action action_;
    double altitude_main_deploy_;
    Parachute* parachute_;
    double time_delay_;
    double time_to_activate_action_;
};
#endif
