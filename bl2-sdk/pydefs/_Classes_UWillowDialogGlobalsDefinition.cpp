#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDialogGlobalsDefinition()
{
    class_< UWillowDialogGlobalsDefinition, bases< UGearboxDialogGlobalsDefinition >  , boost::noncopyable>("UWillowDialogGlobalsDefinition", no_init)
        .def_readwrite("DefaultTemplateGroup", &UWillowDialogGlobalsDefinition::DefaultTemplateGroup)
        .def_readwrite("DET_Jump", &UWillowDialogGlobalsDefinition::DET_Jump)
        .def_readwrite("DET_JumpLand", &UWillowDialogGlobalsDefinition::DET_JumpLand)
        .def_readwrite("DET_KilledChampion", &UWillowDialogGlobalsDefinition::DET_KilledChampion)
        .def_readwrite("DET_SkillKill", &UWillowDialogGlobalsDefinition::DET_SkillKill)
        .def_readwrite("KillStreakTargetScore", &UWillowDialogGlobalsDefinition::KillStreakTargetScore)
        .def_readwrite("KillPointValue", &UWillowDialogGlobalsDefinition::KillPointValue)
        .def_readwrite("DefaultKillScoreDecayRate", &UWillowDialogGlobalsDefinition::DefaultKillScoreDecayRate)
        .def_readwrite("LastKillTimeVDecayRate", &UWillowDialogGlobalsDefinition::LastKillTimeVDecayRate)
        .def_readwrite("DET_KillStreak", &UWillowDialogGlobalsDefinition::DET_KillStreak)
        .def_readwrite("DET_ChallengeCompleted", &UWillowDialogGlobalsDefinition::DET_ChallengeCompleted)
        .def_readwrite("DET_JoinedGame", &UWillowDialogGlobalsDefinition::DET_JoinedGame)
        .def_readwrite("DET_SeatSwap", &UWillowDialogGlobalsDefinition::DET_SeatSwap)
        .def_readwrite("DET_VehicleCatchAir", &UWillowDialogGlobalsDefinition::DET_VehicleCatchAir)
        .def_readwrite("VehicleCatchAirHangTime", &UWillowDialogGlobalsDefinition::VehicleCatchAirHangTime)
        .def_readwrite("DET_KilledEnemyVehicle", &UWillowDialogGlobalsDefinition::DET_KilledEnemyVehicle)
        .def_readwrite("DET_VehicleLowHealth", &UWillowDialogGlobalsDefinition::DET_VehicleLowHealth)
        .def_readwrite("VehicleLowHealthThreshold", &UWillowDialogGlobalsDefinition::VehicleLowHealthThreshold)
        .def_readwrite("DET_VehicleFlipped", &UWillowDialogGlobalsDefinition::DET_VehicleFlipped)
        .def_readwrite("DET_RanOverEnemy", &UWillowDialogGlobalsDefinition::DET_RanOverEnemy)
        .def_readwrite("RanOverEnemyMinVelocity", &UWillowDialogGlobalsDefinition::RanOverEnemyMinVelocity)
        .def_readwrite("DET_HitPlayerVehicle", &UWillowDialogGlobalsDefinition::DET_HitPlayerVehicle)
        .def_readwrite("DET_VehicleSpawn", &UWillowDialogGlobalsDefinition::DET_VehicleSpawn)
        .def_readwrite("DET_CriticalHitKill", &UWillowDialogGlobalsDefinition::DET_CriticalHitKill)
        .def_readwrite("DET_CriticalHit", &UWillowDialogGlobalsDefinition::DET_CriticalHit)
        .def_readwrite("DET_OutOfAmmo", &UWillowDialogGlobalsDefinition::DET_OutOfAmmo)
        .def_readwrite("DET_Reloading", &UWillowDialogGlobalsDefinition::DET_Reloading)
        .def_readwrite("WeaponMinRarityLevel", &UWillowDialogGlobalsDefinition::WeaponMinRarityLevel)
        .def_readwrite("DET_RareWeaponEquipped", &UWillowDialogGlobalsDefinition::DET_RareWeaponEquipped)
        .def_readwrite("DET_PlayerIdle", &UWillowDialogGlobalsDefinition::DET_PlayerIdle)
        .def_readwrite("IdleTimeOut", &UWillowDialogGlobalsDefinition::IdleTimeOut)
        .def_readwrite("DET_PlayerDown", &UWillowDialogGlobalsDefinition::DET_PlayerDown)
        .def_readwrite("DET_Death", &UWillowDialogGlobalsDefinition::DET_Death)
        .def_readwrite("DET_DeathByFire", &UWillowDialogGlobalsDefinition::DET_DeathByFire)
        .def_readwrite("DET_DeathByShock", &UWillowDialogGlobalsDefinition::DET_DeathByShock)
        .def_readwrite("DET_Damaged", &UWillowDialogGlobalsDefinition::DET_Damaged)
        .def_readwrite("DET_DamagedCritical", &UWillowDialogGlobalsDefinition::DET_DamagedCritical)
        .def_readwrite("DET_ShieldDown", &UWillowDialogGlobalsDefinition::DET_ShieldDown)
        .def_readwrite("DET_PlayerDownReact", &UWillowDialogGlobalsDefinition::DET_PlayerDownReact)
        .def_readwrite("DET_PlayerDeadReact", &UWillowDialogGlobalsDefinition::DET_PlayerDeadReact)
        .def_readwrite("DET_GrenadeReact", &UWillowDialogGlobalsDefinition::DET_GrenadeReact)
        .def_readwrite("HealedPlayerReviveTriggerValue", &UWillowDialogGlobalsDefinition::HealedPlayerReviveTriggerValue)
        .def_readwrite("DET_HealedPlayer", &UWillowDialogGlobalsDefinition::DET_HealedPlayer)
        .def_readwrite("NPCDialogGroups", &UWillowDialogGlobalsDefinition::NPCDialogGroups)
        .def_readwrite("DET_PlayerLingeringInMenu", &UWillowDialogGlobalsDefinition::DET_PlayerLingeringInMenu)
        .def_readwrite("DET_GenericDismissal", &UWillowDialogGlobalsDefinition::DET_GenericDismissal)
        .def_readwrite("DET_OnUse_AllMissionsInProgress", &UWillowDialogGlobalsDefinition::DET_OnUse_AllMissionsInProgress)
        .def_readwrite("DET_OnUse_MissionComplete", &UWillowDialogGlobalsDefinition::DET_OnUse_MissionComplete)
        .def_readwrite("DET_OnUse_MissionsAvailable", &UWillowDialogGlobalsDefinition::DET_OnUse_MissionsAvailable)
        .def_readwrite("DET_OnUse_NoMissions", &UWillowDialogGlobalsDefinition::DET_OnUse_NoMissions)
        .def_readwrite("DET_MissionTurnedIn", &UWillowDialogGlobalsDefinition::DET_MissionTurnedIn)
        .def_readwrite("DET_Provoked", &UWillowDialogGlobalsDefinition::DET_Provoked)
        .def_readwrite("DET_Unprovoked", &UWillowDialogGlobalsDefinition::DET_Unprovoked)
        .def_readwrite("DET_Dodge", &UWillowDialogGlobalsDefinition::DET_Dodge)
        .def_readwrite("DET_ReacquireTarget", &UWillowDialogGlobalsDefinition::DET_ReacquireTarget)
        .def_readwrite("OnStartEchoCallBehaviors", &UWillowDialogGlobalsDefinition::OnStartEchoCallBehaviors)
        .def_readwrite("OnStopEchoCallBehaviors", &UWillowDialogGlobalsDefinition::OnStopEchoCallBehaviors)
        .def_readwrite("EchoScreenParticleModifiers", &UWillowDialogGlobalsDefinition::EchoScreenParticleModifiers)
        .def_readwrite("DET_IncomingChampion", &UWillowDialogGlobalsDefinition::DET_IncomingChampion)
        .def_readwrite("MapOpenTriggerTime", &UWillowDialogGlobalsDefinition::MapOpenTriggerTime)
        .def_readwrite("DET_MapOpenRemark", &UWillowDialogGlobalsDefinition::DET_MapOpenRemark)
        .def_readwrite("SkillsOpenTriggerTime", &UWillowDialogGlobalsDefinition::SkillsOpenTriggerTime)
        .def_readwrite("DET_SkillPointToSpend", &UWillowDialogGlobalsDefinition::DET_SkillPointToSpend)
        .def_readwrite("ComparisonOpenTriggerTime", &UWillowDialogGlobalsDefinition::ComparisonOpenTriggerTime)
        .def_readwrite("DET_CompareItems", &UWillowDialogGlobalsDefinition::DET_CompareItems)
        .def_readwrite("TravelBlockedActorDistance", &UWillowDialogGlobalsDefinition::TravelBlockedActorDistance)
        .def_readwrite("DET_TravelBlocked", &UWillowDialogGlobalsDefinition::DET_TravelBlocked)
        .def_readwrite("DET_Taunt", &UWillowDialogGlobalsDefinition::DET_Taunt)
        .def_readwrite("ActivePlotMissionMinPriority", &UWillowDialogGlobalsDefinition::ActivePlotMissionMinPriority)
        .def_readwrite("ActiveSideMissionMinPriority", &UWillowDialogGlobalsDefinition::ActiveSideMissionMinPriority)
        .def_readwrite("ActiveMissionMinPriorityStart", &UWillowDialogGlobalsDefinition::ActiveMissionMinPriorityStart)
        .def_readwrite("SideMissionKickoffPriority", &UWillowDialogGlobalsDefinition::SideMissionKickoffPriority)
        .def("StaticClass", &UWillowDialogGlobalsDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("TriggerTemplateEvent", &UWillowDialogGlobalsDefinition::TriggerTemplateEvent)
        .def("StaticTriggerTemplateEvent", &UWillowDialogGlobalsDefinition::StaticTriggerTemplateEvent)
        .def("Get", &UWillowDialogGlobalsDefinition::Get, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}