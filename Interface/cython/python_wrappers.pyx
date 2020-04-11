from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

include "configuration.pyx"
include "instance.pyx"
include "material.pyx"
include "part.pyx"
include "rocket.pyx"
include "simulation.pyx"
include "stage.pyx"

cdef extern from "../core/database.h":
    cdef cppclass Database:
        Database()         
        void CreateMaterial(string name);
        void DeleteMaterial(Material* material);
        Material* GetMaterial(string name);
        
        void CreateRocket(string name);
        void DeleteRocket(Rocket* rocket);
        Rocket* GetRocket(string name);
        
        string TestEnum(PartType part_type);
        void CreatePart(PartType part_type, string name, Rocket* rocket);
        void DeletePart(Part* part);
        Part* GetPart(string rocket_name, string part_name);
        #Fins* GetFins(string rocket_name, string part_name);
        Nosecone* GetNosecone(string rocket_name, string part_name);
        TubeBody* GetTubeBody(string rocket_name, string part_name);
        
        void CreateConfiguration(string name, Rocket* rocket);
        void DeleteConfiguration(Configuration* configuration);
        Configuration* GetConfiguration(string rocket_name, string configuration_name);
        
        void CreateStage(string name, Configuration* configuration);
        void DeleteStage(Stage* stage);
        Stage* GetStage(string rocket_name, string configuration_name, string stage_name);    
        
        void CreateInstance(string name, Part* part, Instance* parent);
        void CreateInstance(string name, Part* part, Stage* stage);
        void DeleteInstance(Instance* instance);
        Instance* GetInstance(string rocket_name, string instance_name);
        
        void CreateSimulation(string name, Configuration* configuration);
        void DeleteSimulation(Simulation* simulation);
        Simulation* GetSimulation(string rocket_name, string configuration_name, string simulation_name);

        
cdef class InterfaceCore:    
    cdef Database *ptr
    
    def __cinit__(self):    
        self.ptr = new Database()
        
    def __dealloc__(self):
        del self.ptr

    def create_rocket(self, name):
        self.ptr.CreateRocket(name.encode('utf-8'))

    def get_rocket(self, name):
        rkt = PyRocket()
        rkt = PyRocket.create(self.ptr.GetRocket(name.encode('utf-8')))
        if rkt.ptr is NULL:
            print("Null")
        return rkt     
        
    def create_part(self, part_type, name, rocket_name):
        self.ptr.CreatePart(<PartType><int>part_type, name.encode('utf-8'), self.ptr.GetRocket(rocket_name.encode('utf-8')))

    def get_part(self, rocket_name, name):
        part_type = <PyPartType>self.ptr.GetPart(rocket_name.encode('utf-8'), name.encode('utf-8')).Type()        
        if part_type is PyPartType.NOSECONE:
            part = PyNosecone()
            part = PyNosecone.create(self.ptr.GetNosecone(rocket_name.encode('utf-8'), name.encode('utf-8')))
            return part
        elif part_type is PyPartType.TUBE_BODY:
            part = PyTubeBody()
            part = PyTubeBody.create(self.ptr.GetTubeBody(rocket_name.encode('utf-8'), name.encode('utf-8')))
            return part

    def create_configuration(self, name, rocket_name):
        self.ptr.CreateConfiguration(name.encode('utf-8'), self.ptr.GetRocket(rocket_name.encode('utf-8')))

    def get_configuration(self, rocket_name, name):
        config = PyConfiguration()
        config = PyConfiguration.create(self.ptr.GetConfiguration(rocket_name.encode('utf-8'), name.encode('utf-8')))
        return config     
        
    def create_stage(self, name, rocket_name, configuration_name):
        self.ptr.CreateStage(name.encode('utf-8'), self.ptr.GetConfiguration(rocket_name.encode('utf-8'), configuration_name.encode('utf-8')))

    def get_stage(self, rocket_name, configuration_name, name):
        stage = PyStage()
        stage = PyStage.create(self.ptr.GetStage(rocket_name.encode('utf-8'), configuration_name.encode('utf-8'), name.encode('utf-8')))
        return stage













