
#include <iostream>
#include <string>

#include "configuration.h"
#include "fin_shape.h"
#include "instance.h"
#include "material.h"
#include "part.h"
#include "part_fins.h"
#include "part_nosecone.h"
#include "part_tube_body.h"

int main() {

	std::cout << "Creating rocket" << std::endl;

	Material* PLA = new Material("PLA", 1380.0);

	//Parts
    Nosecone* nosecone = new Nosecone("Nosecone", "", PLA, NoseconeType::VON_KARMEN,
        1.0, 0.157, 0.01, 0.0, 0.002, 0.0, 0.03139, 0.0, false, 0, false, 0);
	TubeBody* tube_main = new TubeBody("tubeMain", "", PLA, 0.076, 0.03139, 0.001, false, 0, false, 0);
	TubeBody* tube_drogue = new TubeBody("tubeDrogue", "", PLA, 0.19, 0.03139, 0.001, false, 0, false, 0);
	TubeBody* tube_extension = new TubeBody("tubeExtension", "", PLA, 0.001, 0.03139, 0.001, false, 0, false, 0);
	TubeBody* fincan = new TubeBody("Fincan", "", PLA, 0.114, 0.03139, 0.001, false, 0, false, 0);
	FinShape* finshape = new FinShapeTrapezoidal(0.102, 0.013, 0.051, 0.076);
	Fins* finset = new Fins("Fin set", "", PLA, finshape, FinCrossSection::ROUNDED, 3, 0.003, 0.005, false, 0, false, 0);

	//Configuration
	Configuration* config180 = new Configuration("config180", "");
	config180->stages_[0]->inertial_.SetOverrideMass(0.1809);
	config180->stages_[0]->surface_finish_ = SurfaceFinish::ROUGH;	

	//Instances
    config180->stages_[0]->CreateInstance(nosecone, PartPosition::FOREWARD, 0.0);
    config180->stages_[0]->CreateInstance(tube_main, PartPosition::FOREWARD, 0.0);
    config180->stages_[0]->CreateInstance(tube_drogue, PartPosition::FOREWARD, 0.0);
    config180->stages_[0]->CreateInstance(tube_extension, PartPosition::FOREWARD, 0.0);
    config180->stages_[0]->CreateInstance(fincan, PartPosition::FOREWARD, 0.0);
    config180->stages_[0]->instance_root_->children_[4]->CreateChild(finset, PartPosition::FOREWARD, 0.0063);	

	//Gather data for the simulation
	Motor* h128 = new Motor("C:/Users/Jim/Documents/Rockets/Altimeters/RoboDev/Interface/core/testFiles/AeroTech_H128.eng");	

	//let's see if simulation works...
	config180->CreateSimulation("sim1", "", 167.0, 0.0, 2.5);
	config180->simulations_[0]->sim_stages_[0]->motor_ = h128;
	config180->simulations_[0]->Run(0.05, 5.0);    

	std::cout << "Complete" << std::endl;

	config180->simulations_[0]->sim_stages_[0]->flight_data_.Print();
	
	std::getchar();
	return 1;
}
