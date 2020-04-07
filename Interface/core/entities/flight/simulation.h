
#ifndef _SIMULATION_H
#define _SIMULATION_H

#include "atmosphere.h"
#include "atmosphere_ISA.h"
#include "drag.h"
#include "entity.h"
#include "flight_data.h"
#include "matrix.h"
#include "motor.h"
#include "simulation_event.h"
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

    Simulation(std::string name, std::string comments,
        const double& height_pad, const double& angle_launch_rod, const double& length_launch_rod);
    ~Simulation();    

    //Properties
    void SetHeightPad(const double& height_pad);
    void SetAngleLaunchRod(const double& angle_launch_rod);
    void SetLengthLaunchRod(const double& length_launch_rod);
    double HeightPad() const;
    double AngleLaunchRod() const;
    double LengthLaunchRod() const;

    void Run(const double& step_ascent, const double& step_descent);    

  private:    
    Event RunPhase(Matrix<double>& result_current_phase, Phase phase, const std::vector<double>& initial_conditions,
        const double& time_start, const double& time_end, const double& step);
    Phase GetNextPhase(Event event_current, const double& time_of_flight);
    double GetTimeEndNextPhase(const double& time_of_flight);
    double GetMotorMassStagesAbove();
    FlightData PopulateStageFlightData(Matrix<double> stage_result);       

    //return solution of ode for timestep. S[0] = position, S[1] = velocity for next time step
    std::vector<double> EomAscent(const double& time, const std::vector<double>& state);
    std::vector<double> EomDescent(const double& time, const std::vector<double>& state);

    //events
    static bool LaunchDetect(const std::vector<double>& state);
    bool CoastDetect(const std::vector<double>& state);
    static bool ApogeeDetect(const std::vector<double>& state);
    bool MainDetect(const std::vector<double>& state);
    bool GroundDetect(const std::vector<double>& state);

    double height_pad_;
    double angle_launch_rod_;
    double length_launch_rod_;
    std::vector<SimulationStage*> sim_stages_;    
    Atmosphere* atmosphere_; bool atmosphere_internal_calc_;    
    double time_max_; //limits time the ode solver can run. Shouldn't ever be met unless something goes wrong with code
    double time_motor_lit_; //time current stage motor lit 
    double mass_empty_current_;    
    SimulationStage* sim_stage_current_; 
    Drag* drag_current_;
    std::vector<SimulationEvent*> uncompleted_user_events_;
};
#endif

