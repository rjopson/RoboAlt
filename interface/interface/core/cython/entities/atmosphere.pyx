from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "atmosphere.h":
    cdef cppclass Atmosphere:
        Atmosphere();
        Atmosphere(string name, string comments, bool internally_calculated,
            vector[double] height_data, vector[double] pressure_data, vector[double] temperature_data);
        Atmosphere(string file_path);


