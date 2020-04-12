from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "../core/entities/design/material.h":
    cdef cppclass Material:
        Material(string name, string comments, double density)
        void SetName(string name)
        void SetComments(string comments)
        void SetDensity(double density)
        string Name() const
        string Comments() const        
        double Density() const

cdef class PyMaterial:
    cdef Material *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyMaterial create(Material* ptr):
        obj = <PyMaterial>PyMaterial.__new__(PyMaterial)
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
    def density(self):
        return self.ptr.Density()
    @density.setter
    def density(self, val):
        self.ptr.SetDensity(val)
