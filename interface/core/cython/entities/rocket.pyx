from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "../core/entities/design/rocket.h":
    cdef cppclass Rocket:
        Rocket(string name, string comments);
        void SetName(string);
        void SetComments(string);
        string Name() const;
        string Comments() const;

cdef class PyRocket:
    cdef Rocket *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyRocket create(Rocket* ptr):
        obj = <PyRocket>PyRocket.__new__(PyRocket)
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
