#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowCharacterClassDefinition()
{
    class_< UWillowCharacterClassDefinition, bases< UCharacterClassDefinition >  , boost::noncopyable>("UWillowCharacterClassDefinition", no_init)
        .def_readwrite("VfTable_IIBehaviorProvider", &UWillowCharacterClassDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("AttributeParentClass", &UWillowCharacterClassDefinition::AttributeParentClass)
        .def_readwrite("AttributeStartingValues", &UWillowCharacterClassDefinition::AttributeStartingValues)
        .def_readwrite("DesignerFlagStartingValues", &UWillowCharacterClassDefinition::DesignerFlagStartingValues)
        .def_readwrite("AttributeStartingValuesNew", &UWillowCharacterClassDefinition::AttributeStartingValuesNew)
        .def_readwrite("BaseCommerceMarkup", &UWillowCharacterClassDefinition::BaseCommerceMarkup)
        .def_readwrite("EligibleUsage", &UWillowCharacterClassDefinition::EligibleUsage)
        .def_readwrite("KilledStatID", &UWillowCharacterClassDefinition::KilledStatID)
        .def_readwrite("KilledCriticalStatID", &UWillowCharacterClassDefinition::KilledCriticalStatID)
        .def_readwrite("RanOverStatID", &UWillowCharacterClassDefinition::RanOverStatID)
        .def_readwrite("KillByWeaponStatList", &UWillowCharacterClassDefinition::KillByWeaponStatList)
        .def_readwrite("KillByDamageTypeStatList", &UWillowCharacterClassDefinition::KillByDamageTypeStatList)
        .def_readwrite("KillByWeaponDamageStatList", &UWillowCharacterClassDefinition::KillByWeaponDamageStatList)
        .def_readwrite("LevelUpKillStat", &UWillowCharacterClassDefinition::LevelUpKillStat)
        .def_readwrite("BaseIgniteChanceResistanceModifier", &UWillowCharacterClassDefinition::BaseIgniteChanceResistanceModifier)
        .def_readwrite("BaseShockChanceResistanceModifier", &UWillowCharacterClassDefinition::BaseShockChanceResistanceModifier)
        .def_readwrite("BaseCorrosiveChanceResistanceModifier", &UWillowCharacterClassDefinition::BaseCorrosiveChanceResistanceModifier)
        .def_readwrite("BaseSlowChanceResistanceModifier", &UWillowCharacterClassDefinition::BaseSlowChanceResistanceModifier)
        .def_readwrite("BaseAmpChanceResistanceModifier", &UWillowCharacterClassDefinition::BaseAmpChanceResistanceModifier)
        .def_readwrite("BaseIgniteDurationResistanceModifier", &UWillowCharacterClassDefinition::BaseIgniteDurationResistanceModifier)
        .def_readwrite("BaseShockDurationResistanceModifier", &UWillowCharacterClassDefinition::BaseShockDurationResistanceModifier)
        .def_readwrite("BaseCorrosiveDurationResistanceModifier", &UWillowCharacterClassDefinition::BaseCorrosiveDurationResistanceModifier)
        .def_readwrite("BaseSlowDurationResistanceModifier", &UWillowCharacterClassDefinition::BaseSlowDurationResistanceModifier)
        .def_readwrite("BaseAmpDurationResistanceModifier", &UWillowCharacterClassDefinition::BaseAmpDurationResistanceModifier)
        .def_readwrite("BehaviorProviderDefinition", &UWillowCharacterClassDefinition::BehaviorProviderDefinition)
        .def_readwrite("RevivalHealthMultiplier", &UWillowCharacterClassDefinition::RevivalHealthMultiplier)
        .def_readwrite("CharacterInjuredDefinition", &UWillowCharacterClassDefinition::CharacterInjuredDefinition)
        .def("StaticClass", &UWillowCharacterClassDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetBehaviorProviderDefinition", &UWillowCharacterClassDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UWillowCharacterClassDefinition::GetBehaviorProviderDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}