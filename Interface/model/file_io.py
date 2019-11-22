
import time
import model.entities.rocket_entities as rocket_entities
import model.entities.flight_data_entities as flight_data_entities
import model.entities.motor_data_entities as motor_data_entities
import h5py 
import numpy as np

def read_text_file(file_path):
    file = open(file_path,"r")
    string_list = file.readlines()
    file.close()
    return string_list 

def parse_string_to_recorded_data(data_string_list):

    for line in data_string_list[0:20]:
        line_list = line.split(",")
        if line_list[0] == "*DATA":
            length = int(line_list[1])            
            break

    recorded_data = flight_data_entities.RecordedFlightData(length)

    for i, line in enumerate(data_string_list):
        line_list = line.split(",")
        i -= len(data_string_list) - length #iterator used to populate flight data 

        if line_list[0] == "*VERSION":
            version = float(line_list[1])
        elif line_list[0] == "*PAD_MPU":
            recorded_data.mpuPad = int(line_list[1])            
        elif line_list[0] == "*PAD_H3LIS":
            recorded_data.h3lisPad = int(line_list[1])
        elif line_list[0] == "*PAD_PRESSURE":
            recorded_data.pressurePad = int(line_list[1])
        elif line_list[0] == "*PAD_TEMPERATURE":
            recorded_data.temperaturePad = int(line_list[1])
        elif line_list[0] == "*CALIBRATION_MS5607":
            recorded_data.C[0] = int(line_list[1])
            recorded_data.C[1] = int(line_list[2])
            recorded_data.C[2] = int(line_list[3])
            recorded_data.C[3] = int(line_list[4])
            recorded_data.C[4] = int(line_list[5])
            recorded_data.C[5] = int(line_list[6]) 
        elif line_list[0] == "*PAD_VOLTAGE":
            recorded_data.voltageStartup = int(line_list[1])
        elif line_list[0] == "*APO_EVENT":
            recorded_data.apoFlightEvent = int(line_list[1])
        elif line_list[0] == "*APO_DELAY":
            recorded_data.apoTimeDelay = int(line_list[1])
        elif line_list[0] == "*MAIN_EVENT":
            recorded_data.mainFlightEvent = int(line_list[1])
        elif line_list[0] == "*MAIN_DELAY":
            recorded_data.mainTimeDelay = int(line_list[1])
        elif line_list[0] == "*3RD_EVENT":
            recorded_data.thirdFlightEvent = int(line_list[1])
        elif line_list[0] == "*3RD_DELAY":
            recorded_data.thirdTimeDelay = int(line_list[1])
        elif line_list[0] == "*ALTITUDE_MAIN":
            recorded_data.altitudeMainDeploy = int(line_list[1])
        elif line_list[0] == "*DATA":
            recorded_data.voltageStartup = int(line_list[1])
        else:
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

    return recorded_data

def parse_eng_string_to_motor(data_string_list):        
    
    header_reached = False
    time_data = []
    thrust_data = []
    comment = []

    for line in data_string_list:

        if (len(line) > 0):
            #comment line
            if line[0] == ";":
                comment.append(line[1:])
            #header line
            elif header_reached == False:

                header_reached = True 

                line_list = line.split()
                name = line_list[0]
                diameter = float(line_list[1])
                length = float(line_list[2])
                delays = line_list[3]
                mass_propellant = float(line_list[4])
                mass_total = float(line_list[5])
                manufacturer = line_list[6]            
            #data line 
            else:
                line_list = line.split()
                time_data.append(float(line_list[-2]))
                thrust_data.append(float(line_list[-1].rstrip()))
        
        else:
            pass

    #most data doesn't have a 0 time and thrust, so add (otherwise integration of thrust is low)
    if time_data[0] > 0.0:
        time_data.insert(0, 0.0)
        thrust_data.insert(0, 0.0)

    #Convert list of comments to single string
    comment = "\n".join(comment)

    motor = motor_data_entities.MotorTestData(name, diameter, length, delays, 
                                              mass_propellant, mass_total, manufacturer, 
                                              time_data, thrust_data, comment)    
    return motor

