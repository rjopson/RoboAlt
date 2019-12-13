
class FlightPhase():

    def __init__(self, altitude_main_deploy):

        #LAUNCH_DETECT, BURNOUT_DETECT, APOGEE_DETECT, ALTITUDE_MAIN_DETECT, GROUND_DETECT
        self.flight_phase = "LAUNCH_DETECT"
        self.flight_event = "LIFTOFF"
        self.altitude_main_deploy = altitude_main_deploy
        
        #Phase criteria
        self.velocity_takeoff = 2.0
        self.acceleration_takeoff = 1.0 
        self.acceleration_coast = 0.01
        self.velocity_apogee = 0.01
        self.altitude_ground_detect = 0.01
        self.gyro_ground_detect = 200.0

    def update_from_simulation(self, flight_event):
        
        if flight_event == "LIFTOFF":
            self.flight_phase = 0
        elif flight_event == "BURNOUT":
            self.flight_phase = 1
        elif flight_event == "APOGEE":
            self.flight_phase = 2
        elif flight_event == "ALTITUDE_MAIN":
            self.flight_phase = 3
        elif flight_event == "TOUCHDOWN":
            self.flight_phase = 4
        else:
            self.flight_phase = 5

    def update(self, altitude, velocity, acceleration, gyro):
        
        if self.flight_phase == "LAUNCH_DETECT":
            self.launch_detect(velocity, acceleration)
        elif self.flight_phase == "BURNOUT_DETECT":
            self.coast_detect(acceleration)
        elif self.flight_phase == "APOGEE_DETECT":
            self.apogee_detect(velocity)
        elif self.flight_phase == "ALTITUDE_MAIN_DETECT":
            self.main_detect(altitude)
        elif self.flight_phase == "TOUCHDOWN_DETECT":
            self.landing_detect(gyro)
        else:
            pass

    def launch_detect(self, velocity, acceleration):

        if velocity > self.velocity_takeoff:# and acceleration > self.acceleration_takeoff:
            self.flight_phase = "BURNOUT_DETECT"
            self.flight_event = "BURNOUT"

    def coast_detect(self, acceleration):
        
        if acceleration < self.acceleration_coast:
            self.flight_phase = "APOGEE_DETECT"
            self.flight_event = "APOGEE"

    def apogee_detect(self, velocity):
        
        if velocity < self.velocity_apogee:
            self.flight_phase = "ALTITUDE_MAIN_DETECT"
            self.flight_event = "ALTITUDE_MAIN"

    def main_detect(self, altitude):
        
        if altitude < self.altitude_main_deploy:
            self.flight_phase = "TOUCHDOWN_DETECT"
            self.flight_event = "TOUCHDOWN"

    def landing_detect(self, gyro_x):
        self.flight_event = "TOUCHDOWN"
        pass
        #if gyro_x < 
