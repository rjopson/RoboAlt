#include <pybind11/pybind11.h>
#include <pybind11/pytypes.h>

namespace py = pybind11;

void init_entity_manager(py::module& m);
void init_entity(py::module& m);
void init_rocket(py::module& m);
void init_configuration(py::module& m);
void init_stage(py::module& m);
void init_part_instance(py::module& m);
void init_part(py::module& m);
void init_part_bulkhead(py::module& m);
void init_part_fins(py::module& m);
void init_part_nosecone(py::module& m);
void init_part_parachute(py::module& m);
void init_part_tube_body(py::module& m);
void init_motor(py::module& m);
void init_material(py::module& m);
void init_atmosphere(py::module& m);
void init_flight(py::module& m);
void init_experiment(py::module& m);
void init_simulation(py::module& m);


PYBIND11_MODULE(alt_core, m) {
    init_entity_manager(m);
    init_entity(m);
    init_rocket(m);
    init_configuration(m);
    init_stage(m);
    init_part_instance(m);
    init_part(m);
    init_part_bulkhead(m);
    init_part_fins(m);
    init_part_nosecone(m);
    init_part_parachute(m);
    init_part_tube_body(m);
    init_motor(m);
    init_material(m);
    init_atmosphere(m);
    init_flight(m);
    init_experiment(m);
    init_simulation(m);
}
