
#ifndef _SIMULATION_H
#define _SIMULATION_H

#define GRAVITY 9.80665

#define VELOCITY_LAUNCH_DETECT				1.0 //(m/s)
#define ACCELERATION_LAUNCH_DETECT			1.0 //(m/s^2) (gravity subtracted from this input)
#define ACCELERATION_COAST_DETECT			0.0 //(m/s^2)
#define VELOCITY_APOGEE_DETECT				0.0 //(m/s)


#include "FlightData.h"
#include "SimulationEvent.h"
#include "Stage.h"

enum class FlightPhase {
	DETECT_LAUNCH,
	ASCENT_POWERED,
	ASCENT_UNPOWERED,
	DESCENT_UNPOWERED,
	DESCSENT_DROGUE,
	DESCENT_MAIN,
	GROUND
};

struct StageSetup {
	double massEmpty; //might not need this?
	Motor motor;
	Drag dragRocket, dragDrogue, dragMain;
	std::vector<SimulationEvent> userEvents;
}; 

class Simulation :
	public FlightData
{
public:
	Simulation(std::string in_name, std::string in_comments, const double& in_massPad, const double& in_elevationPad);
	~Simulation();

	//std::vector<StageSetup> stages;

	void run(const std::vector<double>& initialValues, const double& odeStepAscent, const double& odeStepDescent);
	Event runPhase(FlightPhase phase, const std::vector<double>& initialValues, const double& timeStart, const double& timeRun, const double& odeStep);


private:
	double timeMax;
	
	std::vector<SimulationEvent> uncompleteUserEvents;
	FlightPhase setPhase(Event event, const double& timeOfFlight);
	std::vector<std::vector<double>> simResult; //t, S, V, A - used to populate FlightData vectors
	void updateFlightData();

	//return solution of ode for timestep. S[0] = position, S[1] = velocity for next time step
	std::vector<double> eomAscentPowered(const double& time, const std::vector<double>& state);
	std::vector<double> eomAscentUnpowered(const double& time, const std::vector<double>& state);
	std::vector<double> eomDescentUnpowered(const double& time, const std::vector<double>& state);
	std::vector<double> eomDescentDrogue(const double& time, const std::vector<double>& state);
	std::vector<double> eomDescentMain(const double& time, const std::vector<double>& state);

	//events
	static bool launchDetect(const std::vector<double>& state);
	static bool coastDetect(const std::vector<double>& state);
	static bool apogeeDetect(const std::vector<double>& state);
	bool mainDetect(const std::vector<double>& state);
	static bool groundDetect(const std::vector<double>& state);
};
#endif

