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
        void SetOverrideMass(double mass);
        void SetModelMass();

        string Name() const
        string Comments() const 
        SurfaceFinish AssignedSurfaceFinish() const;
        double DistanceOverlap() const;
        Instance* InstanceRoot() const;
        
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

    #@property
    #def mass(self):
    #    return self.ptr.Mass()
    def override_mass(self, val):
        self.ptr.SetOverrideMass(val)
    def model_mass(self):
        self.ptr.SetModelMass()

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
