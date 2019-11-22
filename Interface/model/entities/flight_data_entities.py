
import time
 
import model.simulation_engine as simulation_engine
import model.entities.motor_data_entities as motor_entities
import model.aerodynamic_forces.aerodynamic_forces as aero_force
import model.aerodynamic_forces.atmosphere_model as atmosphere_model
import numpy as np
import model.filters as filters
import model.flight_phase as flight_phase
from scipy import integrate
import model.constants as constants
import math

class SimulationData():

    def __init__(self, name, config, motor, elevation_pad, user_events=None, time=None, altitude=None, velocity=None, alpha=None, flight_events=None, comments=""):
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
            self.flight_events = flight_events 

        self.length = len(self.time)
        
        #Cached data 
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
        
        self.calculate_properties()            

    def named_attributes(self):
        return {"motor":self.motor.name, "elevation_pad":self.elevation_pad, "comments":self.comments} 

    @property
    def mach_number(self):
        if self._mach_number is None:
            self._mach_number = np.empty(self.length)
            atmosphere = atmosphere_model.StandardAtmosphere()
            for i, v in enumerate(self.velocity):
                speed_sound = atmosphere.get_speed_sound(self.altitude[i])
                self._mach_number[i] = aero_force.mach_number(v, speed_sound)
        return self._mach_number

    @property
    def reynolds_number(self):
        if self._reynolds_number is None:
            self._reynolds_number = np.empty(self.length)
            for i, v in enumerate(self.velocity):
                self._reynolds_number[i] = aero_force.reynolds_number(v, self.config.length)
        return self._reynolds_number

    @property
    def q(self):
        if self._q is None:
            self._q = np.empty(self.length)
            atmosphere = atmosphere_model.StandardAtmosphere()
            for i, v in enumerate(self.velocity):
                self._q[i] = aero_force.dynamic_pressure(atmosphere.get_density(self.altitude[i]), self.velocity[i])
        return self._q

    @property
    def drag(self):
        if self._drag is None:
            self._drag = np.empty(self.length)
            for i, v in enumerate(self.velocity):
                self._drag[i] = aero_force.get_drag(self.config, self.altitude[i], self.velocity[i], 1)
        return self._drag

    @property
    def Cd(self):
        if self._Cd is None:
            self._Cd = np.empty(self.length)
            for i, drag in enumerate(self.drag):   
                if self.q[i] < 0.1:
                    self._Cd[i] = 0.0
                else:
                    self._Cd[i] = drag/(self.q[i]*self.config.area_reference)
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
            self._drag_force = np.full(len(self.acceleration[self.flight_events["BURNOUT"]:self.flight_events["APOGEE"]]), 0.0) 

            for i, accel in enumerate(self.acceleration[self.flight_events["BURNOUT"]:self.flight_events["APOGEE"]]):
                self._drag_force[i] = -(self.mass[i+self.flight_events["BURNOUT"]])*(accel + constants.GRAVITY)
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
        
        
        self.mach_number
        self.reynolds_number
        self.q            
        self.drag    
        
        self.Cd    
        
        self.thrust   
        self.mass
        self.pressure
        self.temperature
        import time
        start = time.time()
        self.acceleration
        print(time.time()-start)
        self.drag_force
        self._altitude_max
        self._altitude_main_deploy
        
        

    def run_simulation(self):       
        import time
        start = time.time()
        [self.time, self.flight_events, self.altitude, self.velocity, self.alpha] = simulation_engine.run(self.config, self.motor, self.user_events, self.elevation_pad, 0.0, 0.0, 288.0, 1000.0, self.timestep)
        print("engine: ", time.time()-start)

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

        self.apoFlightEvent = None
        self.apoTimeDelay = None
        self.mainFlightEvent = None
        self.mainTimeDelay = None
        self.thirdFlightEvent = None
        self.thirdTimeDelay = None
        self.altitudeMainDeploy = None
        self.altitude_main = None

        self.time = np.empty(self.length)
        self.flight_status = np.empty(self.length)
        self.altitude = np.empty(self.length)
        self.velocity = np.empty(self.length)
        self.acceleration = np.empty(self.length)
        self.altitude_baro = np.empty(self.length)
        self.acceleration_axial = np.empty(self.length)
        self.pressure = np.empty(self.length)
        self.temperature = np.empty(self.length)
        self.acceleration_x = np.empty(self.length)
        self.acceleration_y = np.empty(self.length)
        self.acceleration_z = np.empty(self.length)
        self.gyro_x = np.empty(self.length)
        self.gyro_y = np.empty(self.length)
        self.gyro_z = np.empty(self.length)
        self.acceleration_high = np.empty(self.length)
        self.pressure_raw = np.empty(self.length)
        self.temperature_raw = np.empty(self.length)
        self.voltage = np.empty(self.length)
        self.continuity_apogee = np.empty(self.length)
        self.continuity_main = np.empty(self.length)
        self.continuity_third = np.empty(self.length)

        '''
        self.time = np.empty(self.length) 
        self.flight_status = np.empty(self.length) 
        self.altitude = np.empty(self.length)
        self.velocity = np.empty(self.length)
        self.acceleration = np.empty(self.length)
        self.altitude_baro = np.empty(self.length)
        self.acceleration_axial = np.empty(self.length)
        self.pressure = np.empty(self.length)
        self.temperature = np.empty(self.length)
        self.acceleration_x = np.empty(self.length)
        self.acceleration_y = np.empty(self.length)
        self.acceleration_z = np.empty(self.length)
        self.gyro_x = np.empty(self.length)
        self.gyro_y = np.empty(self.length)
        self.gyro_z = np.empty(self.length)
        self.acceleration_high = np.empty(self.length)
        self.pressure_raw = np.empty(self.length)
        self.temperature_raw = np.empty(self.length)
        self.voltage = np.empty(self.length)
        self.continuity_apogee = np.empty(self.length)
        self.continuity_main = np.empty(self.length)
        self.continuity_third = np.empty(self.length) 
        '''


