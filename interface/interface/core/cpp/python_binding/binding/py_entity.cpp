#include <pybind11/pybind11.h>
#include <pybind11/pytypes.h>

#include "entity.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesEntity(Entity* entity) {
    return py::dict("name"_a = entity->Name(),
                    "comments"_a = entity->Comments());
}

void init_entity(py::module& m) {
    py::class_<Entity>(m, "Entity")
        .def(py::init<const std::string&, const std::string&>())
        .def_property("name", &Entity::Name, &Entity::SetName)
        .def_property("comments", &Entity::Comments, &Entity::SetComments)
        .def("attributes", &AttributesEntity);
}