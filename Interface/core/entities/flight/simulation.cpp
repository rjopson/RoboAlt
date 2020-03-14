#include "simulation.h"

Simulation::Simulation(std::string name, std::string comments,
    const double& height_pad, const double& angle_launch_rod, const double& length_launch_rod)

    : name_(name),
      comments_(comments),
      height_pad_(height_pad),
      angle_launch_rod_(angle_launch_rod),
      length_launch_rod_(length_launch_rod) {

    time_max_ = 500.0;

    //Create default atmosphere to use 
    atmosphere_ = new Atmosphere();
    AtmosphereISA atmosphere_model;
    *atmosphere_ = atmosphere_model.GetModel();
    atmosphere_internal_calc_ = true;
}

Simulation::~Simulation() {

    if (atmosphere_internal_calc_) {
        delete atmosphere_;
    }
}

void Simulation::Run(const double& step_ascent, const double& step_descent) {

    //data which will be returned from function. For use in future stages
    std::vector<double> initial_data { 0.0, height_pad_, 0.0, 0.0 };
    Matrix<double> result_current_stage(0, 4, initial_data);
    Matrix<double> result_next_stage(0, 4);
    bool result_next_stage_saved = false;

    //initialize times
    double time_start = 0.0;
    double time_end = time_max_;
    time_motor_lit_ = time_start;

    //initial conditions for ode
    std::vector<double> initial_conditions { height_pad_, 0.0 };
    Phase phase = Phase::DETECT_LAUNCH;

    //loop through each stage starting with booster
    for (auto it = sim_stages_.rbegin(); it != sim_stages_.rend(); ++it) {

        sim_stage_current_ = (*it);
        sim_stage_current_->PopulateModelDrag();

        //run full simulation for this stage until it's back on the ground. Then start the next one
        while (phase != Phase::GROUND) {

            Event event;
            Matrix<double> result_phase(0, 4);				

            if (phase == Phase::DESCENT_DROGUE ||
                phase == Phase::DESCENT_MAIN) {

                event = RunPhase(result_phase, phase, initial_conditions, time_start, time_end, step_descent); //calculate current phase
            }
            else {
                event = RunPhase(result_phase, phase, initial_conditions, time_start, time_end, step_ascent); //calculate current phase
            }
            
            //Update initial conditions for next phase
            initial_conditions.clear();
            initial_conditions.push_back(result_phase.GetLastRow()[1]);
            initial_conditions.push_back(result_phase.GetLastRow()[2]);

            //Determine next phase of flight and times to use
            time_start = result_phase.GetLastRow()[0];
            phase = GetNextPhase(event, time_start);			
            time_end = GetTimeEndNextPhase(time_start);
            
            //Add data from current phase to current stage flight data
            result_current_stage.ExpandRows(result_phase);

            //If stages separate, save data to pass to next stage simulation
            if (!result_next_stage_saved) { //stages haven't separated yet, keep saving data for next stage
                result_next_stage = result_current_stage;
            }
            if (phase == Phase::ASCENT_UNPOWERED_UNSTACKED && !result_next_stage_saved) {
                result_next_stage_saved = true;
            }			
        }

        //Housekeeping to prepare for next stage
        sim_stage_current_->flight_data_ = PopulateStageFlightData(result_current_stage);
        result_current_stage = result_next_stage; //begin with results up until this stage separates. Now continue simulation with separated stage 
        result_next_stage_saved = false;

        //Update initial conditions for next stage
        initial_conditions.clear();
        initial_conditions.push_back(result_current_stage.GetLastRow()[1]);
        initial_conditions.push_back(result_current_stage.GetLastRow()[2]); 
        phase = Phase::ASCENT_UNPOWERED_STACKED;
    }	
}

