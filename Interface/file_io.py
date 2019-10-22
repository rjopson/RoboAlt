
import entities.rocket_entities as rocket_entities
import entities.flight_data_entities as flight_data_entities
import json
import h5py 
import numpy as np

def read_text_file(file_path):
    file = open(file_path,"r")
    string_list = file.readlines()
    file.close()
    return string_list 
def parse_string_to_recorded_data(data_string_list):
    
    length = len(data_string_list[2:])
    version = float(data_string_list[0])

    recorded_data = flight_data_entities.RecordedFlightData(length)

    #Parse version 0.1 type file
    if version == 0.1:

        #header line 
        line_list = data_string_list[1].split(",")
        recorded_data.mpuPad = int(line_list[0])
        recorded_data.h3lisPad = int(line_list[1])
        recorded_data.pressurePad = float(line_list[2])
        recorded_data.temperaturePad = int(line_list[3])
        recorded_data.voltageStartup = int(line_list[4]) 
        recorded_data.C[0] = line_list[5]
        recorded_data.C[1] = line_list[6]
        recorded_data.C[2] = line_list[7]
        recorded_data.C[3] = line_list[8]
        recorded_data.C[4] = line_list[9]
        recorded_data.C[5] = line_list[10]          

        #Read through flight data 
        for i, line in enumerate(data_string_list[2:]):
                
            line_list = line.split(",")
            recorded_data.time[i] = float(line_list[0])
            recorded_data.flight_status[i] = int(line_list[1])
            recorded_data.altitude[i] = float(line_list[2])
            recorded_data.velocity[i] = float(line_list[3])
            recorded_data.acceleration[i] = float(line_list[4])
            recorded_data.altitude_baro[i] = float(line_list[5])
            recorded_data.acceleration_axial[i] = float(line_list[6])
            recorded_data.pressure[i] = float(line_list[7])
            recorded_data.temperature[i] = float(line_list[8])
            recorded_data.acceleration_x[i] = float(line_list[9])
            recorded_data.acceleration_y[i] = float(line_list[10])
            recorded_data.acceleration_z[i] = float(line_list[11])
            recorded_data.gyro_x[i] = float(line_list[12])
            recorded_data.gyro_y[i] = float(line_list[13])
            recorded_data.gyro_z[i] = float(line_list[14])
            recorded_data.acceleration_high[i] = float(line_list[15])
            recorded_data.pressure_raw[i] = float(line_list[16])
            recorded_data.temperature_raw[i] = float(line_list[17])
            recorded_data.voltage[i] = float(line_list[18])
            recorded_data.continuity_apogee[i] = float(line_list[19])
            recorded_data.continuity_main[i] = float(line_list[20])
            recorded_data.continuity_third[i] = float(line_list[21])
    else:
        pass

    return recorded_data

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

            hf_config = self.hf_config_group.create_group(config.name)

            #Write parts list 
            self.write_instance_hierarchy(config, hf_config)

            #Write simulation list
            self.write_simulations(config, hf_config)

            #Write flight data list 
            self.write_flights(config, hf_config)


    def write_instance_hierarchy(self, config, h5_group):        
        hf_config_part_hierarchy = h5_group.create_group("Part Hierarchy")
        for instance in config.instance_list:
            self.write_instance(instance, hf_config_part_hierarchy)
    def write_instance(self, instance, h5_group):
        hf_instance = h5_group.create_group(instance.part.name)
        if len(instance.children) > 0:
            for child in instance.children:
                self.write_instance(child, hf_instance)
        else:
            pass
    def write_parts(self):
        hf_part_group = self.hf.create_group("Parts")
        for part in self.rocket.part_list:
            self.write_part(part, hf_part_group)
    def write_part(self,part, h5_group):
        hf_part = h5_group.create_group(part.name)
        self.write_attributes(hf_part, part.named_attributes())
    def write_flights(self, config, h5_group):
        hf_flights_group = h5_group.create_group("Flights")
        for flight_data in config.flight_data_list:
            self.write_flight(flight_data, hf_flights_group)
    def write_flight(self, flight_data, h5_group):
        hf_flight = h5_group.create_group(flight_data.name)
        self.write_attributes(hf_flight, flight_data.named_attributes())

        hf_flight.create_dataset("Pad MPU6050 Offset (2 byte 16g)", data=flight_data.recorded_data.mpuPad)
        hf_flight.create_dataset("Pad H3LIS Offset (2 byte 200g)", data=flight_data.recorded_data.h3lisPad)
        hf_flight.create_dataset("Pad Pressure (4 byte)", data=flight_data.recorded_data.pressurePad)
        hf_flight.create_dataset("Pad Temperature (4 byte)", data=flight_data.recorded_data.temperaturePad)
        hf_flight.create_dataset("Pad Voltage (10 bit 3.3v)", data=flight_data.recorded_data.voltageStartup)
        hf_flight.create_dataset("MS5607 Calibration", data=flight_data.recorded_data.C)

        hf_flight.create_dataset("Time (ms)", data=flight_data.recorded_data.time)
        hf_flight.create_dataset("Flight Status", data=flight_data.recorded_data.flight_status)
        hf_flight.create_dataset("Altitude Filtered (mm)", data=flight_data.recorded_data.altitude)
        hf_flight.create_dataset("Velocity Filtered (mm.s)", data=flight_data.recorded_data.velocity)
        hf_flight.create_dataset("Acceleration Filtered (mm.s2)", data=flight_data.recorded_data.acceleration)
        hf_flight.create_dataset("Altitude Barometric (mm)", data=flight_data.recorded_data.altitude_baro)
        hf_flight.create_dataset("Acceleration Axial (mm.s2)", data=flight_data.recorded_data.acceleration_axial)
        hf_flight.create_dataset("Pressure (Pa)", data=flight_data.recorded_data.pressure)
        hf_flight.create_dataset("Temperature (C*100)", data=flight_data.recorded_data.temperature)
        hf_flight.create_dataset("Acceleration X (MPU6050) (2 byte 16g)", data=flight_data.recorded_data.acceleration_x)
        hf_flight.create_dataset("Acceleration Y (MPU6050) (2 byte 16g)", data=flight_data.recorded_data.acceleration_y)
        hf_flight.create_dataset("Acceleration Z (MPU6050) (2 byte 16g)", data=flight_data.recorded_data.acceleration_z)
        hf_flight.create_dataset("Acceleration Y (H3LIS) (2 byte 200g)", data=flight_data.recorded_data.acceleration_high)
        hf_flight.create_dataset("Gyro X (MPU6050) (2 byte 2000deg.s)", data=flight_data.recorded_data.gyro_x)
        hf_flight.create_dataset("Gyro Y (MPU6050) (2 byte 2000deg.s)", data=flight_data.recorded_data.gyro_y)
        hf_flight.create_dataset("Gyro Z (MPU6050) (2 byte 2000deg.s)", data=flight_data.recorded_data.gyro_z)
        hf_flight.create_dataset("Pressure Raw (MS5607) (4 byte)", data=flight_data.recorded_data.pressure_raw)
        hf_flight.create_dataset("Temperature Raw (MS5607) (4 byte)", data=flight_data.recorded_data.temperature_raw)
        hf_flight.create_dataset("Voltage (10 bit 3.3v)", data=flight_data.recorded_data.voltage)
        hf_flight.create_dataset("Continuity Apogee (10 bit 3.3v)", data=flight_data.recorded_data.continuity_apogee)
        hf_flight.create_dataset("Continuity Main (10 bit 3.3v)", data=flight_data.recorded_data.continuity_main)
        hf_flight.create_dataset("Continuity Third (10 bit 3.3v)", data=flight_data.recorded_data.continuity_third)
    def write_simulations(self, config, h5_group):
        hf_sims_group = h5_group.create_group("Simulations")
        for sim in config.simulation_list:
            self.write_simulation(sim, hf_sims_group)
    def write_simulation(self, simulation, h5_group):
        hf_sim = h5_group.create_group(simulation.name)
        self.write_attributes(hf_sim, simulation.named_attributes())
    def write_attributes(self, group, dict): 
        for key, value in dict.items():
            if type(value) is str:
                group.attrs[key] = bytes(value, encoding="ascii")
            elif type(value) in [float, bool]:
                group.attrs[key] = value
            elif type(value) is type(None):
                group.attrs[key] = np.empty
            else:
                pass
class ReadRocketHDF5():

    def __init__(self, file):
        self.file = file

        self.hf = h5py.File(self.file, 'r')
        self.read_hdf5()
        self.hf.close()

    def read_hdf5(self):

        config_list = self.hf.__getitem__("Configurations")
        for config in config_list.values():
            print(config.name) #Names of the groups in HDF5 file.

        part_list = self.hf.__getitem__("Parts")
        for part in part_list.values():
            print(part.name)

            for name, value in part.attrs.items():
                print(name, value)



























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