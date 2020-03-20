from distutils.core import setup
from distutils.extension import Extension
from Cython.Build import cythonize
from Cython.Distutils import build_ext

extensions = [
    Extension(
        "rocket_project",    
        include_dirs=["../core/entities/design", "../core/entities/flight", "../core/entities/models", "../core/aerodynamics", "../core/utils"],        
        sources=["rocket_core.pyx", "../core/database.cpp",
        "../core/entities/design/rocket.cpp",
        "../core/entities/design/configuration.cpp",
        "../core/entities/design/fin_shape.cpp",
        "../core/entities/design/inertial_override.cpp",
        "../core/entities/design/instance.cpp",
        "../core/entities/design/material.cpp",
        "../core/entities/design/part.cpp",
        "../core/entities/design/part_bulkhead.cpp",
        "../core/entities/design/part_fins.cpp",
        "../core/entities/design/part_mass.cpp",
        "../core/entities/design/part_nosecone.cpp",
        "../core/entities/design/part_parachute.cpp",
        "../core/entities/design/part_tube_body.cpp",
        "../core/entities/design/part_tube_inner.cpp",
        "../core/entities/design/stage.cpp",
        "../core/entities/flight/flight_data.cpp",
        "../core/entities/flight/simulation.cpp",
        "../core/entities/flight/simulation_event.cpp",
        "../core/entities/flight/simulation_stage.cpp",
        "../core/entities/models/atmosphere.cpp",
        "../core/entities/models/drag.cpp",
        "../core/entities/models/motor.cpp",
        "../core/aerodynamics/aerodynamics.cpp",
        "../core/aerodynamics/atmosphere_isa.cpp",
        "../core/utils/math_utilities.cpp",
        "../core/utils/matrix.cpp",
        "../core/utils/parse.cpp"], 
        language="c++",        
    ),
]

setup(
    name="rocket_core",
    ext_modules=cythonize(extensions),
    cmdclass = {'build_ext': build_ext},
)





