from distutils.core import setup
from distutils.extension import Extension
from Cython.Build import cythonize
from Cython.Distutils import build_ext

project_path = "../core/"
entities_path = project_path + "entities/"
design_path = project_path + "entities/design/"
flight_path = project_path + "entities/flight/"
models_path = project_path + "models/"
utils_path = project_path + "utils/"

extensions = [
    Extension("interface_core",     
                include_dirs=[project_path, entities_path, design_path, flight_path, models_path, utils_path], 
                sources=["python_wrappers.pyx",
                    models_path + "aerodynamics.cpp",
                    flight_path + "atmosphere.cpp",
                    models_path + "atmosphere_isa.cpp",
                    design_path + "configuration.cpp",
                    project_path + "database.cpp",
                    flight_path + "drag.cpp",
                    entities_path + "entity.cpp",
                    design_path + "fin_shape.cpp",
                    flight_path + "flight_data.cpp",
                    design_path + "inertial_override.cpp",
                    design_path + "instance.cpp",
                    design_path + "material.cpp",
                    utils_path + "math_utilities.cpp",
                    utils_path + "matrix.cpp",
                    flight_path + "motor.cpp",
                    utils_path + "parse.cpp",
                    design_path + "part.cpp",
                    design_path + "part_bulkhead.cpp",
                    design_path + "part_fins.cpp",
                    design_path + "part_nosecone.cpp",
                    design_path + "part_parachute.cpp",
                    design_path + "part_point_mass.cpp",
                    design_path + "part_tube_body.cpp",
                    design_path + "part_tube_inner.cpp",
                    design_path + "rocket.cpp",
                    flight_path + "simulation.cpp",
                    flight_path + "simulation_user_command.cpp",
                    flight_path + "simulation_stage.cpp",
                    design_path + "stage.cpp"],  
                  language="c++",
            ),
]

setup(
    ext_modules=cythonize(extensions),
    cmdclass = {'build_ext': build_ext},
)
