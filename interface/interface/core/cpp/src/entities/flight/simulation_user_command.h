
#ifndef _SIMULATION_USER_COMMAND_H
#define _SIMULATION_USER_COMMAND_H

#include <vector>

#include "flight_data.h"
#include "part_parachute.h"

enum class Command {	
    NONE = 0,
    SEPARATE_STAGE,
    LIGHT_STAGE,
    DEPLOY_DROGUE,
    DEPLOY_MAIN
};

class SimulationUserCommand {
  public:
    SimulationUserCommand(Event event, Command command, const double& time_delay, 
        Parachute* parachute, const double& altitude_main_deploy); 
    ~SimulationUserCommand();    

    //Values
    void SetEvent(Event event);
    void SetCommand(Command command);
    void SetTimeDelay(const double& time_delay);
    void SetParachute(Parachute* parachute);
    void SetAltitudeMainDeploy(const double& altitude_main_deploy);

    //Datanames
    Event AssignedEvent() const;
    Command AssignedCommand() const;
    double TimeDelay() const;
    Parachute* AssignedParachute() const;
    double AltitudeMainDeploy() const;

    //Core functions
    Command Update(Event event, const double& time_of_flight);
    double TimeToActivateCommand() const;

  private:
    Event event_;
    Command command_;
    bool command_complete_;
    double altitude_main_deploy_;
    Parachute* parachute_;
    double time_delay_;
    double time_to_activate_command_;
};
#endif
