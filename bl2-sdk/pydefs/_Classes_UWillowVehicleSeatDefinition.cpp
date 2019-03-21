#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowVehicleSeatDefinition()
{
    class_< UWillowVehicleSeatDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UWillowVehicleSeatDefinition", no_init)
        .def_readwrite("VirtualSeatKey", &UWillowVehicleSeatDefinition::VirtualSeatKey)
        .def_readwrite("InteractIcon", &UWillowVehicleSeatDefinition::InteractIcon)
        .def_readwrite("SeatInteractTextDefinition", &UWillowVehicleSeatDefinition::SeatInteractTextDefinition)
        .def_readwrite("PlayerInteractionLeftMinAngle", &UWillowVehicleSeatDefinition::PlayerInteractionLeftMinAngle)
        .def_readwrite("PlayerInteractionRightMaxAngle", &UWillowVehicleSeatDefinition::PlayerInteractionRightMaxAngle)
        .def_readwrite("SeatAnchor", &UWillowVehicleSeatDefinition::SeatAnchor)
        .def_readwrite("CameraDef", &UWillowVehicleSeatDefinition::CameraDef)
        .def_readwrite("OccupantCullDistance", &UWillowVehicleSeatDefinition::OccupantCullDistance)
        .def_readwrite("ViewLimitLowerLeft", &UWillowVehicleSeatDefinition::ViewLimitLowerLeft)
        .def_readwrite("ViewLimitUpperRight", &UWillowVehicleSeatDefinition::ViewLimitUpperRight)
        .def_readwrite("WeaponBalanceDefinition", &UWillowVehicleSeatDefinition::WeaponBalanceDefinition)
        .def_readwrite("GunAttachmentSocket", &UWillowVehicleSeatDefinition::GunAttachmentSocket)
        .def_readwrite("MaxFinalAimAdjustment", &UWillowVehicleSeatDefinition::MaxFinalAimAdjustment)
        .def_readwrite("GunSocket", &UWillowVehicleSeatDefinition::GunSocket)
        .def_readwrite("GunPivotPoints", &UWillowVehicleSeatDefinition::GunPivotPoints)
        .def_readwrite("TurretControls", &UWillowVehicleSeatDefinition::TurretControls)
        .def_readwrite("WeaponFireSwitch", &UWillowVehicleSeatDefinition::WeaponFireSwitch)
        .def_readwrite("TurretVarPrefix", &UWillowVehicleSeatDefinition::TurretVarPrefix)
        .def_readwrite("WeaponFireSMD", &UWillowVehicleSeatDefinition::WeaponFireSMD)
        .def_readwrite("NextSeatIndex", &UWillowVehicleSeatDefinition::NextSeatIndex)
        .def_readwrite("Anim_SeatSwap", &UWillowVehicleSeatDefinition::Anim_SeatSwap)
        .def_readwrite("Anim_EnterLeft", &UWillowVehicleSeatDefinition::Anim_EnterLeft)
        .def_readwrite("Anim_EnterRight", &UWillowVehicleSeatDefinition::Anim_EnterRight)
        .def_readwrite("Anim_EnterFront", &UWillowVehicleSeatDefinition::Anim_EnterFront)
        .def_readwrite("Anim_EnterBack", &UWillowVehicleSeatDefinition::Anim_EnterBack)
        .def_readwrite("Anim_Idle", &UWillowVehicleSeatDefinition::Anim_Idle)
        .def_readwrite("Anim_Hijack", &UWillowVehicleSeatDefinition::Anim_Hijack)
        .def_readwrite("Anim_Exit1", &UWillowVehicleSeatDefinition::Anim_Exit1)
        .def_readwrite("Anim_Exit2", &UWillowVehicleSeatDefinition::Anim_Exit2)
        .def_readwrite("LeftHandPlacementName", &UWillowVehicleSeatDefinition::LeftHandPlacementName)
        .def_readwrite("RightHandPlacementName", &UWillowVehicleSeatDefinition::RightHandPlacementName)
        .def_readwrite("GrenadeThrowHeight", &UWillowVehicleSeatDefinition::GrenadeThrowHeight)
        .def_readwrite("SeatAIDef", &UWillowVehicleSeatDefinition::SeatAIDef)
        .def_readwrite("HijackSide", &UWillowVehicleSeatDefinition::HijackSide)
        .def_readwrite("AISeatPos", &UWillowVehicleSeatDefinition::AISeatPos)
        .def_readwrite("DamageRules", &UWillowVehicleSeatDefinition::DamageRules)
        .def_readwrite("PreferredExitSide", &UWillowVehicleSeatDefinition::PreferredExitSide)
        .def_readwrite("DontResetWeaponFireSwitchPerShot", &UWillowVehicleSeatDefinition::DontResetWeaponFireSwitchPerShot)
        .def_readwrite("HijackAimSocket", &UWillowVehicleSeatDefinition::HijackAimSocket)
        .def_readwrite("DamageTransferFactor", &UWillowVehicleSeatDefinition::DamageTransferFactor)
        .def_readwrite("DamageTransferFactor_AI", &UWillowVehicleSeatDefinition::DamageTransferFactor_AI)
        .def_readwrite("ExtraDeathImpulsesDuringRagdoll", &UWillowVehicleSeatDefinition::ExtraDeathImpulsesDuringRagdoll)
        .def_readwrite("StatusEffectToApplyOnKillEjection", &UWillowVehicleSeatDefinition::StatusEffectToApplyOnKillEjection)
        .def_readwrite("HUD_SeatIndexForWeapon", &UWillowVehicleSeatDefinition::HUD_SeatIndexForWeapon)
        .def_readwrite("EjectRandMin", &UWillowVehicleSeatDefinition::EjectRandMin)
        .def_readwrite("EjectRandMax", &UWillowVehicleSeatDefinition::EjectRandMax)
        .def_readwrite("ControllerRumbleWhenRotating", &UWillowVehicleSeatDefinition::ControllerRumbleWhenRotating)
        .def("StaticClass", &UWillowVehicleSeatDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}