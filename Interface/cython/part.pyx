from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool
from libc.stdint cimport uint32_t

cdef extern from "../core/entities/design/part.h":
    cdef enum PartType "PartType":
        _BULKHEAD, 
        _FINS,
        _NOSECONE,
        _PARACHUTE,
        _POINT_MASS,
        _TUBE_BODY,
        _TUBE_INNER  

cpdef enum PyPartType:
    BULKHEAD = 0
    FINS = 1
    NOSECONE = 2
    PARACHUTE = 3
    POINT_MASS = 4
    TUBE_BODY = 5
    TUBE_INNER = 6


cdef extern from "../core/entities/design/part.h":
    cdef cppclass Part:
        Part(string name, string comments)
        void SetName(string name)
        void SetComments(string comments)
        string Name() const
        string Comments() const  
        PartType Type() const

cdef extern from "../core/models/aerodynamics.h" namespace "NoseconeType":
    cdef enum _NoseconeType "NoseconeType":
        _VON_KARMEN "NoseconeType::VON_KARMEN"
        _CONICAL "NoseconeType::CONICAL"
        _OGIVE "NoseconeType::OGIVE"
        _HAACK "NoseconeType::HAACK"

cpdef enum NoseconeType:
    VON_KARMEN  = <uint32_t> _VON_KARMEN
    CONICAL  = <uint32_t> _CONICAL
    OGIVE  = <uint32_t> _OGIVE
    HAACK  = <uint32_t> _HAACK

cdef extern from "../core/entities/design/part_nosecone.h":
    cdef cppclass Nosecone:
        Nosecone(string name, string comments, Material* material,
            NoseconeType nose_type, double shape_parameter,
            double length_nose, double length_base, double length_shoulder,
            double thickness, double thickness_shoulder, 
            double diameter_outer, double diameter_shoulder,
            bool mass_override_switch, double mass_override, bool cg_override_switch, double cg_override);
        void SetName(string name);
        void SetComments(string comments);
        string Name() const;
        string Comments() const;  
        double LengthNose() const;

cdef class PyNosecone:
    cdef Nosecone *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyNosecone create(Nosecone* ptr):
        obj = <PyNosecone>PyNosecone.__new__(PyNosecone)
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
    def length_nose(self):
        return self.ptr.LengthNose()


cdef extern from "../core/entities/design/part_tube_body.h":
    cdef cppclass TubeBody:
        TubeBody(string name, string comments, Material* material,
            double length, double diameter_outer, double thickness,
            bool mass_override_switch, double mass_override, bool cg_override_switch, double cg_override);
        void SetName(string name);
        void SetComments(string comments);
        string Name() const;
        string Comments() const;
        double Length() const;

cdef class PyTubeBody:
    cdef TubeBody *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyTubeBody create(TubeBody* ptr):
        obj = <PyTubeBody>PyTubeBody.__new__(PyTubeBody)
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
    def length(self):
        return self.ptr.Length()
