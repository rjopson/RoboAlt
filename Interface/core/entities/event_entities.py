
from enum import Enum

class Event(Enum):
    LIFTOFF = 'Liftoff'
    BURNOUT = 'Burnout'
    APOGEE = 'Apogee'
    ALTITUDE_MAIN = 'Altitude Main'
    TOUCHDOWN = 'Touchdown'

class Action(Enum):
    DEPLOY_PARACHUTE = 'Deploy Parachute'

class SimulationEvent():
    #time: time in seconds after event 
    
    def __init__(self, event, action, instance=None, time_delay=0.0, altitude_main_deploy=500):        
        self.event = event
        self.action = action
        self.instance = instance
        self.time_delay = time_delay   
        self.name = self.event.value + ", " + self.action.value + ", " + "TIME_DELAY = " + str(self.time_delay)

        if self.action == Action.DEPLOY_PARACHUTE:
            self.deployed = False
        
        if self.event == Event.ALTITUDE_MAIN:
            self.altitude_main_deploy = altitude_main_deploy
        else:
            self.altitude_main_deploy = "None"
            #self.altitude_main_deploy = altitude_main_deploy

        if self.event == Event.TOUCHDOWN:
            self.time_after_event = 0.0
        else:
            pass

    def named_attributes(self):
        return {"event":self.event, "action":self.action, "instance":self.instance, 
                "time_delay":self.time_delay, "altitude_main_deploy":self.altitude_main_deploy}

    def apply_action(self):
        if self.action == Action.DEPLOY_PARACHUTE:
            self.deploy_parachute()

    def deploy_parachute(self):
        self.deployed = True

class FlightUserSettings():

    def __init__(self, altitude_main, event_apo, event_main, event_third, delay_apo, delay_main, delay_third, buzzer_switch):

        self.altitude_main = altitude_main
        self.event_apo = event_apo
        self.event_main = event_main
        self.event_third = event_third
        self.delay_apo = delay_apo 
        self.delay_main = delay_main 
        self.delay_third = delay_third 
        self.buzzer_switch = buzzer_switch

