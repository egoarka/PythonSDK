#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVariableLink(py::module &m)
{
    py::class_< FVariableLink >(m, "FVariableLink")
        .def_readwrite("Links", &FVariableLink::Links)
  ;
}