#include "simulation_stage.h"

int SimulationStage::id_counter = 0;

SimulationStage::SimulationStage(Stage* stage) 
    : stage_(stage) {

    id_counter++;
    id_ = id_counter;

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

void SimulationStage::PopulateModelDrag() {

    *drag_with_stages_above_ = stage_->DragModel(true, motor_->Area(), 0.0, 5.0, 1000);
    *drag_without_stages_above_ = stage_->DragModel(true, motor_->Area(), 0.0, 5.0, 1000);
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


