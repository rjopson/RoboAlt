from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "motor.h":
    cdef cppclass Motor:
        Motor(string name, string manufacturer, string comments,
		    double diameter, double length, vector[double] delay, double mass_propellant, double mass_total,
		    vector[double] data_time, vector[double] data_thrust);
        Motor(string file_path);
        string Name() const;
        string Comments() const;
        string Manufacturer() const;
        double Diameter() const;
        double Length() const;
        vector[double] Delay() const;
        double MassPropellant() const;
        double MassTotal() const;
        double MassCase() const;

cdef class PyMotor:
    cdef Motor *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyMotor create(Motor* ptr):
        obj = <PyMotor>PyMotor.__new__(PyMotor)
        obj.ptr = ptr
        return obj 

