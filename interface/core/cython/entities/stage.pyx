from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "aerodynamics.h":
    cdef enum SurfaceFinish "SurfaceFinish":
        _ROUGH,
        _UNFINISHED,
        _PAINTED,
        _POLISHED
cpdef enum PySurfaceFinish:
    ROUGH = 0
    UNFINISHED = 1
    PAINTED = 2
    POLISHED = 3

cdef extern from "stage.h":
    cdef cppclass Stage:
        Stage(string name, string comments)
        void SetName(string name)
        void SetComments(string comments)
        void SetSurfaceFinish(SurfaceFinish surface_finish);
        void SetDistanceOverlap(double distance_overlap);    
        void SetOverrideMassEmpty(double mass);
        void SetModelMassEmpty();

        string Name() const
        string Comments() const 
        SurfaceFinish AssignedSurfaceFinish() const;
        double DistanceOverlap() const;
        Instance* InstanceRoot() const;
        double MassEmpty(bool include_stages_above) const; 
        double OverrideMassEmpty() const;
        bool OverrideMassSwitch() const;
        double Length(bool include_stages_above) const;
        vector[Instance*] InstanceList(bool include_stages_above) const;

        void PrintDragCoefficients(bool include_stages_above, double mach_number, double area_thrusting)
        
cdef class PyStage:
    cdef Stage *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyStage create(Stage* ptr):
        obj = <PyStage>PyStage.__new__(PyStage)
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

    def mass_empty(self, include_stages_above):
        return self.ptr.MassEmpty(include_stages_above)
    @property
    def override_mass_empty(self):
        return self.ptr.OverrideMassEmpty()
    def set_override_mass_empty(self, val):
        self.ptr.SetOverrideMassEmpty(val)
    @property
    def override_mass_switch(self):
        self.ptr.OverrideMassSwitch()
    def set_model_mass_empty(self):
        self.ptr.SetModelMassEmpty()

    @property
    def surface_finish(self):
        return <PySurfaceFinish> self.ptr.AssignedSurfaceFinish()
    @surface_finish.setter
    def surface_finish(self, PySurfaceFinish val):
        self.ptr.SetSurfaceFinish(<SurfaceFinish><int>val)

    @property
    def distance_overlap(self):
        return self.ptr.DistanceOverlap()
    @distance_overlap.setter
    def distance_overlap(self, val):
        self.ptr.DistanceOverlap()

    @property
    def instances(self):
        instance = PyInstance()
        instance = PyInstance.create(self.ptr.InstanceRoot())
        return instance.children

    def print_drag_coefficients(self, stages_above, mach_number, area_thrusting):
        self.ptr.PrintDragCoefficients(stages_above, mach_number, area_thrusting)

    def named_attributes(self):
        return {"name":self.name,
                "comments":self.comments,
                "surface_finish":self.surface_finish,
                "distance_overlap":self.distance_overlap}