class WriteRocketHDF5():

    def __init__(self, file_path, rocket):
        self.file_path = file_path
        self.rocket = rocket
        self.hf = h5py.File(file_path+self.rocket.name+'.h5', 'w')
        self.write_hdf5()
        self.hf.close

    def write_hdf5(self):    
        self.write_rocket()
        self.write_parts()
        self.write_configs()
        self.write_materials()
        self.write_motors()
    
    def write_rocket(self):
        write_attributes(self.hf, self.rocket.named_attributes())

    def write_configs(self):
        self.hf_config_group = self.hf.create_group("Configurations")

        for config in self.rocket.configuration_list:
            hf_config = self.hf_config_group.create_group(config.name)
            write_attributes(hf_config, config.named_attributes())
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
        write_attributes(hf_instance, instance.named_attributes())
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
        write_attributes(hf_part, part.named_attributes())
        if type(part) is rocket_entities.Fins:
            hf_part_child = hf_part.create_group("fin_shape")
            write_attributes(hf_part_child, part.fin_shape.named_attributes())
        else:
            pass

    def write_materials(self):
        hf_materials_group = self.hf.create_group("Materials")
        for material in self.rocket.material_list:
            write_material(material, hf_materials_group)    

    def write_motors(self):
        hf_motors_group = self.hf.create_group("Motors")
        for motor in self.rocket.motor_list:
            write_motor(motor, hf_motors_group)    

    def write_flights(self, config, h5_group):
        hf_flights_group = h5_group.create_group("Flights")
        for flight_data in config.flight_data_list:
            self.write_flight(flight_data, hf_flights_group)

    def write_flight(self, flight_data, h5_group):
        hf_flight = h5_group.create_group(flight_data.name)
        write_attributes(hf_flight, flight_data.named_attributes())

        hf_flight.create_dataset("Pad MPU6050 Offset (2 byte 16g)", data=flight_data.recorded_data.mpuPad)
        hf_flight.create_dataset("Pad H3LIS Offset (2 byte 200g)", data=flight_data.recorded_data.h3lisPad)
        hf_flight.create_dataset("Pad Pressure (4 byte)", data=flight_data.recorded_data.pressurePad)
        hf_flight.create_dataset("Pad Temperature (4 byte)", data=flight_data.recorded_data.temperaturePad)
        hf_flight.create_dataset("Pad Voltage (10 bit 3.3v)", data=flight_data.recorded_data.voltageStartup)
        hf_flight.create_dataset("MS5607 Calibration", data=flight_data.recorded_data.C)
        hf_flight.create_dataset("Altitude Main Deploy (mm)", data=flight_data.recorded_data.altitudeMainDeploy)

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
        write_attributes(hf_sim, simulation.named_attributes())

        hf_user_events = hf_sim.create_group("User Events")
        for event in simulation.user_events:
            hf_event = hf_user_events.create_group(event.name)
            write_attributes(hf_user_events, event.named_attributes())

        hf_flight_events = hf_sim.create_group("Flight Events")
        write_attributes(hf_flight_events, simulation.flight_events)

        hf_sim.create_dataset("Time (s)", data=simulation.time)
        hf_sim.create_dataset("Altitude (m)", data=simulation.altitude)
        hf_sim.create_dataset("Velocity (m.s)", data=simulation.velocity)
        hf_sim.create_dataset("AoA (deg)", data=simulation.alpha)

def write_motor_database(file_path, motor_list):

    hf = h5py.File(file_path+'motor_database.h5', 'w')

    for motor in motor_list:
        write_motor(motor, hf)

    hf.close

def write_attributes(group, dict): 
        for key, value in dict.items():
            if type(value) is str:
                group.attrs[key] = bytes(value, encoding="ascii")
            elif type(value) in [float, bool, int]:
                group.attrs[key] = value
            elif type(value) is type(None):
                group.attrs[key] = np.empty
            else:
                pass   

def write_motor(motor, h5_group):
        
        if motor.name.find("/") == -1:
            hf_motor = h5_group.create_group(motor.name)
        else:
            name = motor.name.replace("/",".")
            hf_motor = h5_group.create_group(name)
        write_attributes(hf_motor, motor.named_attributes())
        hf_motor.create_dataset("Time (s)", data=motor.time_data)
        hf_motor.create_dataset("Thrust (N)", data=motor.thrust_data)

def write_material(material, h5_group):
        hf_material = h5_group.create_group(material.name)
        write_attributes(hf_material, material.named_attributes())


