#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AVolumePathNode(py::module &m)
{
    py::class_< AVolumePathNode,  APathNode   >(m, "AVolumePathNode")
		.def_static("StaticClass", &AVolumePathNode::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StartingRadius", &AVolumePathNode::StartingRadius)
        .def_readwrite("StartingHeight", &AVolumePathNode::StartingHeight)
          ;
}