#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPauseGFxMovie()
{
    class_< UPauseGFxMovie, bases< UFrontendGFxMovie >  , boost::noncopyable>("UPauseGFxMovie", no_init)
        .def_readwrite("PauseDlg", &UPauseGFxMovie::PauseDlg)
        .def_readwrite("SavingDlg", &UPauseGFxMovie::SavingDlg)
        .def_readwrite("SaveDurationTicker", &UPauseGFxMovie::SaveDurationTicker)
        .def_readwrite("SaveStartTime", &UPauseGFxMovie::SaveStartTime)
        .def_readwrite("PlayersToSave", &UPauseGFxMovie::PlayersToSave)
        .def_readwrite("MinSaveDuration", &UPauseGFxMovie::MinSaveDuration)
        .def_readwrite("EnteredButtons", &UPauseGFxMovie::EnteredButtons)
        .def_readwrite("ResumeString", &UPauseGFxMovie::ResumeString)
        .def_readwrite("SplitPlayerPRI", &UPauseGFxMovie::SplitPlayerPRI)
        .def_readwrite("SaveOwner", &UPauseGFxMovie::SaveOwner)
        .def("StaticClass", &UPauseGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("extFrontEndMenuOnLoad", &UPauseGFxMovie::extFrontEndMenuOnLoad)
        .def("LanNetworkOptionsAvailable", &UPauseGFxMovie::LanNetworkOptionsAvailable)
        .def("OnlineNetworkOptionsAvailable", &UPauseGFxMovie::OnlineNetworkOptionsAvailable)
        .def("OnConfirmCharacters", &UPauseGFxMovie::OnConfirmCharacters)
        .def("PromptConfirmCharacters", &UPauseGFxMovie::PromptConfirmCharacters)
        .def("ValidatePlayers", &UPauseGFxMovie::ValidatePlayers)
        .def("HandleSplitscreenLeaveAttempt", &UPauseGFxMovie::HandleSplitscreenLeaveAttempt)
        .def("PromptQuit", &UPauseGFxMovie::PromptQuit)
        .def("ApplySaveText", &UPauseGFxMovie::ApplySaveText)
        .def("CreateSavePromptDialog", &UPauseGFxMovie::CreateSavePromptDialog)
        .def("PromptQuit_Ok", &UPauseGFxMovie::PromptQuit_Ok)
        .def("CompleteQuitToMenu", &UPauseGFxMovie::CompleteQuitToMenu)
        .def("AllPlayersSaved", &UPauseGFxMovie::AllPlayersSaved)
        .def("SaveNextPlayer", &UPauseGFxMovie::SaveNextPlayer)
        .def("SavePlayer", &UPauseGFxMovie::SavePlayer)
        .def("QuitToMenu", &UPauseGFxMovie::QuitToMenu)
        .def("StorageDeviceChanged", &UPauseGFxMovie::StorageDeviceChanged)
        .def("GetPlayer1CancelButtonString", &UPauseGFxMovie::GetPlayer1CancelButtonString)
        .def("CanShowCharacterSelect", &UPauseGFxMovie::CanShowCharacterSelect)
        .def("HandlePopListFail", &UPauseGFxMovie::HandlePopListFail)
        .def("IsAllowedToUnpause", &UPauseGFxMovie::IsAllowedToUnpause)
        .def("TryToUnpause", &UPauseGFxMovie::TryToUnpause)
        .def("SharedHandleInputKey", &UPauseGFxMovie::SharedHandleInputKey)
        .def("PreviewInputKey", &UPauseGFxMovie::PreviewInputKey)
        .def("ShouldDoInitialDeviceSelection", &UPauseGFxMovie::ShouldDoInitialDeviceSelection)
        .def("eventOnClose", &UPauseGFxMovie::eventOnClose)
        .def("eventStart", &UPauseGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}