#include "simulation_stage.h"

SimulationStage::SimulationStage(Stage* stage) 
    : stage_(stage) {

    //Set drag data to use. If user didn't provide, generate internally
    drag_with_stages_above_ = new Drag();
    drag_without_stages_above_ = new Drag();

    /*
    for (auto event : userEvents) {

        if (event.action == Action::DEPLOY_DROGUE) {
            if (in_dragDrogue == nullptr) {
                dragDrogue = new Drag();
                *dragDrogue = event.parachute->getDragModel();
                dragDrogue_interalCalc = true;
            }
        }

        if (event.action == Action::DEPLOY_MAIN) {
            if (in_dragMain == nullptr) {
                dragMain = new Drag();
                *dragMain = event.parachute->getDragModel();
                dragMain_interalCalc = true;
            }
        } 
    }*/
}

SimulationStage::~SimulationStage() {

    delete drag_with_stages_above_;
    delete drag_without_stages_above_;
    //delete dragDrogue_interalCalc;
    //delete dragMain_interalCalc;
}

void SimulationStage::AddUserCommand(SimulationUserCommand* user_command) {
    user_commands_.push_back(user_command);
}

void SimulationStage::RemoveUserCommand(SimulationUserCommand* user_command) {

    auto it = std::find(user_commands_.begin(), user_commands_.end(), user_command);

    if (it != user_commands_.end()) {
        user_commands_.erase(it);
    }
}

Command SimulationStage::UpdateUserCommands(Event event, const double& time_of_flight) {

    Command command = Command::NONE;

    for (auto user_command : user_commands_) {
        
        //Return the command which would result in the latest flight phase (any other user commands found are processed but irrelevent for simulation)
        Command command_test = user_command->Update(event, time_of_flight);
        if (command_test > command) {
            command = command_test;
        }
    }
    return command;
}

double SimulationStage::GetTimeForNearestDelayedUserCommand(const double& time_max) const {

    double time = time_max;

    for (auto user_command : user_commands_) {
        if (user_command->TimeToActivateCommand() < time_max) {
            time = user_command->TimeToActivateCommand();
        }
    }
    return time;
}

double SimulationStage::AltitudeMainDeploy() const {

    double altitude_main_deploy = -1.0;

    for (auto user_command : user_commands_) {
        if (user_command->AssignedEvent() == Event::ALTITUDE_MAIN) {
            altitude_main_deploy = user_command->AltitudeMainDeploy();
            break;
        }
    }
    return altitude_main_deploy;
}

void SimulationStage::PopulateModelDrag() {

    *drag_with_stages_above_ = stage_->DragModel(true, motor_->Area(), 0.0, 5.0, 1000);
    *drag_without_stages_above_ = stage_->DragModel(false, motor_->Area(), 0.0, 5.0, 1000);
}

Drag* SimulationStage::GetDragWithStagesAbove() {
    if (drag_external_with_stages_above_ == nullptr) {
        return drag_with_stages_above_;
    }
    else {
        return drag_external_with_stages_above_;
    }
}

Drag* SimulationStage::GetDragWithoutStagesAbove() {
    if (drag_external_without_stages_above_ == nullptr) {
        return drag_without_stages_above_;
    }
    else {
        return drag_external_without_stages_above_;
    }
}

Drag* SimulationStage::GetDragDrogue() {
    if (drag_external_drogue_ == nullptr) {
        return drag_drogue_;
    }
    else {
        return drag_external_drogue_;
    }
}
Drag* SimulationStage::GetDragMain() {
    if (drag_external_main_ == nullptr) {
        return drag_main_;
    }
    else {
        return drag_external_main_;
    }
}


