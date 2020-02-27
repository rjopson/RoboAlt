

#include "Configuration.h"

Configuration::Configuration(std::string in_name, std::string in_comments, SurfaceFinish in_surfaceFinish) {

	name = in_name;
	comments = in_comments;
	surfaceFinish = in_surfaceFinish;

	stageList.push_back(new Stage("sustainer", 0.0, "", false, 0.0, false, 0.0));
}

Configuration::~Configuration() {

	//delete stages
	for (auto it_stage = stageList.begin(); it_stage != stageList.end(); it_stage++) {
		delete (*it_stage);
	}	
}

std::vector<Instance*> Configuration::instanceFlatList(Stage* stage, bool includeStagesAbove) {

	std::vector<Instance*> flatList;

	if (includeStagesAbove) {
		//loop through stages including input stage
		for (auto it = stageList.begin(); it != 1 + std::find(stageList.begin(), stageList.end(), stage); it++) {
			(*it)->instanceFlatListRecursive((*it)->instanceRoot, flatList);
			flatList.erase(flatList.begin()); //remove the stage root
		}
	}
	else {
		stage->instanceFlatListRecursive(stage->instanceRoot, flatList);
	}
	return flatList;
}

void Configuration::runSimulation(std::string in_name, std::string in_comments,
	const double& in_heightPad, const double& in_angleLaunchRod, const double& in_lengthLaunchRod,
	Atmosphere* in_atmosphere) {

	//Determine whether to use atmosphere model or external data
	Atmosphere* atmosphere;
	if (in_atmosphere == nullptr) {
		Atmosphere_ISA atmosphereModel;
		*atmosphere = atmosphereModel.getModel();
	} 

	//Drag objects to be populated during simulation
	Drag dragStacked;
	Drag dragUnstacked;
	Drag dragDrogue;
	Drag dragMain;

	//Initial conditions
	std::vector<double> initial{ 0.0, in_heightPad, 0.0, 0.0 };
	Matrix<double> flightHistory(1, 4, initial);

	for (auto stage : stageList) {

		//Determine whether any drag data needs to be calculated
		if (stage->dragStackedCurrent == nullptr) {
			dragStacked = getDragModel(stage, true, 0.0, 5.0, 1000, stage->motorCurrent->area());
		}
		else {
			dragStacked = *stage->dragStackedCurrent;
		}

		if (stage->dragUnstackedCurrent == nullptr) {
			dragUnstacked = getDragModel(stage, false, 0.0, 5.0, 1000, stage->motorCurrent->area());
		}
		else {
			dragUnstacked = *stage->dragUnstackedCurrent;
		}

		if (stage->dragDrogueCurrent == nullptr) {
			//dragDrogue = getDragModel(stage, 0.0, 5.0, 1000, stage->motorCurrent->area());
		}
		else {
			dragDrogue = *stage->dragDrogueCurrent;
		}

		if (stage->dragMainCurrent == nullptr) {
			//dragMain = getDragModel(stage, 0.0, 5.0, 1000, stage->motorCurrent->area());
		}
		else {
			dragMain = *stage->dragMainCurrent;
		}

		//Add a new simulation to the current stage 
		stage->simulationFlightList.push_back(new Simulation(in_name, in_comments, in_heightPad, in_angleLaunchRod, in_lengthLaunchRod));

		//Run the simulation for the current stage 
		flightHistory = stage->simulationFlightList.back()->run(flightHistory, *atmosphere,
			getStageMassEmpty(stage), stage->massEmpty(), stage->motorCurrent,
			dragStacked, dragUnstacked, dragDrogue, dragMain,
			stage->userEventsCurrent, 0.01, 1.0);
	}

	delete atmosphere;
}


