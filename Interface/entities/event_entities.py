

class SimulationEvent():
    #events: liftoff, burnout, apogee, altitude_descent, ground
    #time: time after event
    #actions: deploy parachute, separate stage, light motor
    
    def __init__(self, action, event, time_after_event=0.0):
        self.event = event
        self.time_after_event = time_after_event
        self.action = action

        if self.event == "GROUND":
            self.time_after_event = 0.0
        else:
            pass
