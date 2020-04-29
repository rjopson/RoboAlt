#ifndef _SIMULATION_STAGE_H
#define _SIMULATION_STAGE_H

#include <iostream>
#include <vector>

#include "atmosphere_isa.h"
#include "drag.h"
#include "simulation_data.h"
#include "motor.h"
#include "simulation_user_command.h"
#include "stage.h"

class SimulationStage {
  public:
    SimulationStage(Stage* stage);
    ~SimulationStage();    

    void AddUserCommand(SimulationUserCommand* user_command);
    void RemoveUserCommand(SimulationUserCommand* user_command);
    std::vector<SimulationUserCommand*> UserCommands() const;
    double AltitudeMainDeploy() const; //if a user event is main deploy, return the altitude. Otherwise return -1

    Command UpdateUserCommands(Event event, const double& time_of_flight);
    double GetTimeForNearestDelayedUserCommand(const double& time_of_flight, const double& time_max) const;

    //Drag data	
    Drag* GetDragWithStagesAbove();
    Drag* GetDragWithoutStagesAbove();
    Drag* GetDragDrogue();
    Drag* GetDragMain();
    void PopulateModelDrag();   

    Stage* stage_;
    SimulationData* simulation_data_;
    Motor* motor_; //Motor for this stage only  
    Drag* drag_external_with_stages_above_;
    Drag* drag_external_without_stages_above_;
    Drag* drag_external_drogue_;
    Drag* drag_external_main_;

  private:
    Drag* drag_with_stages_above_;
    Drag* drag_without_stages_above_;
    Drag* drag_drogue_;
    Drag* drag_main_;
      
    std::vector<SimulationUserCommand*> user_commands_; //User events for this stage    
};
#endif
