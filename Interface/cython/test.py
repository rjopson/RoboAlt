
import interface_core as core
from interface_core import PyPartType

db = core.InterfaceCore()
db.create_rocket("29mm 3DPME v2019")
print(db.get_rocket("29mm 3DPME v2019").name)

db.create_configuration("180 case", "29mm 3DPME v2019")
print(db.get_configuration("29mm 3DPME v2019", "180 case").name)

db.create_stage("sustainer", "29mm 3DPME v2019", "180 case")
print(db.get_stage("29mm 3DPME v2019", "180 case", "sustainer").name)

db.create_part(PyPartType.NOSECONE, "Nosecone", "29mm 3DPME v2019")
print(db.get_part("29mm 3DPME v2019", "Nosecone").name)
print(db.get_part("29mm 3DPME v2019", "Nosecone").length_nose)

db.create_part(PyPartType.TUBE_BODY, "tubeMain", "29mm 3DPME v2019")
print(db.get_part("29mm 3DPME v2019", "tubeMain").name)
print(db.get_part("29mm 3DPME v2019", "tubeMain").length)

print("Complete")
 