//this function runs just one flight phase (for example coast=burnout->apogee). It looks for an event to say the phase is finished,
//then stops and provides data for the phase and the event which was detected 
Event Simulation::RunPhase(Matrix<double>& result_phase, Phase phase, const std::vector<double>& initial_conditions,
    const double& time_start, const double& time_end, const double& step) {

    Event event;

    //Function definitons for events and EOM's which can change
    std::function<std::vector<double>(const double&, const std::vector<double>&)> eom;
    std::function<bool(const std::vector<double>&)> event_detect;

    //run appropriate phase of flight.
    switch (phase) {
        case Phase::DETECT_LAUNCH: {
            drag_current_ = sim_stage_current_->GetDragWithStagesAbove();
            mass_empty_current_ = sim_stage_current_->stage_->MassEmpty(true) + GetMotorMassStagesAbove();
            eom = std::bind(&Simulation::EomAscent, this, std::placeholders::_1, std::placeholders::_2);
            result_phase = MathUtilities::RK45(initial_conditions, eom, Simulation::LaunchDetect, time_start, time_end, step);
            event = Event::LIFTOFF;
            break;
        }
        case Phase::ASCENT_POWERED: {
            drag_current_ = sim_stage_current_->GetDragWithStagesAbove();
            mass_empty_current_ = sim_stage_current_->stage_->MassEmpty(true) + GetMotorMassStagesAbove();
            eom = std::bind(&Simulation::EomAscent, this, std::placeholders::_1, std::placeholders::_2);
            event_detect = std::bind(&Simulation::CoastDetect, this, std::placeholders::_1);
            result_phase = MathUtilities::RK45(initial_conditions, eom, event_detect, time_start, time_end, step);
            event = Event::BURNOUT;
            break;
        }
        case Phase::ASCENT_UNPOWERED_STACKED: {
            drag_current_ = sim_stage_current_->GetDragWithStagesAbove();
            mass_empty_current_ = sim_stage_current_->stage_->MassEmpty(true) + GetMotorMassStagesAbove();
            eom = std::bind(&Simulation::EomAscent, this, std::placeholders::_1, std::placeholders::_2);
            result_phase = MathUtilities::RK45(initial_conditions, eom, Simulation::ApogeeDetect, time_start, time_end, step);
            event = Event::APOGEE;
            break;
        }
        case Phase::ASCENT_UNPOWERED_UNSTACKED: {
            drag_current_ = sim_stage_current_->GetDragWithoutStagesAbove();
            mass_empty_current_ = sim_stage_current_->stage_->MassEmpty(false);
            eom = std::bind(&Simulation::EomAscent, this, std::placeholders::_1, std::placeholders::_2);
            result_phase = MathUtilities::RK45(initial_conditions, eom, Simulation::ApogeeDetect, time_start, time_end, step);
            event = Event::APOGEE;
            break;
        }
        case Phase::DESCENT_UNPOWERED_STACKED: {
            drag_current_ = sim_stage_current_->GetDragWithStagesAbove();
            mass_empty_current_ = sim_stage_current_->stage_->MassEmpty(true) + GetMotorMassStagesAbove();
            eom = std::bind(&Simulation::EomDescent, this, std::placeholders::_1, std::placeholders::_2);
            event_detect = std::bind(&Simulation::GroundDetect, this, std::placeholders::_1);
            result_phase = MathUtilities::RK45(initial_conditions, eom, event_detect, time_start, time_end, step);
            event = Event::GROUND;
            break;
        }
        case Phase::DESCENT_UNPOWERED_UNSTACKED: {
            drag_current_ = sim_stage_current_->GetDragWithoutStagesAbove();
            mass_empty_current_ = sim_stage_current_->stage_->MassEmpty(false);
            eom = std::bind(&Simulation::EomDescent, this, std::placeholders::_1, std::placeholders::_2);
            event_detect = std::bind(&Simulation::GroundDetect, this, std::placeholders::_1);
            result_phase = MathUtilities::RK45(initial_conditions, eom, event_detect, time_start, time_end, step);
            event = Event::GROUND;
            break;
        }
        case Phase::DESCENT_DROGUE: {
            drag_current_ = sim_stage_current_->GetDragDrogue();
            mass_empty_current_ = sim_stage_current_->stage_->MassEmpty(false);
            eom = std::bind(&Simulation::EomDescent, this, std::placeholders::_1, std::placeholders::_2);
            event_detect = std::bind(&Simulation::MainDetect, this, std::placeholders::_1);
            result_phase = MathUtilities::RK45(initial_conditions, eom, event_detect, time_start, time_end, step);
            event = Event::ALTITUDE_MAIN;
            break;
        }
        case Phase::DESCENT_MAIN: {
            drag_current_ = sim_stage_current_->GetDragMain();
            mass_empty_current_ = sim_stage_current_->stage_->MassEmpty(false);
            eom = std::bind(&Simulation::EomDescent, this, std::placeholders::_1, std::placeholders::_2);
            event_detect = std::bind(&Simulation::GroundDetect, this, std::placeholders::_1);
            result_phase = MathUtilities::RK45(initial_conditions, eom, event_detect, time_start, time_end, step);
            event = Event::GROUND;
            break;
        }
    }

    //Check whether phase made it to end of input time. If it did, we're at a time delay event, not a flight phase event
    double time_current = result_phase.GetLastRow()[0];
    if (time_current == time_end) {
        //event = Event::AT_TIME_DELAY;
    }

    return event;
}

