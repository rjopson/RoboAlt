#include "simulation_stage.h"

SimulationStage::SimulationStage(Stage* stage) 
    : stage_(stage),
      drag_external_with_stages_above_(nullptr),
      drag_external_without_stages_above_(nullptr),
      drag_external_drogue_(nullptr),
      drag_external_main_(nullptr),
      motor_(nullptr), 
      drag_with_stages_above_(new Drag()),
      drag_without_stages_above_(new Drag()),
      drag_drogue_(new Drag()),
      drag_main_(new Drag()),
      simulation_data_(new SimulationData()) {

}

SimulationStage::~SimulationStage() {

    delete drag_with_stages_above_;
    delete drag_without_stages_above_;
    delete drag_drogue_;
    delete drag_main_;
    delete simulation_data_;
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

std::vector<SimulationUserCommand*> SimulationStage::UserCommands() const {
    return user_commands_;
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

double SimulationStage::GetTimeForNearestDelayedUserCommand(const double& time_of_flight, const double& time_max) const {

    double time = time_max;

    for (auto user_command : user_commands_) {
        if (user_command->TimeToActivateCommand() != -1.0) {
            if (user_command->TimeToActivateCommand() < time_max) {
                time = user_command->TimeToActivateCommand();
            }
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

    for (auto command : user_commands_) {
        if (command->AssignedCommand() == Command::DEPLOY_DROGUE) {
            *drag_drogue_ = command->AssignedParachute()->DragModel();
        }
        else if (command->AssignedCommand() == Command::DEPLOY_MAIN) {
            *drag_main_ = command->AssignedParachute()->DragModel();
        }
    }
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


