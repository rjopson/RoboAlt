#include <pybind11/pybind11.h>
#include <pybind11/pytypes.h>

namespace py = pybind11;
//using namespace pybind11::literals;

template<class T>
void SetAttributes(T* entity, py::dict dict) {
    py::object obj = py::cast(entity);
    for (auto item : dict) {
        obj.attr(item.first) = item.second;
    }
    entity = obj.cast<T*>();
}