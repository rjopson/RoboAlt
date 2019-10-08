
import entities.rocket_entities as rocket_entities 
import entities.motor_data_entities as motor_entities
import aerodynamic_forces.aerodynamic_forces as aero_force
import aerodynamic_forces.atmosphere_model as atmosphere_model
import constants
import file_io
import entities.flight_data_entities as flight_data

import json

#Plot libraries
from math import radians
import numpy as np     # installed with matplotlib
import matplotlib.pyplot as plt

#part_list=[nosecone, tubeMain, tubeDrogue, tubeExtension, fincan]
rocket = rocket_entities.Rocket(name="3DPME_29mm_v1", comments="test")
config = rocket_entities.Configuration(name="Config1", rocket=rocket, mass_empty_override=0.1809, cg_override=None, comments="test")

PLA = rocket_entities.Material(name="PLA", density=1380)

nosecone = rocket_entities.Nosecone(rocket=rocket, config=config, config_index=0, nose_type="VON_KARMEN", shape_parameter=0,
                                    length_nose=0.157, thickness=0.002, diameter_base=0.03139, length_base=0.0, 
                                    diameter_shoulder=0.0, length_shoulder=0.0, thickness_shoulder=0.0, surface_finish='UNFINISHED',
                                    name="Nosecone", material=PLA, comments="test")

tubeMain = rocket_entities.TubeBody(rocket=rocket, config=config, config_index=1, length=0.076, diameter_outer=0.03139, thickness=0.001, surface_finish='UNFINISHED',
                                   name="tubeMain", material=PLA, comments="test")

tubeDrogue = rocket_entities.TubeBody(rocket=rocket, config=config, config_index=2, length=0.19, diameter_outer=0.03139, thickness=0.001, surface_finish='UNFINISHED',
                                   name="tubeDrogue", material=PLA, comments="test")

#tubeExtension = rocket_entities.TubeBody(length=0.04, diameter_outer=0.03139, diameter_inner=0.029, thickness=0.001,
#                                   name="tubeExtension", parent=None, material=PLA, surface_finish='UNFINISHED',
#                                   mass_override=None, cg_override=None, position_from_parent_type=None, position_from_parent_value=None, comments="test")
tubeExtension = rocket_entities.TubeBody(rocket=rocket, config=config, config_index=3, length=0.001, diameter_outer=0.03139, thickness=0.001, surface_finish='UNFINISHED',
                                   name="tubeExtension", material=PLA, comments="test")

fincan = rocket_entities.TubeBody(rocket=rocket, config=config, config_index=4, length=0.114, diameter_outer=0.03139, thickness=0.001, surface_finish='UNFINISHED',
                                   name="fincan", material=PLA, comments="test")

trap_fin_shape = rocket_entities.FinShapeTrapezoidal(chord_root=0.102, chord_tip=0.013, span=0.051, length_sweep=0.076, angle_sweep_LE=56.3)
fin_set = rocket_entities.Fins(rocket=rocket, fin_shape=trap_fin_shape, number=3, cross_section="AIRFOIL", thickness=0.003, radius_fillet=0.005, surface_finish='UNFINISHED',
                             name="Fin set", parent=fincan, material=PLA, 
                             position_from_parent_type="AFT", position_from_parent_value=-0.0063, comments="test")

#mass h180 = 0.195
#mass h128 = 0.1809
#motor = motor_entities.MotorTestData(file_io.read_text_file("AeroTech_H128.eng"))
#read_data = file_io.read_text_file("C:/Users/Jim/Documents/Rockets/Altimeters/RoboDev/Firmware/flightTests/3DPME_29mm_H128_TriCities_9-2019.csv")
#alt = flight_data.FlightData(config, read_data, "3DPME_H128", "Tri Cities", "9/6/2019", 167.74, 0.3825, 0.52705, "H128", 0.09408, "")
#sim = flight_data.SimulationData("3DPME_H128", config, motor, 167.74, "")

#file_io.serialize_objects_to_JSON(config)
file_io.WriteRocketHDF5("", rocket)


#motor = motor_entities.MotorTestData(file_io.read_text_file("AeroTech_H180.eng"))
#read_data = file_io.read_text_file("C:/Users/Jim/Documents/Rockets/Altimeters/RoboDev/Firmware/flightTests/3DPME_29mm_H180_TriCities_9-2019.csv")
#alt = flight_data.FlightData(config, read_data, "3DPME_H180", "Tri Cities", "9/7/2019", 167.74, 0.441, 0.578, "H180", 0.12096, "")
#sim = flight_data.SimulationData("3DPME_H80", config, motor, 167.74, "")

