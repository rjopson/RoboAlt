
#include <functional>
#include <iostream>
#include <string>

#include "Configuration.h"
#include "Fins.h"
#include "FinShape.h"
#include "Instance.h"
#include "InertialOverride.h"
#include "Material.h"
#include "Nosecone.h"
#include "Part.h"
#include "TubeBody.h"

#include "MathUtilities.h"

int main() {

	std::cout << "Creating rocket" << std::endl;

	Material* PLA = new Material("PLA", 1380.0);

	//Parts
	Nosecone* nosecone = new Nosecone("Nosecone", "", PLA, NoseconeType::VON_KARMEN, 
		1.0, 0.157, 0.002, 0.03139, 0.01, 0.0, 0.0, 0.0, false, 0, false, 0);
	TubeBody* tubeMain = new TubeBody("tubeMain", "", PLA, 0.076, 0.03139, 0.001, false, 0, false, 0);
	TubeBody* tubeDrogue = new TubeBody("tubeDrogue", "", PLA, 0.19, 0.03139, 0.001, false, 0, false, 0);
	TubeBody* tubeExtension = new TubeBody("tubeExtension", "", PLA, 0.001, 0.03139, 0.001, false, 0, false, 0);
	TubeBody* fincan = new TubeBody("Fincan", "", PLA, 0.114, 0.03139, 0.001, false, 0, false, 0);
	FinShape* finshape = new FinShapeTrapezoidal(0.102, 0.013, 0.051, 0.076);
	Fins* finset = new Fins("Fin set", "", PLA, finshape, FinCrossSection::ROUNDED, 3, 0.003, 0.005, false, 0, false, 0);

	//Configuration
	Configuration* config180 = new Configuration("config180", "");
	config180->stageList[0]->inertial.setOverrideMass(0.1809);
	config180->stageList[0]->surfaceFinish = SurfaceFinish::ROUGH;	

	//Instances
	Instance* instNosecone = new Instance(nosecone, config180->stageList[0]->instanceRoot, PartPosition::FOREWARD, 0.0);
	Instance* instTubeMain = new Instance(tubeMain, config180->stageList[0]->instanceRoot, PartPosition::FOREWARD, 0.0);
	Instance* instTubeDrogue = new Instance(tubeDrogue, config180->stageList[0]->instanceRoot, PartPosition::FOREWARD, 0.0);
	Instance* instTubeExtension = new Instance(tubeExtension, config180->stageList[0]->instanceRoot, PartPosition::FOREWARD, 0.0);
	Instance* instFincan = new Instance(fincan, config180->stageList[0]->instanceRoot, PartPosition::FOREWARD, 0.0);
	Instance* instFinset = new Instance(finset, instFincan, PartPosition::AFT, 0.0063);

	//Gather data for the simulation
	Motor h128("C:/Users/Jim/Documents/Rockets/Altimeters/RoboDev/Interface/InterfaceCore/testFiles/AeroTech_H128.eng");	

	//let's see if simulation works...
	Simulation sim1("test", "", 167.0, 0.0, 2.5);
	config180->addSimulation(&sim1);
	config180->simulationList[0]->simStageList[0]->motor = &h128;
	config180->simulationList[0]->run(0.05, 5.0);
	std::cout << "Complete" << std::endl;

	config180->simulationList[0]->simStageList[0]->flightData.print();
	
	std::getchar();
	return 1;
}
