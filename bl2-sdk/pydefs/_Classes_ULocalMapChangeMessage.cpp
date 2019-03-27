#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalMapChangeMessage(py::module &m)
{
    py::class_< ULocalMapChangeMessage,  UWillowLocalMessage   >(m, "ULocalMapChangeMessage")
		.def_static("StaticClass", &ULocalMapChangeMessage::StaticClass, py::return_value_policy::reference)
        .def("ClientReceive", &ULocalMapChangeMessage::ClientReceive)
        .def("GetString", &ULocalMapChangeMessage::GetString)
          ;
}