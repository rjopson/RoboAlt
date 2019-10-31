
from scipy.integrate import solve_ivp
import numpy as np

import entities.rocket_entities as rocket_entities 
import entities.event_entities as event_entities
import entities.motor_data_entities as motor_entities
import aerodynamic_forces.aerodynamic_forces as aero_force
import aerodynamic_forces.atmosphere_model as atmosphere
import flight_phase

import constants

def run(config, motor, event_list, elevation_pad, velocity_initial, alpha_initial, temperature_pad, time_max, timestep):

    alpha = 0.0

    #If no events present, add one 
    if len(event_list) == 0:
        event = event_entities.SimulationEvent(None, "GROUND", 0.0)
        event_list.append(event)

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

    def main_deploy(t, S):
        return S[0] - elevation_pad - altitude_main_deploy 
    main_deploy.terminal = True 
    main_deploy.direction = -1

    def ground(t, S):
        return S[0] - elevation_pad + 0.01
    ground.terminal = True
    ground.direction = -1

    def acceleration(t, S):
        return (motor.thrust_at_time(t) - np.sign(S[1])*aero_force.get_drag(config, S[0], S[1], alpha))/(config.mass + motor.mass_at_time(t)) - constants.GRAVITY

    #Relate event class string to function which controls when to terminate ODE solve
    event_function = {"LIFTOFF": liftoff, "BURNOUT": burnout, "APOGEE": apogee, "MAIN_DEPLOY": main_deploy, "GROUND": ground}

    #S[0] = x, S[1] = v, S[2] = a
    def eom(t, S):
        if motor.thrust_at_time(t) > (config.mass + motor.mass_at_time(t))*constants.GRAVITY or t >= motor.time_burn-2*timestep:           
            return [S[1], acceleration(t,S)]
        else:
            return [0, 0]

    altitude_list = []
    velocity_list = []
    time_list = []
    for i, sim_event in enumerate(event_list):
        
        #If simulation hasn't started set, set initial conditions to pad height and initial velocity (usually 0)
        if i == 0:
            S0 = [elevation_pad, velocity_initial]
            t_start = 0.0
            t_end = time_max

        #If simulation has started, set initial conditions of next portion of flight to end of previous portion
        else:
            S0 = [altitude_list[i-1][-1], velocity_list[i-1][-1]]
            t_start = time[i-1][-1]
            t_end = time_max

        #Solve for next flight event in list
        solution = solve_ivp(fun=eom, t_span=[t_start, t_end], y0=S0, dense_output=True, events=event_function[sim_event.event], max_step=timestep)
        altitude = np.array(solution.y[0], np.float64)
        velocity = np.array(solution.y[1], np.float64)
        time = np.array(solution.t, np.float64)

        #If simulation should continue after event triggered, continue simulation
        if sim_event.time_after_event != 0.0:
            S0 = [altitude[-1], velocity[-1]]
            solution = solve_ivp(fun=eom, t_span=[time[-1], time[-1]+sim_event.time_after_event], y0=S0, dense_output=True, events=ground, max_step=timestep)
            altitude = np.concatenate((altitude, np.array(solution.y[0], np.float64)))
            velocity = np.concatenate((velocity, np.array(solution.y[1], np.float64)))
            time = np.concatenate((time, np.array(solution.t, np.float64)))

        #Add data from this portion of flight to list 
        altitude_list.append(altitude)
        velocity_list.append(velocity)
        time_list.append(time)

    #After flight complete, concatenate lists of data for final result 
    altitude = np.concatenate(altitude_list)
    velocity = np.concatenate(velocity_list)
    time = np.concatenate(time_list)

    #remove pad height from simulation
    altitude = np.subtract(altitude, elevation_pad)

    return time, altitude, velocity, alpha