
import entities.rocket_entities as rocket_entities
import json
import h5py 
import numpy as np

def read_text_file(file_path):
    file = open(file_path,"r")
    string_list = file.readlines()
    file.close()
    return string_list 

class WriteRocketHDF5():

    def __init__(self, file_path, rocket):
        self.file_path = file_path
        self.rocket = rocket
        self.hf = h5py.File(self.rocket.name+'.h5', 'w')
        self.write_hdf5()
        self.hf.close

    def write_hdf5(self):    
        self.write_parts()
        self.write_configs()

    def write_configs(self):
        self.hf_config_group = self.hf.create_group("Configurations")
        for config in self.rocket.configuration_list:

            self.hf_config = self.hf_config_group.create_group(config.name)

            #Write parts list 
            self.hf_config_part_list = self.hf_config.create_group("External Parts")
            part_array = np.array([])
            for part in config.part_list:
                part_array = np.append(part_array, bytes(part.name, encoding="ascii"))
            string_dt = h5py.special_dtype(vlen=str)
            self.hf_config_part_list.create_dataset("External Part List", data=part_array, dtype=string_dt)

            #Write simulation list
            self.hf_config_simulation_list = self.hf_config.create_group("Simulations")
            #sim_array = np.array([])
            #for simulation in config.simulation_list:
            #    sim_array = np.append(sim_array, bytes(simulation.name, encoding="ascii"))
            #string_dt = h5py.special_dtype(vlen=str)
            #self.hf_config_simulation_list.create_dataset("Part List", data=part_array, dtype=string_dt)

            #Write flight data list 
            self.hf_config_part_list = self.hf_config.create_group("Flights")

    def write_parts(self):
        self.hf_part_group = self.hf.create_group("Parts")
        for part in self.rocket.part_list:
            self.write_part(part)
    def write_part(self,part):
        hf_part = self.hf_part_group.create_group(part.name)

        part_dict = part.named_attributes()        

        for key, value in part_dict.items():
            if type(value) is str:
                hf_part.attrs[key] = bytes(value, encoding="ascii")
            elif type(value) in [float, bool]:
                hf_part.attrs[key] = value
            elif type(value) is type(None):
                hf_part.attrs[key] = np.empty
            else:
                pass


def write_hdf5_database(file_path, rocket):
    hf = h5py.File('test.h5', 'w')

    hf.create_group("")
    hf.create_group(config.name)
    hf.create_group(config.name+'/'+config.part_list[0].name)


    #hf.create_dataset('database', data=config)
    hf.close

def serialize_objects_to_JSON(config):
    
    for part in config.part_list:
        obj_dict = {}
        obj_dict.update(JSON_part_dict(part))

        for child in part.children:
            obj_dict.update(JSON_part_dict(child))
        #print(obj_dict)
        data = json.dumps(obj_dict, lambda o:JSON_part_dict(o), indent=4, sort_keys=True)
        #print(data)
        print(vars(part))

class part_serialize():
    
    def __init__():
        pass

    def serialize():
        pass

    def serialize_generic():
        pass


def JSON_part_dict(part):
        #keys_generic = ["name", "material", "surface_finish", 
        #                "mass_override", "cg_override", 
        #                "position_from_parent_type", "position_from_parent_value", "comments"]
        keys_generic = ["name", "surface_finish", 
                        "mass_override", "cg_override", 
                        "position_from_parent_type", "position_from_parent_value", "comments"]

        if type(part) == rocket_entities.TubeBody:
            keys_part_specific = ["length", "diameter_outer", "diameter_inner", "thickness"]
        elif type(part) == rocket_entities.Nosecone:
            keys_part_specific = ["nose_type", "shape_parameter", "length_nose", "diameter_outer", "length_base", 
                                  "diameter_shoulder", "length_shoulder", "thickness_shoulder"]
        elif type(part) == rocket_entities.Fins:
            keys_part_specific = ["fin_shape", "number", "cross_section", "thickness", "radius_fillet"]
        elif type(part) == rocket_entities.FinShapeTrapezoidal:
            keys_part_specific = ["chord_root", "chord_tip", "span", "length_sweep", "angle_sweep_LE"]

        keys = keys_generic + keys_part_specific
        full_dict = part.__dict__
        return {keys_out: full_dict[keys_out] for keys_out in keys}

    #def get_output_keys(self):