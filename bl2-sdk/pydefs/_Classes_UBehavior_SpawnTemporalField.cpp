#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnTemporalField()
{
    class_< UBehavior_SpawnTemporalField, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SpawnTemporalField", no_init)
        .def_readwrite("TemporalField", &UBehavior_SpawnTemporalField::TemporalField)
        .def_readwrite("LifeSpan", &UBehavior_SpawnTemporalField::LifeSpan)
        .def_readwrite("LocationContext", &UBehavior_SpawnTemporalField::LocationContext)
        .def_readwrite("AttachmentPointName", &UBehavior_SpawnTemporalField::AttachmentPointName)
        .def_readwrite("RelativeLocation", &UBehavior_SpawnTemporalField::RelativeLocation)
        .def_readwrite("RelativeRotation", &UBehavior_SpawnTemporalField::RelativeRotation)
        .def("StaticClass", &UBehavior_SpawnTemporalField::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttachmentLocation", &UBehavior_SpawnTemporalField::GetAttachmentLocation)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnTemporalField::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}