
import alt_core
import python.file.hdf5_database as hdf5
import tests.scripted_29mm as scripted_29mm
from enum import Enum
import numpy as np

rkt = scripted_29mm.run()
db = hdf5.Database("C:/Users/rober/Documents/Rockets/Altimeters/RoboAlt/interface/interface/core/tests/29mm.h5")
db.write(rkt.get_rocket("29mm 3DPME v2019"))

print("Complete")