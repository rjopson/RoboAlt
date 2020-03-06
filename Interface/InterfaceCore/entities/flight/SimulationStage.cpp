#include "SimulationStage.h"



SimulationStage::SimulationStage(Stage* in_stage) {

	stage = in_stage;

	//Set drag data to use. If user didn't provide, generate internally
	dragWithStagesAbove = new Drag();
	dragWithoutStagesAbove = new Drag();


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

	delete dragWithStagesAbove;
	delete dragWithoutStagesAbove;
	//delete dragDrogue_interalCalc;
	//delete dragMain_interalCalc;
}

void SimulationStage::populateModelDrag() {

	*dragWithStagesAbove = stage->getDragModel(true, motor->area(), 0.0, 5.0, 1000);
	*dragWithoutStagesAbove = stage->getDragModel(true, motor->area(), 0.0, 5.0, 1000);
}

Drag* SimulationStage::getDragWithStagesAbove() {
	if (dragExternalWithStagesAbove == nullptr) {
		return dragWithStagesAbove;
	}
	else {
		return dragExternalWithStagesAbove;
	}
}

Drag* SimulationStage::getDragWithoutStagesAbove() {
	if (dragExternalWithoutStagesAbove == nullptr) {
		return dragWithoutStagesAbove;
	}
	else {
		return dragExternalWithoutStagesAbove;
	}
}

Drag* SimulationStage::getDragDrogue() {
	if (dragExternalDrogue == nullptr) {
		return dragDrogue;
	}
	else {
		return dragExternalDrogue;
	}
}
Drag* SimulationStage::getDragMain() {
	if (dragExternalMain == nullptr) {
		return dragMain;
	}
	else {
		return dragExternalMain;
	}
}


