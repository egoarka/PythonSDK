#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloatUniformCurve(py::module &m)
{
    py::class_< UDistributionFloatUniformCurve,  UDistributionFloat   >(m, "UDistributionFloatUniformCurve")
		.def_static("StaticClass", &UDistributionFloatUniformCurve::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ConstantCurve", &UDistributionFloatUniformCurve::ConstantCurve)
          ;
}