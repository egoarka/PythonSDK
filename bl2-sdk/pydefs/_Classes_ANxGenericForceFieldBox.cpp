#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxGenericForceFieldBox(py::module &m)
{
    py::class_< ANxGenericForceFieldBox,  ANxGenericForceField   >(m, "ANxGenericForceFieldBox")
		.def_static("StaticClass", &ANxGenericForceFieldBox::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RenderComponent", &ANxGenericForceFieldBox::RenderComponent)
        .def_readwrite("BoxExtent", &ANxGenericForceFieldBox::BoxExtent)
        .def("DoInitRBPhys", &ANxGenericForceFieldBox::DoInitRBPhys)
          ;
}