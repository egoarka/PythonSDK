#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActorMATSpawnable(py::module &m)
{
    py::class_< ASkeletalMeshActorMATSpawnable,  ASkeletalMeshActorMAT   >(m, "ASkeletalMeshActorMATSpawnable")
		.def_static("StaticClass", &ASkeletalMeshActorMATSpawnable::StaticClass, py::return_value_policy::reference)
          ;
}