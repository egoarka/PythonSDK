#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetMesh(py::module &m)
{
    py::class_< USeqAct_SetMesh,  USequenceAction   >(m, "USeqAct_SetMesh")
		.def_static("StaticClass", &USeqAct_SetMesh::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NewSkeletalMesh", &USeqAct_SetMesh::NewSkeletalMesh)
        .def_readwrite("NewStaticMesh", &USeqAct_SetMesh::NewStaticMesh)
        .def_readwrite("MeshType", &USeqAct_SetMesh::MeshType)
          ;
}