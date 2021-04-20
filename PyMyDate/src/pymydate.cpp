#include <pybind11/pybind11.h>
#include "mydate.hpp"

namespace py = pybind11;

PYBIND11_MODULE(pymydate, m) {
	// optional module docstring
    m.doc() = "pybind11 sample MyDate module.";     
    // Add function to module.
    m.def("MyDate_add", &MyDate_add, "A function which adds two numbers");

	py::class_<MyDate>(
			m,
			"MyDate",
			R"pbdoc(Class for storing a date.)pbdoc"
			)
		.def(py::init<int, int, int>())             // Bind class constructor 
		.def("SetDate",     &MyDate::SetDate)
		.def("getYear",	    &MyDate::getYear)
		.def("getMonth",    &MyDate::getMonth)
		.def("getDay",	    &MyDate::getDay);            
}
