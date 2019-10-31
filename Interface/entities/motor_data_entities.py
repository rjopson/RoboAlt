import numpy as np
from scipy import integrate

import constants

class MotorTestData():

    def __init__(self, name, diameter, length, delays, mass_propellant, mass_total, manufacturer, time_data, thrust_data):
        self.name = name
        self.diameter = diameter
        self.length = length
        self.delays = delays
        self.mass_propellant = mass_propellant
        self.mass_total = mass_total
        self.manufacturer = manufacturer
        self.time_data = time_data
        self.thrust_data = thrust_data

        #Chached properties 
        self._impulse = None 
        self._impulse_specific = None 
        self._thrust_average = None
        self._time_burn = None
        self._impulse_function = None        

        #Calculate properties
        self.calculate_properties()

    def named_attributes(self):
        return {"name":self.name, "diameter":self.diameter, "length":self.length,
                "delays":self.delays, "mass_propellant":self.mass_propellant, "mass_total":self.mass_total,
                "manufacturer":self.manufacturer}

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
    

