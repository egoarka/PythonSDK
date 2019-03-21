#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATemporalField()
{
    class_< ATemporalField, bases< AActor >  , boost::noncopyable>("ATemporalField", no_init)
        .def_readwrite("StaticMeshComponent", &ATemporalField::StaticMeshComponent)
        .def_readwrite("SkillEffect", &ATemporalField::SkillEffect)
        .def_readwrite("MyTickMultiplier", &ATemporalField::MyTickMultiplier)
        .def_readwrite("TransitionDistancePercent", &ATemporalField::TransitionDistancePercent)
        .def_readwrite("TouchEffectTemplate", &ATemporalField::TouchEffectTemplate)
        .def("StaticClass", &ATemporalField::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayTouchEffect", &ATemporalField::PlayTouchEffect)
        .def("CalculateTickMultiplierForActor", &ATemporalField::CalculateTickMultiplierForActor)
        .def("eventDestroyed", &ATemporalField::eventDestroyed)
        .def("eventUnTouch", &ATemporalField::eventUnTouch)
        .def("eventTouch", &ATemporalField::eventTouch)
        .def("eventPostBeginPlay", &ATemporalField::eventPostBeginPlay)
        .def("GetFieldNormal", &ATemporalField::GetFieldNormal)
        .def("IsTemporalFieldDebugEnabled", &ATemporalField::IsTemporalFieldDebugEnabled)
        .def("ToggleTemporalFieldDebug", &ATemporalField::ToggleTemporalFieldDebug)
        .staticmethod("StaticClass")
  ;
}