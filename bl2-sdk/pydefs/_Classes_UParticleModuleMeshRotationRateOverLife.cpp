#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotationRateOverLife(py::module &m)
{
    py::class_< UParticleModuleMeshRotationRateOverLife,  UParticleModuleRotationRateBase   >(m, "UParticleModuleMeshRotationRateOverLife")
		.def_static("StaticClass", &UParticleModuleMeshRotationRateOverLife::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RotRate", &UParticleModuleMeshRotationRateOverLife::RotRate)
          ;
}