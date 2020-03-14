#include "simulation_event.h"

SimulationEvent::SimulationEvent(Event event, Action action, const double& time_delay,
    Parachute* parachute, const double& altitude_main_deploy)

    : event_(event),
      action_(action),
      altitude_main_deploy_(altitude_main_deploy),
      parachute_(parachute) {}

SimulationEvent::~SimulationEvent() {
}

void SimulationEvent::SetTimeToActivateAction(const double& time_of_flight) {
    time_to_activate_action_ = time_of_flight + time_delay_;
}

