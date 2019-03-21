#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBeamDamageData()
{
    class_< FBeamDamageData >("FBeamDamageData", no_init)
        .def_readwrite("Momentum", &FBeamDamageData::Momentum)
        .def_readwrite("Amount", &FBeamDamageData::Amount)
        .def_readwrite("Radius", &FBeamDamageData::Radius)
        .def_readwrite("Source", &FBeamDamageData::Source)
        .def_readwrite("TypeDefinition", &FBeamDamageData::TypeDefinition)
        .def_readwrite("BarrelSourceTime", &FBeamDamageData::BarrelSourceTime)
        .def_readwrite("PlantSourceTime", &FBeamDamageData::PlantSourceTime)
        .def_readwrite("DamageCauser", &FBeamDamageData::DamageCauser)
        .def_readonly("UnknownData00", &FBeamDamageData::UnknownData00)
  ;
}