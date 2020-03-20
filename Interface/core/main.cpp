#include <iostream>
#include <string>

#include "configuration.h"
#include "database.h"
#include "fin_shape.h"
#include "instance.h"
#include "material.h"
#include "part.h"
#include "part_fins.h"
#include "part_nosecone.h"
#include "part_tube_body.h"
#include "rocket.h"

int main() {

	std::cout << "Creating rocket" << std::endl;

	Material* pla = new Material("PLA", 1380.0);
    Database* db = new Database();
    db->CreateRocket("29mm 3DPME", "");

	//Parts
    db->GetRocket(1)->CreateNosecone("Nosecone", "", pla, NoseconeType::VON_KARMEN,
     1.0, 0.157, 0.01, 0.0, 0.002, 0.0, 0.03139, 0.0, false, 0, false, 0);
    db->GetRocket(1)->CreateTubeBody("tubeMain", "", pla, 0.076, 0.03139, 0.001, false, 0, false, 0);
    db->GetRocket(1)->CreateTubeBody("tubeDrogue", "", pla, 0.19, 0.03139, 0.001, false, 0, false, 0);
    db->GetRocket(1)->CreateTubeBody("tubeExtension180", "", pla, 0.001, 0.03139, 0.001, false, 0, false, 0);
    db->GetRocket(1)->CreateTubeBody("Fincan", "", pla, 0.114, 0.03139, 0.001, false, 0, false, 0);
    db->GetRocket(1)->CreateFins("Fin set", "", pla, FinCrossSection::ROUNDED, 3, 0.003, 0.005, 0.102, 0.013, 0.051, 0.076,
     false, 0.0, false, 0.0);
    db->GetRocket(1)->CreateTubeBody("tubeExtension240", "", pla, 0.04, 0.03139, 0.001, false, 0, false, 0);

	//Configuration
    db->GetRocket(1)->CreateConfiguration("180 case", "");
    db->GetStage(1)->inertial_.SetOverrideMass(0.1809);
	db->GetStage(1)->surface_finish_ = SurfaceFinish::ROUGH;	

	//Instances
    db->GetStage(1)->CreateInstance(db->GetPart(1), PartPosition::FOREWARD, 0.0);
    db->GetStage(1)->CreateInstance(db->GetPart(2), PartPosition::FOREWARD, 0.0);
    db->GetStage(1)->CreateInstance(db->GetPart(3), PartPosition::FOREWARD, 0.0);
    db->GetStage(1)->CreateInstance(db->GetPart(4), PartPosition::FOREWARD, 0.0);
    db->GetStage(1)->CreateInstance(db->GetPart(5), PartPosition::FOREWARD, 0.0);
    db->GetInstance(5)->CreateChild(db->GetPart(6), PartPosition::FOREWARD, 0.0063);	

	//Gather data for the simulation
	Motor* h128 = new Motor("C:/Users/Jim/Documents/Rockets/Altimeters/RoboDev/Interface/core/testFiles/AeroTech_H128.eng");	

	//let's see if simulation works...
	db->GetConfiguration(1)->CreateSimulation("sim1", "", 167.0, 0.0, 2.5);
	db->GetSimulationStage(1)->motor_ = h128;
	db->GetConfiguration(1)->simulations_[0]->Run(0.05, 5.0);    

    //Configuration
    db->GetRocket(1)->CreateConfiguration("240 case", "");
    db->GetStage(2)->inertial_.SetOverrideMass(0.195);
    db->GetStage(2)->surface_finish_ = SurfaceFinish::ROUGH;

    //Instances
    db->GetStage(2)->CreateInstance(db->GetPart(1), PartPosition::FOREWARD, 0.0);
    db->GetStage(2)->CreateInstance(db->GetPart(2), PartPosition::FOREWARD, 0.0);
    db->GetStage(2)->CreateInstance(db->GetPart(3), PartPosition::FOREWARD, 0.0);
    db->GetStage(2)->CreateInstance(db->GetPart(4), PartPosition::FOREWARD, 0.0);
    db->GetStage(2)->CreateInstance(db->GetPart(7), PartPosition::FOREWARD, 0.0);
    db->GetInstance(11)->CreateChild(db->GetPart(6), PartPosition::FOREWARD, 0.0063);

    //Gather data for the simulation
    Motor* h180 = new Motor("C:/Users/Jim/Documents/Rockets/Altimeters/RoboDev/Interface/core/testFiles/AeroTech_H180.eng");

    //let's see if simulation works...
    db->GetConfiguration(2)->CreateSimulation("sim2", "", 167.0, 0.0, 2.5);
    db->GetSimulationStage(2)->motor_ = h180;
    db->GetConfiguration(2)->simulations_[0]->Run(0.05, 5.0);

	std::cout << "Complete" << std::endl;

    //rkt->GetSimulationStage(2)->flight_data_.Print();
	
	std::getchar();
	return 1;
}
