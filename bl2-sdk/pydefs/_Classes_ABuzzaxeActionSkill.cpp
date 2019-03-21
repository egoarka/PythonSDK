#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ABuzzaxeActionSkill()
{
    class_< ABuzzaxeActionSkill, bases< AActionSkill >  , boost::noncopyable>("ABuzzaxeActionSkill", no_init)
        .def_readwrite("ActiveWeaponSlot", &ABuzzaxeActionSkill::ActiveWeaponSlot)
        .def_readwrite("Buzzaxe", &ABuzzaxeActionSkill::Buzzaxe)
        .def_readwrite("MyActionSkill", &ABuzzaxeActionSkill::MyActionSkill)
        .def_readwrite("BuzzaxeBalanceDef", &ABuzzaxeActionSkill::BuzzaxeBalanceDef)
        .def_readwrite("BuzzaxeSMD", &ABuzzaxeActionSkill::BuzzaxeSMD)
        .def_readwrite("BuzzaxeSelfSMD", &ABuzzaxeActionSkill::BuzzaxeSelfSMD)
        .def_readwrite("MeleePercentage", &ABuzzaxeActionSkill::MeleePercentage)
        .def_readwrite("HoldOverrideSkill", &ABuzzaxeActionSkill::HoldOverrideSkill)
        .def_readwrite("HoldNameOverride", &ABuzzaxeActionSkill::HoldNameOverride)
        .def_readwrite("OverrideSMD", &ABuzzaxeActionSkill::OverrideSMD)
        .def_readwrite("OverrideEndSMD", &ABuzzaxeActionSkill::OverrideEndSMD)
        .def_readwrite("OverrideEndInjuredOverridePercentage", &ABuzzaxeActionSkill::OverrideEndInjuredOverridePercentage)
        .def("StaticClass", &ABuzzaxeActionSkill::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDestroyed", &ABuzzaxeActionSkill::eventDestroyed)
        .def("OnActionSkillWeaponsRestricted", &ABuzzaxeActionSkill::OnActionSkillWeaponsRestricted)
        .def("OnActionSkillOwnerRevived", &ABuzzaxeActionSkill::OnActionSkillOwnerRevived)
        .def("OnInjuredOverride", &ABuzzaxeActionSkill::OnInjuredOverride)
        .def("UpdateThirdPersonBuzzaxeMesh", &ABuzzaxeActionSkill::UpdateThirdPersonBuzzaxeMesh)
        .def("ServerNotifyModalGameMenuClosing", &ABuzzaxeActionSkill::ServerNotifyModalGameMenuClosing)
        .def("ServerNotifyModalGameMenuOpening", &ABuzzaxeActionSkill::ServerNotifyModalGameMenuOpening)
        .def("NotifyModalGameMenuClosing", &ABuzzaxeActionSkill::NotifyModalGameMenuClosing)
        .def("NotifyModalGameMenuOpening", &ABuzzaxeActionSkill::NotifyModalGameMenuOpening)
        .def("eventDisableActionSkillHUD", &ABuzzaxeActionSkill::eventDisableActionSkillHUD)
        .def("eventEnableActionSkillHUD", &ABuzzaxeActionSkill::eventEnableActionSkillHUD)
        .def("MeleeAttack", &ABuzzaxeActionSkill::MeleeAttack)
        .def("ServerMeleeSelf", &ABuzzaxeActionSkill::ServerMeleeSelf)
        .def("ServerMeleeAttack", &ABuzzaxeActionSkill::ServerMeleeAttack)
        .def("OnActionSkillOwnerMelee", &ABuzzaxeActionSkill::OnActionSkillOwnerMelee)
        .def("CanStartMeleeSkill", &ABuzzaxeActionSkill::CanStartMeleeSkill)
        .def("OverridesStandardMelee", &ABuzzaxeActionSkill::OverridesStandardMelee)
        .def("CanEquipWeapon", &ABuzzaxeActionSkill::CanEquipWeapon)
        .def("SetActiveOrBestWeapon", &ABuzzaxeActionSkill::SetActiveOrBestWeapon)
        .def("OnActionSkillEnded", &ABuzzaxeActionSkill::OnActionSkillEnded)
        .def("EndSkill", &ABuzzaxeActionSkill::EndSkill)
        .def("FinishTearOff", &ABuzzaxeActionSkill::FinishTearOff)
        .def("ResetCooldownAndTearOff", &ABuzzaxeActionSkill::ResetCooldownAndTearOff)
        .def("PlayOverrideEndSMD", &ABuzzaxeActionSkill::PlayOverrideEndSMD)
        .def("TearOff", &ABuzzaxeActionSkill::TearOff)
        .def("BuzzaxeEquipFailsafe", &ABuzzaxeActionSkill::BuzzaxeEquipFailsafe)
        .def("WaitingForBuzzaxeEquip", &ABuzzaxeActionSkill::WaitingForBuzzaxeEquip)
        .def("SpawnBuzzaxe", &ABuzzaxeActionSkill::SpawnBuzzaxe)
        .def("IsHoldOverrideSkillRunning", &ABuzzaxeActionSkill::IsHoldOverrideSkillRunning)
        .def("ForceWeaponDown", &ABuzzaxeActionSkill::ForceWeaponDown)
        .def("ClientEquipBuzzaxe", &ABuzzaxeActionSkill::ClientEquipBuzzaxe)
        .def("ClientPlayOverrideSMD", &ABuzzaxeActionSkill::ClientPlayOverrideSMD)
        .def("PlayOverrideSMD", &ABuzzaxeActionSkill::PlayOverrideSMD)
        .def("WeaponIsDown", &ABuzzaxeActionSkill::WeaponIsDown)
        .def("OnActionSkillStarted", &ABuzzaxeActionSkill::OnActionSkillStarted)
        .def("eventReplicatedEvent", &ABuzzaxeActionSkill::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}