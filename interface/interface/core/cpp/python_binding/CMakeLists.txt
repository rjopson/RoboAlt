#commands:
#cmake -DCMAKE_BUILD_TYPE=Release ..
#cmake --build . --config Release

cmake_minimum_required(VERSION 2.8.12)
project(alt_core)

set (SOURCE "../src")
set (SOURCE_ENTITIES "${SOURCE}/entities")
set (SOURCE_ENTITIES_DESIGN "${SOURCE_ENTITIES}/design")
set (SOURCE_ENTITIES_FLIGHT "${SOURCE_ENTITIES}/flight")
set (SOURCE_MODELS "${SOURCE}/models")
set (SOURCE_UTILS "${SOURCE}/utils")

include_directories("${SOURCE_ENTITIES}"
					"${SOURCE_ENTITIES_DESIGN}"
					"${SOURCE_ENTITIES_FLIGHT}"
					"${SOURCE_MODELS}"
					"${SOURCE_UTILS}")

set (SOURCES 	"${SOURCE_ENTITIES}/entity.cpp"
				"${SOURCE_ENTITIES}/entity_manager.cpp"
				
				"${SOURCE_ENTITIES_DESIGN}/configuration.cpp"
				"${SOURCE_ENTITIES_DESIGN}/fin_shape.cpp"
				"${SOURCE_ENTITIES_DESIGN}/material.cpp"
				"${SOURCE_ENTITIES_DESIGN}/part.cpp"
				"${SOURCE_ENTITIES_DESIGN}/part_bulkhead.cpp"
				"${SOURCE_ENTITIES_DESIGN}/part_fins.cpp"
				"${SOURCE_ENTITIES_DESIGN}/part_instance.cpp"
				"${SOURCE_ENTITIES_DESIGN}/part_nosecone.cpp"
				"${SOURCE_ENTITIES_DESIGN}/part_parachute.cpp"
				"${SOURCE_ENTITIES_DESIGN}/part_point_mass.cpp"
				"${SOURCE_ENTITIES_DESIGN}/part_tube_body.cpp"
				"${SOURCE_ENTITIES_DESIGN}/part_tube_inner.cpp"
				"${SOURCE_ENTITIES_DESIGN}/rocket.cpp"
				"${SOURCE_ENTITIES_DESIGN}/stage.cpp"
				
				"${SOURCE_ENTITIES_FLIGHT}/altimeter_user_commands.cpp"
				"${SOURCE_ENTITIES_FLIGHT}/atmosphere.cpp"
				"${SOURCE_ENTITIES_FLIGHT}/drag.cpp"
				"${SOURCE_ENTITIES_FLIGHT}/experiment.cpp"
				"${SOURCE_ENTITIES_FLIGHT}/experimental_data.cpp"
				"${SOURCE_ENTITIES_FLIGHT}/flight.cpp"
				"${SOURCE_ENTITIES_FLIGHT}/flight_data.cpp"
				"${SOURCE_ENTITIES_FLIGHT}/motor.cpp"
				"${SOURCE_ENTITIES_FLIGHT}/simulation.cpp"
				"${SOURCE_ENTITIES_FLIGHT}/simulation_data.cpp"
				"${SOURCE_ENTITIES_FLIGHT}/simulation_user_command.cpp"
				
				"${SOURCE_MODELS}/aerodynamics.cpp"
				"${SOURCE_MODELS}/atmosphere_isa.cpp"
				"${SOURCE_MODELS}/kalman_state.cpp"
				
				"${SOURCE_UTILS}/math_utilities.cpp"
				"${SOURCE_UTILS}/matrix.cpp"
				"${SOURCE_UTILS}/parse.cpp")
				
#For building cpp main.cpp test code (without wrappers)
#add_executable(alt_interface ${SOURCES} "../tests/integration/main.cpp")

add_subdirectory(lib/pybind11)
pybind11_add_module(alt_core ${SOURCES} 	binding/py_binding.cpp 
											binding/py_entity_manager.cpp
											binding/py_entity.cpp
											binding/py_rocket.cpp
											binding/py_configuration.cpp
											binding/py_stage.cpp
											binding/py_part_instance.cpp
											binding/py_part.cpp
											binding/py_part_bulkhead.cpp
											binding/py_part_fins.cpp
											binding/py_part_nosecone.cpp
											binding/py_part_parachute.cpp
											binding/py_part_tube_body.cpp
											binding/py_motor.cpp
											binding/py_material.cpp
											binding/py_atmosphere.cpp
											binding/py_flight.cpp
											binding/py_experiment.cpp
											binding/py_simulation.cpp)

add_custom_command(TARGET alt_core POST_BUILD
       COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:alt_core>
       "${CMAKE_SOURCE_DIR}/../.."
    )
