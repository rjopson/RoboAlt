#ifndef _SIMULATION_STAGE_H
#define _SIMULATION_STAGE_H

#include <iostream>
#include <vector>

#include "atmosphere_isa.h"
#include "drag.h"
#include "flight_data.h"
#include "motor.h"
#include "simulation_event.h"
#include "stage.h"

class SimulationStage {
  public:
    SimulationStage(Stage* stage);
    ~SimulationStage();
    
    void AddUserEvent();
    void DeleteUserEvent(const double& index);

    //Drag data	
    Drag* GetDragWithStagesAbove();
    Drag* GetDragWithoutStagesAbove();
    Drag* GetDragDrogue();
    Drag* GetDragMain();
    void PopulateModelDrag();

    Stage* stage_;
    FlightData flight_data_;
    Motor* motor_; //Motor for this stage only    
    std::vector<SimulationEvent*> user_events_; //User events for this stage
    Drag* drag_external_with_stages_above_;
    Drag* drag_external_without_stages_above_;
    Drag* drag_external_drogue_;
    Drag* drag_external_main_;
    int id_;

  private:
    static int id_counter;

    Drag* drag_with_stages_above_;
    Drag* drag_without_stages_above_;
    Drag* drag_drogue_;
    Drag* drag_main_;
};
#endif
