import sys
import numpy as np
import h5py 

import alt_core as core

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

    def write_group(self, dict, hf_group):  
        for key, value in dict.items():
            if isinstance(value, str):
                hf_group.attrs[key] = bytes(value, encoding="ascii")
            elif isinstance(value, (float, bool, int)): 
                hf_group.attrs[key] = value                
            elif (isinstance(value,list)):
                hf_group.create_dataset(key, data=value)
            elif type(value) is type(None):
                hf_group.attrs[key] = np.empty  
            elif (value.__module__ == "alt_core" and "__members__" in dir (value)):
                dt = h5py.enum_dtype({key: item.__int__() for key, item in type(value).__members__.items()}, basetype='i')
                hf_group.attrs.create(key, value.__int__(), dtype=dt)
            else:
                pass 

    def write_rocket(self, rocket):
        self.write_group(rocket.attributes(), self.hf)
        self.write_materials(rocket.materials, self.hf)
        self.write_motors(rocket.motors, self.hf)
        self.write_parts(rocket.parts, self.hf)   
        self.write_configurations(rocket.configurations, self.hf)             

    def write_configurations(self, configurations, hf_group):
        hf_configs = hf_group.create_group("configurations")
        for config in configurations:
            hf_config = hf_configs.create_group(config.name)
            self.write_group(config.attributes(), hf_config)
            self.write_stages(config.stages, hf_config)
            self.write_simulations(config.simulations, hf_config)
            self.write_flights(config.flights, hf_config)

    def write_stages(self, stages, hf_group):
        hf_stages = hf_group.create_group("stages")
        for stage in stages:
            hf_stage = hf_stages.create_group(stage.name)
            self.write_group(stage.attributes(), hf_stage)
            self.write_part_instances(stage.instance_list(False, False), hf_stage)

    def write_simulations(self, simulations, hf_group):
        hf_sims = hf_group.create_group("simulations")
        for simulation in simulations:
            hf_sim = hf_sims.create_group(simulation.name)
            self.write_group(simulation.attributes(), hf_sim)
            for stage in simulation.stages:
                hf_stage = hf_sim.create_group(stage.name)
                self.write_group(simulation.attributes_stage(stage), hf_stage)
                self.write_simulation_user_commands(simulation.user_commands(stage), hf_stage)
                
    def write_flights(self, flights, hf_group):
        hf_flights = hf_group.create_group("flights")
        for flight in flights:
            hf_flight = hf_flights.create_group(flight.name)
            self.write_group(flight.attributes(), hf_flight)
            for stage in flight.stages:
                hf_stage = hf_flight.create_group(stage.name)
                self.write_group(flight.attributes_stage(stage), hf_stage)
                hf_data = hf_stage.create_group("altimeter_data")
                self.write_group(flight.altimeter_data(stage).attributes(), hf_data)
                
    def write_simulation_user_commands(self, user_commands, hf_group):
        hf_sim_commands = hf_group.create_group("user_commands")
        for user_command in user_commands:
            hf_sim_command = hf_sim_commands.create_group(user_command.command.name)
            self.write_group(user_command.attributes(), hf_sim_command)

    def write_part_instances(self, part_instances, hf_group):
        hf_part_instances = hf_group.create_group("parts", track_order=True)
        for instance in part_instances:
            self.write_part_instance(instance, hf_part_instances)
    
    def write_part_instance(self, part_instance, hf_group):
        hf_instance = hf_group.create_group(part_instance.part.name, track_order=True)
        self.write_group(part_instance.attributes(), hf_instance)
        if len(part_instance.children(False)) > 0:
            for child in part_instance.children(False):
                self.write_part_instance(child, hf_instance)

    def write_parts(self, parts, hf_group):
        hf_parts = hf_group.create_group("parts")
        
        for part in parts:
            hf_part = hf_parts.create_group(part.name)
            self.write_group(part.attributes(), hf_part)
            if part.type == core.PartType.FINS:
                hf_shape = hf_part.create_group("shape")
                self.write_group(part.shape.attributes(), hf_shape)

    def write_materials(self, materials, hf_group):
        hf_materials = hf_group.create_group("materials")
        for mat in materials:
            hf_material = hf_materials.create_group(mat.name)
            self.write_group(mat.attributes(), hf_material)

    def write_motors(self, motors, hf_group):
        hf_motors = hf_group.create_group("motors")
        for motor in motors:
            if motor.name.find("/") == -1:
                hf_motor = hf_motors.create_group(motor.name)
                
            else:
                name = motor.name.replace("/",".")
                hf_motor = hf_motors.create_group(name)
            self.write_group(motor.attributes(), hf_motor)

    def read_group(self, group):
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
        for name, item in group.items():
            if isinstance(item, h5py.Dataset):
                dictionary[name] = item[:].tolist()
        
        return dictionary
    
    def read_rocket(self, group):
        dict = self.read_group(group)
        self.rocket = self.core_data.create_rocket(**dict)

    def read_configurations(self, group):
        hf_configs = group.__getitem__("configurations")
        for hf_config in hf_configs.values():
            dict = self.read_group(hf_config)            
            config = self.core_data.create_configuration(rocket=self.rocket, **dict)
            self.read_stages(config, hf_config.__getitem__("stages"))
            self.read_simulations(config, hf_config.__getitem__("simulations"))    
            self.read_flights(config, hf_config.__getitem__("flights"))

    def read_stages(self, configuration, group):
        for hf_stage in group.values():
            dict = self.read_group(hf_stage)            
            dict["surface_finish"] = core.SurfaceFinish(dict["surface_finish"])
            stage=self.core_data.create_stage(configuration=configuration, **dict)   
            for hf_instance in hf_stage.__getitem__("parts").values():
                self.read_part_instance(stage.part_root, hf_instance)

    def read_simulations(self, configuration, group):
        for hf_sim in group.values():
            dict = self.read_group(hf_sim)
            if dict["atmosphere"] == "internal_model":
                dict["atmosphere"] = self.core_data.get_default_atmosphere()
            sim = self.core_data.create_simulation(configuration=configuration, **dict)
            for name, hf_stage in hf_sim.items():
                stage = self.core_data.get_stage(self.rocket.name, configuration.name, name)
                dict = self.read_group(hf_stage)
                sim.set_motor(dict["motor"], stage)
                self.read_user_commands(sim, stage, hf_stage.__getitem__("user_commands"))
                
    def read_user_commands(self, simulation, stage, group):
        for hf_command in group.values():
            dict = self.read_group(hf_command)
            dict["command"] = core.Command(dict["command"])
            dict["event"] = core.Event(dict["event"])
            dict["parachute"] = self.core_data.get_part(self.rocket.name, dict["parachute"])
            simulation.create_user_command(stage=stage, **dict)
                
    def read_flights(self, configuration, group):
        for hf_flight in group.values():
            dict = self.read_group(hf_flight)
            if dict["atmosphere"] == "internal_model":
                dict["atmosphere"] = self.core_data.get_default_atmosphere()
            flight = self.core_data.create_flight(configuration=configuration, **dict)
            for name, hf_stage in hf_flight.items():
                dict = self.read_group(hf_stage)
                flight.set_motor(dict["motor"], self.core_data.get_stage(self.rocket.name, configuration.name, name))
                alt_data = core.SensorData()
                dict = self.read_group(hf_stage.__getitem__("altimeter_data"))
                alt_data.set_attributes(**dict)
                flight.set_altimeter_data(self.core_data.get_stage(self.rocket.name, configuration.name, name), alt_data)

    def read_part_instance(self, parent, group):
        dict = self.read_group(group)
        dict["position_type"] = core.PartPosition(dict["position_type"])
        instance = self.core_data.create_part_instance(parent=parent, **dict)
        for child in group.values():
            self.read_part_instance(instance, child)

    def read_parts(self, group):
        hf_parts = group.__getitem__("parts")
        for hf_part in hf_parts.values():
            dict = self.read_group(hf_part)
            part_type = core.PartType(dict["type"])
            del dict["type"]
            if part_type == core.PartType.NOSECONE:
                dict["nosecone_type"] = core.NoseconeType(dict["nosecone_type"])
            if part_type == core.PartType.FINS:
                dict["cross_section"] = core.FinCrossSection(dict["cross_section"])         
            part = self.core_data.create_part(type=part_type, rocket=self.rocket, **dict)
            if part.type == core.PartType.FINS:
                dict = self.read_group(hf_part.__getitem__("shape"))
                del dict["type"]
                part.shape.set_attributes(**dict)

    def read_materials(self, group):
        hf_materials = group.__getitem__("materials")
        for hf_mat in hf_materials.values():
            dict = self.read_group(hf_mat)
            self.core_data.create_material(**dict)

    def read_motors(self, group):
        hf_motors = group.__getitem__("motors")
        for hf_motor in hf_motors.values():
            dict = self.read_group(hf_motor)
            motor = self.core_data.create_motor(**dict)  


    

