
import interface_core as core
from interface_core import PyPartType
from interface_core import PyNoseconeType
from interface_core import PyFinCrossSection
from interface_core import PySurfaceFinish

db = core.InterfaceCore()

db.create_material("PLA")
print(db.get_material("PLA").name)
db.get_material("PLA").density = 1380.0

db.create_rocket("29mm 3DPME v2019")
print(db.get_rocket("29mm 3DPME v2019").name)

db.create_part(PyPartType.NOSECONE, "Nosecone", "29mm 3DPME v2019")
print(db.get_part("29mm 3DPME v2019", "Nosecone").name)
db.get_part("29mm 3DPME v2019", "Nosecone").material = db.get_material("PLA")
db.get_part("29mm 3DPME v2019", "Nosecone").nosecone_type = PyNoseconeType.VON_KARMEN
db.get_part("29mm 3DPME v2019", "Nosecone").shape_parameter = 1.0
db.get_part("29mm 3DPME v2019", "Nosecone").length_nose = 0.157
db.get_part("29mm 3DPME v2019", "Nosecone").length_base = 0.01
db.get_part("29mm 3DPME v2019", "Nosecone").length_shoulder = 0.0
db.get_part("29mm 3DPME v2019", "Nosecone").thickness = 0.01
db.get_part("29mm 3DPME v2019", "Nosecone").diameter_outer = 0.03139
db.get_part("29mm 3DPME v2019", "Nosecone").diameter_shoulder = 0.0

db.create_part(PyPartType.TUBE_BODY, "tubeMain", "29mm 3DPME v2019")
print(db.get_part("29mm 3DPME v2019", "tubeMain").name)
db.get_part("29mm 3DPME v2019", "tubeMain").material = db.get_material("PLA")
db.get_part("29mm 3DPME v2019", "tubeMain").length = 0.076
db.get_part("29mm 3DPME v2019", "tubeMain").diameter_outer = 0.03139
db.get_part("29mm 3DPME v2019", "tubeMain").thickness = 0.001

db.create_part(PyPartType.TUBE_BODY, "tubeDrogue", "29mm 3DPME v2019")
print(db.get_part("29mm 3DPME v2019", "tubeDrogue").name)
db.get_part("29mm 3DPME v2019", "tubeDrogue").material = db.get_material("PLA")
db.get_part("29mm 3DPME v2019", "tubeDrogue").length = 0.19
db.get_part("29mm 3DPME v2019", "tubeDrogue").diameter_outer = 0.03139
db.get_part("29mm 3DPME v2019", "tubeDrogue").thickness = 0.001

db.create_part(PyPartType.TUBE_BODY, "tubeExtension180", "29mm 3DPME v2019")
print(db.get_part("29mm 3DPME v2019", "tubeExtension180").name)
db.get_part("29mm 3DPME v2019", "tubeExtension180").material = db.get_material("PLA")
db.get_part("29mm 3DPME v2019", "tubeExtension180").length = 0.001
db.get_part("29mm 3DPME v2019", "tubeExtension180").diameter_outer = 0.03139
db.get_part("29mm 3DPME v2019", "tubeExtension180").thickness = 0.001

db.create_part(PyPartType.TUBE_BODY, "tubeExtension240", "29mm 3DPME v2019")
print(db.get_part("29mm 3DPME v2019", "tubeExtension240").name)
db.get_part("29mm 3DPME v2019", "tubeExtension240").material = db.get_material("PLA")
db.get_part("29mm 3DPME v2019", "tubeExtension240").length = 0.04
db.get_part("29mm 3DPME v2019", "tubeExtension240").diameter_outer = 0.03139
db.get_part("29mm 3DPME v2019", "tubeExtension240").thickness = 0.001

db.create_part(PyPartType.TUBE_BODY, "tubeFincan", "29mm 3DPME v2019")
print(db.get_part("29mm 3DPME v2019", "tubeFincan").name)
db.get_part("29mm 3DPME v2019", "tubeFincan").material = db.get_material("PLA")
db.get_part("29mm 3DPME v2019", "tubeFincan").length = 0.114
db.get_part("29mm 3DPME v2019", "tubeFincan").diameter_outer = 0.03139
db.get_part("29mm 3DPME v2019", "tubeFincan").thickness = 0.001

db.create_part(PyPartType.FINS, "Fin set", "29mm 3DPME v2019")
print(db.get_part("29mm 3DPME v2019", "Fin set").name)
db.get_part("29mm 3DPME v2019", "Fin set").material = db.get_material("PLA")
db.get_part("29mm 3DPME v2019", "Fin set").chord_root = 0.102
db.get_part("29mm 3DPME v2019", "Fin set").chord_tip = 0.013
db.get_part("29mm 3DPME v2019", "Fin set").span = 0.051
db.get_part("29mm 3DPME v2019", "Fin set").length_sweep = 0.076
db.get_part("29mm 3DPME v2019", "Fin set").cross_section = PyFinCrossSection.ROUNDED
db.get_part("29mm 3DPME v2019", "Fin set").number = 3
db.get_part("29mm 3DPME v2019", "Fin set").thickness = 0.003
db.get_part("29mm 3DPME v2019", "Fin set").radius_fillet = 0.005

db.create_configuration("180 case", "29mm 3DPME v2019")
print(db.get_configuration("29mm 3DPME v2019", "180 case").name)

db.create_stage("sustainer", "29mm 3DPME v2019", "180 case")
print(db.get_stage("29mm 3DPME v2019", "180 case", "sustainer").name)
db.get_stage("29mm 3DPME v2019", "180 case", "sustainer").override_mass(0.1809)
db.get_stage("29mm 3DPME v2019", "180 case", "sustainer").surface_finish = PySurfaceFinish.ROUGH

db.create_instance("Nosecone_1", "29mm 3DPME v2019", "180 case", "Nosecone", "sustainer")
db.create_instance("tubeMain_1", "29mm 3DPME v2019", "180 case", "tubeMain", "sustainer")
db.create_instance("tubeDrogue_1", "29mm 3DPME v2019", "180 case", "tubeDrogue", "sustainer")
db.create_instance("tubeExtension180_1", "29mm 3DPME v2019", "180 case", "tubeExtension180", "sustainer")
db.create_instance("tubeFincan_1", "29mm 3DPME v2019", "180 case", "tubeFincan", "sustainer")
db.create_instance("Finset_1", "29mm 3DPME v2019", "180 case", "Nosecone", "tubeFincan_1")
db.get_instance("29mm 3DPME v2019", "Finset_1").position_from = 0.0063

db.create_motor("C:/Users/rober/Documents/Rockets/Altimeters/interface/core/tests/test_files/AeroTech_H128.eng")

db.create_simulation("h128", "29mm 3DPME v2019", "180 case")
print(db.get_simulation("29mm 3DPME v2019", "180 case", "h128").name)
db.get_simulation("29mm 3DPME v2019", "180 case", "h128").height_pad = 167.0
db.get_simulation("29mm 3DPME v2019", "180 case", "h128").set_motor(db.get_motor("H128W"), db.get_stage("29mm 3DPME v2019", "180 case", "sustainer"))
db.get_simulation("29mm 3DPME v2019", "180 case", "h128").run(0.05, 5.0)


print("Complete")
 
