#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetUsabilityByMissionDirectives(py::module &m)
{
    py::class_< UBehavior_SetUsabilityByMissionDirectives,  UBehaviorBase   >(m, "UBehavior_SetUsabilityByMissionDirectives")
		.def_static("StaticClass", &UBehavior_SetUsabilityByMissionDirectives::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ChangeUsability", &UBehavior_SetUsabilityByMissionDirectives::ChangeUsability)
        .def("ApplyBehaviorToContext", &UBehavior_SetUsabilityByMissionDirectives::ApplyBehaviorToContext)
          ;
}