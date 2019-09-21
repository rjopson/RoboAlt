
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

PLA = rocket_entities.Material(name="PLA", density=1380)

nosecone = rocket_entities.Nosecone(nose_type="VON_KARMEN", shape_parameter=0,
                                    length_nose=0.157, thickness=0.002, diameter_base=0.03139, length_base=0.0, 
                                    diameter_shoulder=0.0, length_shoulder=0.0, thickness_shoulder=0.0,
                                    name="Nosecone", parent=None, material=PLA, surface_finish='UNFINISHED',
                                    mass_override=None, cg_override=None, position_from_parent_type=None, position_from_parent_value=None, comments="test")

tubeMain = rocket_entities.TubeBody(length=0.076, diameter_outer=0.03139, diameter_inner=0.029, thickness=0.001,
                                   name="tubeMain", parent=None, material=PLA, surface_finish='UNFINISHED',
                                   mass_override=None, cg_override=None, position_from_parent_type=None, position_from_parent_value=None, comments="test")

tubeDrogue = rocket_entities.TubeBody(length=0.19, diameter_outer=0.03139, diameter_inner=0.029, thickness=0.001,
                                   name="tubeDrogue", parent=None, material=PLA, surface_finish='UNFINISHED',
                                   mass_override=None, cg_override=None, position_from_parent_type=None, position_from_parent_value=None, comments="test")

#tubeExtension = rocket_entities.TubeBody(length=0.04, diameter_outer=0.03139, diameter_inner=0.029, thickness=0.001,
#                                   name="tubeExtension", parent=None, material=PLA, surface_finish='UNFINISHED',
#                                   mass_override=None, cg_override=None, position_from_parent_type=None, position_from_parent_value=None, comments="test")
tubeExtension = rocket_entities.TubeBody(length=0.001, diameter_outer=0.03139, diameter_inner=0.029, thickness=0.001,
                                   name="tubeExtension", parent=None, material=PLA, surface_finish='UNFINISHED',
                                   mass_override=None, cg_override=None, position_from_parent_type=None, position_from_parent_value=None, comments="test")

fincan = rocket_entities.TubeBody(length=0.114, diameter_outer=0.03139, diameter_inner=0.029, thickness=0.001,
                                   name="fincan", parent=None, material=PLA, surface_finish='UNFINISHED',
                                   mass_override=None, cg_override=None, position_from_parent_type=None, position_from_parent_value=None, comments="test")

trap_fin_shape = rocket_entities.FinShapeTrapezoidal(chord_root=0.102, chord_tip=0.013, span=0.051, length_sweep=0.076, angle_sweep_LE=56.3)
fin_set = rocket_entities.Fins(fin_shape=trap_fin_shape, number=3, cross_section="AIRFOIL", thickness=0.003, radius_fillet=0.005,
                             name="Fin set", parent=fincan, material=PLA, surface_finish='UNFINISHED',
                             mass_override=None, cg_override=None, position_from_parent_type="AFT", position_from_parent_value=-0.0063, comments="test")

config = rocket_entities.Configuration(name="Config1", part_list=[nosecone, tubeMain, tubeDrogue, tubeExtension, fincan], 
                                      configuration_list=None, mass_empty_override=0.195, cg_override=None, comments="test")


#h180 = motor_entities.MotorTestData(file_io.read_text_file("AeroTech_H180.eng"))

#"3DPME_H180", "Tri Cities", "9/7/2019", 167.74, 0.441, 0.578, "H180", 0.12096, ""
#file_io.read_text_file("C:/Users/Jim/Documents/Rockets/Altimeters/RoboDev/Firmware/flightTests/3DPME_29mm_H180_TriCities_9-2019.csv"
#file_io.read_text_file("C:/Users/Jim/Documents/Rockets/Altimeters/RoboDev/Firmware/flightTests/3DPME_29mm_H128_TriCities_9-2019.csv"

h128 = motor_entities.MotorTestData(file_io.read_text_file("AeroTech_H128.eng"))
read_data = file_io.read_text_file("C:/Users/Jim/Documents/Rockets/Altimeters/RoboDev/Firmware/flightTests/3DPME_29mm_H128_TriCities_9-2019.csv")
altimeter_3DPME_H128 = flight_data.AltimeterData(read_data, "3DPME_H128", "Tri Cities", "9/6/2019", 167.74, 0.3825, 0.52705, "H128", 0.09408, "")
sim_H128 = flight_data.SimulationData("3DPME_H128", config, h128, 167.74, "")

plt.plot(sim_H128.time, sim_H128.altitude, altimeter_3DPME_H128.derived_data.time, altimeter_3DPME_H128.derived_data.altitude, altimeter_3DPME_H128.derived_data.time, altimeter_3DPME_H128.derived_data.altitude_baro_unfiltered)
#plt.plot(sim_H128.time, sim_H128.altitude, sim_H128.time, sim_H128.velocity, sim.time_H128, sim_H128.acceleration)
plt.ylabel('Result')
plt.show()