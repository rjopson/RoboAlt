
import entities.rocket_entities as rocket_entities 
import entities.flight_data_entities as flight_data
import entities.motor_data_entities as motor_entities
import entities.event_entities as event_entities
import simulation.aerodynamic_forces.aerodynamic_forces as aero_force
import simulation.aerodynamic_forces.atmosphere_model as atmosphere_model
import constants
import file_io

import json

#Plot libraries
from math import radians
import numpy as np     # installed with matplotlib
import matplotlib.pyplot as plt

rkt = rocket_entities.Rocket(name="3DPME_29mm_v1", comments="test")

PLA = rocket_entities.Material(name="PLA", density=1380.0)

nosecone = rocket_entities.Nosecone(nose_type="VON_KARMEN", shape_parameter=0,
                                    length_nose=0.157, thickness=0.002, diameter_outer=0.03139, length_base=0.0, 
                                    diameter_shoulder=0.0, length_shoulder=0.0, thickness_shoulder=0.0, surface_finish='UNFINISHED',
                                    name="Nosecone", rocket=rkt, material=PLA, comments="test")

tubeMain = rocket_entities.TubeBody(length=0.076, diameter_outer=0.03139, thickness=0.001, surface_finish='UNFINISHED',
                                   name="tubeMain", rocket=rkt, material=PLA, comments="test")

tubeDrogue = rocket_entities.TubeBody(length=0.19, diameter_outer=0.03139, thickness=0.001, surface_finish='UNFINISHED',
                                   name="tubeDrogue", rocket=rkt, material=PLA, comments="test")

#tubeExtension1 = rocket_entities.TubeBody(length=0.001, diameter_outer=0.03139, thickness=0.001, surface_finish='UNFINISHED',
#                                   name="tubeExtension180", rocket=rkt, material=PLA, comments="test")

tubeExtension2 = rocket_entities.TubeBody(length=0.04, diameter_outer=0.03139, thickness=0.001, surface_finish='UNFINISHED',
                                   name="tubeExtension240", rocket=rkt, material=PLA, comments="test")

fincan = rocket_entities.TubeBody(length=0.114, diameter_outer=0.03139, thickness=0.001, surface_finish='UNFINISHED',
                                   name="fincan", rocket=rkt, material=PLA, comments="test")

trap_fin_shape = rocket_entities.FinShapeTrapezoidal(chord_root=0.102, chord_tip=0.013, span=0.051, length_sweep=0.076)
fin_set = rocket_entities.Fins(fin_shape=trap_fin_shape, number=3, cross_section="AIRFOIL", thickness=0.003, radius_fillet=0.005, surface_finish='UNFINISHED',
                             name="Fin set", rocket=rkt, material=PLA, comments="test")

drogue_chute = rocket_entities.Parachute(0.17,0.8,name="drogue chute", rocket=rkt, material=PLA)
main_chute = rocket_entities.Parachute(0.37,0.8,name="main chute", rocket=rkt, material=PLA)

config180 = rocket_entities.Configuration(name="Config180", rocket=rkt, 
                                        mass_empty_override=0.1809, 
                                        mass_empty_override_bool=True, cg_empty_override_bool=False,
                                        comments="test")
nosecone_inst = rocket_entities.Instance(nosecone, None, config180)
tubeMain_inst = rocket_entities.Instance(tubeMain, None, config180)
tubeDrogue_inst = rocket_entities.Instance(tubeDrogue, None, config180)
fincan_inst = rocket_entities.Instance(fincan, None, config180)
fin_set_inst = rocket_entities.Instance(fin_set, fincan_inst, config180, position_type="AFT", position_from=0.0063)
drogue_chute_inst = rocket_entities.Instance(drogue_chute, tubeDrogue_inst, config180)
main_chute_inst = rocket_entities.Instance(main_chute, tubeMain_inst, config180)

config240 = rocket_entities.Configuration(name="Config240", rocket=rkt, 
                                        mass_empty_override=0.195, 
                                        mass_empty_override_bool=True, cg_empty_override_bool=False,
                                        comments="test")
