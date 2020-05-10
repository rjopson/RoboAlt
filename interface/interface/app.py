import h5py 

import sys
from enum import Enum

import interface_core as core
import hdf5_database
from interface_core import PyPartType

import scripted_29mm

write_data = scripted_29mm.run()
#read_data = core.PyInterfaceCore()
#db = hdf5_database.Database("C:/Users/rober/Documents/Rockets/Altimeters/RoboAlt/interface/core/python/tests/integration/29mm_test.h5")
#db.write(write_data.get_rocket("29mm 3DPME v2019"))
#db.read(read_data)

print("Complete")