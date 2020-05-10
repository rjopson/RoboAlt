from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "flight.h":
    cdef cppclass Flight:

        Flight(string name, string comments, Atmosphere* atmosphere,
            double height_pad, double angle_launch_rod, double length_launch_rod);

        void SetName(string name);
        void SetComments(string comments);
        void SetHeightPad(double height_pad);
        void SetAngleLaunchRod(double angle_launch_rod);
        void SetLengthLaunchRod(double length_launch_rod);
        void SetAtmosphere(Atmosphere* atmosphere);

        string Name() const;
        string Comments() const;
        double HeightPad() const;
        double AngleLaunchRod() const;
        double LengthLaunchRod() const;
        Atmosphere* AssignedAtmosphere() const;        

cdef class PyFlight:
    cdef Flight *ptr_base

    def __init__(self, *args):
        pass

    @property
    def name(self):
        return self.ptr_base.Name().decode('utf-8')    
    @name.setter
    def name(self, val):
        self.ptr_base.SetName(val.encode('utf-8'))

    @property
    def comments(self):
        return self.ptr_base.Comments().decode('utf-8')
    @comments.setter
    def comments(self, val):
        self.ptr_base.SetComments(val.encode('utf-8'))

    @property
    def height_pad(self):
        return self.ptr_base.HeightPad()
    @height_pad.setter
    def height_pad(self, val):
        self.ptr_base.SetHeightPad(val)

    @property
    def angle_launch_rod(self):
        return self.ptr_base.AngleLaunchRod()
    @angle_launch_rod.setter
    def angle_launch_rod(self, val):
        self.ptr_base.SetAngleLaunchRod(val)

    @property
    def length_launch_rod(self):
        return self.ptr_base.LengthLaunchRod()
    @length_launch_rod.setter
    def length_launch_rod(self, val):
        self.ptr_base.SetLengthLaunchRod(val)

#######################################################################################################################################

cdef extern from "flight_data.h":
    cdef enum Event "Event":
        _LIFTOFF,
        _BURNOUT,
        _APOGEE,
        _ALTITUDE_MAIN,
        _GROUND,
        _AT_TIME_DELAY,
        _NONE
class PyEvent(Enum):
    LIFTOFF = 0
    BURNOUT = 1
    APOGEE = 2
    ALTITUDE_MAIN = 3
    GROUND = 4
    AT_TIME_DELAY = 5
    NONE = 6

cdef extern from "flight_data.h":
    cdef enum Phase "Phase":
        _DETECT_LAUNCH,
        _ASCENT_POWERED,
        _ASCENT_UNPOWERED_STACKED,
        _DESCENT_DROGUE,
        _DESCENT_MAIN,
        _GROUND,
        _ASCENT_UNPOWERED_UNSTACKED,
        _DESCENT_UNPOWERED_STACKED,
        _DESCENT_UNPOWERED_UNSTACKED
class PyPhase(Enum):
    DETECT_LAUNCH = 0
    ASCENT_POWERED = 1
    ASCENT_UNPOWERED_STACKED = 2
    DESCENT_DROGUE = 3
    DESCENT_MAIN = 4
    GROUND = 5
    ASCENT_UNPOWERED_UNSTACKED = 6
    DESCENT_UNPOWERED_STACKED = 7
    DESCENT_UNPOWERED_UNSTACKED = 8