#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVersusDuelBehavior(py::module &m)
{
    py::class_< UWillowVersusDuelBehavior,  UBehaviorBase   >(m, "UWillowVersusDuelBehavior")
		.def_static("StaticClass", &UWillowVersusDuelBehavior::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UWillowVersusDuelBehavior::ApplyBehaviorToContext)
          ;
}