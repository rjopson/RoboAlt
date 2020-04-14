from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "instance.h":
    cdef enum PartPosition "PartPosition":
        _FOREWARD,
        _AFT
cpdef enum PyPartPosition:
    FOREWARD = 0
    AFT = 1

cdef extern from "instance.h":
    cdef cppclass Instance:
        Instance(string name, Part* part, Instance* instance, PartPosition position_type, double position_from)        
        
        void SetName(string name)
        void SetPositionType(PartPosition position_type);
        void SetPositionFrom(double position);

        string Name() const  
        Part* AssignedPart() const;
        PartPosition PositionType() const;
        double PositionFrom() const;
        Instance* Parent() const;
        double PositionFromParentFront();
        vector[Instance*] Children(bool recursive);

cdef class PyInstance:
    cdef Instance *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyInstance create(Instance* ptr):
        obj = <PyInstance>PyInstance.__new__(PyInstance)
        obj.ptr = ptr
        return obj

    @property
    def name(self):
        return self.ptr.Name().decode('utf-8')    
    @name.setter
    def name(self, val):
        self.ptr.SetName(val.encode('utf-8'))

    @property
    def position_type(self):
        return <PyPartPosition>self.ptr.PositionType()
    @position_type.setter
    def position_type(self, PyPartPosition val):
        self.ptr.SetPositionType(<PartPosition><int>val)

    @property
    def position(self):
        return self.ptr.PositionFromParentFront()
    @property
    def position_from(self):
        return self.ptr.PositionFrom()
    @position_from.setter
    def position_from(self, val):
        self.ptr.SetPositionFrom(val)

    @property
    def parent(self):
        instance = PyInstance()
        instance = PyInstance.create(self.ptr.Parent())
        return instance

    @property
    def children(self):
        instances = []
        instance_ptrs = self.ptr.Children(0)
        for instance_ptr in instance_ptrs:
            instance = PyInstance()
            instance = PyInstance.create(instance_ptr)
            instances.append(instance)
        return instances

    def named_attributes(self):
        return {"name":self.name, 
                "position_type":self.position_type,
                "position_from":self.position_from}