import h5py 

import interface_core as core
import hdf5_database
from interface_core import PyPartType

import scripted_29mm

import sys
from enum import Enum 

#this function is used to convert strings which define enums to enum objects
def str_to_class(classname):
    return getattr(sys.modules[__name__], classname)

write_data = scripted_29mm.run()
read_data = core.PyInterfaceCore()
db = hdf5_database.Database("C:/Users/rober/Documents/Rockets/Altimeters/RoboAlt/interface/core/python/tests/integration/29mm_test.h5")
db.write(write_data.get_rocket("29mm 3DPME v2019"))
#db.read(read_data)
#print(read_data.get_rocket("29mm 3DPME v2019").name)
#print(read_data.get_part("29mm 3DPME v2019", "Nosecone").length_nose)
#
##print(1 == PyPartType.FINS.value)

print("Complete")