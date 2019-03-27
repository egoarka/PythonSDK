#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerUIPreferences(py::module &m)
{
    py::class_< FPlayerUIPreferences >(m, "FPlayerUIPreferences")
        .def_readwrite("CharacterName", &FPlayerUIPreferences::CharacterName)
        .def_readwrite("PrimaryColor", &FPlayerUIPreferences::PrimaryColor)
        .def_readwrite("SecondaryColor", &FPlayerUIPreferences::SecondaryColor)
        .def_readwrite("TertiaryColor", &FPlayerUIPreferences::TertiaryColor)
  ;
}