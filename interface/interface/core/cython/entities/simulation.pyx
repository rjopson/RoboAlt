from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "simulation.h":
    cdef cppclass Simulation:
        Simulation(string name, string comments, Atmosphere* atmosphere, 
            double height_pad, double angle_launch_rod, double length_launch_rod,
            double step_ascent, double step_descent)
        
        void SetName(string name);
        void SetComments(string comments);
        void SetMotor(Motor* motor, Stage* stage);
        void SetHeightPad(double height_pad);
        void SetAngleLaunchRod(double angle_launch_rod);
        void SetLengthLaunchRod(double length_launch_rod);
        void SetStepAscent(double step_ascent);
        void SetStepDescent(double step_descent);

        string Name() const;
        string Comments() const;  
        Motor* AssignedMotor(Stage* stage) const;
        double HeightPad() const;
        double AngleLaunchRod() const;
        double LengthLaunchRod() const;
        vector[Stage*] Stages() const;
        double StepAscent() const;
        double StepDescent() const; 

        void Run();  

cdef class PySimulation(PyFlight):
    cdef Simulation *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PySimulation create(Simulation* ptr):
        obj = <PySimulation>PySimulation.__new__(PySimulation)
        obj.ptr = ptr
        obj.ptr_base = <Flight*>ptr
        return obj
    
    @property
    def step_ascent(self):
        return self.ptr.StepAscent()
    @step_ascent.setter
    def step_ascent(self, val):
        self.ptr.SetStepAscent(val)
    
    @property
    def step_descent(self):
        return self.ptr.StepDescent()
    @step_descent.setter
    def step_descent(self, val):
        self.ptr.SetStepDescent(val)

    @property
    def stages(self):
        stages = []
        stage_ptrs = self.ptr.Stages()
        for stage_ptr in stage_ptrs:
            stage = PyStage()
            stage = PyStage.create(stage_ptr)
            stages.append(stage)
        return stages

    def get_motor(self, PyStage stage):
        motor = PyMotor()
        motor = PyMotor.create(self.ptr.AssignedMotor(stage.ptr))
        return motor
    def set_motor(self, PyMotor motor, PyStage stage):
        self.ptr.SetMotor(motor.ptr, stage.ptr)        

    def run(self):
        self.ptr.Run()

    def initialize_attributes(self, **kwargs):
        for key in kwargs:
                setattr(self, key, kwargs[key])

    def named_attributes(self):
        return {"name":self.name,
                "comments":self.comments,
                "height_pad":self.height_pad,
                "angle_launch_rod":self.angle_launch_rod,
                "length_launch_rod":self.length_launch_rod}

#######################################################################################################################################

cdef extern from "simulation_user_command.h":
    cdef enum Command "Command":
        _NONE,
        _SEPARATE_STAGE,
        _LIGHT_STAGE,
        _DEPLOY_DROGUE,
        _DEPLOY_MAIN 
class PyCommand(Enum):
    NONE = 0
    SEPARATE_STAGE = 1
    LIGHT_STAGE = 2
    DEPLOY_DROGUE = 3
    DEPLOY_MAIN = 4

cdef extern from "simulation_user_command.h":
    cdef cppclass SimulationUserCommand:
        SimulationUserCommand(Event event, Command command, double time_delay, 
        Parachute* parachute, double altitude_main_deploy); 

        void SetEvent(Event event);
        void SetCommand(Command command);
        void SetTimeDelay(double time_delay);
        void SetParachute(Parachute* parachute);
        void SetAltitudeMainDeploy(double altitude_main_deploy);
        Event AssignedEvent() const;
        Command AssignedCommand() const;
        double TimeDelay() const;
        Parachute* AssignedParachute() const;
        double AltitudeMainDeploy() const;

cdef class PySimulationUserCommand:
    cdef SimulationUserCommand *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PySimulationUserCommand create(SimulationUserCommand* ptr):
        obj = <PySimulationUserCommand>PySimulationUserCommand.__new__(PySimulationUserCommand)
        obj.ptr = ptr
        return obj

    @property
    def event(self):
        return PyEvent(<int>self.ptr.AssignedEvent())
    @event.setter
    def event(self, val):
        if (isinstance(val, Enum)):
            val = val.value
        self.ptr.SetEvent(<Event><int>val)

    @property
    def command(self):
        return PyCommand(<int>self.ptr.AssignedCommand())
    @command.setter
    def command(self, val):
        if (isinstance(val, Enum)):
            val = val.value
        self.ptr.SetCommand(<Command><int>val)

    @property
    def time_delay(self):
        return self.ptr.TimeDelay()
    @time_delay.setter
    def time_delay(self, val):
        self.ptr.SetTimeDelay(val)

    @property
    def parachute(self):
        parachute = PyParachute()
        parachute = PyParachute.create(self.ptr.AssignedParachute())
        return parachute
    @parachute.setter
    def parachute(self, PyParachute val):
        self.ptr.SetParachute(val.ptr)

    @property
    def altitude_main_deploy(self):
        return self.ptr.AltitudeMainDeploy()
    @altitude_main_deploy.setter
    def altitude_main_deploy(self, val):
        self.ptr.SetAltitudeMainDeploy(val)
