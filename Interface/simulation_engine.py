
from scipy.integrate import solve_ivp
import numpy as np

import entities.rocket_entities as rocket_entities 
import entities.motor_data_entities as motor_entities
import aerodynamic_forces.aerodynamic_forces as aero_force
import aerodynamic_forces.atmosphere_model as atmosphere
import flight_phase

import constants

def run(config, motor, elevation_pad, velocity_initial, temperature_pad, time_max, timestep):

    alpha = 0.0

    #apogee when velocity = 0. Need small non zero value so scipy doesn't kill job early
    def apogee(t, S): 
        return S[1] + .01
    apogee.terminal = True

    #S[0] = x, S[1] = v, S[2] = a
    def derivative(t, S):
        if motor.thrust_at_time(t) > (config.mass + motor.mass_at_time(t))*constants.GRAVITY or t >= motor.time_burn-2*timestep:           
            return [S[1], (motor.thrust_at_time(t) - aero_force.get_drag(config, S[0], S[1], alpha))/(config.mass + motor.mass_at_time(t)) - constants.GRAVITY]
        else:
            return [0, 0]

    S0 = [elevation_pad, velocity_initial]
    solution = solve_ivp(fun=derivative, t_span=[0, time_max], y0=S0, dense_output=True, events=apogee, max_step=timestep)

    #convert output to numpy arrays 
    altitude = np.array(solution.y[0], np.float64)
    velocity = np.array(solution.y[1], np.float64)
    time = np.array(solution.t, np.float64)

    #remove pad height from simulation
    altitude = np.subtract(altitude, elevation_pad)

    return time, altitude, velocity, alpha