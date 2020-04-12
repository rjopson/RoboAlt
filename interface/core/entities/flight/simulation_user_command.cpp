#include "simulation_user_command.h"

SimulationUserCommand::SimulationUserCommand(Event event, Command command, const double& time_delay,
    Parachute* parachute, const double& altitude_main_deploy)

    : event_(event),
      command_(command),
      altitude_main_deploy_(altitude_main_deploy),
      parachute_(parachute),
      command_complete_(false),
      time_to_activate_command_(-1.0) {}

SimulationUserCommand::~SimulationUserCommand() {
}

void SimulationUserCommand::SetEvent(Event event) {
    event_ = event;
}

void SimulationUserCommand::SetCommand(Command command) {
    command_ = command;
}

void SimulationUserCommand::SetTimeDelay(const double& time_delay) {
    time_delay_ = time_delay;
}

void SimulationUserCommand::SetParachute(Parachute* parachute) {
    parachute_ = parachute;
}

void SimulationUserCommand::SetAltitudeMainDeploy(const double& altitude_main_deploy) {
    altitude_main_deploy_ = altitude_main_deploy;
}

Event SimulationUserCommand::AssignedEvent() const {
    return event_;
}

Command SimulationUserCommand::AssignedCommand() const {
    return command_;
}

double SimulationUserCommand::TimeDelay() const {
    return time_delay_;
}

Parachute* SimulationUserCommand::AssignedParachute() const {
    return parachute_;
}

double SimulationUserCommand::AltitudeMainDeploy() const {
    return altitude_main_deploy_;
}

Command SimulationUserCommand::Update(Event event, const double& time_of_flight) {

    if (!command_complete_) {

        //current simulation event is the user's event. Set the activation time
        if (event == event_) {
            time_to_activate_command_ = time_of_flight + time_delay_;
        }

        //If we're at or past the activation time, return the user's action
        if (time_to_activate_command_ != -1.0 && time_of_flight >= time_to_activate_command_) {
            command_complete_ = true;
            return command_;
        }
    }
    else {
        return Command::NONE;
    }
}

double SimulationUserCommand::TimeToActivateCommand() const {
    return time_to_activate_command_;
}

