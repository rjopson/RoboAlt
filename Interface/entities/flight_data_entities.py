
import simulation.simulation_engine as simulation_engine
import entities.motor_data_entities as motor_entities
import simulation.aerodynamic_forces.aerodynamic_forces as aero_force
import simulation.aerodynamic_forces.atmosphere_model as atmosphere_model
import numpy as np
import filters
import simulation.flight_phase as flight_phase
from scipy import integrate
import constants
import math

class SimulationData():

    def __init__(self, name, config, motor, elevation_pad, user_events=None, time=None, altitude=None, velocity=None, alpha=None, comments=""):
        self.name = name
        self.config = config
        self.motor = motor
        self.elevation_pad = elevation_pad
        self.user_events = user_events
        self.timestep = 0.05
        self.comments = comments 

        config.rocket.add_motor(motor)
        config.add_simulation(self)

        #If being initialized from existing data in file, read in data. Otherwise run simulation
        if time is None:
            self.run_simulation()
        else:
            self.time = time
            self.altitude = altitude
            self.velocity = velocity
            self.alpha = alpha                
        
        #Cached data 
        self._flight_status = None
        self._mach_number = None
        self._reynolds_number = None
        self._q = None
        self._drag = None
        self._Cd = None
        self._thrust = None 
        self._mass = None 
        self._pressure = None
        self._temperature = None
        self._acceleration = None
        self._drag_force = None

        self._altitude_max = None 
        self._velocity_max = None
        self._acceleration_max = None
        self._altitude_main_deploy = None 

        #Indexes 
        self._index_liftoff = None
        self._index_burnout = None 
        self._index_apogee = None 
        self._index_main_deploy = None 
        self._index_landing = None        
        
        self.calculate_properties()        

    def named_attributes(self):
        return {"motor":self.motor.name, "elevation_pad":self.elevation_pad, "comments":self.comments} 

    @property 
    def index_liftoff(self):
        if self._index_liftoff is None:
            
            for i, status in enumerate(self.flight_status):

                if status == 1:
                    self._index_liftoff = i
                    break 
        return self._index_liftoff

    @property 
    def index_burnout(self):
        if self._index_burnout is None:
            
            for i, status in enumerate(self.flight_status):

                if status == 2:
                    self._index_burnout = i
                    break 
        return self._index_burnout

    @property 
    def index_apogee(self):
        if self._index_apogee is None:
            
            for i, status in enumerate(self.flight_status):

                if status == 3:
                    self._index_apogee = i
                    break 
        return self._index_apogee

    @property 
    def index_main_deploy(self):
        if self._index_main_deploy is None:
            
            for i, status in enumerate(self.flight_status):

                if status == 4:
                    self._index_main_deploy = i
                    break 
        return self._index_main_deploy

    @property 
    def index_landing(self):
        if self._index_landing is None:
            
            for i, status in enumerate(self.flight_status):

                if status == 5:
                    self._index_landing = i
                    break 
        return self._index_landing

    @property
    def flight_status(self):
        if self._flight_status is None:
            self._flight_status = np.full(len(self.time), 0.0)
            phase = flight_phase.FlightPhase(self.altitude_main_deploy)            
            for i, v in enumerate(self.velocity):
                phase.update(self.altitude[i], self.velocity[i], self.acceleration[i], 1)
                self._flight_status[i] = phase.flight_phase
        return self._flight_status

    @property
    def mach_number(self):
        if self._mach_number is None:
            self._mach_number = np.full(len(self.time), 0.0)
            atmosphere = atmosphere_model.StandardAtmosphere()
            for i, v in enumerate(self.velocity):
                speed_sound = atmosphere.get_speed_sound(self.altitude[i])
                self._mach_number[i] = aero_force.mach_number(v, speed_sound)
        return self._mach_number

    @property
    def reynolds_number(self):
        if self._reynolds_number is None:
            self._reynolds_number = np.full(len(self.time), 0.0)
            for i, v in enumerate(self.velocity):
                self._reynolds_number[i] = aero_force.reynolds_number(v, self.config.length)
        return self._reynolds_number

    @property
    def q(self):
        if self._q is None:
            self._q = np.full(len(self.time), 0.0)
            atmosphere = atmosphere_model.StandardAtmosphere()
            for i, v in enumerate(self.velocity):
                self._q[i] = aero_force.dynamic_pressure(atmosphere.get_density(self.altitude[i]), self.velocity[i])
        return self._q

    @property
    def drag(self):
        if self._drag is None:
            self._drag = np.full(len(self.time), 0.0)
            for i, v in enumerate(self.velocity):
                self._drag[i] = aero_force.get_drag(self.config, self.altitude[i], self.velocity[i], 1)
        return self._drag

    @property
    def Cd(self):
        if self._Cd is None:
            self._Cd = np.full(len(self.time), 0.0)
            for i, t in enumerate(self.time):
                
                self._Cd[i] = aero_force.drag_coefficient_axial_config(self.config, self.mach_number[i], self.reynolds_number[i])
        return self._Cd

    @property
    def thrust(self):
        if self._thrust is None:
            self._thrust = np.full(len(self.time), 0.0)
            for i, t in enumerate(self.time):
                self._thrust[i] = self.motor.thrust_at_time(t)
        return self._thrust

    @property
    def mass(self):
        if self._mass is None:
            self._mass = np.full(len(self.time), 0.0)
            for i, t in enumerate(self.time):
                self._mass[i] = self.config.mass + self.motor.mass_at_time(t)
        return self._mass

    @property
    def pressure(self):
        if self._pressure is None:
            self._pressure = np.full(len(self.time), 0.0)
            atmosphere = atmosphere_model.StandardAtmosphere()
            for i, v in enumerate(self.velocity):
                self._pressure[i] = atmosphere.get_pressure(self.altitude[i])
        return self._pressure

    @property
    def temperature(self):
        if self._temperature is None:
            self._temperature = np.full(len(self.time), 0.0)
            atmosphere = atmosphere_model.StandardAtmosphere()
            for i, v in enumerate(self.velocity):
                self._temperature[i] = atmosphere.get_temperature(self.altitude[i])  
        return self._temperature

    @property
    def acceleration(self):
        if self._acceleration is None:
            self._acceleration = np.full(len(self.time), 0.0)
            for i, t in enumerate(self.time):
                if self.thrust[i] > self.mass[i]*constants.GRAVITY or t >= self.motor.time_burn-2*self.timestep:
                    self._acceleration[i] = (self.thrust[i] - self.drag[i])/self.mass[i]  - constants.GRAVITY  
                else:
                    self._acceleration[i] = 1.0
        return self._acceleration

    @property
    def drag_force(self):
        if self._drag_force is None:
            self._drag_force = np.full(len(self.acceleration[self.index_burnout:self.index_apogee]), 0.0) 

            for i, accel in enumerate(self.acceleration[self.index_burnout:self.index_apogee]):
                self._drag_force[i] = -(self.mass[i+self.index_burnout])*(accel + constants.GRAVITY)
        return self._drag_force

    @property
    def altitude_max(self):
        if self._altitude_max is None:
            self._altitude_max = max(self.altitude)
        return self._altitude_max 

    @property
    def altitude_main_deploy(self):
        if self._altitude_main_deploy is None:
            
            for user_event in self.user_events:
                if user_event.event == "MAIN_ALTITUDE":
                    self._altitude_main_deploy = user_event.altitude_main_deploy
                    return self._altitude_main_deploy

        self._altitude_main_deploy = self.altitude_max

    def calculate_properties(self):
        self.index_liftoff
        self.index_burnout
        self.index_apogee
        self.index_main_deploy
        self.index_landing
        self.flight_status
        self.mach_number
        self.reynolds_number
        self.q
        self.drag
        self.Cd
        self.thrust
        self.mass
        self.pressure
        self.temperature
        self.acceleration
        self.drag_force
        self._altitude_max
        self._altitude_main_deploy

    def run_simulation(self):        
        [self.time, self.test, self.altitude, self.velocity, self.alpha] = simulation_engine.run(self.config, self.motor, self.user_events, self.elevation_pad, 0.0, 0.0, 288.0, 1000.0, self.timestep)


