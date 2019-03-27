#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_CharacterDialog(py::module &m)
{
    py::class_< URES_CharacterDialog,  UActionResource   >(m, "URES_CharacterDialog")
		.def_static("StaticClass", &URES_CharacterDialog::StaticClass, py::return_value_policy::reference)
          ;
}