import numpy as np
from scipy import integrate

import constants

class MotorTestData():

    def __init__(self, eng_string_list):
        self.name = None
        self.diameter = None
        self.length = None
        self.delays = None
        self.mass_propellant = None
        self.mass_total = None
        self.manufacturer = None
        self.time_data = []
        self.thrust_data = []

        #parse file passed to object 
        self.parse_eng(eng_string_list)

        #Chached properties 
        self._impulse = None 
        self._impulse_specific = None 
        self._thrust_average = None
        self._time_burn = None
        self._impulse_function = None        

        #Calculate properties
        self.calculate_properties()

    #calculate cached properties 
    def calculate_properties(self):
        self.impulse
        self.impulse_specific
        self.time_burn
        self.thrust_average
        self.impulse_function
    def updated_attributes(self):
        self._impulse = None
        self._impulse_specific = None 
        self._time_burn = None
        self._thrust_average = None
        self._impulse_function = None 
        
        self.calculate_properties()

    #Properties
    @property
    def impulse_function(self):
        if self._impulse_function is None:
            self._impulse_function = integrate.cumtrapz(self.thrust_data, self.time_data, initial=0)
        return self._impulse_function

    @property
    def impulse(self):
        if self._impulse is None:
            self._impulse = self.impulse_function[-1]
        return self._impulse

    @property
    def impulse_specific(self):
        if self._impulse_specific is None:
            self._impulse_specific = self.impulse/(constants.GRAVITY*self.mass_propellant)
        return self._impulse_specific

    @property
    def time_burn(self):
        if self._time_burn is None:

            if self.thrust_data[0] < 0.0:
                for index, T in enumerate(self.thrust_data):
                    if T >= 0.0:
                        thrust_bound = [self.thrust_data[index-1], self.thrust_data[index1]]
                        time_bound = [self.time_data[index-1], self.time_data[index]]
                        break            
                time_burn_start = np.interp(0.0, thrust_bound, time_bound)
            else:
                time_burn_start = self.time_data[0]


            if self.thrust_data[-1] < 0.0:
                for index, T in enumerate(self.thrust_data):
                    if T <= 0.0:
                        thrust_bound = [self.thrust_data[index-1], self.thrust_data[index]]
                        time_bound = [self.time_data[index-1], self.time_data[index]]
                        break            
                time_burn_end = np.interp(0.0, thrust_bound, time_bound)
            else:
                time_burn_end = self.time_data[-1]
 
            self._time_burn = time_burn_end - time_burn_start
        return self._time_burn 

    @property
    def thrust_average(self):
        if self._thrust_average is None:
            self._thrust_average = self.impulse/self.time_burn
        return self._thrust_average

    def mass_at_time(self, time):

        scalar = self.mass_propellant/self.impulse
        return self.mass_total - scalar*np.interp(time, self.time_data, self.impulse_function)
    def thrust_at_time(self, time):

        return np.interp(time, self.time_data, self.thrust_data)
    def parse_eng(self, eng_string_list):
        
            header_reached = False

            for line in eng_string_list:

                #comment line
                if line[0] == ";":
                    pass

                #header line
                elif header_reached == False:

                    header_reached = True 

                    line_list = line.split(" ")
                    self.name = line_list[0]
                    self.diameter = int(line_list[1])
                    self.length = int(line_list[2])
                    self.delays = line_list[3]
                    self.mass_propellant = float(line_list[4])
                    self.mass_total = float(line_list[5])
                    self.manufacturer = line_list[6]
            
                #data line 
                else:
                    line_list = line.split(" ")
                    self.time_data.append(float(line_list[-2]))
                    self.thrust_data.append(float(line_list[-1].rstrip()))

            if self.time_data[0] > 0.0:
                self.time_data.insert(0, 0)
                self.thrust_data.insert(0, 0)

