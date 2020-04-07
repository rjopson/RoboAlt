#include "simulation_event.h"

SimulationEvent::SimulationEvent(Event event, Action action, const double& time_delay,
    Parachute* parachute, const double& altitude_main_deploy)

    : event_(event),
      action_(action),
      altitude_main_deploy_(altitude_main_deploy),
      parachute_(parachute) {}

SimulationEvent::~SimulationEvent() {
}

void SimulationEvent::SetEvent(Event event) {
    event_ = event;
}

void SimulationEvent::SetAction(Action action) {
    action_ = action;
}

void SimulationEvent::SetTimeDelay(const double& time_delay) {
    time_delay_ = time_delay;
}

void SimulationEvent::SetParachute(Parachute* parachute) {
    parachute_ = parachute;
}

void SimulationEvent::SetAltitudeMainDeploy(const double& altitude_main_deploy) {
    altitude_main_deploy_ = altitude_main_deploy;
}

Event SimulationEvent::AssignedEvent() const {
    return event_;
}

Action SimulationEvent::AssignedAction() const {
    return action_;
}

double SimulationEvent::TimeDelay() const {
    return time_delay_;
}

Parachute* SimulationEvent::AssignedParachute() const {
    return parachute_;
}

double SimulationEvent::AltitudeMainDeploy() const {
    return altitude_main_deploy_;
}

bool SimulationEvent::ActivateAction(const double& time_of_flight) {
    
    if (time_of_flight >= time_to_activate_action_) {
        return true;
    }
    else {
        false;
    }
}

void SimulationEvent::SetTimeToActivateAction(const double& time_of_flight) {
    time_to_activate_action_ = time_of_flight + time_delay_;
}

