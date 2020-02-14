
#include <functional>
#include <iostream>
#include <string>

#include "Configuration.h"
#include "Fins.h"
#include "FinShape.h"
#include "Instance.h"
#include "ManageMass.h"
#include "Material.h"
#include "Nosecone.h"
#include "Part.h"
#include "TubeBody.h"

//#include "Parse.h"
#include "MathUtilities.h"

double func(double x) {
	return sin(x)*cos(x)*cos(x);
}

//template<class function>

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
	Configuration* config180 = new Configuration("config180", "", SurfaceFinish::ROUGH, false, 0, false, 0);

	//Instances
	Instance* instNosecone = new Instance(nosecone, config180->instanceHierarchy, NULL, PartPosition::FOREWARD, 0.0);
	Instance* instTubeMain = new Instance(tubeMain, config180->instanceHierarchy, NULL, PartPosition::FOREWARD, 0.0);
	Instance* instTubeDrogue = new Instance(tubeDrogue, config180->instanceHierarchy, NULL, PartPosition::FOREWARD, 0.0);
	Instance* instTubeExtension = new Instance(tubeExtension, config180->instanceHierarchy, NULL, PartPosition::FOREWARD, 0.0);
	Instance* instFincan = new Instance(fincan, config180->instanceHierarchy, NULL, PartPosition::FOREWARD, 0.0);
	Instance* instFinset = new Instance(finset, instFincan, NULL, PartPosition::AFT, 0.0063);

	//Gather data for the simulation
	Motor h128("C:/Users/Jim/Documents/Rockets/Altimeters/RoboDev/Interface/InterfaceCore/testFiles/AeroTech_H128.eng");
	
	//Generate drag data 
	Drag config180_h128("3dpme", "scratch", "");
	

	//let's see if simulation works...
	Atmosphere atmosphere;
	std::vector<double> initial{ 167.0, 0.0 };
	Simulation sim_h128("h128", "", .3825, 167.74);
	sim_h128.motor = &h128;
	sim_h128.drag = &config180_h128;
	sim_h128.atmosphere = &atmosphere;
	sim_h128.run(initial, 0.01, 2);
	
	for (int i = 0; i != sim_h128.altitude.size(); i++) {
		//std::cout << sim_h128.time[i] << " " << sim_h128.altitude[i] << " "
			//<< sim_h128.velocity[i] << " " << sim_h128.acceleration[i] << std::endl;
	}

	std::cout << "Complete" << std::endl;
	std::getchar();
	return 1;
}