//determines the next phase of rocket flight based in event which just happend and a time of flight
Phase Simulation::GetNextPhase(Event event_current, const double& time_of_flight) {

    Phase phase;

    bool user_event_found = false; //mark true if user event found in current stage

    //check if there is an uncompleted user event (time delay now reached) which will determine next phase of flight
    for (int i = 0; i != uncompleted_user_events_.size(); i++) {

        if (time_of_flight >= uncompleted_user_events_[i]->time_to_activate_action_) { //we've now waited long enough to perform action

            user_event_found = true;

            switch (uncompleted_user_events_[i]->action_) {
                case Action::DEPLOY_DROGUE: {
                    phase = Phase::DESCENT_DROGUE;
                    break;
                }
                case Action::DEPLOY_MAIN: {
                    phase = Phase::DESCENT_MAIN;
                    break;
                }
                case Action::SEPARATE_STAGE: {
                    phase = Phase::ASCENT_UNPOWERED_UNSTACKED;
                    break;
                }
                case Action::LIGHT_STAGE: {
                    time_motor_lit_ = time_of_flight;
                    phase = Phase::ASCENT_POWERED;
                    break;
                }
            }
            uncompleted_user_events_.erase(uncompleted_user_events_.begin() + i);
            i = 0;
        }
    }

    //check if there is a user action which will determine the next phase of flight
    for (int i = 0; i != sim_stage_current_->user_events_.size(); i++) {

        if (sim_stage_current_->user_events_[i]->event_ == event_current) { 

            //check if there is a time delay for the detected event. If there is, we'll need some fancy logic (uncompleted_user_events).
            //if there's not, determine next phase directly
            if (sim_stage_current_->user_events_[i]->time_delay_ == 0.0) { 
                user_event_found = true;

                switch (sim_stage_current_->user_events_[i]->action_) {
                    case Action::DEPLOY_DROGUE: {
                        phase = Phase::DESCENT_DROGUE;
                        break;
                    }
                    case Action::DEPLOY_MAIN: {
                        phase = Phase::DESCENT_MAIN;
                        break;
                    }
                    case Action::SEPARATE_STAGE: {
                        phase = Phase::ASCENT_UNPOWERED_UNSTACKED;
                        break;
                    }
                    case Action::LIGHT_STAGE: {
                        time_motor_lit_ = time_of_flight;
                        phase = Phase::ASCENT_POWERED;
                        break;
                    }
                }
            }
            else { //there is a time delay so can't run user action immediately. Save to list of uncomplete actions
                sim_stage_current_->user_events_[i]->SetTimeToActivateAction(time_of_flight);
                uncompleted_user_events_.push_back(sim_stage_current_->user_events_[i]);
            }
        }
    }
    
    //there are no user actions to determine new phase of flight. Go to next default phase
    if (!user_event_found) { 

        switch (event_current) {
            case Event::LIFTOFF: {
                phase = Phase::ASCENT_POWERED;
                break;
            }
            case Event::BURNOUT: {
                phase = Phase::ASCENT_UNPOWERED_STACKED;
                break;
            }
            case Event::APOGEE: {
                phase = Phase::DESCENT_UNPOWERED_STACKED;
                break;
            }
            case Event::ALTITUDE_MAIN: {
                phase = Phase::DESCENT_MAIN;
                break;
            }
            case Event::GROUND: {
                phase = Phase::GROUND;
                break;
            }
        }
    }
    return phase;
}

