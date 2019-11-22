
from scipy.integrate import solve_ivp
import numpy as np

import model.entities.rocket_entities as rocket_entities 
import model.entities.event_entities as event_entities
import model.entities.motor_data_entities as motor_entities
import model.aerodynamic_forces.aerodynamic_forces as aero_force
import model.aerodynamic_forces.atmosphere_model as atmosphere
import model.flight_phase as flight_phase

import model.constants as constants

def run(config, motor, user_events, elevation_pad, velocity_initial, alpha_initial, temperature_pad, time_max, timestep):

    alpha = 0.0
    t_start = 0.0

    def liftoff(t, S):
        return S[1] - 5.0 
    liftoff.terminal = True 
    liftoff.direction = 1

    def burnout(t, S):
        return acceleration(t, S) + 0.01
    burnout.terminal = True 
    burnout.direction = -1

    def apogee(t, S): 
        return S[1] + 0.01
    apogee.terminal = True
    apogee.direction = -1

    def altitude_main(t, S):
        return S[0] - elevation_pad - altitude_main_deploy 
    altitude_main.terminal = True 
    altitude_main.direction = -1

    def touchdown(t, S):
        return S[0] - elevation_pad + 0.01
    touchdown.terminal = True
    touchdown.direction = -1

    def acceleration(t, S):
        return (motor.thrust_at_time(t) - np.sign(S[1])*aero_force.get_drag(config, S[0], S[1], alpha, user_events))/(config.mass + motor.mass_at_time(t)) - constants.GRAVITY

    #Relate event class string to function which controls when to terminate ODE solve
    flight_events = {"LIFTOFF": liftoff, "BURNOUT": burnout, "APOGEE": apogee, "ALTITUDE_MAIN": altitude_main, "TOUCHDOWN": touchdown}

    #S[0] = x, S[1] = v, S[2] = a
    def eom(t, S):
        if motor.thrust_at_time(t) > (config.mass + motor.mass_at_time(t))*constants.GRAVITY or t >= motor.time_burn-2*timestep:           
            return [S[1], acceleration(t,S)]
        else:
            return [0.0, 0.0]

    #check whether main deployment is an event. If it is, set altitude 
    main_check = False
    for user_event in user_events:
        if user_event.event == "ALTITUDE_MAIN":
            altitude_main_deploy = user_event.altitude_main_deploy
            main_check = True
    if main_check is False:
        del(flight_events["ALTITUDE_MAIN"])

    #initialize arrays data will be saved to
    altitude = np.array([elevation_pad], np.float32)
    velocity = np.array([velocity_initial], np.float32)
    acceleration = np.array([0.0], np.float32)
    time = np.array([t_start], np.float32)
    index = 0

    for event in flight_events:
        
        S0 = [altitude[-1], velocity[-1]]
        t_start = time[-1]
        t_end = time_max

        #Run simulation at this phase of flight
        solution = solve_ivp(fun=eom, t_span=[t_start, t_end], y0=S0, dense_output=True, events=flight_events[event], max_step=timestep)
        altitude = np.concatenate((altitude, np.array(solution.y[0], np.float32)))
        velocity = np.concatenate((velocity, np.array(solution.y[1], np.float32)))
        time = np.concatenate((time, np.array(solution.t, np.float32)))

        #Check if any user event set here
        for user_event in user_events:
            if user_event.event == event:       

                #If simulation should continue after event triggered, continue simulation
                if user_event.time_delay != 0.0:
                    S0 = [altitude[-1], velocity[-1]]
                    solution = solve_ivp(fun=eom, t_span=[time[-1], time[-1]+user_event.time_delay], y0=S0, dense_output=True, events=ground, max_step=timestep)
                    altitude = np.concatenate((altitude, np.array(solution.y[0], np.float32)))
                    velocity = np.concatenate((velocity, np.array(solution.y[1], np.float32)))
                    time = np.concatenate((time, np.array(solution.t, np.float32)))

                #Apply action of user event 
                user_event.apply_action()
        index = len(altitude)
        flight_events[event] = index

    #remove pad height from simulation
    altitude = np.subtract(altitude, elevation_pad)

    return time, flight_events, altitude, velocity, alpha