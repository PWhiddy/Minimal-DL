#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(mindl, m) {
    m.doc() = R"pbdoc(
        Minimal Deep Learning
    )pbdoc";

    m.def("add", [](int a, int b) { return a+b; }, R"pbdoc(
        Add 'em up
    )pbdoc");
}
