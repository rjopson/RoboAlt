
class FlightPhase():

    def __init__(self, altitude_main_deploy):

        self.flight_phase = 0
        self.altitude_main_deploy = altitude_main_deploy
        
        #Phase criteria
        self.velocity_takeoff = 10.0
        self.acceleration_takeoff = 15.0 
        self.acceleration_coast = 0.0
        self.velocity_apogee = 0.0
        self.gyro_ground_detect = 200.0

    def update(self, altitude, velocity, acceleration, gyro):
        
        if self.flight_phase == 0:
            self.launch_detect(velocity, acceleration)
        elif self.flight_phase == 1:
            self.coast_detect(acceleration)
        elif self.flight_phase == 2:
            self.apogee_detect(velocity)
        elif self.flight_phase == 3:
            self.main_detect(altitude)
        elif self.flight_phase == 4:
            self.landing_detect(gyro)
        else:
            pass

    def launch_detect(self, velocity, acceleration):

        if velocity > self.velocity_takeoff:# and acceleration > self.acceleration_takeoff:
            self.flight_phase = 1

    def coast_detect(self, acceleration):
        
        if acceleration < self.acceleration_coast:
            self.flight_phase = 2

    def apogee_detect(self, velocity):
        
        if velocity < self.velocity_apogee:
            self.flight_phase = 3

    def main_detect(self, altitude):
        
        if altitude < self.altitude_main_deploy:
            self.flight_phase = 4

    def landing_detect(self, gyro_x):
        pass
        #if gyro_x < 
