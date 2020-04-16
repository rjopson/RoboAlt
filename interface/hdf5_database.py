import sys
from enum import Enum
import numpy as np

import h5py 

import interface_core as core
from interface_core import PyPartType



#this function is used to convert strings which define enums to enum objects
def str_to_class(classname):
    return getattr(sys.modules[__name__], classname)

class Database():
    
    def __init__(self, file_path):
        self.file_path = file_path

    def write(self, rocket): 
        self.hf = h5py.File(self.file_path, 'w')
        self.write_rocket(rocket)        
        self.hf.close

    def read(self, core_data):
        self.hf = h5py.File(self.file_path, 'r')
        self.core_data = core_data
        self.read_materials(self.hf)
        self.read_motors(self.hf)
        self.read_rocket(self.hf)        
        self.read_parts(self.hf)
        self.read_configurations(self.hf)        
        self.hf.close()

    def write_attributes(self, dict, hf_group): 
        for key, value in dict.items():
            if type(value) is str:
                hf_group.attrs[key] = bytes(value, encoding="ascii")
            elif type(value) in [float, bool, int]:
                hf_group.attrs[key] = value
            elif type(value) is type(None):
                hf_group.attrs[key] = np.empty      
            elif isinstance(value, Enum):
                dt = h5py.enum_dtype({i.name: i.value for i in type(value)}, basetype='i')
                hf_group.attrs.create(key, value.value, dtype=dt)
            else:
                pass 

    def write_rocket(self, rocket):
        self.write_attributes(rocket.named_attributes(), self.hf)
        self.write_materials(rocket.materials, self.hf)
        self.write_motors(rocket.motors, self.hf)
        self.write_parts(rocket.parts, self.hf)   
        self.write_configurations(rocket.configurations, self.hf)             

    def write_configurations(self, configurations, hf_group):
        hf_configs = hf_group.create_group("configurations")
        for config in configurations:
            hf_config = hf_configs.create_group(config.name)
            self.write_attributes(config.named_attributes(), hf_config)
            self.write_stages(config.stages, hf_config)
            self.write_simulations(config.simulations, hf_config)

    def write_stages(self, stages, hf_group):
        hf_stages = hf_group.create_group("stages")
        for stage in stages:
            hf_stage = hf_stages.create_group(stage.name)
            self.write_attributes(stage.named_attributes(), hf_stage)
            self.write_part_instances(stage.part_instances, hf_stage)

    def write_simulations(self, simulations, hf_group):
        hf_sims = hf_group.create_group("simulations")
        for simulation in simulations:
            hf_sim = hf_sims.create_group(simulation.name)
            self.write_attributes(simulation.named_attributes(), hf_sim)
            for stage in simulation.stages:
                hf_stage = hf_sim.create_group(stage.name)
                hf_stage.attrs["motor"] = simulation.get_motor(stage).name

    def write_part_instances(self, part_instances, hf_group):
        hf_part_instances = hf_group.create_group("parts", track_order=True)
        for instance in part_instances:
            self.write_part_instance(instance, hf_part_instances)
    
    def write_part_instance(self, part_instance, hf_group):
        hf_instance = hf_group.create_group(part_instance.name, track_order=True)
        self.write_attributes(part_instance.named_attributes(), hf_instance)
        if len(part_instance.children) > 0:
            for child in part_instance.children:
                self.write_part_instance(child, hf_instance)

    def write_parts(self, parts, hf_group):
        hf_parts = hf_group.create_group("parts")
        for part in parts:
            hf_part = hf_parts.create_group(part.name)
            self.write_attributes(part.named_attributes(), hf_part)
            if part.type is PyPartType.FINS:
                hf_shape = hf_part.create_group("shape")
                self.write_attributes(part.shape.named_attributes(), hf_shape)

    def write_materials(self, materials, hf_group):
        hf_materials = hf_group.create_group("materials")
        for mat in materials:
            hf_material = hf_materials.create_group(mat.name)
            self.write_attributes(mat.named_attributes(), hf_material)

    def write_motors(self, motors, hf_group):
        hf_motors = hf_group.create_group("motors")
        for motor in motors:
            if motor.name.find("/") == -1:
                hf_motor = hf_motors.create_group(motor.name)
                
            else:
                name = motor.name.replace("/",".")
                hf_motor = hf_motors.create_group(name)
            self.write_attributes(motor.named_attributes(), hf_motor)
            hf_motor.create_dataset("time (s)", data=motor.data_time)
            hf_motor.create_dataset("thrust (N)", data=motor.data_thrust)
            hf_motor.create_dataset("delay", data=motor.delay)

    def dictionary_from_group_attributes(self, group):
        dictionary = {}
        for name, value in group.attrs.items():
            if type(value) is np.bool_:
                value = bool(value)
            if type(value) is bytes:
                value = value.decode('ascii')
            if name == "material":
                value = self.core_data.get_material(value)
            if name == "part":
                value = self.core_data.get_part(self.rocket.name, value)
            if name == "motor":
                value = self.core_data.get_motor(value)
            dictionary[name] = value

        return dictionary
    
    def read_rocket(self, group):
        dict = self.dictionary_from_group_attributes(group)
        self.rocket = self.core_data.create_rocket(**dict)

    def read_configurations(self, group):
        hf_configs = group.__getitem__("configurations")
        for hf_config in hf_configs.values():
            dict = self.dictionary_from_group_attributes(hf_config)
            config = self.core_data.create_configuration(rocket=self.rocket, **dict)
            self.read_stages(config, hf_config.__getitem__("stages"))
            self.read_simulations(config, hf_config.__getitem__("simulations"))            

    def read_stages(self, configuration, group):
        for hf_stage in group.values():
            dict = self.dictionary_from_group_attributes(hf_stage)
            stage=self.core_data.create_stage(configuration=configuration, **dict)   
            for hf_instance in hf_stage.__getitem__("parts").values():
                self.read_part_instance(stage.instance_root, hf_instance)

    def read_simulations(self, configuration, group):
        for hf_sim in group.values():
            dict = self.dictionary_from_group_attributes(hf_sim)
            sim = self.core_data.create_simulation(configuration=configuration, **dict)
            for name, hf_stage in hf_sim.items():
                dict = self.dictionary_from_group_attributes(hf_stage)
                sim.set_motor(dict["motor"], self.core_data.get_stage(self.rocket.name, configuration.name, name))

    def read_part_instance(self, parent, group):
        dict = self.dictionary_from_group_attributes(group)
        instance = self.core_data.create_part_instance(parent=parent, **dict)
        for child in group.values():
            self.read_part_instance(instance, child)

    def read_parts(self, group):
        hf_parts = group.__getitem__("parts")
        for hf_part in hf_parts.values():
            dict = self.dictionary_from_group_attributes(hf_part)
            part_type = dict["type"]
            del dict["type"]
            part = self.core_data.create_part(part_type=part_type, rocket=self.rocket, **dict)
            if part_type == PyPartType.FINS.value:
                dict = self.dictionary_from_group_attributes(hf_part.__getitem__("shape"))
                del dict["type"]
                part.shape.initialize_attributes(**dict)

    def read_materials(self, group):
        hf_materials = group.__getitem__("materials")
        for hf_mat in hf_materials.values():
            dict = self.dictionary_from_group_attributes(hf_mat)
            self.core_data.create_material(**dict)

    def read_motors(self, group):
        hf_motors = group.__getitem__("motors")
        for hf_motor in hf_motors.values():
            dict = self.dictionary_from_group_attributes(hf_motor)
            dict["data_time"] = hf_motor.__getitem__("time (s)")[()]
            dict["data_thrust"] = hf_motor.__getitem__("thrust (N)")[()]
            dict["delay"] = hf_motor.__getitem__("delay")[()]
            motor = self.core_data.create_motor(**dict)


    

