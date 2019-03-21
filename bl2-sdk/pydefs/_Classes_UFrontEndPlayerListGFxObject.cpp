#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFrontEndPlayerListGFxObject()
{
    class_< UFrontEndPlayerListGFxObject, bases< UGFxObject >  , boost::noncopyable>("UFrontEndPlayerListGFxObject", no_init)
        .def_readwrite("OwningMovie", &UFrontEndPlayerListGFxObject::OwningMovie)
        .def_readonly("UnknownData00", &UFrontEndPlayerListGFxObject::UnknownData00)
        .def_readwrite("PlayerListIds", &UFrontEndPlayerListGFxObject::PlayerListIds)
        .def_readwrite("SelectedPlayerIndex", &UFrontEndPlayerListGFxObject::SelectedPlayerIndex)
        .def_readwrite("SplitJoinRowIndex", &UFrontEndPlayerListGFxObject::SplitJoinRowIndex)
        .def_readwrite("CachedPlayerToKick", &UFrontEndPlayerListGFxObject::CachedPlayerToKick)
        .def_readwrite("WPCOwner", &UFrontEndPlayerListGFxObject::WPCOwner)
        .def_readwrite("MyPartyHeaderBase", &UFrontEndPlayerListGFxObject::MyPartyHeaderBase)
        .def_readwrite("FriendPartyHeader", &UFrontEndPlayerListGFxObject::FriendPartyHeader)
        .def_readwrite("NoMissionFallbackText", &UFrontEndPlayerListGFxObject::NoMissionFallbackText)
        .def_readwrite("PlayerConnectingString", &UFrontEndPlayerListGFxObject::PlayerConnectingString)
        .def_readwrite("SplitJoinMessage", &UFrontEndPlayerListGFxObject::SplitJoinMessage)
        .def_readwrite("InviteFriendMessage", &UFrontEndPlayerListGFxObject::InviteFriendMessage)
        .def_readwrite("WaitingMessage", &UFrontEndPlayerListGFxObject::WaitingMessage)
        .def_readwrite("OfflineMessage", &UFrontEndPlayerListGFxObject::OfflineMessage)
        .def_readwrite("PlayerDetailsIdMap", &UFrontEndPlayerListGFxObject::PlayerDetailsIdMap)
        .def_readwrite("PlayerDetailsMovie", &UFrontEndPlayerListGFxObject::PlayerDetailsMovie)
        .def_readwrite("PlayerDetailsUniqueId", &UFrontEndPlayerListGFxObject::PlayerDetailsUniqueId)
        .def_readwrite("JoinGameCaption", &UFrontEndPlayerListGFxObject::JoinGameCaption)
        .def_readwrite("InviteGameCaption", &UFrontEndPlayerListGFxObject::InviteGameCaption)
        .def_readwrite("ViewGamercardCaption", &UFrontEndPlayerListGFxObject::ViewGamercardCaption)
        .def_readwrite("MuteCaption", &UFrontEndPlayerListGFxObject::MuteCaption)
        .def_readwrite("UnmuteCaption", &UFrontEndPlayerListGFxObject::UnmuteCaption)
        .def_readwrite("KickCaption", &UFrontEndPlayerListGFxObject::KickCaption)
        .def_readwrite("BackCaption", &UFrontEndPlayerListGFxObject::BackCaption)
        .def("StaticClass", &UFrontEndPlayerListGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("HidePlayerDetailsMovie", &UFrontEndPlayerListGFxObject::HidePlayerDetailsMovie)
        .def("GetPrimaryPlayerControllerId", &UFrontEndPlayerListGFxObject::GetPrimaryPlayerControllerId)
        .def("GetPlayerName", &UFrontEndPlayerListGFxObject::GetPlayerName)
        .def("GetPlayerListIndex", &UFrontEndPlayerListGFxObject::GetPlayerListIndex)
        .def("UpdateMuteStatus", &UFrontEndPlayerListGFxObject::UpdateMuteStatus)
        .def("KickPlayer", &UFrontEndPlayerListGFxObject::KickPlayer)
        .def("InviteToGame", &UFrontEndPlayerListGFxObject::InviteToGame)
        .def("JoinGame", &UFrontEndPlayerListGFxObject::JoinGame)
        .def("OnConfirmKickPlayer_Clicked", &UFrontEndPlayerListGFxObject::OnConfirmKickPlayer_Clicked)
        .def("HandlePlayerDetailsButtonClick", &UFrontEndPlayerListGFxObject::HandlePlayerDetailsButtonClick)
        .def("GetPRI", &UFrontEndPlayerListGFxObject::GetPRI, return_value_policy< reference_existing_object >())
        .def("PopulatePlayerDetailsDialog", &UFrontEndPlayerListGFxObject::PopulatePlayerDetailsDialog)
        .def("AddPlayerDetailsButton", &UFrontEndPlayerListGFxObject::AddPlayerDetailsButton)
        .def("OnPlayerDetailsLoaded", &UFrontEndPlayerListGFxObject::OnPlayerDetailsLoaded)
        .def("ShowPlayerSelectedDialog", &UFrontEndPlayerListGFxObject::ShowPlayerSelectedDialog)
        .def("GetSessionKey", &UFrontEndPlayerListGFxObject::GetSessionKey)
        .def("ContainsUniqueId", &UFrontEndPlayerListGFxObject::ContainsUniqueId)
        .def("IsInCurrentGame", &UFrontEndPlayerListGFxObject::IsInCurrentGame)
        .def("IsLocalPlayer", &UFrontEndPlayerListGFxObject::IsLocalPlayer)
        .def("IsPlayerMuted", &UFrontEndPlayerListGFxObject::IsPlayerMuted)
        .def("IsRemotePlayerTalking", &UFrontEndPlayerListGFxObject::IsRemotePlayerTalking)
        .def("IsLocalPlayerTalking", &UFrontEndPlayerListGFxObject::IsLocalPlayerTalking)
        .def("IsLocalVoiceEnabled", &UFrontEndPlayerListGFxObject::IsLocalVoiceEnabled)
        .def("IsInPartyChat", &UFrontEndPlayerListGFxObject::IsInPartyChat)
        .def("IsPartyLeader", &UFrontEndPlayerListGFxObject::IsPartyLeader)
        .def("GetCurrentPlaythrough", &UFrontEndPlayerListGFxObject::GetCurrentPlaythrough)
        .def("GetCurrentMissionName", &UFrontEndPlayerListGFxObject::GetCurrentMissionName)
        .def("GetMatchQualityText", &UFrontEndPlayerListGFxObject::GetMatchQualityText)
        .def("GetFriendPartyQualityType", &UFrontEndPlayerListGFxObject::GetFriendPartyQualityType)
        .def("GetFriendPartySlotInfo", &UFrontEndPlayerListGFxObject::GetFriendPartySlotInfo)
        .def("GetFriendPartyHeader", &UFrontEndPlayerListGFxObject::GetFriendPartyHeader)
        .def("GetLocalPartyPlayerCount", &UFrontEndPlayerListGFxObject::GetLocalPartyPlayerCount)
        .def("GetCharacterIconSwfMoviePath", &UFrontEndPlayerListGFxObject::GetCharacterIconSwfMoviePath)
        .def("DebugAddDummyPlayers", &UFrontEndPlayerListGFxObject::DebugAddDummyPlayers)
        .def("IsPlayerConnecting", &UFrontEndPlayerListGFxObject::IsPlayerConnecting)
        .def("OnPlayerListButtonClick", &UFrontEndPlayerListGFxObject::OnPlayerListButtonClick)
        .def("RefreshPlayerList", &UFrontEndPlayerListGFxObject::RefreshPlayerList)
        .def("Hide", &UFrontEndPlayerListGFxObject::Hide)
        .def("Show", &UFrontEndPlayerListGFxObject::Show)
        .def("ScrollUp", &UFrontEndPlayerListGFxObject::ScrollUp)
        .def("ScrollToTop", &UFrontEndPlayerListGFxObject::ScrollToTop)
        .def("ScrollDown", &UFrontEndPlayerListGFxObject::ScrollDown)
        .def("SetVoiceStatusTalking", &UFrontEndPlayerListGFxObject::SetVoiceStatusTalking)
        .def("SetVoiceStatusMuted", &UFrontEndPlayerListGFxObject::SetVoiceStatusMuted)
        .def("SetVoiceStatusEnabled", &UFrontEndPlayerListGFxObject::SetVoiceStatusEnabled)
        .def("SetConnectionQuality", &UFrontEndPlayerListGFxObject::SetConnectionQuality)
        .def("ResetFocus", &UFrontEndPlayerListGFxObject::ResetFocus)
        .def("ClearRow", &UFrontEndPlayerListGFxObject::ClearRow)
        .def("ConfigureSelectedIndex", &UFrontEndPlayerListGFxObject::ConfigureSelectedIndex)
        .def("ConfigureMessagePromptRow", &UFrontEndPlayerListGFxObject::ConfigureMessagePromptRow)
        .def("ConfigurePlayerInfoRow", &UFrontEndPlayerListGFxObject::ConfigurePlayerInfoRow)
        .def("ConfigureHeaderInfoRow", &UFrontEndPlayerListGFxObject::ConfigureHeaderInfoRow)
        .def("ClearAllEntries", &UFrontEndPlayerListGFxObject::ClearAllEntries)
        .def("EndConfigureRows", &UFrontEndPlayerListGFxObject::EndConfigureRows)
        .def("BeginConfigureRows", &UFrontEndPlayerListGFxObject::BeginConfigureRows)
        .def("OnPlayerTalkingStateChange", &UFrontEndPlayerListGFxObject::OnPlayerTalkingStateChange)
        .def("ShutDown", &UFrontEndPlayerListGFxObject::ShutDown)
        .def("Init", &UFrontEndPlayerListGFxObject::Init)
        .staticmethod("StaticClass")
  ;
}