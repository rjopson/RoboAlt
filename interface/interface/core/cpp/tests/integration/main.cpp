#include <iostream>
#include <string>

#include "configuration.h"
#include "entity_manager.h"
#include "experiment.h"
#include "fin_shape.h"
#include "part_instance.h"
#include "material.h"
#include "part.h"
#include "part_fins.h"
#include "part_nosecone.h"
#include "part_tube_body.h"
#include "rocket.h"

using namespace std;

int main() {

	cout << "Creating rocket" << endl;

    EntityManager* db = new EntityManager();    

    //Create rocket
    Rocket* rkt = db->CreateRocket();
    rkt->SetName("29mm 3DPME v2019");

    //Create material
    Material* pla = db->CreateMaterial();
    pla->SetName("PLA");
    pla->SetDensity(1380.0);
    Material* ripstop_nylon = db->CreateMaterial();
    ripstop_nylon->SetName("Ripstop Nylon");
    ripstop_nylon->SetDensity(500.0);

	//Parts
    //Nosecone
    Nosecone* nosecone = db->CreatePart<Nosecone>(rkt);
    nosecone->SetName("Nosecone");
    nosecone->SetMaterial(db->GetMaterial("PLA"));
    nosecone->SetNoseType(NoseconeType::VON_KARMEN);
    nosecone->SetShapeParameter(1.0);
    nosecone->SetLengthNose(0.157);
    nosecone->SetLengthBase(0.01);
    nosecone->SetLengthShoulder(0.0);
    nosecone->SetThickness(0.01);
    nosecone->SetDiameterOuter(0.03139);
    nosecone->SetDiameterShoulder(0.0);    

    //Main tube
    TubeBody* tube_main = db->CreatePart<TubeBody>(rkt);
    tube_main->SetName("tubeMain");
    tube_main->SetMaterial(db->GetMaterial("PLA"));
    tube_main->SetLength(0.076);
    tube_main->SetDiameterOuter(0.03139);
    tube_main->SetThickness(0.001);    
    
    //Drogue tube
    TubeBody* tube_drogue = db->CreatePart<TubeBody>(rkt);
    tube_drogue->SetName("tubeDrogue");
    tube_drogue->SetMaterial(db->GetMaterial("PLA"));
    tube_drogue->SetLength(0.19);
    tube_drogue->SetDiameterOuter(0.03139);
    tube_drogue->SetThickness(0.001);
    
    //Extension tube
    TubeBody* tube_extension180 = db->CreatePart<TubeBody>(rkt);
    tube_extension180->SetName("tubeExtension180");
    tube_extension180->SetMaterial(db->GetMaterial("PLA"));
    tube_extension180->SetLength(0.001);
    tube_extension180->SetDiameterOuter(0.03139);
    tube_extension180->SetThickness(0.001);

    TubeBody* tube_extension240 = db->CreatePart<TubeBody>(rkt);
    tube_extension240->SetName("tubeExtension240");
    tube_extension240->SetMaterial(db->GetMaterial("PLA"));
    tube_extension240->SetLength(0.04);
    tube_extension240->SetDiameterOuter(0.03139);
    tube_extension240->SetThickness(0.001);
    
    //Fincan tube
    TubeBody* fincan = db->CreatePart<TubeBody>(rkt);
    fincan->SetName("tubeFincan");
    fincan->SetMaterial(db->GetMaterial("PLA"));
    fincan->SetLength(0.114);
    fincan->SetDiameterOuter(0.03139);
    fincan->SetThickness(0.001);    

    //Fins
    Fins* fins = db->CreatePart<Fins>(rkt);
    fins->SetName("Fin set");
    fins->SetMaterial(db->GetMaterial("PLA"));
    fins->AssignedShape<FinShapeTrapezoidal>()->SetChordRoot(0.102);
    fins->AssignedShape<FinShapeTrapezoidal>()->SetChordTip(0.013);
    fins->AssignedShape<FinShapeTrapezoidal>()->SetSpan(0.051);
    fins->AssignedShape<FinShapeTrapezoidal>()->SetLengthSweep(0.076);
    fins->SetFinCrossSection(FinCrossSection::ROUNDED);
    fins->SetNumber(3);
    fins->SetThickness(0.003);
    fins->SetRadiusFillet(0.005);    

    //Parachutes
    Parachute* drogue_chute = db->CreatePart<Parachute>(rkt);
    drogue_chute->SetName("drogueless");
    drogue_chute->SetThickness(0.000);
    drogue_chute->SetArea(0.03);
    drogue_chute->SetMaterial(ripstop_nylon);
    Parachute* main_chute = db->CreatePart<Parachute>(rkt);
    main_chute->SetName("Top Flight 15in");
    main_chute->SetThickness(0.0002);
    main_chute->SetDiameter(0.31);
    main_chute->SetMaterial(ripstop_nylon);

	//Configuration
    Configuration* config180 = db->CreateConfiguration(rkt);
    config180->SetName("180 case");
    Stage* sustainer180 = db->CreateStage(config180);    
    sustainer180->SetName("sustainer");
    sustainer180->SetOverrideMassEmpty(0.1809);
    sustainer180->SetOverrideMassSwitch(true);
    sustainer180->SetSurfaceFinish(SurfaceFinish::ROUGH);

	//Instances
    PartInstance* nosecone_1 = db->CreatePartInstance(nosecone, sustainer180->InstanceRoot());
    PartInstance* tube_main_1 = db->CreatePartInstance(tube_main, sustainer180->InstanceRoot());
    PartInstance* main_chute_1 = db->CreatePartInstance(main_chute, tube_main_1);
    PartInstance* tube_drogue_1 = db->CreatePartInstance(tube_drogue, sustainer180->InstanceRoot());
    PartInstance* drogue_chute_1 = db->CreatePartInstance(drogue_chute, tube_drogue_1);
    PartInstance* tube_extension180_1 = db->CreatePartInstance(tube_extension180, sustainer180->InstanceRoot());
    PartInstance* fincan_1 = db->CreatePartInstance(fincan, sustainer180->InstanceRoot());
    PartInstance* finset_1 = db->CreatePartInstance(fins, fincan_1);    
    finset_1->SetPositionFrom(0.0063);
    
	//Gather data for the simulation
	//D:/Personal/Rockets/RoboAlt/Interface/core/testFiles/AeroTech_H128.eng"
    Motor* h128 = db->CreateMotor("C:/Users/rober/Documents/Rockets/Altimeters/RoboAlt/interface/interface/core/cpp/tests/test_files/AeroTech_H128.eng");

	//let's see if simulation works...
    Simulation* sim_h128 = db->CreateSimulation(config180);
    sim_h128->SetName("h128");
    sim_h128->SetHeightPad(167.0);
    sim_h128->SetMotor(h128, sustainer180);    
    SimulationUserCommand* apogee_command = sim_h128->CreateUserCommand(sustainer180);
    apogee_command->SetEvent(Event::APOGEE);
    apogee_command->SetCommand(Command::DEPLOY_DROGUE);
    apogee_command->SetParachute(drogue_chute);
    SimulationUserCommand* main_command = sim_h128->CreateUserCommand(sustainer180);
    main_command->SetEvent(Event::ALTITUDE_MAIN);
    main_command->SetCommand(Command::DEPLOY_MAIN);
    main_command->SetParachute(main_chute);
    main_command->SetAltitudeMainDeploy(500.0);    
    sim_h128->Run();

    Experiment* flight_h128 = db->CreateFlight(config180);
    flight_h128->SetName("h128");
    flight_h128->GetDataFromFile(sustainer180, "C:/Users/rober/Documents/Rockets/Altimeters/RoboAlt/flight_tests/3DPME_29mm_H128_TriCities_9-2019_v2.csv");
    flight_h128->SetMotor(h128, sustainer180);
    flight_h128->ProcessData();
    //flight_h128->Results(sustainer180).Print();

    ReducedData sim_results = sim_h128->Results(sustainer180).Reduced();
    ReducedData flight_results = flight_h128->Results(sustainer180).Reduced();

    cout << "Simulation " << "Flight" << endl;
    cout << "Altitude: " << sim_results.altitude_agl_max << " " << flight_results.altitude_agl_max << endl;
    cout << "Velocity: " << sim_results.velocity_max << " " << flight_results.velocity_max << endl;
    cout << "Acceleration: " << sim_results.acceleration_max << " " << flight_results.acceleration_max << endl;
    cout << "Time Apogee: " << sim_results.time_apogee << " " << flight_results.time_apogee << endl;
    cout << "Time Burnout: " << sim_results.time_burnout << " " << flight_results.time_burnout << endl;
    cout << "Time Flight: " << sim_results.time_of_flight << " " << flight_results.time_of_flight << endl;
    cout << "Descent drogue: " << sim_results.descent_rate_drogue << " " << flight_results.descent_rate_drogue << endl;
    cout << "Descent main: " << sim_results.descent_rate_main << " " << flight_results.descent_rate_main << endl;

    db->DeletePart(nosecone);
    db->DeleteRocket(rkt);

    //Configuration
    //db->GetRocket(1)->CreateConfiguration("240 case", "");
    //db->GetStage(2)->inertial_.SetOverrideMass(0.195);
    //Gather data for the simulation
    //Motor* h180 = new Motor("D:/Personal/Rockets/RoboAlt/Interface/core/testFiles/AeroTech_H180.eng");
    //Motor* h180 = new Motor("C:/Users/rober/Documents/Rockets/Altimeters/Interface/core/testFiles/AeroTech_H180.eng");

	std::cout << "Complete" << std::endl;
	
	std::getchar();
	return 1;
}
