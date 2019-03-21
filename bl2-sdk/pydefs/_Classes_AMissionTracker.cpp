#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AMissionTracker()
{
    class_< AMissionTracker, bases< AActor >  , boost::noncopyable>("AMissionTracker", no_init)
        .def_readwrite("VfTable_IIBehaviorConsumer", &AMissionTracker::VfTable_IIBehaviorConsumer)
        .def_readwrite("VfTable_IIPlayerBehavior", &AMissionTracker::VfTable_IIPlayerBehavior)
        .def_readwrite("VfTable_IIScreenParticle", &AMissionTracker::VfTable_IIScreenParticle)
        .def_readwrite("MissionList", &AMissionTracker::MissionList)
        .def_readwrite("StatListenersMap", &AMissionTracker::StatListenersMap)
        .def_readwrite("ActiveMission", &AMissionTracker::ActiveMission)
        .def_readwrite("MissionObservers", &AMissionTracker::MissionObservers)
        .def_readwrite("MissionDirectors", &AMissionTracker::MissionDirectors)
        .def_readwrite("DependentMissions", &AMissionTracker::DependentMissions)
        .def_readwrite("MissionsWithCompletedDependencies", &AMissionTracker::MissionsWithCompletedDependencies)
        .def_readonly("DynamicMissionDirectives", &AMissionTracker::DynamicMissionDirectives)
        .def_readwrite("MissionWaypoints", &AMissionTracker::MissionWaypoints)
        .def_readwrite("LevelTransitions", &AMissionTracker::LevelTransitions)
        .def_readwrite("ActiveTimedMissions", &AMissionTracker::ActiveTimedMissions)
        .def_readwrite("DefendMissions", &AMissionTracker::DefendMissions)
        .def_readwrite("DefendTarget", &AMissionTracker::DefendTarget)
        .def_readwrite("ActiveMissionWeapons", &AMissionTracker::ActiveMissionWeapons)
        .def_readwrite("BlockedMissions", &AMissionTracker::BlockedMissions)
        .def_readwrite("GlobalMissionBlocker", &AMissionTracker::GlobalMissionBlocker)
        .def_readwrite("ObjectiveUpdates", &AMissionTracker::ObjectiveUpdates)
        .def_readwrite("BehaviorConsumerHandle", &AMissionTracker::BehaviorConsumerHandle)
        .def_readonly("IconHelper_Directors", &AMissionTracker::IconHelper_Directors)
        .def_readwrite("PendingMissionKickoff", &AMissionTracker::PendingMissionKickoff)
        .def_readwrite("ActiveMissionChangedDelegates", &AMissionTracker::ActiveMissionChangedDelegates)
        .def_readwrite("MissionStatusChangedDelegates", &AMissionTracker::MissionStatusChangedDelegates)
        .def_readwrite("MissionObjectivesChangedDelegates", &AMissionTracker::MissionObjectivesChangedDelegates)
        .def_readwrite("MissionFilteredChangedDelegates", &AMissionTracker::MissionFilteredChangedDelegates)
        .def_readwrite("FastForwardTriggerMission", &AMissionTracker::FastForwardTriggerMission)
        .def("StaticClass", &AMissionTracker::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayTurnIn", &AMissionTracker::PlayTurnIn)
        .def("PlayKickoffDialogOnly", &AMissionTracker::PlayKickoffDialogOnly)
        .def("PlayKickoff", &AMissionTracker::PlayKickoff)
        .def("ReceiveChallenge", &AMissionTracker::ReceiveChallenge)
        .def("UpdateVisibilityOfAllActiveScreenParticles", &AMissionTracker::UpdateVisibilityOfAllActiveScreenParticles)
        .def("ScreenParticlesShouldBeVisible", &AMissionTracker::ScreenParticlesShouldBeVisible)
        .def("SetUpVoGScreenParticle", &AMissionTracker::SetUpVoGScreenParticle)
        .def("HideScreenParticle", &AMissionTracker::HideScreenParticle)
        .def("ShowScreenParticle", &AMissionTracker::ShowScreenParticle)
        .def("Behavior_RegisterStation", &AMissionTracker::Behavior_RegisterStation)
        .def("Behavior_StopRevive", &AMissionTracker::Behavior_StopRevive)
        .def("Behavior_StartRevive", &AMissionTracker::Behavior_StartRevive)
        .def("GetPlayerLoot", &AMissionTracker::GetPlayerLoot)
        .def("Behavior_SpawnTeleporter", &AMissionTracker::Behavior_SpawnTeleporter)
        .def("Behavior_SetCurrentProjectile", &AMissionTracker::Behavior_SetCurrentProjectile)
        .def("Behavior_ForceFeedback", &AMissionTracker::Behavior_ForceFeedback)
        .def("Behavior_SpawnCurrentProjectile", &AMissionTracker::Behavior_SpawnCurrentProjectile, return_value_policy< reference_existing_object >())
        .def("Behavior_UnlockAchievementForAllPlayers", &AMissionTracker::Behavior_UnlockAchievementForAllPlayers)
        .def("Behavior_DetachMeleeWeapon", &AMissionTracker::Behavior_DetachMeleeWeapon)
        .def("Behavior_AttachMeleeWeapon", &AMissionTracker::Behavior_AttachMeleeWeapon)
        .def("Behavior_UnlockAchievement", &AMissionTracker::Behavior_UnlockAchievement)
        .def("Behavior_SendMessageToPlayers", &AMissionTracker::Behavior_SendMessageToPlayers)
        .def("Behavior_CameraAnim", &AMissionTracker::Behavior_CameraAnim)
        .def("Behavior_ViewShake", &AMissionTracker::Behavior_ViewShake)
        .def("Behavior_ThrowGrenade", &AMissionTracker::Behavior_ThrowGrenade)
        .def("Behavior_Melee", &AMissionTracker::Behavior_Melee)
        .def("Behavior_Reload", &AMissionTracker::Behavior_Reload)
        .def("GetBehaviorConsumerHandle", &AMissionTracker::GetBehaviorConsumerHandle)
        .def("RunMissionCustomEvent", &AMissionTracker::RunMissionCustomEvent)
        .def("eventDebugRefreshHUD", &AMissionTracker::eventDebugRefreshHUD)
        .def("DebugAdvanceTrackedMission", &AMissionTracker::DebugAdvanceTrackedMission)
        .def("DebugIncrementObjective", &AMissionTracker::DebugIncrementObjective)
        .def("DebugCompleteObjective", &AMissionTracker::DebugCompleteObjective)
        .def("DebugGetObjectiveFromString", &AMissionTracker::DebugGetObjectiveFromString, return_value_policy< reference_existing_object >())
        .def("DebugMakeEligibileAndComplete", &AMissionTracker::DebugMakeEligibileAndComplete)
        .def("DebugMakeEligibleForAndAccept", &AMissionTracker::DebugMakeEligibleForAndAccept)
        .def("DebugAcceptMission", &AMissionTracker::DebugAcceptMission)
        .def("DebugUndoMission", &AMissionTracker::DebugUndoMission)
        .def("DebugAdvanceObjectiveSet", &AMissionTracker::DebugAdvanceObjectiveSet)
        .def("DebugUndoCompleteMission", &AMissionTracker::DebugUndoCompleteMission)
        .def("DebugCompleteMission", &AMissionTracker::DebugCompleteMission)
        .def("DebugGetMissionFromString", &AMissionTracker::DebugGetMissionFromString, return_value_policy< reference_existing_object >())
        .def("StaticSetMissionDirectorParticle", &AMissionTracker::StaticSetMissionDirectorParticle)
        .def("eventTriggerMissionFilteredChangedDelegates", &AMissionTracker::eventTriggerMissionFilteredChangedDelegates)
        .def("ClearMissionFilteredChangedDelegate", &AMissionTracker::ClearMissionFilteredChangedDelegate)
        .def("AddMissionFilteredChangedDelegate", &AMissionTracker::AddMissionFilteredChangedDelegate)
        .def("OnMissionFilteredChanged", &AMissionTracker::OnMissionFilteredChanged)
        .def("eventTriggerMissionObjectivesChangedDelegates", &AMissionTracker::eventTriggerMissionObjectivesChangedDelegates)
        .def("ClearMissionObjectivesChangedDelegate", &AMissionTracker::ClearMissionObjectivesChangedDelegate)
        .def("AddMissionObjectivesChangedDelegate", &AMissionTracker::AddMissionObjectivesChangedDelegate)
        .def("OnMissionObjectivesChanged", &AMissionTracker::OnMissionObjectivesChanged)
        .def("eventTriggerMissionStatusChangedDelegates", &AMissionTracker::eventTriggerMissionStatusChangedDelegates)
        .def("ClearMissionStatusChangedDelegate", &AMissionTracker::ClearMissionStatusChangedDelegate)
        .def("AddMissionStatusChangedDelegate", &AMissionTracker::AddMissionStatusChangedDelegate)
        .def("OnMissionStatusChanged", &AMissionTracker::OnMissionStatusChanged)
        .def("eventTriggerActiveMissionChangedDelegates", &AMissionTracker::eventTriggerActiveMissionChangedDelegates)
        .def("ClearActiveMissionChangedDelegate", &AMissionTracker::ClearActiveMissionChangedDelegate)
        .def("AddActiveMissionChangedDelegate", &AMissionTracker::AddActiveMissionChangedDelegate)
        .def("OnActiveMissionChanged", &AMissionTracker::OnActiveMissionChanged)
        .def("NotifyLocalPlayerOfActiveMission", &AMissionTracker::NotifyLocalPlayerOfActiveMission)
        .def("eventReplicatedEvent", &AMissionTracker::eventReplicatedEvent)
        .def("ProcessDynamicMissionDirectives", &AMissionTracker::ProcessDynamicMissionDirectives)
        .def("AllExpansionSideMissionsComplete", &AMissionTracker::AllExpansionSideMissionsComplete)
        .def("InitializeMissionsWithCompletedDependencies", &AMissionTracker::InitializeMissionsWithCompletedDependencies)
        .def("GetMissionCount", &AMissionTracker::GetMissionCount)
        .def("IsDataValid", &AMissionTracker::IsDataValid)
        .def("ValidateData", &AMissionTracker::ValidateData)
        .def("StopMissionTimer", &AMissionTracker::StopMissionTimer)
        .def("StartMissionTimer", &AMissionTracker::StartMissionTimer)
        .def("AddTimeToMission", &AMissionTracker::AddTimeToMission)
        .def("NotifyActorDied", &AMissionTracker::NotifyActorDied)
        .def("IsValidMissionWeapon", &AMissionTracker::IsValidMissionWeapon)
        .def("AddDefendTarget", &AMissionTracker::AddDefendTarget)
        .def("IsObjectiveBitSet", &AMissionTracker::IsObjectiveBitSet)
        .def("RemoteUpdateMissionFiltered", &AMissionTracker::RemoteUpdateMissionFiltered)
        .def("RemoteDecrementMissionObjective", &AMissionTracker::RemoteDecrementMissionObjective)
        .def("RemoteClearMissionObjective", &AMissionTracker::RemoteClearMissionObjective)
        .def("RemoteUpdateMissionObjective", &AMissionTracker::RemoteUpdateMissionObjective)
        .def("RemoteSubObjectiveSetAdvanced", &AMissionTracker::RemoteSubObjectiveSetAdvanced)
        .def("RemoteUpdateActiveObjectiveSet", &AMissionTracker::RemoteUpdateActiveObjectiveSet)
        .def("RemoteUpdateMissionStatus", &AMissionTracker::RemoteUpdateMissionStatus)
        .def("RemoteUpdateMissionData", &AMissionTracker::RemoteUpdateMissionData)
        .def("GetAllMissions", &AMissionTracker::GetAllMissions)
        .def("GetMissionForNumber", &AMissionTracker::GetMissionForNumber, return_value_policy< reference_existing_object >())
        .def("GetActiveSubObjectiveSets", &AMissionTracker::GetActiveSubObjectiveSets)
        .def("CanEndMission", &AMissionTracker::CanEndMission)
        .def("CanStartMission", &AMissionTracker::CanStartMission)
        .def("SetKickoffHeard", &AMissionTracker::SetKickoffHeard)
        .def("NotifyPawnDied", &AMissionTracker::NotifyPawnDied)
        .def("GetCurrentObjectives", &AMissionTracker::GetCurrentObjectives)
        .def("IsObjectiveSetActive", &AMissionTracker::IsObjectiveSetActive)
        .def("GetActivePrimaryObjectiveSet", &AMissionTracker::GetActivePrimaryObjectiveSet, return_value_policy< reference_existing_object >())
        .def("GetObjectiveCount", &AMissionTracker::GetObjectiveCount)
        .def("IsMissionObjectiveActive", &AMissionTracker::IsMissionObjectiveActive)
        .def("IsMissionObjectiveComplete", &AMissionTracker::IsMissionObjectiveComplete)
        .def("IsMissionBlocked", &AMissionTracker::IsMissionBlocked)
        .def("GetCompletedBranch", &AMissionTracker::GetCompletedBranch)
        .def("GetObjectivesProgress", &AMissionTracker::GetObjectivesProgress)
        .def("GetActiveMissionData", &AMissionTracker::GetActiveMissionData)
        .def("GetActiveMission", &AMissionTracker::GetActiveMission, return_value_policy< reference_existing_object >())
        .def("SetActiveMission", &AMissionTracker::SetActiveMission)
        .def("EvaluateStat", &AMissionTracker::EvaluateStat)
        .def("DecrementObjective", &AMissionTracker::DecrementObjective)
        .def("UpdateObjective", &AMissionTracker::UpdateObjective)
        .def("FastTravelStationRegistered", &AMissionTracker::FastTravelStationRegistered)
        .def("RegisterLevelTransition", &AMissionTracker::RegisterLevelTransition)
        .def("UnregisterWaypoint", &AMissionTracker::UnregisterWaypoint)
        .def("RegisterWaypoint", &AMissionTracker::RegisterWaypoint)
        .def("UnregisterMissionDirector", &AMissionTracker::UnregisterMissionDirector)
        .def("RegisterMissionDirector", &AMissionTracker::RegisterMissionDirector)
        .def("UnregisterMissionObserver", &AMissionTracker::UnregisterMissionObserver)
        .def("RegisterMissionObserver", &AMissionTracker::RegisterMissionObserver)
        .def("OnCinematicModeChanged", &AMissionTracker::OnCinematicModeChanged)
        .def("MissionDependenciesMet", &AMissionTracker::MissionDependenciesMet)
        .def("GetMissionStatus", &AMissionTracker::GetMissionStatus)
        .def("CompleteMission", &AMissionTracker::CompleteMission)
        .def("ActivateMission", &AMissionTracker::ActivateMission)
        .def("GrantMissionWeaponsToClientPlayer", &AMissionTracker::GrantMissionWeaponsToClientPlayer)
        .def("SendMissionData", &AMissionTracker::SendMissionData)
        .def("InitializeWorldMissionState", &AMissionTracker::InitializeWorldMissionState)
        .def("InitializePIEWorldMissionState", &AMissionTracker::InitializePIEWorldMissionState)
        .def("GetMissionDescription", &AMissionTracker::GetMissionDescription)
        .def("IsMissionFiltered", &AMissionTracker::IsMissionFiltered)
        .def("ToggleMissionFiltered", &AMissionTracker::ToggleMissionFiltered)
        .def("SetMissionStatus", &AMissionTracker::SetMissionStatus)
        .staticmethod("StaticClass")
  ;
}