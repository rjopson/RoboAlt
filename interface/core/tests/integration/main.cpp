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

    Database* db = new Database();

    //Create rocket
    db->CreateRocket("29mm 3DPME v2019");

    //Create material
    db->CreateMaterial("PLA");
    db->GetMaterial("PLA")->SetDensity(1380.0);

	//Parts
    //Nosecone
    db->CreatePart(PartType::NOSECONE, "Nosecone", db->GetRocket("29mm 3DPME v2019"));
    db->GetPart<Nosecone>("29mm 3DPME v2019", "Nosecone")->SetMaterial(db->GetMaterial("PLA"));
    db->GetPart<Nosecone>("29mm 3DPME v2019", "Nosecone")->SetNoseType(NoseconeType::VON_KARMEN);
    db->GetPart<Nosecone>("29mm 3DPME v2019", "Nosecone")->SetShapeParameter(1.0);
    db->GetPart<Nosecone>("29mm 3DPME v2019", "Nosecone")->SetLengthNose(0.157);
    db->GetPart<Nosecone>("29mm 3DPME v2019", "Nosecone")->SetLengthBase(0.01);
    db->GetPart<Nosecone>("29mm 3DPME v2019", "Nosecone")->SetLengthShoulder(0.0);
    db->GetPart<Nosecone>("29mm 3DPME v2019", "Nosecone")->SetThickness(0.01);
    db->GetPart<Nosecone>("29mm 3DPME v2019", "Nosecone")->SetDiameterOuter(0.03139);
    db->GetPart<Nosecone>("29mm 3DPME v2019", "Nosecone")->SetDiameterShoulder(0.0);
    
    //Main tube
    db->CreatePart(PartType::TUBE_BODY, "tubeMain", db->GetRocket("29mm 3DPME v2019"));
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeMain")->SetMaterial(db->GetMaterial("PLA"));
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeMain")->SetLength(0.076);
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeMain")->SetDiameterOuter(0.03139);
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeMain")->SetThickness(0.001);
    
    //Drogue tube
    db->CreatePart(PartType::TUBE_BODY, "tubeDrogue", db->GetRocket("29mm 3DPME v2019"));
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeDrogue")->SetMaterial(db->GetMaterial("PLA"));
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeDrogue")->SetLength(0.19);
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeDrogue")->SetDiameterOuter(0.03139);
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeDrogue")->SetThickness(0.001);
    
    //Extension tube
    db->CreatePart(PartType::TUBE_BODY, "tubeExtension180", db->GetRocket("29mm 3DPME v2019"));
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeExtension180")->SetMaterial(db->GetMaterial("PLA"));
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeExtension180")->SetLength(0.001);
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeExtension180")->SetDiameterOuter(0.03139);
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeExtension180")->SetThickness(0.001);

    db->CreatePart(PartType::TUBE_BODY, "tubeExtension240", db->GetRocket("29mm 3DPME v2019"));
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeExtension240")->SetMaterial(db->GetMaterial("PLA"));
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeExtension240")->SetLength(0.04);
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeExtension240")->SetDiameterOuter(0.03139);
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeExtension240")->SetThickness(0.001);
    
    //Fincan tube
    db->CreatePart(PartType::TUBE_BODY, "tubeFincan", db->GetRocket("29mm 3DPME v2019"));
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeFincan")->SetMaterial(db->GetMaterial("PLA"));
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeFincan")->SetLength(0.114);
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeFincan")->SetDiameterOuter(0.03139);
    db->GetPart<TubeBody>("29mm 3DPME v2019", "tubeFincan")->SetThickness(0.001);
    
    //Fins
    db->CreatePart(PartType::FINS, "Fin set", db->GetRocket("29mm 3DPME v2019"));
    db->GetPart<Fins>("29mm 3DPME v2019", "Fin set")->SetMaterial(db->GetMaterial("PLA"));
    static_cast<FinShapeTrapezoidal*>(db->GetPart<Fins>("29mm 3DPME v2019", "Fin set")->AssignedFinShape())->SetChordRoot(0.102);
    static_cast<FinShapeTrapezoidal*>(db->GetPart<Fins>("29mm 3DPME v2019", "Fin set")->AssignedFinShape())->SetChordTip(0.013);
    static_cast<FinShapeTrapezoidal*>(db->GetPart<Fins>("29mm 3DPME v2019", "Fin set")->AssignedFinShape())->SetSpan(0.051);
    static_cast<FinShapeTrapezoidal*>(db->GetPart<Fins>("29mm 3DPME v2019", "Fin set")->AssignedFinShape())->SetLengthSweep(0.076);
    db->GetPart<Fins>("29mm 3DPME v2019", "Fin set")->SetFinCrossSection(FinCrossSection::ROUNDED);
    db->GetPart<Fins>("29mm 3DPME v2019", "Fin set")->SetNumber(3);
    db->GetPart<Fins>("29mm 3DPME v2019", "Fin set")->SetThickness(0.003);
    db->GetPart<Fins>("29mm 3DPME v2019", "Fin set")->SetRadiusFillet(0.005);

	//Configuration
    db->CreateConfiguration("180 case", db->GetRocket("29mm 3DPME v2019"));
    db->CreateStage("sustainer", db->GetConfiguration("29mm 3DPME v2019", "180 case"));
    db->GetStage("29mm 3DPME v2019", "180 case", "sustainer")->SetOverrideMass(0.1809);
    db->GetStage("29mm 3DPME v2019", "180 case", "sustainer")->SetSurfaceFinish(SurfaceFinish::ROUGH);

	//Instances
    Instance* sustainer_root = db->GetStage("29mm 3DPME v2019", "180 case", "sustainer")->InstanceRoot();
    db->CreateInstance("Nosecone_1", db->GetPart("29mm 3DPME v2019", "Nosecone"), sustainer_root);
    db->CreateInstance("tubeMain_1", db->GetPart("29mm 3DPME v2019", "tubeMain"), sustainer_root);
    db->CreateInstance("tubeDrogue_1", db->GetPart("29mm 3DPME v2019", "tubeDrogue"), sustainer_root);
    db->CreateInstance("tubeExtension180_1", db->GetPart("29mm 3DPME v2019", "tubeExtension180"), sustainer_root);
    db->CreateInstance("tubeFincan_1", db->GetPart("29mm 3DPME v2019", "tubeFincan"), sustainer_root);
    db->CreateInstance("Finset_1", db->GetPart("29mm 3DPME v2019", "Fin set"), db->GetInstance("29mm 3DPME v2019", "tubeFincan_1"));
    db->GetInstance("29mm 3DPME v2019", "Finset_1")->SetPositionFrom(0.0063);
    
	//Gather data for the simulation
	//Motor* h128 = new Motor("D:/Personal/Rockets/RoboAlt/Interface/core/testFiles/AeroTech_H128.eng");
    db->CreateMotor("C:/Users/rober/Documents/Rockets/Altimeters/interface/core/tests/test_files/AeroTech_H128.eng");
    //Motor* h128 = new Motor("C:/Users/rober/Documents/Rockets/Altimeters/Interface/core/testFiles/AeroTech_H128.eng");

	//let's see if simulation works...
    db->CreateSimulation("h128", db->GetConfiguration("29mm 3DPME v2019", "180 case"));
    db->GetSimulation("29mm 3DPME v2019", "180 case", "h128")->SetHeightPad(167.0);
    db->GetSimulation("29mm 3DPME v2019", "180 case", "h128")->SetMotor(db->GetMotor("H128W"), db->GetStage("29mm 3DPME v2019", "180 case", "sustainer"));
    db->GetSimulation("29mm 3DPME v2019", "180 case", "h128")->Run(0.05, 5.0);


	//db->GetConfiguration(1)->CreateSimulation("sim1", "", 167.0, 0.0, 2.5);
	//db->GetSimulationStage(1)->motor_ = h128;
	//db->GetConfiguration(1)->simulations_[0]->Run(0.05, 5.0);    

    //Configuration
    //db->GetRocket(1)->CreateConfiguration("240 case", "");
    //db->GetStage(2)->inertial_.SetOverrideMass(0.195);
    //db->GetStage(2)->surface_finish_ = SurfaceFinish::ROUGH;

    //Instances
    //db->GetStage(2)->CreateInstance(db->GetPart(1), PartPosition::FOREWARD, 0.0);
    //db->GetStage(2)->CreateInstance(db->GetPart(2), PartPosition::FOREWARD, 0.0);
    //db->GetStage(2)->CreateInstance(db->GetPart(3), PartPosition::FOREWARD, 0.0);
    //db->GetStage(2)->CreateInstance(db->GetPart(4), PartPosition::FOREWARD, 0.0);
    //db->GetStage(2)->CreateInstance(db->GetPart(7), PartPosition::FOREWARD, 0.0);
    //db->GetInstance(11)->CreateChild(db->GetPart(6), PartPosition::FOREWARD, 0.0063);

    //Gather data for the simulation
    //Motor* h180 = new Motor("D:/Personal/Rockets/RoboAlt/Interface/core/testFiles/AeroTech_H180.eng");
    //Motor* h180 = new Motor("C:/Users/rober/Documents/Rockets/Altimeters/Interface/core/testFiles/AeroTech_H180.eng");

    //let's see if simulation works...
    //db->GetConfiguration(2)->CreateSimulation("sim2", "", 167.0, 0.0, 2.5);
    //db->GetSimulationStage(2)->motor_ = h180;
    //db->GetConfiguration(2)->simulations_[0]->Run(0.05, 5.0);

	std::cout << "Complete" << std::endl;

    //rkt->GetSimulationStage(2)->flight_data_.Print();
	
	std::getchar();
	return 1;
}