//determine ending time to use for next phase of flight. For when user event has time delay
double Simulation::GetTimeEndNextPhase(const double& time_of_flight) {

    double time_end = time_max_ + time_of_flight;

    for (auto user_event : uncompleted_user_events_) {
        if (user_event->time_to_activate_action_ < time_end) {
            time_end = user_event->time_to_activate_action_;
        }
    }
    return time_end;
}

//get mass of all motors in stages above the current one. 
double Simulation::GetMotorMassStagesAbove() {

    double mass = 0.0;

    for (auto it = sim_stages_.begin(); it != std::find(sim_stages_.begin(), sim_stages_.end(), sim_stage_current_); it++) {
        mass += (*it)->motor_->mass_total_;
    }
    return mass;
}

std::vector<double> Simulation::EomAscent(const double& time, const std::vector<double>& state) {

    bool motor_thrusting = false;
    if (sim_stage_current_->motor_->data_time_.back() <= time - time_motor_lit_) {
        motor_thrusting = true;
    }	

    //Get acceleration
    double force_sum = sim_stage_current_->motor_->GetThrust(time - time_motor_lit_) - drag_current_->GetDrag(motor_thrusting, atmosphere_->Density(state[0]), std::abs(state[1]), atmosphere_->SpeedOfSound(state[0]));
    double mass = mass_empty_current_ + sim_stage_current_->motor_->GetMass(time);
    double acceleration = (force_sum / mass) - kGravity;

    //output solution to step
    std::vector<double> result_state{ state[1], acceleration};    

    return result_state;
}

std::vector<double> Simulation::EomDescent(const double& time, const std::vector<double>& state) {

    //Get acceleration
    double force_sum = drag_current_->GetDrag(false, atmosphere_->Density(state[0]), std::abs(state[1]), atmosphere_->SpeedOfSound(state[0]));
    double mass = mass_empty_current_ + sim_stage_current_->motor_->mass_total_ - sim_stage_current_->motor_->mass_propellant_;
    double acceleration = (force_sum / mass) - kGravity;

    //output solution to step
    std::vector<double> result_state{ state[1], acceleration };
    return result_state;
}

bool Simulation::LaunchDetect(const std::vector<double>& state) {

    if (state[2] > kVelocityLaunchDetect && state[3] > kAccelerationLaunchDetect) {
        return true;
    }
    else {
        return false;
    }
}

bool Simulation::CoastDetect(const std::vector<double>& state) {

    if (state[0] >= sim_stage_current_->motor_->data_time_.back()) {
        return true;
    }
    else {
        return false;
    }
}

bool Simulation::ApogeeDetect(const std::vector<double>& state) {

    if (state[2] < kVelocityApogeeDetect) {
        return true;
    }
    else {
        return false;
    }
}

bool Simulation::MainDetect(const std::vector<double>& state) {

    double altitude_main_deploy = 0.0;

    for (auto user_event : sim_stage_current_->user_events_) {
        if (user_event->event_ == Event::ALTITUDE_MAIN) {
            altitude_main_deploy = user_event->altitude_main_deploy_;
            break;
        }
    }

    if (state[1] < altitude_main_deploy) {
        return true;
    }
    else {
        return false;
    }
}

bool Simulation::GroundDetect(const std::vector<double>& state) {

    if (state[1] <= height_pad_) {
        return true;
    }
    else {
        return false;
    }
}

FlightData Simulation::PopulateStageFlightData(Matrix<double> stage_result) {

    FlightData result;	

    result.time_ = stage_result.GetColumn(0);
    result.altitude_msl_ = stage_result.GetColumn(1);
    //result.altitudeAGL = result.altitudeMSL
    result.velocity_ = stage_result.GetColumn(2);
    result.acceleration_ = stage_result.GetColumn(3);
    result.length_vector_ = result.time_.size();

    return result;
}
