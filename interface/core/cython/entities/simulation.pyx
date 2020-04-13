from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "simulation.h":
    cdef cppclass Simulation:
        Simulation(string name, string comments, double height_pad, double angle_launch_rod, double length_launch_rod)
        
        void SetName(string name);
        void SetComments(string comments);
        void SetMotor(Motor* motor, Stage* stage);
        void SetHeightPad(const double& height_pad);
        void SetAngleLaunchRod(const double& angle_launch_rod);
        void SetLengthLaunchRod(const double& length_launch_rod);

        string Name() const;
        string Comments() const;  
        Motor* AssignedMotor(Stage* stage) const;
        double HeightPad() const;
        double AngleLaunchRod() const;
        double LengthLaunchRod() const;

        void Run(double step_ascent, double step_descent);  

cdef class PySimulation:
    cdef Simulation *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PySimulation create(Simulation* ptr):
        obj = <PySimulation>PySimulation.__new__(PySimulation)
        obj.ptr = ptr
        return obj

    @property
    def name(self):
        return self.ptr.Name().decode('utf-8')    
    @name.setter
    def name(self, val):
        self.ptr.SetName(val.encode('utf-8'))

    @property
    def comments(self):
        return self.ptr.Comments().decode('utf-8')
    @comments.setter
    def comments(self, val):
        self.ptr.SetComments(val.encode('utf-8'))

    @property
    def height_pad(self):
        return self.ptr.HeightPad()
    @height_pad.setter
    def height_pad(self, val):
        self.ptr.SetHeightPad(val)

    @property
    def angle_launch_rod(self):
        return self.ptr.AngleLaunchRod()
    @angle_launch_rod.setter
    def angle_launch_rod(self, val):
        self.ptr.SetAngleLaunchRod(val)

    @property
    def length_launch_rod(self):
        return self.ptr.LengthLaunchRod()
    @length_launch_rod.setter
    def length_launch_rod(self, val):
        self.ptr.SetLengthLaunchRod(val)

    def get_motor(self, PyStage stage):
        motor = PyMotor()
        motor = PyMotor.create(self.ptr.AssignedMotor(stage.ptr))
        return motor
    def set_motor(self, PyMotor motor, PyStage stage):
        self.ptr.SetMotor(motor.ptr, stage.ptr)        

    def run(self, step_ascent, step_descent):
        self.ptr.Run(step_ascent, step_descent)
