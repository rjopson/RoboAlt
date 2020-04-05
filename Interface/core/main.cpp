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

    db->CreateRocket("29mm 3DPME v2019");
    std::cout << db->GetRocket("29mm 3DPME v2019")->Name() << std::endl;

    db->CreateMaterial("PLA");
    db->GetMaterial("PLA")->SetDensity(1380.0);

	//Parts
    //Nosecone
    db->CreatePart("Nosecone", PartType::NOSECONE, db->GetRocket("29mm 3DPME v2019"));
    db->GetNosecone("Nosecone")->SetMaterial(db->GetMaterial("PLA"));
    db->GetNosecone("Nosecone")->SetNoseType(NoseconeType::VON_KARMEN);
    db->GetNosecone("Nosecone")->SetShapeParameter(1.0);
    db->GetNosecone("Nosecone")->SetLengthNose(0.157);
    db->GetNosecone("Nosecone")->SetLengthBase(0.01);
    db->GetNosecone("Nosecone")->SetLengthShoulder(0.0);
    db->GetNosecone("Nosecone")->SetThickness(0.01);
    db->GetNosecone("Nosecone")->SetThicknessShoulder(0.0);
    db->GetNosecone("Nosecone")->SetDiameterOuter(0.03139);
    db->GetNosecone("Nosecone")->SetDiameterShoulder(0.0);

    //Main tube
    db->CreatePart("tubeMain", PartType::TUBE_BODY, db->GetRocket("29mm 3DPME v2019"));
    db->GetTubeBody("tubeMain")->SetMaterial(db->GetMaterial("PLA"));
    db->GetTubeBody("tubeMain")->SetLength(0.076);
    db->GetTubeBody("tubeMain")->SetDiameterOuter(0.03139);
    db->GetTubeBody("tubeMain")->SetThickness(0.001);

    //Drogue tube
    db->CreatePart("tubeDrogue", PartType::TUBE_BODY, db->GetRocket("29mm 3DPME v2019"));
    db->GetTubeBody("tubeDrogue")->SetMaterial(db->GetMaterial("PLA"));
    db->GetTubeBody("tubeDrogue")->SetLength(0.19);
    db->GetTubeBody("tubeDrogue")->SetDiameterOuter(0.03139);
    db->GetTubeBody("tubeDrogue")->SetThickness(0.001);

    //Extension tube
    db->CreatePart("tubeExtension180", PartType::TUBE_BODY, db->GetRocket("29mm 3DPME v2019"));
    db->GetTubeBody("tubeExtension180")->SetMaterial(db->GetMaterial("PLA"));
    db->GetTubeBody("tubeExtension180")->SetLength(0.001);
    db->GetTubeBody("tubeExtension180")->SetDiameterOuter(0.03139);
    db->GetTubeBody("tubeExtension180")->SetThickness(0.001);

    db->CreatePart("tubeExtension240", PartType::TUBE_BODY, db->GetRocket("29mm 3DPME v2019"));
    db->GetTubeBody("tubeExtension240")->SetMaterial(db->GetMaterial("PLA"));
    db->GetTubeBody("tubeExtension240")->SetLength(0.04);
    db->GetTubeBody("tubeExtension240")->SetDiameterOuter(0.03139);
    db->GetTubeBody("tubeExtension240")->SetThickness(0.001);

    //Fincan tube
    db->CreatePart("tubeFincan", PartType::TUBE_BODY, db->GetRocket("29mm 3DPME v2019"));
    db->GetTubeBody("tubeFincan")->SetMaterial(db->GetMaterial("PLA"));
    db->GetTubeBody("tubeFincan")->SetLength(0.114);
    db->GetTubeBody("tubeFincan")->SetDiameterOuter(0.03139);
    db->GetTubeBody("tubeFincan")->SetThickness(0.001);

    //Fins
    db->CreatePart("Fin set", PartType::FINS, db->GetRocket("29mm 3DPME v2019"));
    db->GetFins("Fin set")->SetMaterial(db->GetMaterial("PLA"));
    static_cast<FinShapeTrapezoidal*>(db->GetFins("Fin set")->AssignedFinShape())->SetChordRoot(0.102);
    static_cast<FinShapeTrapezoidal*>(db->GetFins("Fin set")->AssignedFinShape())->SetChordTip(0.013);
    static_cast<FinShapeTrapezoidal*>(db->GetFins("Fin set")->AssignedFinShape())->SetSpan(0.051);
    static_cast<FinShapeTrapezoidal*>(db->GetFins("Fin set")->AssignedFinShape())->SetLengthSweep(0.076);
    db->GetFins("Fin set")->SetFinCrossSection(FinCrossSection::ROUNDED);
    db->GetFins("Fin set")->SetNumber(3);
    db->GetFins("Fin set")->SetThickness(0.003);
    db->GetFins("Fin set")->SetRadiusFillet(0.005);

	//Configuration
    //db->GetRocket(1)->CreateConfiguration("180 case", "");
    //db->GetStage(1)->inertial_.SetOverrideMass(0.1809);
	//db->GetStage(1)->surface_finish_ = SurfaceFinish::ROUGH;	

	//Instances
    //db->GetStage(1)->CreateInstance(db->GetPart(1), PartPosition::FOREWARD, 0.0);
    //db->GetStage(1)->CreateInstance(db->GetPart(2), PartPosition::FOREWARD, 0.0);
    //db->GetStage(1)->CreateInstance(db->GetPart(3), PartPosition::FOREWARD, 0.0);
    //db->GetStage(1)->CreateInstance(db->GetPart(4), PartPosition::FOREWARD, 0.0);
    //db->GetStage(1)->CreateInstance(db->GetPart(5), PartPosition::FOREWARD, 0.0);
    //db->GetInstance(5)->CreateChild(db->GetPart(6), PartPosition::FOREWARD, 0.0063);	

    
	//Gather data for the simulation
	//Motor* h128 = new Motor("D:/Personal/Rockets/RoboAlt/Interface/core/testFiles/AeroTech_H128.eng");
    Motor* h128 = new Motor("C:/Users/rober/Documents/Rockets/Altimeters/Interface/core/testFiles/AeroTech_H128.eng");

	//let's see if simulation works...
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
    Motor* h180 = new Motor("C:/Users/rober/Documents/Rockets/Altimeters/Interface/core/testFiles/AeroTech_H180.eng");

    //let's see if simulation works...
    //db->GetConfiguration(2)->CreateSimulation("sim2", "", 167.0, 0.0, 2.5);
    //db->GetSimulationStage(2)->motor_ = h180;
    //db->GetConfiguration(2)->simulations_[0]->Run(0.05, 5.0);

	std::cout << "Complete" << std::endl;

    //rkt->GetSimulationStage(2)->flight_data_.Print();
	
	std::getchar();
	return 1;
}
