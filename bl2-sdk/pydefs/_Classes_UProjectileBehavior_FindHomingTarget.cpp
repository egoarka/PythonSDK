#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_FindHomingTarget(py::module &m)
{
    py::class_< UProjectileBehavior_FindHomingTarget,  UProjectileBehaviorBase   >(m, "UProjectileBehavior_FindHomingTarget")
		.def_static("StaticClass", &UProjectileBehavior_FindHomingTarget::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TargetType", &UProjectileBehavior_FindHomingTarget::TargetType)
        .def_readwrite("TargetSearchFOVAngle", &UProjectileBehavior_FindHomingTarget::TargetSearchFOVAngle)
        .def_readwrite("TargetSearchRange", &UProjectileBehavior_FindHomingTarget::TargetSearchRange)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_FindHomingTarget::ApplyBehaviorToContext)
          ;
}