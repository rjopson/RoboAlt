
#ifndef _SIMULATION_H
#define _SIMULATION_H

#define GRAVITY 9.80665

#include "FlightData.h"
#include "SimulationEvent.h"

enum class FlightPhase {
	DETECT_LAUNCH,
	ASCENT_POWERED,
	ASCENT_UNPOWERED,
	DESCENT_UNPOWERED,
	DESCSENT_DROGUE,
	DESCENT_MAIN,
	GROUND
};

class Simulation :
	public FlightData
{
public:
	Simulation(std::string in_name, std::string in_comments, const double& in_massPad, const double& in_elevationPad);
	~Simulation();

	std::vector<SimulationEvent*> userEvents;

	void run(const std::vector<double>& initialValues);	

private:
	double odeStep;
	double timeMax;
	
	FlightPhase phase;
	std::vector<SimulationEvent*> uncompleteUserEvents;
	FlightPhase setPhase(Event event, const double& timeOfFlight);
	Event runPhase(FlightPhase phase, const std::vector<double>& initialValues, const double& timeStart, const double& timeRun);
	std::vector<std::vector<double>> simResult; //S, V, A
	void updateFlightData();

	void testRK45(Simulation* in_sim,
		std::vector<double>(Simulation::* mf)(const double&, const std::vector<double>));

	//return solution of ode for timestep. S[0] = position, S[1] = velocity for next time step
	std::vector<double> eomAscentPowered(const double& time, const std::vector<double>& state);
	std::vector<double> eomAscentUnpowered(const double& time, const std::vector<double>& state);
	std::vector<double> eomDescentUnpowered(const double& time, const std::vector<double>& state);
	std::vector<double> eomDescentDrogue(const double& time, const std::vector<double>& state);
	std::vector<double> eomDescentMain(const double& time, const std::vector<double>& state);
};
#endif

