from distutils.core import setup
from distutils.extension import Extension
from Cython.Build import cythonize
from Cython.Distutils import build_ext

#cpp paths
project_path = "../cpp/src/"
entities_path = project_path + "entities/"
design_path = project_path + "entities/design/"
flight_path = project_path + "entities/flight/"
models_path = project_path + "models/"
process_data_path = project_path + "process_data/"
utils_path = project_path + "utils/"

extensions = [
    Extension("interface_core",     
                include_dirs=[project_path, entities_path, design_path, flight_path, models_path, process_data_path, utils_path], 
                sources=["python_wrappers.pyx",                    
                    entities_path + "entity.cpp",
                    entities_path + "entity_manager.cpp",    
                    
                    design_path + "configuration.cpp",
                    design_path + "fin_shape.cpp",
                    design_path + "inertial_override.cpp",
                    design_path + "part_instance.cpp",
                    design_path + "material.cpp",  
                    design_path + "part.cpp",
                    design_path + "part_bulkhead.cpp",
                    design_path + "part_fins.cpp",
                    design_path + "part_nosecone.cpp",
                    design_path + "part_parachute.cpp",
                    design_path + "part_point_mass.cpp",
                    design_path + "part_tube_body.cpp",
                    design_path + "part_tube_inner.cpp",
                    design_path + "rocket.cpp",
                    design_path + "stage.cpp",
                    
                    flight_path + "altimeter_user_commands.cpp",
                    flight_path + "atmosphere.cpp",
                    flight_path + "drag.cpp",
                    flight_path + "experiment.cpp",
                    flight_path + "experimental_data.cpp",
                    flight_path + "flight.cpp",
                    flight_path + "flight_data.cpp",
                    flight_path + "flight_data.cpp",
                    flight_path + "motor.cpp",
                    flight_path + "simulation.cpp",
                    flight_path + "simulation_data.cpp",
                    flight_path + "simulation_user_command.cpp",
                    
                    models_path + "aerodynamics.cpp",                    
                    models_path + "atmosphere_isa.cpp",   
                    
                    process_data_path + "kalman_state.cpp",
                    
                    utils_path + "math_utilities.cpp",
                    utils_path + "matrix.cpp",                    
                    utils_path + "parse.cpp"],  
                  language="c++",
            ),
]

setup(
    ext_modules=cythonize(extensions),
    cmdclass = {'build_ext': build_ext},
)
