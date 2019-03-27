#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DamageSourceSwitch(py::module &m)
{
    py::class_< UBehavior_DamageSourceSwitch,  UBehaviorBase   >(m, "UBehavior_DamageSourceSwitch")
		.def_static("StaticClass", &UBehavior_DamageSourceSwitch::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DamageSource", &UBehavior_DamageSourceSwitch::DamageSource)
        .def("ApplyBehaviorToContext", &UBehavior_DamageSourceSwitch::ApplyBehaviorToContext)
          ;
}