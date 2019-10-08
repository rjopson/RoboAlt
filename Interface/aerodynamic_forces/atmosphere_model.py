import math
import constants

#calculate air density 
#calculate speed of sound 

#Implements International Standard Atmosphere 
class StandardAtmosphere():

    #Base values in arrays 
    #[0km, 11km, 20km, 32km, 47km, 51km, 71km, 84.9km]
    p1 = {"0km":101325.0, "11km":22632.0, "20km":5474.9, "32km":868.02, "47km":110.91, "51km":67.0, "71km":3.9564, "84.9km":0.3734} #Pa
    T1 = {"0km":292.15, "11km":216.65, "20km":216.65, "32km":228.65, "47km":270.65, "51km":270.65, "71km":214.65, "84.9km":186.87} #K
    h1 = {"0km":0.0, "11km":11000.0, "20km":20000.0, "32km":32000.0, "47km":47000.0, "51km":51000.0, "71km":71000.0, "84.9km":84900.0} #m
    a = {"0km":-0.0065, "11km":0.0, "20km":0.001, "32km":0.0028, "47km":0.0, "51km":-0.0028, "71km":-0.002, "84.9km":0.0} #K/m

    asd = 8

    R = constants.R_SPECIFIC
    g0 = constants.GRAVITY
    gamma = constants.gamma

    def __init__(self):
        pass

    def test_me(self):
        return self.asd

    def get_region_from_height(self, height):

        if height < 11000.0:
            return "0km", "gradient"
        elif height < 20000.0:
            return "11km", "iso"
        elif height < 32000.0:
            return "20km", "gradient"
        elif height < 47000.0:
            return "32km", "gradient"
        elif height < 51000.0:
            return "47km", "iso"
        elif height < 71000.0:
            return "51km", "gradient"
        elif height < 84900.0:
            return "71km", "gradient"
        else:
            return "84.9km", "iso"

    def get_region_from_pressure(self, pressure):

        if pressure < 0.3734:
            return "84.9km", "iso"
        elif pressure < 3.9564:
            return "71km", "gradient"
        elif pressure < 67.0:
            return "51km", "gradient"
        elif pressure < 110.91:
            return "47km", "iso"
        elif pressure < 868.02:
            return "32km", "gradient"
        elif pressure < 5474.9:
            return "20km", "gradient"
        elif pressure < 22632.0:
            return "11km", "iso"
        else:
            return "0km", "gradient"
    def get_temperature(self, height):

        [region_current, type_current] = self.get_region_from_height(height)
        if type_current == "gradient":
            return self.temperature_gradient_region(self.T1[region_current], self.h1[region_current], height, self.a[region_current])
        else:
            return self.T1[region_current]    
    def get_pressure(self, height):

        [region_current, type_current] = self.get_region_from_height(height)

        if type_current == "gradient":
            return self.pressure_gradient_region(self.p1[region_current], self.T1[region_current], self.get_temperature(height), self.g0, self.a[region_current], self.R)
        else:
            return self.pressure_isothermal_region(self.p1[region_current], self.get_temperature(height), self.h1[region_current], height, self.g0, self.R)
    def get_altitude(self, pressure):

        [region_current, type_current] = self.get_region_from_pressure(pressure)

        if type_current == "gradient":
            return self.altitude_gradient_region(self.T1[region_current], self.a[region_current], pressure, self.p1[region_current], self.R, self.g0, self.h1[region_current])
        else:
            return self.altitude_isothermal_region(self.R, self.T1[region_current], self.g0, pressure, self.p1[region_current], self.h1[region_current])        

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
    def altitude_isothermal_region(self, R, T1, g0, p, p1, h1):

        return ((R*T1)/g0)*log(p/p1) + h1
    def altitude_gradient_region(self, T1, a, p, p1, R, g0, h1):

        return (T1/(-a))*(1 - (p/p1)**((R*(-a))/g0)) + h1


#calculate wind velocity 


