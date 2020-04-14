from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "configuration.h":
    cdef cppclass Configuration:
        Configuration(string name, string comments)
        
        void SetName(string name);
        void SetComments(string comments);
        
        string Name() const;
        string Comments() const; 
        vector[Stage*] Stages() const;
        vector[Simulation*] Simulations() const;
        
cdef class PyConfiguration:
    cdef Configuration *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyConfiguration create(Configuration* ptr):
        obj = <PyConfiguration>PyConfiguration.__new__(PyConfiguration)
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
    def stages(self):
        stages = []
        stage_ptrs = self.ptr.Stages()
        for stage_ptr in stage_ptrs:
            stage = PyStage()
            stage = PyStage.create(stage_ptr)
            stages.append(stage)
        return stages

    @property
    def simulations(self):
        simulations = []
        simulation_ptrs = self.ptr.Simulations()
        for simulation_ptr in simulation_ptrs:
            simulation = PySimulation()
            simulation = PySimulation.create(simulation_ptr)
            simulations.append(simulation)
        return simulations

    def named_attributes(self):
        return {"name": self.name,
                "comments": self.comments}

