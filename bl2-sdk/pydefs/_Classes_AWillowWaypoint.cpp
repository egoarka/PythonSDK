#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowWaypoint()
{
    class_< AWillowWaypoint, bases< ATrigger >  , boost::noncopyable>("AWillowWaypoint", no_init)
        .def_readwrite("VfTable_IIMission", &AWillowWaypoint::VfTable_IIMission)
        .def_readwrite("WaypointInfo", &AWillowWaypoint::WaypointInfo)
        .def_readwrite("AreaRadius", &AWillowWaypoint::AreaRadius)
        .def_readwrite("TouchVolumes", &AWillowWaypoint::TouchVolumes)
        .def_readwrite("VfTable_IIUsable", &AWillowTrigger::VfTable_IIUsable)
        .def_readwrite("HUDIcon", &AWillowTrigger::HUDIcon)
        .def_readwrite("CostsToUseType", &AWillowTrigger::CostsToUseType)
        .def_readwrite("HUDIconDef", &AWillowTrigger::HUDIconDef)
        .def_readwrite("ParticleHighlight", &AWillowTrigger::ParticleHighlight)
        .def_readwrite("TriggerSprite", &AWillowTrigger::TriggerSprite)
        .def_readwrite("CostsToUseAmount", &AWillowTrigger::CostsToUseAmount)
        .def("StaticClass", &AWillowWaypoint::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventMissionReactionObjectiveComplete", &AWillowWaypoint::eventMissionReactionObjectiveComplete)
        .def("eventMissionReactionObjectiveCleared", &AWillowWaypoint::eventMissionReactionObjectiveCleared)
        .def("eventMissionReactionObjectiveUpdated", &AWillowWaypoint::eventMissionReactionObjectiveUpdated)
        .def("eventMissionReactionObjectiveSetChanged", &AWillowWaypoint::eventMissionReactionObjectiveSetChanged)
        .def("eventMissionReactionLevelLoad", &AWillowWaypoint::eventMissionReactionLevelLoad)
        .def("eventMissionReactionStatusChanged", &AWillowWaypoint::eventMissionReactionStatusChanged)
        .def("ClearWaypoint", &AWillowWaypoint::ClearWaypoint)
        .def("ProcessPlayerTouch", &AWillowWaypoint::ProcessPlayerTouch)
        .def("eventTouch", &AWillowWaypoint::eventTouch)
        .def("PostBeginPlay", &AWillowWaypoint::PostBeginPlay)
        .def("NotifyUserCouldNotAffordAttemptedUse", &AWillowTrigger::NotifyUserCouldNotAffordAttemptedUse)
        .def("SetInteractionIcon", &AWillowTrigger::SetInteractionIcon)
        .def("UseObject", &AWillowTrigger::UseObject)
        .staticmethod("StaticClass")
  ;
}