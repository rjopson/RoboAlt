import math
import constants

#calculate air density 
#calculate speed of sound 

class StandardAtmosphere():

    #Base values in arrays 
    #[MSL, 11km, 25km, 47km, 53km, 79km, 90km]
    p1 = {"MSL":101325.0, "11km":22634.0, "25km":2489.19, "47km":120.49, "53km":58.35, "79km":1.01, "90km":0.105} #Pa
    T1 = {"MSL":288.16, "11km":216.66, "25km":216.66, "47km":282.66, "53km":282.66, "79km":165.66, "90km":165.66} #K
    h1 = {"MSL":0.0, "11km":11000.0, "25km":25000.0, "47km":47000.0, "53km":53000.0, "79km":79000.0, "90km":90000.0} #m
    a = {"MSL":-6.5e-3, "11km":None, "25km":3.0e-3, "47km":None, "53km":-4.5e-3, "79km":None, "90km":4.0e-3} #K/m

    asd = 8

    R = constants.R_SPECIFIC
    g0 = constants.GRAVITY
    gamma = constants.gamma

    def __init__(self):
        pass

    def test_me(self):
        return self.asd

    def get_region(self, height):

        if height < 11000.0:
            return "MSL", "gradient"
        elif height < 25000.0:
            return "11km", "iso"
        elif height < 47000.0:
            return "25km", "gradient"
        elif height < 53000.0:
            return "47km", "iso"
        elif height < 79000.0:
            return "53km", "gradient"
        elif height < 90000.0:
            return "79km", "iso"
        else:
            return "90km", "gradient"
    def get_temperature(self, height):

        [region_current, type_current] = self.get_region(height)
        if type_current == "gradient":
            return self.temperature_gradient_region(self.T1[region_current], self.h1[region_current], height, self.a[region_current])
        else:
            return self.T1[region_current]    
    def get_pressure(self, height):

        [region_current, type_current] = self.get_region(height)

        if type_current == "gradient":
            return self.pressure_gradient_region(self.p1[region_current], self.T1[region_current], self.get_temperature(height),self. g0, self.a[region_current], self.R)
        else:
            return self.pressure_isothermal_region(self.p1[region_current], self.get_temperature(height), self.h1[region_current], height, self.g0, self.R)
    def get_density(self, height):

        return self.density_standard_atmosphere(self.get_pressure(height), self.get_temperature(height), self.R)
    def get_speed_sound(self, height):

        return math.sqrt(self.gamma*self.R*self.get_temperature(height))
    def pressure_isothermal_region(self, p1, T, h1, h, g0, R):

        return p1*math.exp(-(g0/(R*T))*(h-h1))
    def pressure_gradient_region(self, p1, T1, T, g0, a, R):

        return p1*(T/T1)**(-g0/(a*R))
    def temperature_gradient_region(self, T1, h1, h, a):

        return T1 + a*(h - h1)
    def density_standard_atmosphere(self, p, T, R):
    
        return (p)/(R*T)

'''
def calculate_base_pressures():
    
    p1_11k = atmosphere_model.pressure_gradient_region(101325.0, 288.16, 216.66, constants.GRAVITY, -6.5e-3, constants.R_SPECIFIC)
    p1_25k = atmosphere_model.pressure_isothermal_region(p1_11k, 216.66, 11000.0, 25000.0, constants.GRAVITY, constants.R_SPECIFIC)
    p1_47k = atmosphere_model.pressure_gradient_region(p1_25k, 216.66, 282.66, constants.GRAVITY, 3.0e-3, constants.R_SPECIFIC)
    p1_53k = atmosphere_model.pressure_isothermal_region(p1_47k, 282.66, 47000.0, 53000.0, constants.GRAVITY, constants.R_SPECIFIC)
    p1_79k = atmosphere_model.pressure_gradient_region(p1_53k, 282.66, 165.66, constants.GRAVITY, -4.5e-3, constants.R_SPECIFIC)
    p1_90k = atmosphere_model.pressure_isothermal_region(p1_79k, 165.66, 79000.0, 90000.0, constants.GRAVITY, constants.R_SPECIFIC)
'''


#def pressure_standard_atmosphere()


#calculate wind velocity 


