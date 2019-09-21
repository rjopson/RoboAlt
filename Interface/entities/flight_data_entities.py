
import simulation_engine
import entities.motor_data_entities as motor_entities
import aerodynamic_forces.aerodynamic_forces as aero_force
import aerodynamic_forces.atmosphere_model as atmosphere_model
import numpy as np
import filters
import flight_phase


class SimulationData():

    def __init__(self, name, config, motor, elevation_pad, comments):
        self.name = name
        self.config = config
        self.motor = motor
        self.elevation_pad = elevation_pad
        self.comments = comments       
        
        self.run_simulation()

    def run_simulation(self):
        
        [self.time, self.altitude, self.velocity, self.acceleration, self.alpha, 
         self.drag, self.Cd, 
         self.thrust, self.mass, 
         self.pressure, self.temperature] = simulation_engine.run(self.config, self.motor, self.elevation_pad, 0.0, 288.0, 1000.0, 0.05)

        #Pitch angle 

class AltimeterData():

    def __init__(self, data_string_list, name, location, date, elevation_pad, mass_pad, length, motor, mass_propellant, comments):

        #Data input by user 
        self.data_string_list = data_string_list 
        self.name = name
        self.location = location
        self.date = date 
        self.elevation_pad = elevation_pad
        self.mass_pad = mass_pad
        self.length = length
        self.motor = motor
        self.mass_propellant = mass_propellant        
        self.comments = comments

        #Initialize data structures for recorded data import and data derived from recorded data 
        self.length = len(data_string_list[2:])
        self.recorded_data = FlightDataStructure(self.length)
        self.derived_data = FlightDataStructure(self.length)

        #Recorded pad offsets 
        self.mpuPad = None
        self.h3lisPad = None
        self.pressurePad = None
        self.temperaturePad = None 
        self.voltageStartup = None 
        self.C = np.full(6, 0)

        #Parse data string to numpy derived data array
        self.parse_raw()

        #Cached property data 
        self._time_liftoff = None
        self._time_burnout = None
        self._time_apogee = None
        self._time_main = None
        self._time_landing = None
        self._time_of_flight = None 

        #Calculate derived data
        self.calculate_derived_data()        

    @property 
    def time_liftoff(self):
        if self._time_liftoff is None:
            
            for i, status in enumerate(self.derived_data.flight_status):

                if status == 1:
                    self._time_liftoff = self.unit_change(self.recorded_data.time[i], 0.001)
                    break 
        return self._time_liftoff

    def parse_raw(self):

        version = float(self.data_string_list[0])

        #Parse version 0.1 type file
        if version == 0.1:

            #header line 
            line_list = self.data_string_list[1].split(",")
            self.mpuPad = line_list[0]
            self.h3lisPad = line_list[1]
            self.pressurePad = line_list[2]
            self.temperaturePad = line_list[3]
            self.voltageStartup = line_list[4] 
            self.C[0] = line_list[5]
            self.C[1] = line_list[6]
            self.C[2] = line_list[7]
            self.C[3] = line_list[8]
            self.C[4] = line_list[9]
            self.C[5] = line_list[10]          

            #Read through flight data 
            for i, line in enumerate(self.data_string_list[2:]):
                
                line_list = line.split(",")
                self.recorded_data.time[i] = float(line_list[0])
                self.recorded_data.flight_status[i] = int(line_list[1])
                self.recorded_data.altitude[i] = float(line_list[2])
                self.recorded_data.velocity[i] = float(line_list[3])
                self.recorded_data.acceleration[i] = float(line_list[4])
                self.recorded_data.altitude_baro_unfiltered[i] = float(line_list[5])
                self.recorded_data.acceleration_axial_unfiltered[i] = float(line_list[6])
                self.recorded_data.pressure[i] = float(line_list[7])
                self.recorded_data.temperature[i] = float(line_list[8])
                self.recorded_data.acceleration_x[i] = int(line_list[9])
                self.recorded_data.acceleration_y[i] = int(line_list[10])
                self.recorded_data.acceleration_z[i] = int(line_list[11])
                self.recorded_data.gyro_x[i] = int(line_list[12])
                self.recorded_data.gyro_y[i] = int(line_list[13])
                self.recorded_data.gyro_z[i] = int(line_list[14])
                self.recorded_data.acceleration_high[i] = int(line_list[15])
                self.recorded_data.pressure_raw[i] = int(line_list[16])
                self.recorded_data.temperature_raw[i] = int(line_list[17])
                self.recorded_data.voltage[i] = int(line_list[18])
                self.recorded_data.continuity_apogee[i] = int(line_list[19])
                self.recorded_data.continuity_main[i] = int(line_list[20])
                self.recorded_data.continuity_third[i] = int(line_list[21])
        else:
            pass

    def calculate_derived_data(self):
        
        #Convert raw data from mm to m for filtering 
        self.derived_data.time_raw = self.unit_change(self.recorded_data.time, 0.001)
        self.derived_data.altitude_baro_unfiltered = self.unit_change(self.recorded_data.altitude_baro_unfiltered, 0.001)
        self.derived_data.acceleration_axial_unfiltered = self.unit_change(self.recorded_data.acceleration_axial_unfiltered, 0.001)
        
        #Filter state data 
        self.filter_state_data()

        #Calculate times 
        self.derived_data.time = np.subtract(self.derived_data.time_raw, self.time_liftoff)

    def get_standard_atmosphere_altitude(self):

        atmosphere = atmosphere_model.StandardAtmosphere()
        
        
        self.derived_data.altitude_baro_unfiltered = atmosphere.get


    def data_to_engineering_units(self):
        pass
    def unit_change(self, data, factor):
        
        return np.multiply(data, factor)

    def bits_to_engineering(self, data, bit_number, min, max):
        pass
    def filter_state_data(self):
        kalman = filters.Kalman(self.derived_data.time_raw[0])

        phase = flight_phase.FlightPhase(500)

        x_k_p = np.array([0,0,0])
        self.derived_data.altitude[0] = x_k_p[0]
        self.derived_data.velocity[0] = x_k_p[1]
        self.derived_data.acceleration[0] = x_k_p[2]
        
        for i, time_k in enumerate(self.derived_data.time_raw[1:]):

            phase.update(x_k_p[0], x_k_p[1], x_k_p[2], self.derived_data.gyro_x[i])
            self.derived_data.flight_status[i] = phase.flight_phase

            if phase.flight_phase < 3:
                x_k_p = kalman.up_update(time_k, self.derived_data.altitude_baro_unfiltered[i], self.derived_data.acceleration_axial_unfiltered[i], x_k_p)
            else:
                x_k_p = kalman.up_update(time_k, self.derived_data.altitude_baro_unfiltered[i], self.derived_data.acceleration_axial_unfiltered[i], x_k_p)

            self.derived_data.altitude[i] = x_k_p[0]
            self.derived_data.velocity[i] = x_k_p[1]
            self.derived_data.acceleration[i] = x_k_p[2]

#Structure which is used for raw recorded altimeter and data derived from this 
class FlightDataStructure():

    def __init__(self, length):

        self.time_raw = np.full(length, 0)
        self.time = np.full(length, 0) #subtraction such that zero = takeoff time 
        self.flight_status = np.full(length, 0)
        self.altitude = np.full(length, 0)
        self.velocity = np.full(length, 0)
        self.acceleration = np.full(length, 0)
        self.altitude_baro_unfiltered = np.full(length, 0)
        self.acceleration_axial_unfiltered = np.full(length, 0)
        self.pressure = np.full(length, 0)
        self.temperature = np.full(length, 0)
        self.acceleration_x = np.full(length, 0)
        self.acceleration_y = np.full(length, 0)
        self.acceleration_z = np.full(length, 0)
        self.gyro_x = np.full(length, 0)
        self.gyro_y = np.full(length, 0)
        self.gyro_z = np.full(length, 0)
        self.acceleration_high = np.full(length, 0)
        self.pressure_raw = np.full(length, 0)
        self.temperature_raw = np.full(length, 0)
        self.voltage = np.full(length, 0)
        self.continuity_apogee = np.full(length, 0)
        self.continuity_main = np.full(length, 0)
        self.continuity_third = np.full(length, 0) 


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