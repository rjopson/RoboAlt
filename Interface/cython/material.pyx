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