class FlightData():

    def __init__(self, config, recorded_data, name, location, date, elevation_pad, mass_pad, length, motor, mass_propellant, comments):

        #Data input by user 
        self.config = config
        self.name = name
        self.location = location
        self.date = date 
        self.elevation_pad = elevation_pad
        self.mass_pad = mass_pad
        self.length = length
        self.motor = motor
        self.mass_propellant = mass_propellant        
        self.comments = comments

        #Cached data
        self._mass_burnout = None

        self.calculate_properties() 

        config.add_flight_data(self)

        #Initialize data structures for recorded data import and data derived from recorded data         
        self.recorded_data = recorded_data #RecordedFlightData(data_string_list)
        self.derived_data = DerivedFlightData(self, self.recorded_data)

    def named_attributes(self):
        return {"location":self.location, "date":self.date, "elevation_pad":self.elevation_pad,
                "motor":self.motor, "mass_pad":self.mass_pad, "mass_propellant":self.mass_propellant, "length":self.length,
                "comments":self.comments}

    @property
    def mass_burnout(self):
        if self._mass_burnout is None:
            self._mass_burnout = self.mass_pad - self.mass_propellant
        return self._mass_burnout

    def calculate_properties(self):
        self.mass_burnout


#Structure which is used for raw recorded altimeter and data derived from this 
class RecordedFlightData():

    def __init__(self, length):        

        self.length = length
        self.mpuPad = None
        self.h3lisPad = None
        self.pressurePad = None
        self.temperaturePad = None 
        self.voltageStartup = None 
        self.C = np.full(6, 0)

        self.time = np.full(self.length, 0.0) 
        self.flight_status = np.full(self.length, 0)
        self.altitude = np.full(self.length, 0.0)
        self.velocity = np.full(self.length, 0.0)
        self.acceleration = np.full(self.length, 0.0)
        self.altitude_baro = np.full(self.length, 0.0)
        self.acceleration_axial = np.full(self.length, 0.0)
        self.pressure = np.full(self.length, 0.0)
        self.temperature = np.full(self.length, 0.0)
        self.acceleration_x = np.full(self.length, 0.0)
        self.acceleration_y = np.full(self.length, 0.0)
        self.acceleration_z = np.full(self.length, 0.0)
        self.gyro_x = np.full(self.length, 0.0)
        self.gyro_y = np.full(self.length, 0.0)
        self.gyro_z = np.full(self.length, 0.0)
        self.acceleration_high = np.full(self.length, 0.0)
        self.pressure_raw = np.full(self.length, 0.0)
        self.temperature_raw = np.full(self.length, 0.0)
        self.voltage = np.full(self.length, 0.0)
        self.continuity_apogee = np.full(self.length, 0.0)
        self.continuity_main = np.full(self.length, 0.0)
        self.continuity_third = np.full(self.length, 0.0) 


