import interface_core as core
from interface_core import PyPartType
from interface_core import PyNoseconeType
from interface_core import PyFinCrossSection
from interface_core import PySurfaceFinish

def run():

    db = core.PyInterfaceCore()

    pla = db.create_material("PLA")
    pla.density = 1380.0

    rkt = db.create_rocket("29mm 3DPME v2019")

    nosecone = db.create_part(PyPartType.NOSECONE, "Nosecone", rkt)
    nosecone.material = pla
    nosecone.nosecone_type = PyNoseconeType.VON_KARMEN
    nosecone.shape_parameter = 1.0
    nosecone.length_nose = 0.157
    nosecone.length_base = 0.01
    nosecone.length_shoulder = 0.0
    nosecone.thickness = 0.01
    nosecone.diameter_outer = 0.03139
    nosecone.diameter_shoulder = 0.0

    tube_main = db.create_part(PyPartType.TUBE_BODY, "tubeMain", rkt)
    tube_main.material = pla
    tube_main.length = 0.076
    tube_main.diameter_outer = 0.03139
    tube_main.thickness = 0.001

    tube_drogue = db.create_part(PyPartType.TUBE_BODY, "tubeDrogue", rkt)
    tube_drogue.material = pla
    tube_drogue.length = 0.19
    tube_drogue.diameter_outer = 0.03139
    tube_drogue.thickness = 0.001

    tube_extension180 = db.create_part(PyPartType.TUBE_BODY, "tubeExtension180", rkt)
    tube_extension180.material = pla
    tube_extension180.length = 0.001
    tube_extension180.diameter_outer = 0.03139
    tube_extension180.thickness = 0.001

    tube_extension240 = db.create_part(PyPartType.TUBE_BODY, "tubeExtension240", rkt)
    tube_extension240.material = pla
    tube_extension240.length = 0.04
    tube_extension240.diameter_outer = 0.03139
    tube_extension240.thickness = 0.001

    tube_fincan = db.create_part(PyPartType.TUBE_BODY, "tubeFincan", rkt)
    tube_fincan.material = pla
    tube_fincan.length = 0.114
    tube_fincan.diameter_outer = 0.03139
    tube_fincan.thickness = 0.001

    fins = db.create_part(PyPartType.FINS, "Fin set", rkt)
    fins.material = pla
    fins.cross_section = PyFinCrossSection.ROUNDED
    fins.number = 3
    fins.thickness = 0.003
    fins.radius_fillet = 0.005
    fins.shape.chord_root = 0.102
    fins.shape.chord_tip = 0.013
    fins.shape.span = 0.051
    fins.shape.length_sweep = 0.076

    config180 = db.create_configuration("180 case", rkt)
    sustainer180 = db.create_stage("sustainer", config180)
    sustainer180.override_mass_empty = 0.1809
    sustainer180.override_mass_switch = True
    sustainer180.surface_finish = PySurfaceFinish.ROUGH
    nosecone_1 = db.create_part_instance("Nosecone_1", nosecone, sustainer180.instance_root)
    tube_main_1 = db.create_part_instance("tubeMain_1", tube_main, sustainer180.instance_root)
    tube_drogue_1 = db.create_part_instance("tubeDrogue_1", tube_drogue, sustainer180.instance_root)
    tube_extension180_1 = db.create_part_instance("tubeExtension180_1", tube_extension180, sustainer180.instance_root)
    tube_fincan_1 = db.create_part_instance("tubeFincan_1", tube_fincan, sustainer180.instance_root)
    fins_1 = db.create_part_instance("Finset_1", fins, tube_fincan_1)
    fins_1.position_from = 0.0063

    config240 = db.create_configuration("240 case", rkt)
    sustainer240 = db.create_stage("sustainer", config240)
    sustainer240.override_mass_empty = 0.195
    sustainer240.override_mass_switch = True
    sustainer240.surface_finish = PySurfaceFinish.ROUGH
    nosecone_2 = db.create_part_instance("Nosecone_2", nosecone, sustainer240.instance_root)
    tube_main_2 = db.create_part_instance("tubeMain_2", tube_main, sustainer240.instance_root)
    tube_drogue_2 = db.create_part_instance("tubeDrogue_2", tube_drogue, sustainer240.instance_root)
    tube_extension240_1 = db.create_part_instance("tubeExtension240_1", tube_extension240, sustainer240.instance_root)
    tube_fincan_2 = db.create_part_instance("tubeFincan_2", tube_fincan, sustainer240.instance_root)
    fins_2 = db.create_part_instance("Finset_2", fins, tube_fincan_2)
    fins_2.position_from = 0.0063

    #rkt.get_stage("29mm 3DPME v2019", "180 case", "sustainer").print_drag_coefficients(1, 0.46, 0.0)

    h128 = db.create_motor("C:/Users/rober/Documents/Rockets/Altimeters/RoboAlt/interface/core/cpp/tests/test_files/AeroTech_H128.eng")
    h180 = db.create_motor("C:/Users/rober/Documents/Rockets/Altimeters/RoboAlt/interface/core/cpp/tests/test_files/AeroTech_H180.eng")

    sim_h128 = db.create_simulation("h128", config180)
    sim_h128.height_pad = 167.0
    sim_h128.set_motor(h128, sustainer180)
    sim_h128.run(0.05, 5.0)

    sim_h180 = db.create_simulation("h180", config240)
    sim_h180.height_pad = 167.0
    sim_h180.set_motor(h180, sustainer240)
    sim_h180.run(0.05, 5.0)
    
    return db