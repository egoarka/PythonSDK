#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_LeftUpperEyelidLook(py::module &m)
{
    py::class_< UWillowSkelControl_LeftUpperEyelidLook,  UWillowSkelControl_UpperEyelidLook   >(m, "UWillowSkelControl_LeftUpperEyelidLook")
		.def_static("StaticClass", &UWillowSkelControl_LeftUpperEyelidLook::StaticClass, py::return_value_policy::reference)
          ;
}