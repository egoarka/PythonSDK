#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetTimeOfDay(py::module &m)
{
    py::class_< UBehavior_SetTimeOfDay,  UBehaviorBase   >(m, "UBehavior_SetTimeOfDay")
		.def_static("StaticClass", &UBehavior_SetTimeOfDay::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TimeOfDay", &UBehavior_SetTimeOfDay::TimeOfDay)
        .def("ApplyBehaviorToContext", &UBehavior_SetTimeOfDay::ApplyBehaviorToContext)
          ;
}