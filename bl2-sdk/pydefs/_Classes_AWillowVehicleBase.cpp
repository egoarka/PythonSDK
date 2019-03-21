#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowVehicleBase()
{
    class_< AWillowVehicleBase, bases< ASVehicle >  , boost::noncopyable>("AWillowVehicleBase", no_init)
        .def_readwrite("VfTable_IIResourcePoolProvider", &AWillowVehicleBase::VfTable_IIResourcePoolProvider)
        .def_readwrite("VfTable_IIBodyPawn", &AWillowVehicleBase::VfTable_IIBodyPawn)
        .def_readwrite("CustomGravityZ", &AWillowVehicleBase::CustomGravityZ)
        .def_readwrite("SightOriginType", &AWillowVehicleBase::SightOriginType)
        .def_readwrite("SightOffset", &AWillowVehicleBase::SightOffset)
        .def_readwrite("SightSocket", &AWillowVehicleBase::SightSocket)
        .def_readwrite("LookingYaw", &AWillowVehicleBase::LookingYaw)
        .def_readwrite("LookingYawSpeed", &AWillowVehicleBase::LookingYawSpeed)
        .def_readwrite("LightProjMgr", &AWillowVehicleBase::LightProjMgr)
        .def_readwrite("WeaponAmmo", &AWillowVehicleBase::WeaponAmmo)
        .def_readwrite("MaxWeaponAmmo", &AWillowVehicleBase::MaxWeaponAmmo)
        .def_readwrite("WeaponTypeScaleformName", &AWillowVehicleBase::WeaponTypeScaleformName)
        .def_readwrite("WeaponTypeScaleformDLCClip", &AWillowVehicleBase::WeaponTypeScaleformDLCClip)
        .def_readwrite("ExitAnimationInUse", &AWillowVehicleBase::ExitAnimationInUse)
        .def("StaticClass", &AWillowVehicleBase::StaticClass, return_value_policy< reference_existing_object >())
        .def("Destroyed_HandleDriver", &AWillowVehicleBase::Destroyed_HandleDriver)
        .def("TeleportVehicleToStation", &AWillowVehicleBase::TeleportVehicleToStation)
        .def("TeleportVehicleToLocation", &AWillowVehicleBase::TeleportVehicleToLocation)
        .def("NoFailSetPawnLocation", &AWillowVehicleBase::NoFailSetPawnLocation)
        .def("UnsitAnimFinished", &AWillowVehicleBase::UnsitAnimFinished)
        .def("TeleportExitingDriver", &AWillowVehicleBase::TeleportExitingDriver)
        .def("FindAutoExitGearbox", &AWillowVehicleBase::FindAutoExitGearbox)
        .def("PlaceExitingDriver", &AWillowVehicleBase::PlaceExitingDriver)
        .def("ExitAnimIsSafeToUse", &AWillowVehicleBase::ExitAnimIsSafeToUse)
        .def("GetExitLocationForAnim", &AWillowVehicleBase::GetExitLocationForAnim)
        .def("ExitLocationIsSafeToUse", &AWillowVehicleBase::ExitLocationIsSafeToUse)
        .def("ResurrectVehicle", &AWillowVehicleBase::ResurrectVehicle)
        .def("GetWillowVehicle", &AWillowVehicleBase::GetWillowVehicle, return_value_policy< reference_existing_object >())
        .def("ClientUnsitDriver", &AWillowVehicleBase::ClientUnsitDriver)
        .def("GetDefaultExitLocation", &AWillowVehicleBase::GetDefaultExitLocation)
        .def("GetLightProjMgrFor", &AWillowVehicleBase::GetLightProjMgrFor, return_value_policy< reference_existing_object >())
        .def("IsOccupantAllowedToTakeDamage", &AWillowVehicleBase::IsOccupantAllowedToTakeDamage)
        .def("CanBeBaseForPawn", &AWillowVehicleBase::CanBeBaseForPawn)
        .def("GetPawnToTeleport", &AWillowVehicleBase::GetPawnToTeleport, return_value_policy< reference_existing_object >())
        .def("ProcessViewRotationInVehicle", &AWillowVehicleBase::ProcessViewRotationInVehicle)
        .def("ComputeViewPitchRange", &AWillowVehicleBase::ComputeViewPitchRange)
        .def("GetAWillowAIPawn", &AWillowVehicleBase::GetAWillowAIPawn, return_value_policy< reference_existing_object >())
        .def("GetAWillowPlayerPawn", &AWillowVehicleBase::GetAWillowPlayerPawn, return_value_policy< reference_existing_object >())
        .def("GetAWillowPawn", &AWillowVehicleBase::GetAWillowPawn, return_value_policy< reference_existing_object >())
        .def("GetResourcePoolForResourceDefinition", &AWillowVehicleBase::GetResourcePoolForResourceDefinition)
        .def("VehicleAdjustInput", &AWillowVehicleBase::VehicleAdjustInput)
        .def("VehicleNoLookBack", &AWillowVehicleBase::VehicleNoLookBack)
        .def("VehicleLookBack", &AWillowVehicleBase::VehicleLookBack)
        .def("GetExitAnimEndPosition", &AWillowVehicleBase::GetExitAnimEndPosition)
        .def("AttachDriver", &AWillowVehicleBase::AttachDriver)
        .def("eventDriverLeave", &AWillowVehicleBase::eventDriverLeave)
        .def("DriverAllowedToLeave", &AWillowVehicleBase::DriverAllowedToLeave)
        .def("DriverEnter", &AWillowVehicleBase::DriverEnter)
        .def("UnPossessed", &AWillowVehicleBase::UnPossessed)
        .def("NeedToTurn", &AWillowVehicleBase::NeedToTurn)
        .def("GetDamageScaling", &AWillowVehicleBase::GetDamageScaling)
        .def("BotFire", &AWillowVehicleBase::BotFire)
        .def("ChooseFireMode", &AWillowVehicleBase::ChooseFireMode)
        .def("Suicide", &AWillowVehicleBase::Suicide)
        .def("ServerChangeSeat", &AWillowVehicleBase::ServerChangeSeat)
        .def("AdjacentSeat", &AWillowVehicleBase::AdjacentSeat)
        .def("OnTurretStatusChange", &AWillowVehicleBase::OnTurretStatusChange)
        .def("IsTargetable", &AWillowVehicleBase::IsTargetable)
        .def("GetVehicleAndSeatIndex", &AWillowVehicleBase::GetVehicleAndSeatIndex)
        .def("TickReplicatedAmmoCount", &AWillowVehicleBase::TickReplicatedAmmoCount)
        .staticmethod("StaticClass")
  ;
}