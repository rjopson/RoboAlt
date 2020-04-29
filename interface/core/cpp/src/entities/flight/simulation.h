#ifndef _SIMULATION_H
#define _SIMULATION_H

#include "atmosphere.h"
#include "atmosphere_ISA.h"
#include "drag.h"
#include "entity.h"
#include "flight.h"

#include "math_utilities.h"
#include "matrix.h"
#include "motor.h"
//#include "simulation_stage.h"
#include "simulation_data.h"
#include "simulation_user_command.h"
#include "stage.h"

struct SimulationStage {    
    Stage* stage_ = nullptr;    
    Motor* motor_ = nullptr;
    Drag* drag_with_stages_above_ = nullptr;
    Drag* drag_without_stages_above_ = nullptr;
    Drag* drag_drogue_ = nullptr;
    Drag* drag_main_ = nullptr;
    std::vector<SimulationUserCommand*> user_commands_;
    SimulationData simulation_data_;
};

class Simulation : public Flight {
  public:      
    static constexpr double kVelocityLaunchDetect = 1.0;
    static constexpr double kAccelerationLaunchDetect = 1.0;
    static constexpr double kVelocityApogeeDetect = 0.0;

    Simulation(const std::string& name, const std::string& comments, Atmosphere* atmosphere,
        const double& height_pad, const double& angle_launch_rod, const double& length_launch_rod,
        const double& step_ascent, const double& step_descent);
    ~Simulation();    

    //Values    
    void AddStage(Stage* stage);
    void RemoveStage(Stage* stage);
    SimulationUserCommand* CreateUserCommand(Stage* stage);
    void DeleteUserCommand(Stage* stage, SimulationUserCommand* user_command);
    void SetMotor(Motor* motor, Stage* stage);
    void SetStepAscent(const double& step_ascent);
    void SetStepDescent(const double& step_descent);

    //Datanames    
    std::vector<SimulationUserCommand*> UserCommands(Stage* stage) const;
    SimulationData Results(Stage* stage) const;
    Motor* AssignedMotor(Stage* stage) const;
    std::vector<Stage*> Stages() const;
    std::vector<Motor*> Motors() const;
    double StepAscent() const;
    double StepDescent() const;     

    //Functions
    void Run();    

  private:    
    Event RunPhase(std::vector<SolverResult>& results, Phase phase, const std::vector<double>& initial_conditions,
        const double& time_start, const double& time_end, const double& step);
    Phase GetNextPhase(Event event_current, const double& time_of_flight);
    double GetMotorMassStagesAbove();
    SimulationStage* GetSimulationStage(Stage* stage) const;
    double AltitudeMainDeploy(SimulationStage* stage) const; //if a user event is main deploy, return the altitude. Otherwise return -1
    Command UpdateUserCommands(SimulationStage* stage, Event event, const double& time_of_flight);
    double GetTimeForNearestDelayedUserCommand(SimulationStage* stage, const double& time_of_flight, const double& time_max) const;  
    Drag GetDragStageStacked(SimulationStage* stage);
    Drag GetDragStageUnstacked(SimulationStage* stage);
    Drag GetDragDrogueParachute(SimulationStage* stage);
    Drag GetDragMainParachute(SimulationStage* stage);

    //return solution of ode for timestep. S[0] = position, S[1] = velocity for next time step
    std::vector<double> Eom(SolverResult& results_step, const double& time, const std::vector<double>& state);

    //events
    bool LaunchDetect(const SolverResult& result_step);
    bool CoastDetect(const SolverResult& result_step);
    bool ApogeeDetect(const SolverResult& result_step);
    bool MainDetect(const SolverResult& result_step);
    bool GroundDetect(const SolverResult& result_step);

    std::vector<SimulationStage*> stages_;    
    double step_ascent_;
    double step_descent_;
    double time_max_; //limits time the ode solver can run. Shouldn't ever be met unless something goes wrong with code
    double time_motor_lit_; //time current stage motor lit - used to extract motor thrust data set from time=0.0
    double mass_empty_current_;    
    SimulationStage* stage_current_; 
    Drag* drag_current_;
    Phase phase_; //current phase of simulation    
}; 
#endif

