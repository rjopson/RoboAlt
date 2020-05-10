#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "atmosphere.h"

namespace py = pybind11;

void init_atmosphere(py::module& m) {
    py::class_<Atmosphere, Entity>(m, "Atmosphere")
        .def(py::init<const std::string&, const std::string&, bool,
            const std::vector<double>&, const std::vector<double>&, const std::vector<double>&>());
}