class DerivedFlightData():

    preflight_buffer_length = 200 #altimeter data recording preflight buffer length

    def __init__(self, altimeter_data, recorded_altimeter_data):

        self.altimeter_data = altimeter_data
        self.recorded_altimeter_data = recorded_altimeter_data
        self.length = recorded_altimeter_data.length

        self.two_byte = 32768
        self.accelerometer_scale = 16.0 #g's
        self.gyro_scale = 2000.0 #deg/s
        self.voltage_divider = 4.7 #(100k ohm, 27k ohm)
        self.voltage_atmel = 3.3 

        #Cached Properties
        #Indexes 
        self._index_liftoff = None
        self._index_burnout = None 
        self._index_apogee = None 
        self._index_main_deploy = None 
        self._index_landing = None

        #Times
        self._time_liftoff = None
        self._time_burnout = None
        self._time_apogee = None
        self._time_main_deploy = None
        self._time_landing = None
        self._time_of_flight = None 

        self._altitude_pad = None     
        self._acceleration_pad = None

        #Arrays
        self._time = None         
        self._time_from_power_on = None
        self._altitude_baro = None 
        self._pressure = None 
        self._temperature = None 
        self._acceleration_x = None 
        self._acceleration_y = None 
        self._acceleration_z = None 
        self._acceleration_z_total = None
        self._gyro_x = None 
        self._gyro_y = None 
        self._gyro_z = None 
        self._voltage = None 
        self._continuity_apogee = None 
        self._continuity_main = None 
        self._continuity_third = None 
        self._mach_number = None
        self._q = None

        #Drag calcs 
        self._drag = None
        self._drag_coefficient = None 

        #Non cached arrays
        self.flight_status = np.full(self.length, 0)  
        self.altitude = np.full(self.length, 0.0) 
        self.velocity = np.full(self.length, 0.0) 
        self.acceleration = np.full(self.length, 0.0)  
        self.altitude_accelerometer = np.full(self.length, 0.0) 
        self.velocity_accelerometer = np.full(self.length, 0.0)         

        self.calculate_independent_properties()  
        self.filter_state_data()
        self.calculate_filtered_data_dependent_properties()
        self.integrate_accelerometer_data()
       
    @property 
    def index_liftoff(self):
        if self._index_liftoff is None:
            
            for i, status in enumerate(self.flight_status):

                if status == 1:                    
                    self._index_liftoff = i  
                    break  
        return self._index_liftoff
    @property 
    def index_burnout(self):
        if self._index_burnout is None:
            
            for i, status in enumerate(self.flight_status):

                if status == 2:
                    self._index_burnout = i
                    break             
        return self._index_burnout
    @property 
    def index_apogee(self):
        if self._index_apogee is None:
            
            for i, status in enumerate(self.flight_status):

                if status == 3:
                    self._index_apogee = i
                    break 
        return self._index_apogee
    @property 
    def index_main_deploy(self):
        if self._index_main_deploy is None:
            
            for i, status in enumerate(self.flight_status):

                if status == 4:
                    self._index_main_deploy = i
                    break 
        return self._index_main_deploy
    @property 
    def index_landing(self):
        if self._index_landing is None:
            
            for i, status in enumerate(self.flight_status):

                if status == 5:
                    self._index_landing = i
                    break 
        return self._index_landing
    @property 
    def time_liftoff(self):
        if self._time_liftoff is None:           
            self._time_liftoff = self.recorded_altimeter_data.time[self.index_liftoff]*0.001      
        return self._time_liftoff
    @property 
    def time_burnout(self):
        if self._time_burnout is None:
            self._time_burnout = self.recorded_altimeter_data.time[self.index_burnout]*0.001 - self.time_liftoff               
        return self._time_burnout
    @property 
    def time_apogee(self):
        if self._time_apogee is None:
            self._time_apogee = self.recorded_altimeter_data.time[self.index_apogee]*0.001 - self.time_liftoff                    
        return self._time_apogee
    @property 
    def time_main_deploy(self):
        if self._time_main_deploy is None:
            self._time_main_deploy= self.recorded_altimeter_data.time[self.index_main_deploy]*0.001 - self.time_liftoff                    
        return self._time_main_deploy
    @property 
    def time_landing(self):
        if self._time_landing is None:
            self._time_landing = self.recorded_altimeter_data.time[self.index_landing]*0.001 - self.time_liftoff                    
        return self._time_landing
    @property 
    def altitude_pad(self):
        if self._altitude_pad is None:
            atmosphere = atmosphere_model.StandardAtmosphere()
            pressure_average = np.mean(self.pressure[:self.preflight_buffer_length])
            self._altitude_pad = atmosphere.get_altitude(pressure_average)
        return self._altitude_pad
    @property 
    def acceleration_pad(self):
        if self._acceleration_pad is None:
            self._acceleration_pad = self.bits_to_engineering_unit(abs(self.recorded_altimeter_data.mpuPad), 1-self.two_byte, self.two_byte, -self.accelerometer_scale*constants.GRAVITY, self.accelerometer_scale*constants.GRAVITY)                   
        return self._acceleration_pad
    @property 
    def time_from_power_on(self):
        if self._time_from_power_on is None:
            self._time_from_power_on = np.full(self.length, 0.0)  
            self._time_from_power_on = np.multiply(self.recorded_altimeter_data.time, 0.001) #Convert from ms to s
        return self._time_from_power_on
    @property 
    def time(self):
        if self._time is None:
            self._time = np.full(self.length, 0.0)  
            #Subtract takeoff time from vector so takeoff is at 0
            self._time = np.subtract(self.time_from_power_on, self.time_liftoff)
        return self._time
    @property 
    def pressure(self):
        if self._pressure is None:
            self._pressure = np.full(self.length, 0.0)  
            self._pressure = self.recorded_altimeter_data.pressure
        return self._pressure
    @property 
    def temperature(self):
        if self._temperature is None:
            self._temperature = np.full(self.length, 0.0)  
            self._temperature = np.multiply(self.recorded_altimeter_data.temperature, 0.01)
        return self._temperature
    @property 
    def acceleration_z(self):
        if self._acceleration_z is None:
            self._acceleration_z = np.full(self.length, 0.0)  
            for i, accel in enumerate(self.recorded_altimeter_data.acceleration_axial):
                self._acceleration_z[i] = np.add(np.multiply(accel, 0.001), self.acceleration_pad)
        return self._acceleration_z
    @property
    def acceleration_x(self):
        if self._acceleration_x is None:  
            self._acceleration_x = np.full(self.length, 0.0)
            for i, data in enumerate(self.recorded_altimeter_data.acceleration_x):
                self._acceleration_x[i] = self.bits_to_engineering_unit(data, 1-self.two_byte, self.two_byte, -self.accelerometer_scale*constants.GRAVITY, self.accelerometer_scale*constants.GRAVITY)
        return self._acceleration_x
    @property
    def acceleration_y(self):
        if self._acceleration_y is None:
            self._acceleration_y = np.full(self.length, 0.0)
            for i, data in enumerate(self.recorded_altimeter_data.acceleration_z):
                self._acceleration_y[i] = self.bits_to_engineering_unit(data, 1-self.two_byte, self.two_byte, -self.accelerometer_scale*constants.GRAVITY, self.accelerometer_scale*constants.GRAVITY)
        return self._acceleration_y
    @property
    def gyro_x(self):
        if self._gyro_x is None:
            self._gyro_x = np.full(self.length, 0.0)
            for i, data in enumerate(self.recorded_altimeter_data.gyro_x):
                self._gyro_x[i]= self.bits_to_engineering_unit(data, 1-self.two_byte, self.two_byte, -self.gyro_scale, self.gyro_scale)
        return self._gyro_x
    @property
    def gyro_y(self):
        if self._gyro_y is None:
            self._gyro_y = np.full(self.length, 0.0)
            for i, data in enumerate(self.recorded_altimeter_data.gyro_z):
                self._gyro_y[i] = self.bits_to_engineering_unit(data, 1-self.two_byte, self.two_byte, -self.gyro_scale, self.gyro_scale)
        return self._gyro_y
    @property
    def gyro_z(self):
        if self._gyro_z is None: 
            self._gyro_z = np.full(self.length, 0.0)
            for i, data in enumerate(self.recorded_altimeter_data.gyro_y):
                self._gyro_z[i] = self.bits_to_engineering_unit(data, 1-self.two_byte, self.two_byte, -self.gyro_scale, self.gyro_scale)
        return self._gyro_z
    @property
    def voltage(self):
        if self._voltage is None:
            self._voltage = np.full(self.length, 0.0)
            for i, data in enumerate(self.recorded_altimeter_data.voltage):
                self._voltage[i] = self.bits_to_engineering_unit(data, 0, 1023, 0, 1023*self.voltage_divider*self.voltage_atmel)
        return self._voltage
    @property 
    def altitude_baro(self):
        if self._altitude_baro is None:
            self._altitude_baro = np.full(self.length, 0.0)  

            atmosphere = atmosphere_model.StandardAtmosphere()
        
            for i, pressure in enumerate(self.recorded_altimeter_data.pressure):
                self._altitude_baro[i] = atmosphere.get_altitude(pressure) - self.altitude_pad
        return self._altitude_baro
    @property
    def drag(self):
        if self._drag is None:
            self._drag = np.full(self.length, 0.0)

            for i, accel in enumerate(self.acceleration):
                self._drag[i] = -(self.altimeter_data.mass_burnout)*(accel + constants.GRAVITY)
        return self._drag
    @property
    def drag_coefficient(self):        
        if self._drag_coefficient is None:  
            self._drag_coefficient = np.full(self.length, 0.0)

            for i, drag in enumerate(self.drag):
                density = self.pressure[i]/(287.05 *(self.temperature[i]+273.15));
                q = aero_force.dynamic_pressure(density,self.velocity[i])
                self._drag_coefficient[i] = drag/(q*self.altimeter_data.config.area_reference)
        return self._drag_coefficient             
    @property
    def mach_number(self):
        if self._mach_number is None:
            self._mach_number = np.full(self.length, 0.0)
            for i, dummy in enumerate(self._mach_number):
                self._mach_number[i] = aero_force.mach_number(self.velocity[i], math.sqrt(1.4*287.05*(self.temperature[i]+273.15)))
        return self._mach_number
    @property
    def q(self):
        if self._q is None:
            self._q = np.full(self.length, 0.0)
            atmosphere = atmosphere_model.StandardAtmosphere()
            for i, v in enumerate(self.velocity):
                self._q[i] = aero_force.dynamic_pressure(atmosphere.get_density(self.altitude[i]), self.velocity[i])
        return self._q
    @property 
    def acceleration_z_total(self):
        if self._acceleration_z_total is None:
            self._acceleration_z_total = np.full(self.length, 0.0)              
            for i, t in enumerate(self.time):
                if self.flight_status[i] == 0:
                    self._acceleration_z_total[i] = self.acceleration_z[i] - self.acceleration_pad
                else:
                    self._acceleration_z_total[i] = self.acceleration_z[i]            
        return self._acceleration_z_total
    def calculate_independent_properties(self):
        self._acceleration_pad
        self.altitude_pad
        self.time_from_power_on              
        self.pressure
        self.temperature
        self.acceleration_z
        self.altitude_baro 
    def calculate_filtered_data_dependent_properties(self):
        self.index_liftoff
        self.index_burnout
        self.index_apogee
        self.index_main_deploy
        self.index_landing
        self.time_liftoff
        self.time      
        self.mach_number
        self.q
        self.drag
        self.drag_coefficient
        self.acceleration_z_total
        
    def filter_state_data(self):

        state_initial = np.array([0.0,0.0,0.0])
        kalman = filters.KalmanAltitudeAcceleration(self.time_from_power_on[0], 0.0, 0.0, 0.0)

        phase = flight_phase.FlightPhase(500)

        x_k_p = np.array([0.0,0.0,0.0])
        self.altitude[0] = x_k_p[0]
        self.velocity[0] = x_k_p[1]
        self.acceleration[0] = x_k_p[2]

        switch = False
        
        for i, time_k in enumerate(self.time_from_power_on[1:]):

            phase.update(x_k_p[0], x_k_p[1], x_k_p[2], 1)     
           
            if phase.flight_phase < 3:
                x_k_p = kalman.update(time_k, self.altitude_baro[i], self.acceleration_z[i]- self.acceleration_pad, x_k_p)
            elif phase.flight_phase >=3 and switch is False:
                switch = True
                kalman_descent = filters.KalmanAltitude(self.time_from_power_on[i-1], self.altitude[i-2], self.velocity[i-2], self.acceleration[i-2])
                x_k_p = kalman_descent.update(time_k, self.altitude_baro[i], x_k_p)
            else:
                x_k_p = kalman_descent.update(time_k, self.altitude_baro[i], x_k_p)

            self.flight_status[i] = phase.flight_phase
            self.altitude[i] = x_k_p[0]
            self.velocity[i] = x_k_p[1]
            self.acceleration[i] = x_k_p[2]

    def integrate_accelerometer_data(self):

        self.velocity_accelerometer[0:self.index_liftoff-1] = 0.0
        self.altitude_accelerometer[0:self.index_liftoff-1] = 0.0
        self.velocity_accelerometer[self.index_liftoff:] = integrate.cumtrapz(np.subtract(self.acceleration_z_total,self.acceleration_pad)[self.index_liftoff:], self.time[self.index_liftoff:], initial=0.0)
        self.altitude_accelerometer[self.index_liftoff:] = integrate.cumtrapz(self.velocity_accelerometer[self.index_liftoff:], self.time[self.index_liftoff:], initial=0.0)
    def get_altitude_std(self):
        return np.std(self.altitude_baro[:self.preflight_buffer_length])
    def get_acceleration_std(self):
        return np.std(self.acceleration_z[:self.preflight_buffer_length])

    def bits_to_engineering_unit(self, data, input_min, input_max, output_min, output_max):

        input_delta = input_max - input_min
        output_delta = output_max - output_min
        value_delta = data - input_min

        return (value_delta*output_delta)/input_delta + output_min


'''
self._velocity_max = None
self._acceleration_max = None
self._time_of_flight = None 
self._time_burn = None 
self._time_apogee = None 

'''




#find time of takeoff, burnout, apogee, main deploy, ground
#find max altitude, velocity, acceleration
#get unfiltered altitude, acceleration
#get filtereted altitude, velocity, acceleration
#get vertical angle 
#convert temperature 
#convert acceleration, gyro -> engineering units 
#convert voltage->V, continuity->bool
#calculate Cd (aerodynamics class?)
#calculate motor (motor class?)
