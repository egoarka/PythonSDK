#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UITinnitusTarget(py::module &m)
{
    py::class_< UITinnitusTarget,  UInterface   >(m, "UITinnitusTarget")
		.def_static("StaticClass", &UITinnitusTarget::StaticClass, py::return_value_policy::reference)
        .def("TriggerTinnitus", &UITinnitusTarget::TriggerTinnitus)
        .def("TriggerTinnitusFromLocation", &UITinnitusTarget::TriggerTinnitusFromLocation)
          ;
}