#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleBeamTarget()
{
    class_< UParticleModuleBeamTarget, bases< UParticleModuleBeamBase >  , boost::noncopyable>("UParticleModuleBeamTarget", no_init)
        .def_readwrite("TargetMethod", &UParticleModuleBeamTarget::TargetMethod)
        .def_readwrite("TargetTangentMethod", &UParticleModuleBeamTarget::TargetTangentMethod)
        .def_readwrite("TargetName", &UParticleModuleBeamTarget::TargetName)
        .def_readwrite("Target", &UParticleModuleBeamTarget::Target)
        .def_readwrite("TargetTangent", &UParticleModuleBeamTarget::TargetTangent)
        .def_readwrite("TargetStrength", &UParticleModuleBeamTarget::TargetStrength)
        .def_readwrite("LockRadius", &UParticleModuleBeamTarget::LockRadius)
        .def("StaticClass", &UParticleModuleBeamTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}