from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "part_instance.h":
    cdef enum PartPosition "PartPosition":
        _FOREWARD,
        _AFT
class PyPartPosition(Enum):
    FOREWARD = 0
    AFT = 1

cdef extern from "part_instance.h":
    cdef cppclass PartInstance:
        PartInstance(string name, Part* part, PartInstance* instance, PartPosition position_type, double position_from)        
        
        void SetName(string name)
        void SetPositionType(PartPosition position_type);
        void SetPositionFrom(double position);

        string Name() const  
        Part* AssignedPart() const;
        PartPosition PositionType() const;
        double PositionFrom() const;
        PartInstance* Parent() const;
        double PositionFromParentFront();
        vector[PartInstance*] Children(bool recursive);

cdef class PyPartInstance:
    cdef PartInstance *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyPartInstance create(PartInstance* ptr):
        obj = <PyPartInstance>PyPartInstance.__new__(PyPartInstance)
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
        return PyPartPosition(<int>self.ptr.PositionType())
    @position_type.setter
    def position_type(self, val):
        if (isinstance(val, Enum)):
            val = val.value
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
    def part(self):        
        part_ptr = self.ptr.AssignedPart() 
        return PyPart.create_derived(part_ptr)

    @property
    def parent(self):
        instance = PyPartInstance()
        instance = PyPartInstance.create(self.ptr.Parent())
        return instance

    @property
    def children(self):
        instances = []
        instance_ptrs = self.ptr.Children(0)
        for instance_ptr in instance_ptrs:
            instance = PyPartInstance()
            instance = PyPartInstance.create(instance_ptr)
            instances.append(instance)
        return instances

    def initialize_attributes(self, **kwargs):
        for key in kwargs:
                setattr(self, key, kwargs[key])

    def named_attributes(self):
        return {"name":self.name, 
                "part":self.part.name,
                "position_type":self.position_type,
                "position_from":self.position_from}