#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeTargetsIAmExposedTo(py::module &m)
{
    py::class_< UTargetIteratorPrioritizeTargetsIAmExposedTo,  UTargetIterator   >(m, "UTargetIteratorPrioritizeTargetsIAmExposedTo")
		.def_static("StaticClass", &UTargetIteratorPrioritizeTargetsIAmExposedTo::StaticClass, py::return_value_policy::reference)
          ;
}