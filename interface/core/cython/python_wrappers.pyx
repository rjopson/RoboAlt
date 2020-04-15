from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool
from enum import Enum

include "entities/configuration.pyx"
include "entities/instance.pyx"
include "entities/material.pyx"
include "entities/motor.pyx"
include "entities/part.pyx"
include "entities/rocket.pyx"
include "entities/simulation.pyx"
include "entities/stage.pyx"

cdef extern from "entity_manager.h":
    cdef cppclass EntityManager:
        EntityManager()         
        Material* CreateMaterial(string name);
        void DeleteMaterial(Material* material);
        Material* GetMaterial(string name);
        
        Rocket* CreateRocket(string name);
        void DeleteRocket(Rocket* rocket);
        Rocket* GetRocket(string name);

        T* CreatePart[T](string name, Rocket* rocket);
        void DeletePart(Part* part);
        Part* GetPart(string rocket_name, string part_name);        
        T* GetPart[T](string rocket_name, string part_name);
        
        Configuration* CreateConfiguration(string name, Rocket* rocket);
        void DeleteConfiguration(Configuration* configuration);
        Configuration* GetConfiguration(string rocket_name, string configuration_name);
        
        Stage* CreateStage(string name, Configuration* configuration);
        void DeleteStage(Stage* stage);
        Stage* GetStage(string rocket_name, string configuration_name, string stage_name);    
        
        PartInstance* CreatePartInstance(string name, Part* part, PartInstance* parent);
        void DeletePartInstance(PartInstance* instance);
        PartInstance* GetPartInstance(string rocket_name, string instance_name);
        
        Simulation* CreateSimulation(string name, Configuration* configuration);
        void DeleteSimulation(Simulation* simulation);
        Simulation* GetSimulation(string rocket_name, string configuration_name, string simulation_name);

        Motor* CreateMotor(string file_path);
        void DeleteMotor(Motor* motor);
        Motor* GetMotor(string name);
        
cdef class PyInterfaceCore:    
    cdef EntityManager *ptr
    
    def __cinit__(self):    
        self.ptr = new EntityManager()
        
    def __dealloc__(self):
        del self.ptr

    def create_material(self, name, **kwargs):
        mat_ptr = self.ptr.CreateMaterial(name.encode('utf-8'))        
        mat = PyMaterial()
        mat = PyMaterial.create(mat_ptr)
        if kwargs is not None:
            mat.initialize_attributes(**kwargs)
        return mat

    def get_material(self, name):
        mat = PyMaterial()
        mat = PyMaterial.create(self.ptr.GetMaterial(name.encode('utf-8')))
        return mat

    def create_rocket(self, name, **kwargs):
        rocket_ptr = self.ptr.CreateRocket(name.encode('utf-8'))        
        rocket = PyRocket()
        rocket = PyRocket.create(rocket_ptr)
        if kwargs is not None:
            rocket.initialize_attributes(**kwargs)
        return rocket

    def get_rocket(self, name):
        rkt = PyRocket()
        rkt = PyRocket.create(self.ptr.GetRocket(name.encode('utf-8')))
        if rkt.ptr is NULL:
            print("Null")
        return rkt     
        
    def create_part(self, part_type, name, PyRocket rocket, **kwargs):
        part = None
        if (isinstance(part_type, Enum)):
            part_type = part_type.value
        if (part_type == PyPartType.FINS.value):
            part = PyPart.create_derived(<Part*>self.ptr.CreatePart[Fins](name.encode('utf-8'), rocket.ptr))
        elif (part_type == PyPartType.NOSECONE.value):
            part = PyPart.create_derived(<Part*>self.ptr.CreatePart[Nosecone](name.encode('utf-8'), rocket.ptr))
        elif (part_type == PyPartType.TUBE_BODY.value):
            part = PyPart.create_derived(<Part*>self.ptr.CreatePart[TubeBody](name.encode('utf-8'), rocket.ptr))
        if kwargs is not None:
            part.initialize_attributes(**kwargs)
        return part

    def get_part(self, rocket_name, name):
        pass 
        return PyPart.create_derived(self.ptr.GetPart(rocket_name.encode('utf-8'), name.encode('utf-8')))

    def create_configuration(self, name, PyRocket rocket, **kwargs):
        config_ptr = self.ptr.CreateConfiguration(name.encode('utf-8'), rocket.ptr)
        config = PyConfiguration()
        config = PyConfiguration.create(config_ptr)
        if kwargs is not None:
            config.initialize_attributes(**kwargs)
        return config

    def get_configuration(self, rocket_name, name):
        config = PyConfiguration()
        config = PyConfiguration.create(self.ptr.GetConfiguration(rocket_name.encode('utf-8'), name.encode('utf-8')))
        return config     
        
    def create_stage(self, name, PyConfiguration configuration, **kwargs):
        stage_ptr = self.ptr.CreateStage(name.encode('utf-8'), configuration.ptr)
        stage = PyStage()
        stage = PyStage.create(stage_ptr)
        if kwargs is not None:
            stage.initialize_attributes(**kwargs)
        return stage

    def get_stage(self, rocket_name, configuration_name, name):
        stage = PyStage()
        stage = PyStage.create(self.ptr.GetStage(rocket_name.encode('utf-8'), configuration_name.encode('utf-8'), name.encode('utf-8')))
        return stage

    def create_part_instance(self, name, PyPart part, PyPartInstance parent, **kwargs):
        instance_ptr = self.ptr.CreatePartInstance(name.encode('utf-8'), part.ptr_part, parent.ptr)
        instance = PyPartInstance()
        instance = PyPartInstance.create(instance_ptr)
        if kwargs is not None:
            instance.initialize_attributes(**kwargs)
        return instance

    def get_part_instance(self, rocket_name, name):
        instance = PyPartInstance()
        instance = PyPartInstance.create(self.ptr.GetPartInstance(rocket_name.encode('utf-8'), name.encode('utf-8')))
        return instance

    def create_simulation(self, name, PyConfiguration configuration, **kwargs):
        sim_ptr = self.ptr.CreateSimulation(name.encode('utf-8'), configuration.ptr)
        sim = PySimulation()
        sim = PySimulation.create(sim_ptr)
        if kwargs is not None:
            sim.initialize_attributes(**kwargs)
        return sim

    def get_simulation(self, rocket_name, configuration_name, name):
        simulation = PySimulation()
        simulation = PySimulation.create(self.ptr.GetSimulation(rocket_name.encode('utf-8'), configuration_name.encode('utf-8'), name.encode('utf-8')))
        return simulation

    def create_motor(self, path):
        motor_ptr = self.ptr.CreateMotor(path.encode('utf-8'))
        motor = PyMotor()
        motor = PyMotor.create(motor_ptr)
        return motor

    def get_motor(self, name):
        motor = PyMotor()
        motor = PyMotor.create(self.ptr.GetMotor(name.encode('utf-8')))
        return motor