#plt.plot(alt.derived_data.time[:alt.derived_data.index_apogee], alt.derived_data.altitude[:alt.derived_data.index_apogee], label='filter')
#plt.plot(alt.derived_data.time[:alt.derived_data.index_apogee], alt.derived_data.altitude_baro[:alt.derived_data.index_apogee], label='baro')
#plt.plot(alt.derived_data.time[:alt.derived_data.index_apogee], alt.derived_data.altitude_accelerometer[:alt.derived_data.index_apogee], label='accel')
#plt.plot(sim.time, sim.altitude, label='sim')
#
#plt.plot(alt.derived_data.time[:alt.derived_data.index_apogee], alt.derived_data.velocity[:alt.derived_data.index_apogee], label='filter')
#plt.plot(alt.derived_data.time[:alt.derived_data.index_apogee], alt.derived_data.velocity_accelerometer[:alt.derived_data.index_apogee], label='accel')
#plt.plot(sim.time, sim.velocity, label='sim')
#
#plt.plot(alt.derived_data.time[:alt.derived_data.index_apogee], alt.derived_data.acceleration[:alt.derived_data.index_apogee], label='filter')
#plt.plot(alt.derived_data.time[:alt.derived_data.index_apogee], alt.derived_data.acceleration_z_total[:alt.derived_data.index_apogee], label='total')
#plt.plot(alt.derived_data.time[:alt.derived_data.index_apogee], alt.derived_data.acceleration_z[:alt.derived_data.index_apogee], label='raw')
#plt.plot(sim.time, sim.acceleration, label='sim')



#plt.plot(alt.derived_data.mach_number[alt.derived_data.index_burnout:alt.derived_data.index_apogee], alt.derived_data.acceleration[alt.derived_data.index_burnout:alt.derived_data.index_apogee], label='test')
#plt.plot(alt.derived_data.mach_number[alt.derived_data.index_burnout:alt.derived_data.index_apogee], alt.derived_data.acceleration_z[alt.derived_data.index_burnout:alt.derived_data.index_apogee], label='test_total')
#plt.plot(sim.mach_number[sim.index_burnout:sim.index_apogee], sim.acceleration[sim.index_burnout:sim.index_apogee], label='sim')

#plt.plot(alt.derived_data.mach_number[alt.derived_data.index_burnout:alt.derived_data.index_apogee], alt.derived_data.drag[alt.derived_data.index_burnout:alt.derived_data.index_apogee], label="test")
#plt.plot(sim.mach_number[sim.index_burnout:sim.index_apogee], sim.drag[sim.index_burnout:sim.index_apogee], label='sim aero')
#plt.plot(sim.mach_number[sim.index_burnout:sim.index_apogee], sim.drag_force, label='sim force')

#plt.plot(alt.derived_data.time[alt.derived_data.index_burnout:alt.derived_data.index_apogee], alt.derived_data.drag, label="test")
#plt.plot(sim.time[sim.index_burnout:sim.index_apogee], sim.drag[sim.index_burnout:sim.index_apogee], label='sim')

#x=100
#plt.plot(alt.derived_data.mach_number[alt.derived_data.index_burnout:alt.derived_data.index_apogee-x], alt.derived_data.drag_coefficient[alt.derived_data.index_burnout:alt.derived_data.index_apogee-x], label='test')
#plt.plot(sim.mach_number[sim.index_burnout:sim.index_apogee], sim.Cd[sim.index_burnout:sim.index_apogee], label='sim')

#plt.plot(alt.derived_data.velocity2[alt.derived_data.index_burnout:alt.derived_data.index_apogee-x], alt.derived_data.acceleration[alt.derived_data.index_burnout:alt.derived_data.index_apogee-x], label='test')
#plt.plot(alt.derived_data.velocity2[alt.derived_data.index_burnout:alt.derived_data.index_apogee-x], alt.derived_data.velocity[alt.derived_data.index_burnout:alt.derived_data.index_apogee-x], label='test')

#plt.plot(alt.derived_data.velocity[alt.derived_data.index_burnout:alt.derived_data.index_apogee-x], alt.derived_data.drag[alt.derived_data.index_burnout:alt.derived_data.index_apogee-x], label='test')
#plt.plot(alt.derived_data.velocity[alt.derived_data.index_burnout:alt.derived_data.index_apogee-x], alt.derived_data.drag_coefficient[alt.derived_data.index_burnout:alt.derived_data.index_apogee-x], label='test')

#plt.plot(alt.derived_data.time[alt.derived_data.index_burnout:alt.derived_data.index_apogee-x], alt.derived_data.acceleration[alt.derived_data.index_burnout:alt.derived_data.index_apogee-x], label='test')
#plt.plot(alt.derived_data.time[alt.derived_data.index_burnout:alt.derived_data.index_apogee-x], alt.recorded_data.acceleration_y[alt.derived_data.index_burnout:alt.derived_data.index_apogee-x], label='test')

#plt.plot(alt.derived_data.time, alt.derived_data.acceleration_x, label='test')
#plt.plot(alt.derived_data.time, alt.derived_data.acceleration_y, label='test')
#plt.plot(alt.derived_data.time, alt.derived_data.acceleration_z, label='test')


#plt.plot(alt.derived_data.mach_number, alt.derived_data.q, label='test')
#plt.plot(sim.mach_number, sim.q, label='sim')
#plt.legend(loc='upper left')
#plt.ylabel('Result')
#plt.show()


#plt.plot()
#plt.ylabel('Result')
#plt.show()
