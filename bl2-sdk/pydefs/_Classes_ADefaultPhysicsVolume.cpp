#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADefaultPhysicsVolume()
{
    class_< ADefaultPhysicsVolume, bases< AVolume >  , boost::noncopyable>("ADefaultPhysicsVolume", no_init)
        .def_readwrite("ZoneVelocity", &APhysicsVolume::ZoneVelocity)
        .def_readwrite("GroundFriction", &APhysicsVolume::GroundFriction)
        .def_readwrite("TerminalVelocity", &APhysicsVolume::TerminalVelocity)
        .def_readwrite("DamagePerSec", &APhysicsVolume::DamagePerSec)
        .def_readwrite("DamageType", &APhysicsVolume::DamageType)
        .def_readwrite("DamageTypeDefinition", &APhysicsVolume::DamageTypeDefinition)
        .def_readwrite("ImpactDefinition", &APhysicsVolume::ImpactDefinition)
        .def_readwrite("Priority", &APhysicsVolume::Priority)
        .def_readwrite("FluidFriction", &APhysicsVolume::FluidFriction)
        .def_readwrite("PainInterval", &APhysicsVolume::PainInterval)
        .def_readwrite("RigidBodyDamping", &APhysicsVolume::RigidBodyDamping)
        .def_readwrite("MaxDampingForce", &APhysicsVolume::MaxDampingForce)
        .def_readwrite("PainTimer", &APhysicsVolume::PainTimer)
        .def_readwrite("DamageInstigator", &APhysicsVolume::DamageInstigator)
        .def_readwrite("NextPhysicsVolume", &APhysicsVolume::NextPhysicsVolume)
        .def("StaticClass", &ADefaultPhysicsVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDestroyed", &ADefaultPhysicsVolume::eventDestroyed)
        .def("ApplyCheckpointRecord", &APhysicsVolume::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &APhysicsVolume::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &APhysicsVolume::ShouldSaveForCheckpoint)
        .def("OnSetDamageInstigator", &APhysicsVolume::OnSetDamageInstigator)
        .def("NotifyPawnBecameViewTarget", &APhysicsVolume::NotifyPawnBecameViewTarget)
        .def("ModifyPlayer", &APhysicsVolume::ModifyPlayer)
        .def("CausePainTo", &APhysicsVolume::CausePainTo)
        .def("eventTouch", &APhysicsVolume::eventTouch)
        .def("TimerPop", &APhysicsVolume::TimerPop)
        .def("eventCollisionChanged", &APhysicsVolume::eventCollisionChanged)
        .def("OnToggle", &APhysicsVolume::OnToggle)
        .def("eventPawnLeavingVolume", &APhysicsVolume::eventPawnLeavingVolume)
        .def("eventPawnEnteredVolume", &APhysicsVolume::eventPawnEnteredVolume)
        .def("eventActorLeavingVolume", &APhysicsVolume::eventActorLeavingVolume)
        .def("eventActorEnteredVolume", &APhysicsVolume::eventActorEnteredVolume)
        .def("eventPhysicsChangedFor", &APhysicsVolume::eventPhysicsChangedFor)
        .def("Reset", &APhysicsVolume::Reset)
        .def("eventPostBeginPlay", &APhysicsVolume::eventPostBeginPlay)
        .def("GetZoneVelocityForActor", &APhysicsVolume::GetZoneVelocityForActor)
        .def("GetGravityZ", &APhysicsVolume::GetGravityZ)
        .staticmethod("StaticClass")
  ;
}