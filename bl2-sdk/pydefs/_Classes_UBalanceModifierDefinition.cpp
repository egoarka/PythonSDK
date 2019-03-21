#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBalanceModifierDefinition()
{
    class_< UBalanceModifierDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UBalanceModifierDefinition", no_init)
        .def_readwrite("PlaythroughToBalance", &UBalanceModifierDefinition::PlaythroughToBalance)
        .def_readwrite("BalanceModifiers", &UBalanceModifierDefinition::BalanceModifiers)
        .def_readonly("ModifierToXPGainedTowardsNewLevelsInEarlierPlaythroughs", &UBalanceModifierDefinition::ModifierToXPGainedTowardsNewLevelsInEarlierPlaythroughs)
        .def_readwrite("AdditionalAmmoSDUUpgrades", &UBalanceModifierDefinition::AdditionalAmmoSDUUpgrades)
        .def_readwrite("AdditionalBankStorageUpgrades", &UBalanceModifierDefinition::AdditionalBankStorageUpgrades)
        .def_readwrite("AdditionalBackpackSDUUpgrades", &UBalanceModifierDefinition::AdditionalBackpackSDUUpgrades)
        .def_readwrite("MapSpecificBalanceModifiers", &UBalanceModifierDefinition::MapSpecificBalanceModifiers)
        .def_readwrite("BalanceModifiersForPlayersWithOneLevelCapUpgrade", &UBalanceModifierDefinition::BalanceModifiersForPlayersWithOneLevelCapUpgrade)
        .def_readwrite("BalanceModifiersForPlayersWithTwoLevelCapUpgrades", &UBalanceModifierDefinition::BalanceModifiersForPlayersWithTwoLevelCapUpgrades)
        .def_readwrite("BalanceModifiersForPlayersWithTwoLevelCapUpgradesAndOverpower", &UBalanceModifierDefinition::BalanceModifiersForPlayersWithTwoLevelCapUpgradesAndOverpower)
        .def_readwrite("NewAIPawnNamesForThisPlayThrough", &UBalanceModifierDefinition::NewAIPawnNamesForThisPlayThrough)
        .def_readwrite("GearDrops_CommonWeightModifier_PT1_BaseValueOverride", &UBalanceModifierDefinition::GearDrops_CommonWeightModifier_PT1_BaseValueOverride)
        .def_readwrite("GearDrops_CommonWeightModifier_PT2_BaseValueOverride", &UBalanceModifierDefinition::GearDrops_CommonWeightModifier_PT2_BaseValueOverride)
        .def_readwrite("ChestItemPool_Weight_2_Uncommon_PT1_Multiplier", &UBalanceModifierDefinition::ChestItemPool_Weight_2_Uncommon_PT1_Multiplier)
        .def_readwrite("ChestItemPool_Weight_2_Uncommon_PT2_Multiplier", &UBalanceModifierDefinition::ChestItemPool_Weight_2_Uncommon_PT2_Multiplier)
        .def("StaticClass", &UBalanceModifierDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAIDamageScaleBasedOnExpLevelDifferences", &UBalanceModifierDefinition::GetAIDamageScaleBasedOnExpLevelDifferences)
        .def("GetStatusEffectChanceBasedOnExpLevelDifferences", &UBalanceModifierDefinition::GetStatusEffectChanceBasedOnExpLevelDifferences)
        .def("GetUncommonChestItemPoolWeightMultiplier", &UBalanceModifierDefinition::GetUncommonChestItemPoolWeightMultiplier)
        .def("GetCommonGearDropWeightBaseValue", &UBalanceModifierDefinition::GetCommonGearDropWeightBaseValue)
        .def("GetNewAIPawnNamesForThisPlayThrough", &UBalanceModifierDefinition::GetNewAIPawnNamesForThisPlayThrough, return_value_policy< reference_existing_object >())
        .def("UpdatePlayerVehicleDamage", &UBalanceModifierDefinition::UpdatePlayerVehicleDamage)
        .def("GetAmmoDropsPerPlayerMultiplier", &UBalanceModifierDefinition::GetAmmoDropsPerPlayerMultiplier)
        .def("GetAmplifiedDamageMultiplier", &UBalanceModifierDefinition::GetAmplifiedDamageMultiplier)
        .def("GetAdditionalEnemyDamageMultiplier", &UBalanceModifierDefinition::GetAdditionalEnemyDamageMultiplier)
        .def("ApplyPlayThroughBasedPlayerAttributeEffects", &UBalanceModifierDefinition::ApplyPlayThroughBasedPlayerAttributeEffects)
        .def("UpdateSpawnedPlayerEnemyAIPawn", &UBalanceModifierDefinition::UpdateSpawnedPlayerEnemyAIPawn)
        .def("GetXPEarnedMultiplier", &UBalanceModifierDefinition::GetXPEarnedMultiplier)
        .staticmethod("StaticClass")
  ;
}