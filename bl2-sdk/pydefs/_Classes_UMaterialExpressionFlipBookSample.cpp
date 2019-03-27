#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFlipBookSample(py::module &m)
{
    py::class_< UMaterialExpressionFlipBookSample,  UMaterialExpressionTextureSample   >(m, "UMaterialExpressionFlipBookSample")
		.def_static("StaticClass", &UMaterialExpressionFlipBookSample::StaticClass, py::return_value_policy::reference)
          ;
}