class ReadRocketHDF5():

    def __init__(self, file):
        self.file = file

        self.hf = h5py.File(self.file, 'r')
        self.rocket = self.read_hdf5()
        self.hf.close()

    def read_hdf5(self):

        rocket = self.create_rocket(self.hf)
        self.create_materials(self.hf.__getitem__("Materials"), rocket)
        self.create_parts(self.hf.__getitem__("Parts"), rocket)
        self.create_motors(self.hf.__getitem__("Motors"), rocket)
        self.create_configs(self.hf.__getitem__("Configurations"), rocket)

        return rocket

    def create_rocket(self, hf_rocket):

        dictionary = self.dictionary_from_group_attributes(hf_rocket)
        rocket = rocket_entities.Rocket(**dictionary)
        return rocket

    def create_materials(self, hf_materials, rocket):
        for hf_material in hf_materials.values():
            dictionary = self.dictionary_from_group_attributes(hf_material)
            material = rocket_entities.Material(**dictionary)            
            rocket.add_material(material)   
            
    def create_motors(self, hf_motors, rocket):
        for hf_motor in hf_motors.values():
            dictionary = self.dictionary_from_group_attributes(hf_motor)
            dictionary["time_data"] = hf_motor.__getitem__("Time (s)")[()]
            dictionary["thrust_data"] = hf_motor.__getitem__("Thrust (N)")[()]
            motor = motor_data_entities.MotorTestData(**dictionary)
            rocket.add_motor(motor)

    def create_parts(self, hf_parts, rocket):        

        for hf_part in hf_parts.values():            
            dictionary = self.dictionary_from_group_attributes(hf_part)
            dictionary["name"] = hf_part.name.split("/")[-1]
            dictionary["rocket"] = rocket
            dictionary["material"] = rocket.get_material(dictionary["material"])
            part_type = dictionary["part_type"]
            del dictionary["part_type"]

            if part_type == "TubeBody":
                part = rocket_entities.TubeBody(**dictionary)
            elif part_type == "Nosecone":
                part = rocket_entities.Nosecone(**dictionary)
            elif part_type == "Fins":
                dictionary_child = self.dictionary_from_group_attributes(hf_part.__getitem__("fin_shape"))
                if dictionary_child["shape_type"] == "Trapezoidal":
                    del dictionary_child["shape_type"]
                    fin_shape = rocket_entities.FinShapeTrapezoidal(**dictionary_child)
                    dictionary["fin_shape"] = fin_shape
                else:
                    pass
                part = rocket_entities.Fins(**dictionary)
            elif part_type == "Parachute":
                part = rocket_entities.Parachute(**dictionary)
            else:
                pass

    def create_configs(self, hf_configs, rocket):
        for hf_config in hf_configs.values():
            dictionary = self.dictionary_from_group_attributes(hf_config)
            dictionary["name"] = hf_config.name.split("/")[-1]
            dictionary["rocket"] = rocket
            config = rocket_entities.Configuration(**dictionary)

            self.create_instance_hierarchy(hf_config.__getitem__("Part Hierarchy"),config,rocket)
            self.create_flight_data(hf_config.__getitem__("Flights"), config, rocket)
            self.create_simulation(hf_config.__getitem__("Simulations"), config, rocket)

    def create_instance_hierarchy(self, hf_instance_hierarchy, config, rocket):
        for hf_instance in hf_instance_hierarchy.values():
            self.create_nested_instances(hf_instance, None, config, rocket)

    def create_flight_data(self, hf_flights, config, rocket):
        for hf_flight in hf_flights.values():
            dictionary = self.dictionary_from_group_attributes(hf_flight)
            dictionary["config"] = config 

            #start = time.time()
            dictionary["recorded_data"] = self.create_recorded_flight_data(hf_flight)            
            dictionary["name"] = hf_flight.name.split("/")[-1]           
            flight = flight_data_entities.FlightData(**dictionary)
            #print("recorded_data_read: ", time.time()-start)

    def create_recorded_flight_data(self, hf_flight):
        length = hf_flight.__getitem__("Time (ms)").len()
        recorded_data = flight_data_entities.RecordedFlightData(length)

        recorded_data.mpuPad = hf_flight.__getitem__("Pad MPU6050 Offset (2 byte 16g)")[()]
        recorded_data.h3lisPad = hf_flight.__getitem__("Pad H3LIS Offset (2 byte 200g)")[()]
        recorded_data.pressurePad = hf_flight.__getitem__("Pad Pressure (4 byte)")[()]
        recorded_data.temperaturePad = hf_flight.__getitem__("Pad Temperature (4 byte)")[()] 
        recorded_data.voltageStartup = hf_flight.__getitem__("Pad Voltage (10 bit 3.3v)")[()] 
        recorded_data.C = hf_flight.__getitem__("MS5607 Calibration")[()]
        recorded_data.altitudeMainDeploy = hf_flight.__getitem__("Altitude Main Deploy (mm)")[()]
        
        recorded_data.time = hf_flight.__getitem__("Time (ms)")[()]
        recorded_data.flight_status = hf_flight.__getitem__("Flight Status")[()]
        recorded_data.altitude = hf_flight.__getitem__("Altitude Filtered (mm)")[()]
        recorded_data.velocity = hf_flight.__getitem__("Velocity Filtered (mm.s)")[()]
        recorded_data.acceleration = hf_flight.__getitem__("Acceleration Filtered (mm.s2)")[()]
        recorded_data.altitude_baro = hf_flight.__getitem__("Altitude Barometric (mm)")[()]
        recorded_data.acceleration_axial = hf_flight.__getitem__("Acceleration Axial (mm.s2)")[()]
        recorded_data.pressure = hf_flight.__getitem__("Pressure (Pa)")[()]
        recorded_data.temperature = hf_flight.__getitem__("Temperature (C*100)")[()]
        recorded_data.acceleration_x = hf_flight.__getitem__("Acceleration X (MPU6050) (2 byte 16g)")[()]
        recorded_data.acceleration_y = hf_flight.__getitem__("Acceleration Y (MPU6050) (2 byte 16g)")[()]
        recorded_data.acceleration_z = hf_flight.__getitem__("Acceleration Z (MPU6050) (2 byte 16g)")[()]
        recorded_data.gyro_x = hf_flight.__getitem__("Gyro X (MPU6050) (2 byte 2000deg.s)")[()]
        recorded_data.gyro_y = hf_flight.__getitem__("Gyro Y (MPU6050) (2 byte 2000deg.s)")[()]
        recorded_data.gyro_z = hf_flight.__getitem__("Gyro Z (MPU6050) (2 byte 2000deg.s)")[()]
        recorded_data.acceleration_high = hf_flight.__getitem__("Acceleration Y (H3LIS) (2 byte 200g)")[()]
        recorded_data.pressure_raw = hf_flight.__getitem__("Pressure Raw (MS5607) (4 byte)")[()]
        recorded_data.temperature_raw = hf_flight.__getitem__("Temperature Raw (MS5607) (4 byte)")[()]
        recorded_data.voltage = hf_flight.__getitem__("Voltage (10 bit 3.3v)")[()]
        recorded_data.continuity_apogee = hf_flight.__getitem__("Continuity Apogee (10 bit 3.3v)")[()]
        recorded_data.continuity_main = hf_flight.__getitem__("Continuity Main (10 bit 3.3v)")[()]
        recorded_data.continuity_third = hf_flight.__getitem__("Continuity Third (10 bit 3.3v)")[()]

        return recorded_data

    def create_simulation(self, hf_simulations, config, rocket):
        for hf_simulation in hf_simulations.values():
            dictionary = self.dictionary_from_group_attributes(hf_simulation)
            dictionary["name"] = hf_simulation.name.split("/")[-1]
            dictionary["config"] = config 
            dictionary["motor"] = rocket.get_motor(dictionary["motor"])

            #Saved data
            dictionary["time"] = hf_simulation.__getitem__("Time (s)")[()]
            dictionary["altitude"] = hf_simulation.__getitem__("Altitude (m)")[()]
            dictionary["velocity"] = hf_simulation.__getitem__("Velocity (m.s)")[()]
            dictionary["alpha"] = hf_simulation.__getitem__("AoA (deg)")[()]
            dictionary["flight_events"] = self.dictionary_from_group_attributes(hf_simulation.__getitem__("Flight Events"))

            #start = time.time()
            simulation = flight_data_entities.SimulationData(**dictionary)
            #print("simulation post: ", time.time()-start)

    def create_nested_instances(self, hf_instance, instance_parent, config, rocket):
        dictionary = self.dictionary_from_group_attributes(hf_instance)
        dictionary["part"] = rocket.get_part(hf_instance.name.split("/")[-1])
        dictionary["parent"] = instance_parent
        dictionary["config"] = config
        dictionary["index"] = None
        instance = rocket_entities.Instance(**dictionary)

        if len(hf_instance.values()) > 0:
            for hf_child in hf_instance.values():
                self.create_nested_instances(hf_child, instance, config, rocket)

    def dictionary_from_group_attributes(self, group):
        dictionary = {}
        for name, value in group.attrs.items():
            if type(value) is np.bool_:
                value = bool(value)
            if type(value) is bytes:
                value = value.decode('ascii')
            dictionary[name] = value
        return dictionary
      
