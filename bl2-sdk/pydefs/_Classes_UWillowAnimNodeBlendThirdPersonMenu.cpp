#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendThirdPersonMenu(py::module &m)
{
    py::class_< UWillowAnimNodeBlendThirdPersonMenu,  UAnimNodeBlendList   >(m, "UWillowAnimNodeBlendThirdPersonMenu")
		.def_static("StaticClass", &UWillowAnimNodeBlendThirdPersonMenu::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendThirdPersonMenu::BlendTime)
          ;
}