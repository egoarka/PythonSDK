#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowVersusDuelInfo()
{
    class_< AWillowVersusDuelInfo, bases< AReplicationInfo >  , boost::noncopyable>("AWillowVersusDuelInfo", no_init)
        .def_readwrite("DuelGlobals", &AWillowVersusDuelInfo::DuelGlobals)
        .def_readwrite("Challenger", &AWillowVersusDuelInfo::Challenger)
        .def_readwrite("Competitor", &AWillowVersusDuelInfo::Competitor)
        .def_readwrite("Winner", &AWillowVersusDuelInfo::Winner)
        .def_readwrite("Loser", &AWillowVersusDuelInfo::Loser)
        .def_readwrite("ChallengerPRI", &AWillowVersusDuelInfo::ChallengerPRI)
        .def_readwrite("CompetitorPRI", &AWillowVersusDuelInfo::CompetitorPRI)
        .def_readwrite("ActiveDuelIndex", &AWillowVersusDuelInfo::ActiveDuelIndex)
        .def_readwrite("DuelArena", &AWillowVersusDuelInfo::DuelArena)
        .def_readwrite("TemporaryChallengerProfile", &AWillowVersusDuelInfo::TemporaryChallengerProfile)
        .def_readwrite("TemporaryCompetitorProfile", &AWillowVersusDuelInfo::TemporaryCompetitorProfile)
        .def_readwrite("TradeManager", &AWillowVersusDuelInfo::TradeManager)
        .def("StaticClass", &AWillowVersusDuelInfo::StaticClass, return_value_policy< reference_existing_object >())
        .def("ProcessLeviathanDuelStartedEvent", &AWillowVersusDuelInfo::ProcessLeviathanDuelStartedEvent)
        .def("ClearCombatantStateForDuel", &AWillowVersusDuelInfo::ClearCombatantStateForDuel)
        .def("InitializeValuesOnCombatants", &AWillowVersusDuelInfo::InitializeValuesOnCombatants)
        .def("RemoveFromActiveDuels", &AWillowVersusDuelInfo::RemoveFromActiveDuels)
        .def("ReviveLoser", &AWillowVersusDuelInfo::ReviveLoser)
        .def("RestoreTemporaryProfile", &AWillowVersusDuelInfo::RestoreTemporaryProfile)
        .def("RestoreTemporaryProfilesForCombatants", &AWillowVersusDuelInfo::RestoreTemporaryProfilesForCombatants)
        .def("OnDuelArenaDestroyed", &AWillowVersusDuelInfo::OnDuelArenaDestroyed)
        .def("GetLoser", &AWillowVersusDuelInfo::GetLoser, return_value_policy< reference_existing_object >())
        .def("GetWinner", &AWillowVersusDuelInfo::GetWinner, return_value_policy< reference_existing_object >())
        .def("OnDuelEnd", &AWillowVersusDuelInfo::OnDuelEnd)
        .def("UpdatePlayerStat", &AWillowVersusDuelInfo::UpdatePlayerStat)
        .def("NotifyDuelResult", &AWillowVersusDuelInfo::NotifyDuelResult)
        .def("SetWinnerAndLoser", &AWillowVersusDuelInfo::SetWinnerAndLoser)
        .def("EndDuel", &AWillowVersusDuelInfo::EndDuel)
        .def("OnCompetitorOutOfBounds", &AWillowVersusDuelInfo::OnCompetitorOutOfBounds)
        .def("eventOnCompetitorLeftDuelArena", &AWillowVersusDuelInfo::eventOnCompetitorLeftDuelArena)
        .def("eventOnCompetitorEnteredDuelArena", &AWillowVersusDuelInfo::eventOnCompetitorEnteredDuelArena)
        .def("OnChallengerOutOfBounds", &AWillowVersusDuelInfo::OnChallengerOutOfBounds)
        .def("eventOnChallengerLeftDuelArena", &AWillowVersusDuelInfo::eventOnChallengerLeftDuelArena)
        .def("eventOnChallengerEnteredDuelArena", &AWillowVersusDuelInfo::eventOnChallengerEnteredDuelArena)
        .def("OnDuelLengthElapsed", &AWillowVersusDuelInfo::OnDuelLengthElapsed)
        .def("CombatantsAreDueling", &AWillowVersusDuelInfo::CombatantsAreDueling)
        .def("StartDuelTimer", &AWillowVersusDuelInfo::StartDuelTimer)
        .def("SetAllegianceForCombatants", &AWillowVersusDuelInfo::SetAllegianceForCombatants)
        .def("OnDuelArenaCreated", &AWillowVersusDuelInfo::OnDuelArenaCreated)
        .def("SaveTemporaryProfile", &AWillowVersusDuelInfo::SaveTemporaryProfile)
        .def("SaveTemporaryProfilesForCombatants", &AWillowVersusDuelInfo::SaveTemporaryProfilesForCombatants)
        .def("ClearPotentialDuelsForCombatants", &AWillowVersusDuelInfo::ClearPotentialDuelsForCombatants)
        .def("GetDuelArenaLocation", &AWillowVersusDuelInfo::GetDuelArenaLocation)
        .def("CreateDuelArena", &AWillowVersusDuelInfo::CreateDuelArena)
        .def("ClearDuelTimers", &AWillowVersusDuelInfo::ClearDuelTimers)
        .def("RegisterDuelAsActive", &AWillowVersusDuelInfo::RegisterDuelAsActive)
        .def("StartDuel", &AWillowVersusDuelInfo::StartDuel)
        .def("SetCompetitor", &AWillowVersusDuelInfo::SetCompetitor)
        .def("GetCompetitorPRI", &AWillowVersusDuelInfo::GetCompetitorPRI, return_value_policy< reference_existing_object >())
        .def("GetCompetitor", &AWillowVersusDuelInfo::GetCompetitor, return_value_policy< reference_existing_object >())
        .def("SetChallenger", &AWillowVersusDuelInfo::SetChallenger)
        .def("GetChallengerPRI", &AWillowVersusDuelInfo::GetChallengerPRI, return_value_policy< reference_existing_object >())
        .def("GetChallenger", &AWillowVersusDuelInfo::GetChallenger, return_value_policy< reference_existing_object >())
        .def("RemoveFromPotentialDuels", &AWillowVersusDuelInfo::RemoveFromPotentialDuels)
        .def("CoolDownActive", &AWillowVersusDuelInfo::CoolDownActive)
        .def("OnChallengeCoolDown", &AWillowVersusDuelInfo::OnChallengeCoolDown)
        .def("TimedOut", &AWillowVersusDuelInfo::TimedOut)
        .def("OnChallengeTimeout", &AWillowVersusDuelInfo::OnChallengeTimeout)
        .def("InitializeDuel", &AWillowVersusDuelInfo::InitializeDuel)
        .def("PostBeginPlay", &AWillowVersusDuelInfo::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}