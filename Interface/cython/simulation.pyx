from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool


cdef extern from "../core/entities/flight/simulation.h":
    cdef cppclass Simulation:
        Simulation(string name, string comments, double height_pad, double angle_launch_rod, double length_launch_rod)
        void SetName(string name)
        void SetComments(string comments)
        string Name() const
        string Comments() const  
