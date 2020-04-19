
#ifndef _SIMULATION_H
#define _SIMULATION_H

#include "atmosphere.h"
#include "atmosphere_ISA.h"
#include "drag.h"
#include "entity.h"
#include "flight_data.h"
#include "matrix.h"
#include "motor.h"
#include "simulation_user_command.h"
#include "simulation_stage.h"
#include "stage.h"

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

class Simulation : public Entity {
  public:
      static constexpr double kGravity = 9.80665;
      static constexpr double kVelocityLaunchDetect = 1.0;
      static constexpr double kAccelerationLaunchDetect = 1.0;
      static constexpr double kVelocityApogeeDetect = 0.0;

    Simulation(std::string name, std::string comments, Atmosphere* atmosphere,
        const double& height_pad, const double& angle_launch_rod, const double& length_launch_rod);
    ~Simulation();    

    //Values
    void AddStage(Stage* stage);
    void RemoveStage(Stage* stage);
    void AddUserCommand(SimulationUserCommand* user_command, Stage* stage);
    void RemoveUserCommand(SimulationUserCommand* user_command, Stage* stage);
    void SetMotor(Motor* motor, Stage* stage);
    void SetHeightPad(const double& height_pad);
    void SetAngleLaunchRod(const double& angle_launch_rod);
    void SetLengthLaunchRod(const double& length_launch_rod);
    void SetAtmosphere(Atmosphere* atmosphere);

    //Datanames
    Motor* AssignedMotor(Stage* stage) const;
    double HeightPad() const;
    double AngleLaunchRod() const;
    double LengthLaunchRod() const;
    std::vector<Stage*> Stages() const;
    std::vector<Motor*> Motors() const;
    Atmosphere* AssignedAtmosphere() const;

    //Functions
    void Run(const double& step_ascent, const double& step_descent);    

  private:    
    Event RunPhase(Matrix<double>& result_current_phase, Phase phase, const std::vector<double>& initial_conditions,
        const double& time_start, const double& time_end, const double& step);
    Phase GetNextPhase(Event event_current, const double& time_of_flight);
    double GetMotorMassStagesAbove();
    FlightData PopulateStageFlightData(Matrix<double> stage_result);       

    //return solution of ode for timestep. S[0] = position, S[1] = velocity for next time step
    std::vector<double> Eom(const double& time, const std::vector<double>& state);
    //std::vector<double> EomDescent(const double& time, const std::vector<double>& state);

    //events
    static bool LaunchDetect(const std::vector<double>& state);
    bool CoastDetect(const std::vector<double>& state);
    static bool ApogeeDetect(const std::vector<double>& state);
    bool MainDetect(const std::vector<double>& state);
    bool GroundDetect(const std::vector<double>& state);

    double height_pad_;
    double angle_launch_rod_;
    double length_launch_rod_;
    std::vector<SimulationStage*> stages_;    
    Atmosphere* atmosphere_;    
    double time_max_; //limits time the ode solver can run. Shouldn't ever be met unless something goes wrong with code
    double time_motor_lit_; //time current stage motor lit - used to extract motor thrust data set from time=0.0
    double mass_empty_current_;    
    SimulationStage* stage_current_; 
    Drag* drag_current_;

    Phase phase_; //current phase of simulation
    std::vector<SolverResult> result_current_stage_;
    std::vector<SolverResult> result_next_stage_;
};

struct SolverResult {
    Phase phase;
    double time; //already calced
    double altitude; //already calced
    double velocity; //already calced
    double acceleration; //already calced     
    double mach_number;    
    double dynamic_pressure;
    double drag; //already calced
    double drag_coefficient;
    double mass; //already calced
    double pressure; 
    double temperature;
    double thrust; //already calced
    
                                // std::vector<double> reynolds_number;
    //std::vector<double> rotation_x;
    //std::vector<double> rotation_y;
    //std::vector<double> rotation_z;
};
#endif