class DerivedFlightData():

    preflight_buffer_length = 200 #altimeter data recording preflight buffer length

    def __init__(self, altimeter_data, recorded_altimeter_data):

        self.altimeter_data = altimeter_data
        self.recorded_altimeter_data = recorded_altimeter_data
        self.length = recorded_altimeter_data.length
        #self.user_settings = FlightUserSettings()

        self.two_byte = 32768
        self.accelerometer_scale = 16.0 #g's
        self.gyro_scale = 2000.0 #deg/s
        self.voltage_divider = 4.7 #(100k ohm, 27k ohm)
        self.voltage_atmel = 3.3 

        #Cached Properties

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
        self._flight_events = None

        #Drag calcs 
        self._drag = None
        self._drag_coefficient = None 

        #Non cached arrays        
        self.altitude = np.empty(self.length)
        self.velocity = np.empty(self.length)
        self.acceleration = np.empty(self.length)
        self.altitude_accelerometer = np.empty(self.length)
        self.velocity_accelerometer = np.empty(self.length)         
        
        self.calculate_independent_properties()          
        self.filter_state_data()        
        self.calculate_filtered_data_dependent_properties()        
        self.integrate_accelerometer_data()
        

    @property 
    def time_liftoff(self):
        if self._time_liftoff is None:           
            self._time_liftoff = self.recorded_altimeter_data.time[self.flight_events["LIFTOFF"]]*0.001      
        return self._time_liftoff
    
    @property 
    def time_burnout(self):
        if self._time_burnout is None:
            self._time_burnout = self.recorded_altimeter_data.time[self.flight_events["BURNOUT"]]*0.001 - self.time_liftoff               
        return self._time_burnout
    
    @property 
    def time_apogee(self):
        if self._time_apogee is None:
            self._time_apogee = self.recorded_altimeter_data.time[self.flight_events["APOGEE"]]*0.001 - self.time_liftoff                    
        return self._time_apogee
    
    @property 
    def time_main_deploy(self):
        if self._time_main_deploy is None:
            self._time_main_deploy= self.recorded_altimeter_data.time[self.flight_events["ALTITUDE_MAIN"]]*0.001 - self.time_liftoff                    
        return self._time_main_deploy
    
    @property 
    def time_landing(self):
        if self._time_landing is None:
            self._time_landing = self.recorded_altimeter_data.time[self.flight_events["TOUCHDOWN"]]*0.001 - self.time_liftoff                    
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
            self._time_from_power_on = np.empty(self.length)  
            self._time_from_power_on = np.multiply(self.recorded_altimeter_data.time, 0.001) #Convert from ms to s
        return self._time_from_power_on
    
    @property 
    def time(self):
        if self._time is None:
            self._time = np.empty(self.length)  
            #Subtract takeoff time from vector so takeoff is at 0
            self._time = np.subtract(self.time_from_power_on, self.time_liftoff)
        return self._time
    
    @property 
    def pressure(self):
        if self._pressure is None:
            self._pressure = np.empty(self.length)  
            self._pressure = self.recorded_altimeter_data.pressure
        return self._pressure
    
    @property 
    def temperature(self):
        if self._temperature is None:
            self._temperature = np.empty(self.length)  
            self._temperature = np.multiply(self.recorded_altimeter_data.temperature, 0.01)
        return self._temperature
    
    @property 
    def acceleration_z(self):
        if self._acceleration_z is None:
            self._acceleration_z = np.empty(self.length)  
            for i, accel in enumerate(self.recorded_altimeter_data.acceleration_axial):
                self._acceleration_z[i] = np.add(np.multiply(accel, 0.001), self.acceleration_pad)
        return self._acceleration_z
    
    @property
    def acceleration_x(self):
        if self._acceleration_x is None:  
            self._acceleration_x = np.empty(self.length)
            for i, data in enumerate(self.recorded_altimeter_data.acceleration_x):
                self._acceleration_x[i] = self.bits_to_engineering_unit(data, 1-self.two_byte, self.two_byte, -self.accelerometer_scale*constants.GRAVITY, self.accelerometer_scale*constants.GRAVITY)
        return self._acceleration_x
    
    @property
    def acceleration_y(self):
        if self._acceleration_y is None:
            self._acceleration_y = np.empty(self.length)
            for i, data in enumerate(self.recorded_altimeter_data.acceleration_z):
                self._acceleration_y[i] = self.bits_to_engineering_unit(data, 1-self.two_byte, self.two_byte, -self.accelerometer_scale*constants.GRAVITY, self.accelerometer_scale*constants.GRAVITY)
        return self._acceleration_y
    
    @property
    def gyro_x(self):
        if self._gyro_x is None:
            self._gyro_x = np.empty(self.length)
            for i, data in enumerate(self.recorded_altimeter_data.gyro_x):
                self._gyro_x[i]= self.bits_to_engineering_unit(data, 1-self.two_byte, self.two_byte, -self.gyro_scale, self.gyro_scale)
        return self._gyro_x
    
    @property
    def gyro_y(self):
        if self._gyro_y is None:
            self._gyro_y = np.empty(self.length)
            for i, data in enumerate(self.recorded_altimeter_data.gyro_z):
                self._gyro_y[i] = self.bits_to_engineering_unit(data, 1-self.two_byte, self.two_byte, -self.gyro_scale, self.gyro_scale)
        return self._gyro_y
    
    @property
    def gyro_z(self):
        if self._gyro_z is None: 
            self._gyro_z = np.empty(self.length)
            for i, data in enumerate(self.recorded_altimeter_data.gyro_y):
                self._gyro_z[i] = self.bits_to_engineering_unit(data, 1-self.two_byte, self.two_byte, -self.gyro_scale, self.gyro_scale)
        return self._gyro_z
    
    @property
    def voltage(self):
        if self._voltage is None:
            self._voltage = np.empty(self.length)
            for i, data in enumerate(self.recorded_altimeter_data.voltage):
                self._voltage[i] = self.bits_to_engineering_unit(data, 0, 1023, 0, 1023*self.voltage_divider*self.voltage_atmel)
        return self._voltage
    
    @property 
    def altitude_baro(self):
        if self._altitude_baro is None:
            self._altitude_baro = np.empty(self.length)  

            atmosphere = atmosphere_model.StandardAtmosphere()
        
            for i, pressure in enumerate(self.recorded_altimeter_data.pressure):
                self._altitude_baro[i] = atmosphere.get_altitude(pressure) - self.altitude_pad
        return self._altitude_baro
    
    @property
    def drag(self):
        if self._drag is None:
            self._drag = np.empty(self.length)

            for i, accel in enumerate(self.acceleration):
                self._drag[i] = -(self.altimeter_data.mass_burnout)*(accel + constants.GRAVITY)
        return self._drag
    
    @property
    def drag_coefficient(self):        
        if self._drag_coefficient is None:  
            self._drag_coefficient = np.empty(self.length)

            for i, drag in enumerate(self.drag):
                density = self.pressure[i]/(287.05 *(self.temperature[i]+273.15));

                if self.q[i] < 0.1:
                    self.drag_coefficient[i] = 0.0
                else:
                    self._drag_coefficient[i] = drag/(self.q[i]*self.altimeter_data.config.area_reference)
        return self._drag_coefficient             
    
    @property
    def mach_number(self):
        if self._mach_number is None:
            self._mach_number = np.empty(self.length)
            for i, dummy in enumerate(self._mach_number):
                self._mach_number[i] = aero_force.mach_number(self.velocity[i], math.sqrt(1.4*287.05*(self.temperature[i]+273.15)))
        return self._mach_number
    
    @property
    def q(self):
        if self._q is None:
            self._q = np.empty(self.length)
            atmosphere = atmosphere_model.StandardAtmosphere()
            for i, v in enumerate(self.velocity):
                self._q[i] = aero_force.dynamic_pressure(atmosphere.get_density(self.altitude[i]), self.velocity[i])
        return self._q
    
    @property
    def flight_events(self):
        if self._flight_events is None:
            
            phase = flight_phase.FlightPhase(self.recorded_altimeter_data.altitudeMainDeploy/1000.0)
            self._flight_events = {}
            
            for i, alt in enumerate(self.altitude):
                phase.update(self.altitude[i], self.velocity[i], self.acceleration[i], 1)
                self._flight_events[phase.flight_event] = i

            self._flight_events["BURNOUT"] = np.argmin(self.acceleration)
        return self._flight_events

    @property 
    def acceleration_z_total(self):
        if self._acceleration_z_total is None:
            self._acceleration_z_total = np.empty(self.length)              
            for i, t in enumerate(self.time):
                if i < self.flight_events["LIFTOFF"]:
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

        self.time_liftoff
        self.time      
        self.mach_number
        self.q
        self.drag
        self.drag_coefficient
        self.acceleration_z_total
        self.flight_events
        
    def filter_state_data(self):

        state_initial = np.array([0.0,0.0,0.0])
        kalman = filters.KalmanAltitudeAcceleration(self.time_from_power_on[0], 0.0, 0.0, 0.0)

        phase = flight_phase.FlightPhase(self.recorded_altimeter_data.altitudeMainDeploy/1000.0)

        x_k_p = np.array([0.0,0.0,0.0])
        self.altitude[0] = x_k_p[0]
        self.velocity[0] = x_k_p[1]
        self.acceleration[0] = x_k_p[2]

        switch = False
        
        for i, time_k in enumerate(self.time_from_power_on):

            phase.update(x_k_p[0], x_k_p[1], x_k_p[2], 1)  
            if phase.flight_phase=="LAUNCH_DETECT" or phase.flight_phase=="BURNOUT_DETECT" or phase.flight_phase=="APOGEE_DETECT":
                x_k_p = kalman.update(time_k, self.altitude_baro[i], self.acceleration_z[i]- self.acceleration_pad, x_k_p)
            elif phase.flight_phase=="ALTITUDE_MAIN_DETECT" and switch is False or phase.flight_phase=="TOUCHDOWN_DETECT" and switch is False:
                switch = True
                kalman_descent = filters.KalmanAltitude(self.time_from_power_on[i-1], self.altitude[i-2], self.velocity[i-2], self.acceleration[i-2])
                x_k_p = kalman_descent.update(time_k, self.altitude_baro[i], x_k_p)
            else:
                x_k_p = kalman_descent.update(time_k, self.altitude_baro[i], x_k_p)
            
            self.altitude[i] = x_k_p[0]
            self.velocity[i] = x_k_p[1]
            self.acceleration[i] = x_k_p[2]

    def integrate_accelerometer_data(self):

        self.velocity_accelerometer[0:self.flight_events["LIFTOFF"]-1] = 0.0
        self.altitude_accelerometer[0:self.flight_events["LIFTOFF"]-1] = 0.0
        self.velocity_accelerometer[self.flight_events["LIFTOFF"]:] = integrate.cumtrapz(np.subtract(self.acceleration_z_total,self.acceleration_pad)[self.flight_events["LIFTOFF"]:], self.time[self.flight_events["LIFTOFF"]:], initial=0.0)
        self.altitude_accelerometer[self.flight_events["LIFTOFF"]:] = integrate.cumtrapz(self.velocity_accelerometer[self.flight_events["LIFTOFF"]:], self.time[self.flight_events["LIFTOFF"]:], initial=0.0)
    
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
