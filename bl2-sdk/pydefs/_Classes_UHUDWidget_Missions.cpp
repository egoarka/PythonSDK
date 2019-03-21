#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHUDWidget_Missions()
{
    class_< UHUDWidget_Missions, bases< UHUDWidget_Base >  , boost::noncopyable>("UHUDWidget_Missions", no_init)
        .def_readwrite("CachedActiveMissionObjectives", &UHUDWidget_Missions::CachedActiveMissionObjectives)
        .def_readwrite("CachedBranchedMissionObjectives", &UHUDWidget_Missions::CachedBranchedMissionObjectives)
        .def_readwrite("DisplayedActiveMissionObjectives", &UHUDWidget_Missions::DisplayedActiveMissionObjectives)
        .def_readwrite("DisplayedBranchedMissionObjectives", &UHUDWidget_Missions::DisplayedBranchedMissionObjectives)
        .def_readwrite("DisplayedActiveMissionObjectiveCounts", &UHUDWidget_Missions::DisplayedActiveMissionObjectiveCounts)
        .def_readwrite("DisplayedBranchedMissionObjectiveCounts", &UHUDWidget_Missions::DisplayedBranchedMissionObjectiveCounts)
        .def_readwrite("CachedMissionName", &UHUDWidget_Missions::CachedMissionName)
        .def_readwrite("CachedMissionTimerSeconds", &UHUDWidget_Missions::CachedMissionTimerSeconds)
        .def_readwrite("CachedMissionDefenseHealth", &UHUDWidget_Missions::CachedMissionDefenseHealth)
        .def_readwrite("CachedMissionDefenseObjective", &UHUDWidget_Missions::CachedMissionDefenseObjective)
        .def_readwrite("CachedNonTrackedMission", &UHUDWidget_Missions::CachedNonTrackedMission)
        .def_readwrite("CachedNonTrackedMissionObjective", &UHUDWidget_Missions::CachedNonTrackedMissionObjective)
        .def_readwrite("NonTrackedMissionStartTime", &UHUDWidget_Missions::NonTrackedMissionStartTime)
        .def_readwrite("NonTrackedMissionDuration", &UHUDWidget_Missions::NonTrackedMissionDuration)
        .def_readwrite("MissionModuleTweenDuration", &UHUDWidget_Missions::MissionModuleTweenDuration)
        .def_readwrite("MissionTurnInString", &UHUDWidget_Missions::MissionTurnInString)
        .def_readwrite("MissionFailedString", &UHUDWidget_Missions::MissionFailedString)
        .def_readwrite("DefendString", &UHUDWidget_Missions::DefendString)
        .def_readwrite("TimerPausedString", &UHUDWidget_Missions::TimerPausedString)
        .def_readwrite("OrString", &UHUDWidget_Missions::OrString)
        .def_readwrite("MessageQueue", &UHUDWidget_Missions::MessageQueue)
        .def_readwrite("ProcessedMessageQueue", &UHUDWidget_Missions::ProcessedMessageQueue)
        .def_readwrite("ActiveFlyingCheckmarks", &UHUDWidget_Missions::ActiveFlyingCheckmarks)
        .def("StaticClass", &UHUDWidget_Missions::StaticClass, return_value_policy< reference_existing_object >())
        .def("ClearAllCheckmarks", &UHUDWidget_Missions::ClearAllCheckmarks)
        .def("ClearNextCheckmark", &UHUDWidget_Missions::ClearNextCheckmark)
        .def("FindModuleNumForDisplayedObjective", &UHUDWidget_Missions::FindModuleNumForDisplayedObjective)
        .def("DoMissionStatusFanfare", &UHUDWidget_Missions::DoMissionStatusFanfare)
        .def("SetDisplayedMission", &UHUDWidget_Missions::SetDisplayedMission)
        .def("SendMissionWidgetMessage", &UHUDWidget_Missions::SendMissionWidgetMessage)
        .def("RefreshMissionWidget", &UHUDWidget_Missions::RefreshMissionWidget)
        .def("extMissionModuleAnimFinished", &UHUDWidget_Missions::extMissionModuleAnimFinished)
        .def("ProcessMissionWidgetMessages", &UHUDWidget_Missions::ProcessMissionWidgetMessages)
        .def("UpdateActiveMission", &UHUDWidget_Missions::UpdateActiveMission)
        .def("Update", &UHUDWidget_Missions::Update)
        .def("Deinit", &UHUDWidget_Missions::Deinit)
        .def("Init", &UHUDWidget_Missions::Init)
        .staticmethod("StaticClass")
  ;
}