nosecone_inst2 = rocket_entities.Instance(nosecone, None, config240)
tubeMain_inst2 = rocket_entities.Instance(tubeMain, None, config240)
tubeDrogue_inst2 = rocket_entities.Instance(tubeDrogue, None, config240)
tubeExtension_inst2 = rocket_entities.Instance(tubeExtension2, None, config240)
fincan_inst2 = rocket_entities.Instance(fincan, None, config240)
fin_set_inst2 = rocket_entities.Instance(fin_set, fincan_inst2, config240, position_type="AFT", position_from=0.0063)
drogue_chute_inst2 = rocket_entities.Instance(drogue_chute, tubeDrogue_inst2, config240)
main_chute_inst2 = rocket_entities.Instance(main_chute, tubeMain_inst2, config240)

motor_data1 = file_io.parse_eng_string_to_motor(file_io.read_text_file("AeroTech_H128.eng"))
recorded_data1 = file_io.parse_string_to_recorded_data(file_io.read_text_file("../Firmware/flightTests/3DPME_29mm_H128_TriCities_9-2019.csv"))
alt1 = flight_data.FlightData(config180, recorded_data1, "3DPME_H128", "Tri Cities", "9/6/2019", 167.74, 0.3825, 0.52705, "H128", 0.09408, "")
user_events = [event_entities.SimulationEvent(event="APOGEE", action="DEPLOY_PARACHUTE", instance=drogue_chute_inst, time_delay=0.0),
               event_entities.SimulationEvent(event="MAIN_ALTITUDE", action="DEPLOY_PARACHUTE", instance=main_chute_inst)]
sim1 = flight_data.SimulationData("3DPME_H128", config180, motor_data1, 167.74, user_events)

motor_data2 = file_io.parse_eng_string_to_motor(file_io.read_text_file("AeroTech_H180.eng"))
recorded_data2 = file_io.parse_string_to_recorded_data(file_io.read_text_file("../Firmware/flightTests/3DPME_29mm_H128_TriCities_9-2019.csv"))
alt2 = flight_data.FlightData(config240, recorded_data2, "3DPME_H180", "Tri Cities", "9/6/2019", 167.74, 0.3825, 0.52705, "H128", 0.09408, "")
user_events2 = [event_entities.SimulationEvent(event="APOGEE", action="DEPLOY_PARACHUTE", instance=drogue_chute_inst2, time_delay=0.0),
               event_entities.SimulationEvent(event="MAIN_ALTITUDE", action="DEPLOY_PARACHUTE", instance=main_chute_inst2)]
sim2 = flight_data.SimulationData("3DPME_H180", config240, motor_data2, 167.74, user_events2)

file_io.WriteRocketHDF5("", rkt)
#test = file_io.ReadRocketHDF5("3DPME_29mm_v1.h5")

#test_data = test.rocket.configuration_list[0].flight_data_list[0]
#sim_data = test.rocket.configuration_list[0].simulation_list[0]
#plt.plot(test_data.derived_data.time, test_data.derived_data.altitude)
#plt.plot(test_data.derived_data.time, test_data.derived_data.altitude_baro)
#plt.plot(sim_data.time, sim_data.altitude)

plt.plot(alt1.derived_data.time, alt1.derived_data.altitude, label='filter')
plt.plot(alt1.derived_data.time, alt1.derived_data.altitude_baro, label='baro')
#plt.plot(alt1.derived_data.time, alt1.derived_data.altitude_accelerometer, label='accel')
plt.plot(sim1.time, sim1.altitude, label='sim')

print(sim1.test)

#plt.plot(alt2.derived_data.time, alt2.derived_data.altitude, label='filter')
#plt.plot(alt2.derived_data.time, alt2.derived_data.altitude_baro, label='baro')
#plt.plot(alt2.derived_data.time, alt2.derived_data.altitude_accelerometer, label='accel')
#plt.plot(sim2.time, sim2.altitude, label='sim')

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
#plt.plot(alt1.derived_data.mach_number[alt1.derived_data.index_burnout:alt1.derived_data.index_apogee-x], alt1.derived_data.drag_coefficient[alt1.derived_data.index_burnout:alt1.derived_data.index_apogee-x], label='test')
#plt.plot(sim1.mach_number[sim1.index_burnout:sim1.index_apogee], sim1.Cd[sim1.index_burnout:sim1.index_apogee], label='sim')

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


plt.plot()
plt.ylabel('Result')
plt.legend(loc='upper left')
plt.show()
