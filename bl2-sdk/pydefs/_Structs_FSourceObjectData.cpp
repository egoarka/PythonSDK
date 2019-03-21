#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSourceObjectData()
{
    class_< FSourceObjectData >("FSourceObjectData", no_init)
        .def_readwrite("UniqueId", &FSourceObjectData::UniqueId)
        .def_readwrite("SourceObject", &FSourceObjectData::SourceObject)
        .def_readwrite("SourceLocation", &FSourceObjectData::SourceLocation)
        .def_readwrite("InstigatedByController", &FSourceObjectData::InstigatedByController)
        .def_readwrite("DamageContext", &FSourceObjectData::DamageContext)
        .def_readonly("UnknownData00", &FSourceObjectData::UnknownData00)
        .def_readwrite("StartDamageTime", &FSourceObjectData::StartDamageTime)
        .def_readwrite("TimeElapsedSinceLastDamage", &FSourceObjectData::TimeElapsedSinceLastDamage)
        .def_readwrite("ExplosionDef", &FSourceObjectData::ExplosionDef)
        .def_readwrite("ExplosionScaleIndex", &FSourceObjectData::ExplosionScaleIndex)
        .def_readwrite("InitialDamageRadius", &FSourceObjectData::InitialDamageRadius)
        .def_readwrite("Damage", &FSourceObjectData::Damage)
        .def_readwrite("Momentum", &FSourceObjectData::Momentum)
        .def_readwrite("DamageSource", &FSourceObjectData::DamageSource)
        .def_readwrite("DamageTypeDef", &FSourceObjectData::DamageTypeDef)
        .def_readwrite("ImpactDefinition", &FSourceObjectData::ImpactDefinition)
        .def_readwrite("DamageCauser", &FSourceObjectData::DamageCauser)
        .def_readonly("UnknownData01", &FSourceObjectData::UnknownData01)
        .def_readwrite("HitObject", &FSourceObjectData::HitObject)
        .def_readwrite("BarrelSourceTime", &FSourceObjectData::BarrelSourceTime)
        .def_readwrite("PlantSourceTime", &FSourceObjectData::PlantSourceTime)
  ;
}