#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPopulationDefinition(py::module &m)
{
    py::class_< UWillowPopulationDefinition,  UPopulationDefinition   >(m, "UWillowPopulationDefinition")
		.def_static("StaticClass", &UWillowPopulationDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AIDef", &UWillowPopulationDefinition::AIDef)
        .def_readwrite("ClanDefinition", &UWillowPopulationDefinition::ClanDefinition)
          ;
}