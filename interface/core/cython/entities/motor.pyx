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
        vector[double] DataTime() const;
        vector[double] DataThrust() const;
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

    @property
    def name(self):
        return self.ptr.Name().decode('utf-8')

    @property
    def comments(self):
        return self.ptr.Comments().decode('utf-8')

    @property
    def manufacturer(self):
        return self.ptr.Manufacturer().decode('utf-8')

    @property
    def diameter(self):
        return self.ptr.Diameter()

    @property
    def length(self):
        return self.ptr.Length()

    @property
    def mass_propellant(self):
        return self.ptr.MassPropellant()

    @property 
    def mass_total(self):
        return self.ptr.MassTotal()

    @property
    def data_time(self):
        return self.ptr.DataTime()

    @property
    def data_thrust(self):
        return self.ptr.DataThrust()

    def named_attributes(self):
        return {"name":self.name,
                "comments":self.comments,
                "manufacturer":self.manufacturer,
                "diameter":self.diameter,
                "length":self.length,
                "mass_propellant":self.mass_propellant,
                "mass_total":self.mass_total}


