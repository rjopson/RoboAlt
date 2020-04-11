from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "../core/entities/design/instance.h":
    cdef cppclass PartPosition:
        pass

cdef extern from "../core/entities/design/instance.h" namespace "PartPosition":
    cdef PartPosition FOREWARD
    cdef PartPosition AFT

cdef extern from "../core/entities/design/instance.h":
    cdef cppclass Instance:
        Instance(string name, Part* part, Instance* instance, PartPosition position_type, double position_from)
        void SetName(string name)
        string Name() const
