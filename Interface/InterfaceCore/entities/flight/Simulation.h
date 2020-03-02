
#ifndef _SIMULATION_H
#define _SIMULATION_H

#define GRAVITY 9.80665

#define VELOCITY_LAUNCH_DETECT				1.0 //(m/s)
#define ACCELERATION_LAUNCH_DETECT			1.0 //(m/s^2) (gravity subtracted from this input)
#define ACCELERATION_COAST_DETECT			0.0 //(m/s^2)
#define VELOCITY_APOGEE_DETECT				0.0 //(m/s)

#include "Atmosphere.h"
#include "Drag.h"
#include "FlightData.h"
#include "Motor.h"
#include "SimulationEvent.h"
#include "SimulationStage.h"
#include "Stage.h"

#include "Matrix.h"

enum class Phase {
	DETECT_LAUNCH,
	ASCENT_POWERED,
	ASCENT_UNPOWERED_STACKED,
	ASCENT_UNPOWERED_UNSTACKED,
	DESCENT_UNPOWERED_STACKED,
	DESCENT_UNPOWERED_UNSTACKED,
	DESCENT_DROGUE,
	DESCENT_MAIN,
	GROUND
};

class Simulation {

public:
	Simulation(std::string in_name, std::string in_comments, Atmosphere* in_atmosphere,
		const double& in_heightPad, const double& in_angleLaunchRod, const double& in_lengthLaunchRod);
	~Simulation();
	
	double heightPad;
	double angleLaunchRod;
	double lengthLaunchRod;

	Atmosphere* atmosphere;
	std::vector<SimulationStage> simStageList;

	void run(const double& odeStepAscent, const double& odeStepDescent);

private:
	double timeMax; //limits time the ode solver can run. Shouldn't ever be met unless something goes wrong with code
	//Matrix<double> runStage();
	Event runPhase(Matrix<double>& resultPhaseCurrent, Phase phase, const std::vector<double>& initialConditions,
		const double& timeStart, const double& timeEnd, const double& odeStep);
	Phase getNextPhase(Event eventCurrent, const double& timeOfFlight);
	double getMotorMassStagesAbove();

	double massEmptyCurrent;
	SimulationStage simStageCurrent;
	Drag* dragCurrent;
	std::vector<SimulationEvent> uncompleteUserEventList;

	double getTimeEndNextPhase(const double& timeOfFlight);

	//return solution of ode for timestep. S[0] = position, S[1] = velocity for next time step
	std::vector<double> eomAscent(const double& time, const std::vector<double>& state);
	std::vector<double> eomDescent(const double& time, const std::vector<double>& state);

	//events
	static bool launchDetect(const std::vector<double>& state);
	static bool coastDetect(const std::vector<double>& state);
	static bool apogeeDetect(const std::vector<double>& state);
	bool mainDetect(const std::vector<double>& state);
	static bool groundDetect(const std::vector<double>& state);

};
#endif

