#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowHUD(py::module &m)
{
    py::class_< AWillowHUD,  AHUD   >(m, "AWillowHUD")
		.def_static("StaticClass", &AWillowHUD::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DlcVersionErrorDisplayDuration", &AWillowHUD::DlcVersionErrorDisplayDuration)
        .def_readwrite("DlcVersionErrorDisplayStartTime", &AWillowHUD::DlcVersionErrorDisplayStartTime)
        .def_readwrite("PlayerInfoHeight", &AWillowHUD::PlayerInfoHeight)
        .def_readwrite("PlayerInfoMaxDist", &AWillowHUD::PlayerInfoMaxDist)
        .def_readwrite("PawnOwner", &AWillowHUD::PawnOwner)
        .def_readwrite("SavedLookAtInventory", &AWillowHUD::SavedLookAtInventory)
        .def_readwrite("CachedBestPickup", &AWillowHUD::CachedBestPickup)
        .def_readwrite("CachedHoverPickup", &AWillowHUD::CachedHoverPickup)
        .def_readwrite("ClientSavedPickup", &AWillowHUD::ClientSavedPickup)
        .def_readwrite("ClosestPickup", &AWillowHUD::ClosestPickup)
        .def_readwrite("HoverParticleComponent", &AWillowHUD::HoverParticleComponent)
        .def_readwrite("PendingKillHoverComponents", &AWillowHUD::PendingKillHoverComponents)
        .def_readwrite("PickupItemCard", &AWillowHUD::PickupItemCard)
        .def_readwrite("PickupParticleComponent", &AWillowHUD::PickupParticleComponent)
        .def_readwrite("BuildNumber", &AWillowHUD::BuildNumber)
        .def_readwrite("BuildTag", &AWillowHUD::BuildTag)
        .def_readwrite("BuildChangelist", &AWillowHUD::BuildChangelist)
        .def_readwrite("BuildInfoXOffset", &AWillowHUD::BuildInfoXOffset)
        .def_readwrite("BuildInfoYOffset", &AWillowHUD::BuildInfoYOffset)
        .def_readwrite("WPlayerOwner", &AWillowHUD::WPlayerOwner)
        .def_readwrite("WPRI", &AWillowHUD::WPRI)
        .def_readwrite("HUDDef", &AWillowHUD::HUDDef)
        .def_readwrite("CurrentTargetable", &AWillowHUD::CurrentTargetable)
        .def_readwrite("LastPreferredTargetable", &AWillowHUD::LastPreferredTargetable)
        .def_readwrite("HealthBarFadeStartTime", &AWillowHUD::HealthBarFadeStartTime)
        .def_readwrite("LastAutogunTargetLocation", &AWillowHUD::LastAutogunTargetLocation)
        .def_readwrite("InspectAIOutputStartingXPos", &AWillowHUD::InspectAIOutputStartingXPos)
        .def_readwrite("InspectAIOutputStartingYPos", &AWillowHUD::InspectAIOutputStartingYPos)
        .def_readwrite("InspectAIOutputIndentSize", &AWillowHUD::InspectAIOutputIndentSize)
        .def_readwrite("InspectAIMaxFlagOutputLineSize", &AWillowHUD::InspectAIMaxFlagOutputLineSize)
        .def_readwrite("InspectAIRulesColor", &AWillowHUD::InspectAIRulesColor)
        .def_readwrite("InspectAITimersColor", &AWillowHUD::InspectAITimersColor)
        .def_readwrite("InspectAITargetsColor", &AWillowHUD::InspectAITargetsColor)
        .def_readwrite("InspectAIFlagIsTrueColor", &AWillowHUD::InspectAIFlagIsTrueColor)
        .def_readwrite("InspectAIFlagIsFalseColor", &AWillowHUD::InspectAIFlagIsFalseColor)
        .def_readwrite("InspectStatusEffectOutputStartingXPos", &AWillowHUD::InspectStatusEffectOutputStartingXPos)
        .def_readwrite("InspectStatusEffectOutputStartingYPos", &AWillowHUD::InspectStatusEffectOutputStartingYPos)
        .def_readwrite("InspectStatusEffectOutputIndentSize", &AWillowHUD::InspectStatusEffectOutputIndentSize)
        .def_readwrite("InspectStatusEffectTypeName", &AWillowHUD::InspectStatusEffectTypeName)
        .def_readwrite("ShowHosColor", &AWillowHUD::ShowHosColor)
        .def_readwrite("DangerousIconDifference", &AWillowHUD::DangerousIconDifference)
        .def_readwrite("ImpossibleEnemyDifference", &AWillowHUD::ImpossibleEnemyDifference)
        .def_readwrite("HUDMovie", &AWillowHUD::HUDMovie)
        .def_readwrite("WeaponScopeMovie", &AWillowHUD::WeaponScopeMovie)
        .def_readwrite("StatusMenuExMovie", &AWillowHUD::StatusMenuExMovie)
        .def_readwrite("SavingMatInst", &AWillowHUD::SavingMatInst)
        .def_readwrite("ConnectionMatInst", &AWillowHUD::ConnectionMatInst)
        .def_readwrite("SavingMat", &AWillowHUD::SavingMat)
        .def_readwrite("ConnectionMat", &AWillowHUD::ConnectionMat)
        .def_readwrite("SaveDuration", &AWillowHUD::SaveDuration)
        .def_readwrite("SaveStartTime", &AWillowHUD::SaveStartTime)
        .def_readwrite("FadeStartTime", &AWillowHUD::FadeStartTime)
        .def_readwrite("FadeDuration", &AWillowHUD::FadeDuration)
        .def_readwrite("RespawnDialogString", &AWillowHUD::RespawnDialogString)
        .def_readwrite("RespawnDialogFeeWaivedString", &AWillowHUD::RespawnDialogFeeWaivedString)
        .def_readwrite("RespawnDialogTitleString", &AWillowHUD::RespawnDialogTitleString)
        .def_readwrite("RespawnDialogOtherDiedString", &AWillowHUD::RespawnDialogOtherDiedString)
        .def_readwrite("RespawnDialogOtherDiedFeeWaivedString", &AWillowHUD::RespawnDialogOtherDiedFeeWaivedString)
        .def_readwrite("RespawnDialogUnknownPlayerString", &AWillowHUD::RespawnDialogUnknownPlayerString)
        .def_readwrite("ScreenFadeStartTime", &AWillowHUD::ScreenFadeStartTime)
        .def_readwrite("ScreenFadeDuration", &AWillowHUD::ScreenFadeDuration)
        .def_readwrite("ScreenFadeStartOpacity", &AWillowHUD::ScreenFadeStartOpacity)
        .def_readwrite("ScreenFadeOpacity", &AWillowHUD::ScreenFadeOpacity)
        .def_readwrite("ScreenFadeColor", &AWillowHUD::ScreenFadeColor)
        .def_readwrite("DuelCountdownString", &AWillowHUD::DuelCountdownString)
        .def_readwrite("DuelOutOfBoundsString", &AWillowHUD::DuelOutOfBoundsString)
        .def_readwrite("DefaultMessageDuration", &AWillowHUD::DefaultMessageDuration)
        .def_readwrite("DeathStringPistol", &AWillowHUD::DeathStringPistol)
        .def_readwrite("DeathStringShotgun", &AWillowHUD::DeathStringShotgun)
        .def_readwrite("DeathStringSMG", &AWillowHUD::DeathStringSMG)
        .def_readwrite("DeathStringSniperRifle", &AWillowHUD::DeathStringSniperRifle)
        .def_readwrite("DeathStringRocketLauncher", &AWillowHUD::DeathStringRocketLauncher)
        .def_readwrite("DeathStringAssaultRifle", &AWillowHUD::DeathStringAssaultRifle)
        .def_readwrite("DeathStringFragGrenade", &AWillowHUD::DeathStringFragGrenade)
        .def_readwrite("DeathStringProteanGrenade", &AWillowHUD::DeathStringProteanGrenade)
        .def_readwrite("DeathStringIncindiaryDamage", &AWillowHUD::DeathStringIncindiaryDamage)
        .def_readwrite("DeathStringShockDamage", &AWillowHUD::DeathStringShockDamage)
        .def_readwrite("DeathStringExplosiveDamage", &AWillowHUD::DeathStringExplosiveDamage)
        .def_readwrite("DeathStringCorrosiveDamage", &AWillowHUD::DeathStringCorrosiveDamage)
        .def_readwrite("DeathStringImpactDamage", &AWillowHUD::DeathStringImpactDamage)
        .def_readwrite("DeathStringSuicide", &AWillowHUD::DeathStringSuicide)
        .def_readwrite("DeathStringUnknown", &AWillowHUD::DeathStringUnknown)
        .def_readwrite("DeathStringFallDamage", &AWillowHUD::DeathStringFallDamage)
        .def_readwrite("SavingMaterialScale", &AWillowHUD::SavingMaterialScale)
        .def_readwrite("ConnectionMaterialScale", &AWillowHUD::ConnectionMaterialScale)
        .def_readwrite("ConnectionWarningStartTime", &AWillowHUD::ConnectionWarningStartTime)
        .def_readwrite("SavingIconXOffset", &AWillowHUD::SavingIconXOffset)
        .def_readwrite("SavingIconYOffset", &AWillowHUD::SavingIconYOffset)
        .def_readwrite("MaxNumPickups", &AWillowHUD::MaxNumPickups)
        .def_readwrite("PendingWeaponCardDisplayTime", &AWillowHUD::PendingWeaponCardDisplayTime)
        .def_readwrite("ActiveEquippedCardType", &AWillowHUD::ActiveEquippedCardType)
        .def_readwrite("ActivePickupCardType", &AWillowHUD::ActivePickupCardType)
        .def_readwrite("DebugMarkerMat", &AWillowHUD::DebugMarkerMat)
        .def_readwrite("CurrentPickupIcon", &AWillowHUD::CurrentPickupIcon)
        .def_readwrite("ColiseumOverlayMovie", &AWillowHUD::ColiseumOverlayMovie)
        .def_readwrite("QueuedChallengeNotifications", &AWillowHUD::QueuedChallengeNotifications)
        .def_readwrite("QueuedInitFrame", &AWillowHUD::QueuedInitFrame)
        .def_readwrite("PlayedInitFrames", &AWillowHUD::PlayedInitFrames)
        .def_readwrite("QueuedPullThePinNotification", &AWillowHUD::QueuedPullThePinNotification)
        .def("ShowChallengeWidget", &AWillowHUD::ShowChallengeWidget)
        .def("ShowIpAddress", &AWillowHUD::ShowIpAddress)
        .def("LevelTimer", &AWillowHUD::LevelTimer)
        .def("AutoAimDebug", &AWillowHUD::AutoAimDebug)
        .def("eventAmmoAbsorbed", &AWillowHUD::eventAmmoAbsorbed)
        .def("eventColiseumWantsSuppressHUD", &AWillowHUD::eventColiseumWantsSuppressHUD)
        .def("GetPlayingColiseumOverlayMovie", &AWillowHUD::GetPlayingColiseumOverlayMovie, py::return_value_policy::reference)
        .def("ColiseumNotify", &AWillowHUD::ColiseumNotify)
        .def("RuleAnnounce", &AWillowHUD::RuleAnnounce)
        .def("RoundAnnounce", &AWillowHUD::RoundAnnounce)
        .def("BeginRoundAnnounce", &AWillowHUD::BeginRoundAnnounce)
        .def("StartColiseumTimer", &AWillowHUD::StartColiseumTimer)
        .def("CloseColiseumOverlay", &AWillowHUD::CloseColiseumOverlay)
        .def("UpdateColiseumRule", &AWillowHUD::UpdateColiseumRule)
        .def("OnColiseumOverlayClosing", &AWillowHUD::OnColiseumOverlayClosing)
        .def("OnColiseumOverlayOpening", &AWillowHUD::OnColiseumOverlayOpening)
        .def("eventOnLostFocusPause", &AWillowHUD::eventOnLostFocusPause)
        .def("CanPauseOnLostFocus", &AWillowHUD::CanPauseOnLostFocus)
        .def("DrawAlwaysOnTopItems", &AWillowHUD::DrawAlwaysOnTopItems)
        .def("SetConnectionProblem", &AWillowHUD::SetConnectionProblem)
        .def("SetCanPickupItem", &AWillowHUD::SetCanPickupItem)
        .def("StartFade", &AWillowHUD::StartFade)
        .def("FadeOut", &AWillowHUD::FadeOut)
        .def("FadeIn", &AWillowHUD::FadeIn)
        .def("NotifySavingComplete", &AWillowHUD::NotifySavingComplete)
        .def("NotifySavingStarted", &AWillowHUD::NotifySavingStarted)
        .def("ToggleHUD", &AWillowHUD::ToggleHUD)
        .def("ShowTargetAnimDebug", &AWillowHUD::ShowTargetAnimDebug)
        .def("ShowAnimDebugFP", &AWillowHUD::ShowAnimDebugFP)
        .def("ShowRespawnDialog", &AWillowHUD::ShowRespawnDialog)
        .def("eventCloseStatusMenu", &AWillowHUD::eventCloseStatusMenu)
        .def("TryFakePauseInSinglePlayer", &AWillowHUD::TryFakePauseInSinglePlayer)
        .def("RunStatusMenu", &AWillowHUD::RunStatusMenu)
        .def("PlayStatusMovie", &AWillowHUD::PlayStatusMovie)
        .def("CloseHUDMovie", &AWillowHUD::CloseHUDMovie)
        .def("OpenHUDMovie", &AWillowHUD::OpenHUDMovie)
        .def("_OpenHUDMovie", &AWillowHUD::_OpenHUDMovie)
        .def("eventShowInspectedStatusEffectTarget", &AWillowHUD::eventShowInspectedStatusEffectTarget)
        .def("AddPostRenderedActor", &AWillowHUD::AddPostRenderedActor)
        .def("RemovePostRenderedActor", &AWillowHUD::RemovePostRenderedActor)
        .def("eventShowInspectedAI", &AWillowHUD::eventShowInspectedAI)
        .def("eventDrawShowIos", &AWillowHUD::eventDrawShowIos)
        .def("eventDrawShowHos", &AWillowHUD::eventDrawShowHos)
        .def("eventGetWeaponScopeMovie", &AWillowHUD::eventGetWeaponScopeMovie, py::return_value_policy::reference)
        .def("eventGetHUDMovie", &AWillowHUD::eventGetHUDMovie, py::return_value_policy::reference)
        .def("DisplayTargetPopupInfo", &AWillowHUD::DisplayTargetPopupInfo)
        .def("UpdatePickupParticles", &AWillowHUD::UpdatePickupParticles)
        .def("PostRenderDebug", &AWillowHUD::PostRenderDebug)
        .def("DrawSpectatorHud", &AWillowHUD::DrawSpectatorHud)
        .def("DrawEngineHUD", &AWillowHUD::DrawEngineHUD)
        .def("ScaleY", &AWillowHUD::ScaleY)
        .def("ScaleX43", &AWillowHUD::ScaleX43)
        .def("ScaleX", &AWillowHUD::ScaleX)
        .def("GetColorForExpLevel", &AWillowHUD::GetColorForExpLevel)
        .def("ShowPickupCard", &AWillowHUD::ShowPickupCard)
        .def("GetPickupCardLocation", &AWillowHUD::GetPickupCardLocation)
        .def("DetachPickupHoverPSys", &AWillowHUD::DetachPickupHoverPSys)
        .def("AttachPickupHoverPSys", &AWillowHUD::AttachPickupHoverPSys)
        .def("GetItemHoverBounds", &AWillowHUD::GetItemHoverBounds)
        .def("DrawItemFeedbackInfo", &AWillowHUD::DrawItemFeedbackInfo)
        .def("DrawDebugFeedbackForPickup", &AWillowHUD::DrawDebugFeedbackForPickup)
        .def("eventDrawBuildInfo", &AWillowHUD::eventDrawBuildInfo)
        .def("DrawHUD", &AWillowHUD::DrawHUD)
        .def("eventDoStartupDrawHUD", &AWillowHUD::eventDoStartupDrawHUD)
        .def("DrawDamageIndicator", &AWillowHUD::DrawDamageIndicator)
        .def("BuildInfo", &AWillowHUD::BuildInfo)
        .def("DrawbShowHUDIsFalseHUD", &AWillowHUD::DrawbShowHUDIsFalseHUD)
        .def("SetWPRI", &AWillowHUD::SetWPRI)
        .def("eventDestroyed", &AWillowHUD::eventDestroyed)
        .def("CreateWeaponScopeMovie", &AWillowHUD::CreateWeaponScopeMovie)
        .def("CreateHUDMovie", &AWillowHUD::CreateHUDMovie)
        .def("PostBeginPlay", &AWillowHUD::PostBeginPlay)
        .def("InitHud", &AWillowHUD::InitHud)
        .def("ClearCustomMessage", &AWillowHUD::ClearCustomMessage)
        .def("DisplayCustomMessage", &AWillowHUD::DisplayCustomMessage)
        .def("LoadBuildInfo", &AWillowHUD::LoadBuildInfo)
          ;
}