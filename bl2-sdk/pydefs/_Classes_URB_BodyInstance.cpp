#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URB_BodyInstance()
{
    class_< URB_BodyInstance, bases< UObject >  , boost::noncopyable>("URB_BodyInstance", no_init)
        .def_readwrite("OwnerComponent", &URB_BodyInstance::OwnerComponent)
        .def_readwrite("BodyIndex", &URB_BodyInstance::BodyIndex)
        .def_readwrite("Velocity", &URB_BodyInstance::Velocity)
        .def_readwrite("PreviousVelocity", &URB_BodyInstance::PreviousVelocity)
        .def_readwrite("SceneIndex", &URB_BodyInstance::SceneIndex)
        .def_readwrite("BodyData", &URB_BodyInstance::BodyData)
        .def_readwrite("BoneSpring", &URB_BodyInstance::BoneSpring)
        .def_readwrite("BoneSpringKinActor", &URB_BodyInstance::BoneSpringKinActor)
        .def_readwrite("BoneLinearSpring", &URB_BodyInstance::BoneLinearSpring)
        .def_readwrite("BoneLinearDamping", &URB_BodyInstance::BoneLinearDamping)
        .def_readwrite("BoneAngularSpring", &URB_BodyInstance::BoneAngularSpring)
        .def_readwrite("BoneAngularDamping", &URB_BodyInstance::BoneAngularDamping)
        .def_readwrite("OverextensionThreshold", &URB_BodyInstance::OverextensionThreshold)
        .def_readwrite("CustomGravityFactor", &URB_BodyInstance::CustomGravityFactor)
        .def_readwrite("LastEffectPlayedTime", &URB_BodyInstance::LastEffectPlayedTime)
        .def_readwrite("PhysMaterialOverride", &URB_BodyInstance::PhysMaterialOverride)
        .def_readwrite("ContactReportForceThreshold", &URB_BodyInstance::ContactReportForceThreshold)
        .def_readwrite("InstanceMassScale", &URB_BodyInstance::InstanceMassScale)
        .def_readwrite("InstanceDampingScale", &URB_BodyInstance::InstanceDampingScale)
        .def("StaticClass", &URB_BodyInstance::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetNotifyCollision", &URB_BodyInstance::SetNotifyCollision)
        .def("UpdateDampingProperties", &URB_BodyInstance::UpdateDampingProperties)
        .def("UpdateMassProperties", &URB_BodyInstance::UpdateMassProperties)
        .def("SetContactReportForceThreshold", &URB_BodyInstance::SetContactReportForceThreshold)
        .def("EnableCollisionResponse", &URB_BodyInstance::EnableCollisionResponse)
        .def("SetPhysMaterialOverride", &URB_BodyInstance::SetPhysMaterialOverride)
        .def("SetBlockRigidBody", &URB_BodyInstance::SetBlockRigidBody)
        .def("SetBoneSpringTarget", &URB_BodyInstance::SetBoneSpringTarget)
        .def("SetBoneSpringParams", &URB_BodyInstance::SetBoneSpringParams)
        .def("EnableBoneSpring", &URB_BodyInstance::EnableBoneSpring)
        .def("GetUnrealWorldVelocityAtPoint", &URB_BodyInstance::GetUnrealWorldVelocityAtPoint)
        .def("GetUnrealWorldAngularVelocity", &URB_BodyInstance::GetUnrealWorldAngularVelocity)
        .def("GetUnrealWorldVelocity", &URB_BodyInstance::GetUnrealWorldVelocity)
        .def("GetUnrealWorldTM", &URB_BodyInstance::GetUnrealWorldTM)
        .def("GetPhysicsAssetInstance", &URB_BodyInstance::GetPhysicsAssetInstance, return_value_policy< reference_existing_object >())
        .def("IsValidBodyInstance", &URB_BodyInstance::IsValidBodyInstance)
        .def("IsFixed", &URB_BodyInstance::IsFixed)
        .def("SetFixed", &URB_BodyInstance::SetFixed)
        .def("GetBodyMass", &URB_BodyInstance::GetBodyMass)
        .staticmethod("StaticClass")
  ;
}