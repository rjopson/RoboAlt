
import alt_core
import python.file.hdf5_database as hdf5
import tests.scripted_29mm as scripted_29mm
from enum import Enum
import numpy as np

core = scripted_29mm.run()
db = hdf5.Database("C:/Users/rober/Documents/Rockets/Altimeters/RoboAlt/interface/interface/core/tests/29mm.h5")
db.write(core.get_rocket("29mm 3DPME v2019"))

core2 = alt_core.EntityManager()
db2 = hdf5.Database("C:/Users/rober/Documents/Rockets/Altimeters/RoboAlt/interface/interface/core/tests/29mm.h5")
db2.read(core2)

stage = core.get_stage("29mm 3DPME v2019", "180 case", "sustainer")
sim = core.get_simulation("29mm 3DPME v2019", "180 case", "h128")
sim.run()
flight = core.get_flight("29mm 3DPME v2019", "180 case", "h128")
flight.process_data()

stage2 = core2.get_stage("29mm 3DPME v2019", "180 case", "sustainer")
sim2 = core2.get_simulation("29mm 3DPME v2019", "180 case", "h128")
sim2.run()
flight2 = core2.get_flight("29mm 3DPME v2019", "180 case", "h128")
flight2.process_data()

print(sim.results(stage).altitude_agl_max, sim2.results(stage2).altitude_agl_max)

print("Complete")