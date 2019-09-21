
from scipy.integrate import solve_ivp
import numpy as np

import entities.rocket_entities as rocket_entities 
import entities.motor_data_entities as motor_entities
import aerodynamic_forces.aerodynamic_forces as aero_force
import aerodynamic_forces.atmosphere_model as atmosphere

import constants

def run(config, motor, elevation_pad, velocity_initial, temperature_pad, time_max, timestep):

    alpha = 0.0

    #apogee when velocity = 0. Need small non zero value so scipy doesn't kill job early
    def apogee(t, S): 
        return S[1] + .01
    apogee.terminal = True

    #S[0] = x, S[1] = v, S[2] = a
    def derivative(t, S):
        return [S[1], (motor.thrust_at_time(t) - aero_force.get_drag(config, S[0], S[1], alpha))/(config.mass + motor.mass_at_time(t)) -constants.GRAVITY]

    S0 = [elevation_pad, velocity_initial]
    solution = solve_ivp(fun=derivative, t_span=[0, time_max], y0=S0, dense_output=True, events=apogee, max_step=timestep)

    #convert output to numpy arrays 
    altitude = np.array(solution.y[0], np.float64)
    velocity = np.array(solution.y[1], np.float64)
    time = np.array(solution.t, np.float64)

    #Get derived results 
    acceleration = np.full(altitude.size, 0.0)
    drag = np.full(altitude.size, 0.0)
    Cd = np.full(altitude.size, 0.0)
    thrust = np.full(altitude.size, 0.0)
    mass = np.full(altitude.size, 0.0)
    pressure = np.full(altitude.size, 0.0)
    temperature = np.full(altitude.size, 0.0)
    atmosphere_flight = atmosphere.StandardAtmosphere()

    for i, t in enumerate(time):

        #Drag
        [drag[i], Cd[i]] = aero_force.get_drag_and_drag_coefficient(config, altitude[i], velocity[i], alpha)

        #Motor
        thrust[i] = motor.thrust_at_time(t)
        #Mass
        mass[i] = config.mass + motor.mass_at_time(t)

        #Atmosphere
        pressure[i] = atmosphere_flight.get_pressure(altitude[i])
        temperature[i] = atmosphere_flight.get_temperature(altitude[i])        

        #Acceleration
        acceleration[i] = (thrust[i] - drag[i])/mass[i] - constants.GRAVITY   

    #remove pad height from simulation
    altitude = np.subtract(altitude, elevation_pad)

    return time, altitude, velocity, acceleration, alpha, drag, Cd, thrust, mass, pressure, temperature