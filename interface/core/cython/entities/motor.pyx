from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "motor.h":
    cdef cppclass Motor:
        Motor(string name, string manufacturer, string comments,
		    double diameter, double length, vector[double] delay, double mass_propellant, double mass_total,
		    vector[double] data_time, vector[double] data_thrust);
        Motor(string file_path);

        void SetName(string name);
        void SetComments(string comments);
        void SetManufacturer(string manufacturer);
        void SetDiameter(double diameter);
        void SetLength(double length);
        void SetDelay(vector[double] delay);
        void SetMassPropellant(double mass_propellant);
        void SetMassTotal(double mass_total);   
        void SetDataTime(vector[double] time);
        void SetDataThrust(vector[double] thrust);

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
    def manufacturer(self):
        return self.ptr.Manufacturer().decode('utf-8')
    @manufacturer.setter
    def manufacturer(self, val):
        self.ptr.SetManufacturer(val.encode('utf-8'))

    @property
    def diameter(self):
        return self.ptr.Diameter()
    @diameter.setter
    def diameter(self, val):
        self.ptr.SetDiameter(val)

    @property
    def length(self):
        return self.ptr.Length()
    @length.setter
    def length(self, val):
        self.ptr.SetLength(val)

    @property
    def mass_propellant(self):
        return self.ptr.MassPropellant()
    @mass_propellant.setter
    def mass_propellant(self, val):
        self.ptr.SetMassPropellant(val)

    @property 
    def mass_total(self):
        return self.ptr.MassTotal()
    @mass_total.setter
    def mass_total(self, val):
        self.ptr.SetMassTotal(val)

    @property
    def delay(self):
        return self.ptr.Delay()
    @delay.setter
    def delay(self, val):
        self.ptr.SetDelay(val)

    @property
    def data_time(self):
        return self.ptr.DataTime()
    @data_time.setter
    def data_time(self, val):
        self.ptr.SetDataTime(val)

    @property
    def data_thrust(self):
        return self.ptr.DataThrust()
    @data_thrust.setter
    def data_thrust(self, val):
        self.ptr.SetDataThrust(val)

    def initialize_attributes(self, **kwargs):
        for key in kwargs:
                setattr(self, key, kwargs[key])

    def named_attributes(self):
        return {"name":self.name,
                "comments":self.comments,
                "manufacturer":self.manufacturer,
                "diameter":self.diameter,
                "length":self.length,
                "mass_propellant":self.mass_propellant,
                "mass_total":self.mass_total}


