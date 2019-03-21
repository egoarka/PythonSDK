#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBodyHitRegionDefinition()
{
    class_< UBodyHitRegionDefinition, bases< UBaseHitRegionDefinition >  , boost::noncopyable>("UBodyHitRegionDefinition", no_init)
        .def_readwrite("VfTable_IIBehaviorProvider", &UBodyHitRegionDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("VfTable_IIConstructObject", &UBodyHitRegionDefinition::VfTable_IIConstructObject)
        .def_readwrite("HitRegionName", &UBodyHitRegionDefinition::HitRegionName)
        .def_readwrite("RegionBoneNames", &UBodyHitRegionDefinition::RegionBoneNames)
        .def_readwrite("AdjacentHitRegions", &UBodyHitRegionDefinition::AdjacentHitRegions)
        .def_readwrite("OverrideDOTSocket", &UBodyHitRegionDefinition::OverrideDOTSocket)
        .def_readwrite("OwnerHealthPercent", &UBodyHitRegionDefinition::OwnerHealthPercent)
        .def_readwrite("PercentOfMaxHealthLimit", &UBodyHitRegionDefinition::PercentOfMaxHealthLimit)
        .def_readwrite("RegionDeathBehaviors", &UBodyHitRegionDefinition::RegionDeathBehaviors)
        .def_readwrite("DamageTriggeredReactions", &UBodyHitRegionDefinition::DamageTriggeredReactions)
        .def_readwrite("HealingTriggeredReactions", &UBodyHitRegionDefinition::HealingTriggeredReactions)
        .def_readwrite("AllowedDamageTypes", &UBodyHitRegionDefinition::AllowedDamageTypes)
        .def_readwrite("BulletReflectionOffSelfChance", &UBodyHitRegionDefinition::BulletReflectionOffSelfChance)
        .def_readwrite("BulletReflectedOffSelfDamageScale", &UBodyHitRegionDefinition::BulletReflectedOffSelfDamageScale)
        .def_readwrite("BulletReflectedOffSelfDamageTakenScale", &UBodyHitRegionDefinition::BulletReflectedOffSelfDamageTakenScale)
        .def_readwrite("ReflectionAccuracyModifier", &UBodyHitRegionDefinition::ReflectionAccuracyModifier)
        .def_readwrite("RicochetAccuracyModifier", &UBodyHitRegionDefinition::RicochetAccuracyModifier)
        .def_readwrite("PhysicalMaterial", &UBodyHitRegionDefinition::PhysicalMaterial)
        .def_readwrite("DefaultImpactResponse", &UBodyHitRegionDefinition::DefaultImpactResponse)
        .def_readwrite("DefaultDamageSurfaceType", &UBodyHitRegionDefinition::DefaultDamageSurfaceType)
        .def_readwrite("BloodImpact", &UBodyHitRegionDefinition::BloodImpact)
        .def_readwrite("BloodSplatterMinDistance", &UBodyHitRegionDefinition::BloodSplatterMinDistance)
        .def_readwrite("BloodSplatterMaxDistance", &UBodyHitRegionDefinition::BloodSplatterMaxDistance)
        .def_readwrite("BloodSplatterDirectionRandomness", &UBodyHitRegionDefinition::BloodSplatterDirectionRandomness)
        .def_readwrite("StatusEffectSockets", &UBodyHitRegionDefinition::StatusEffectSockets)
        .def_readwrite("ParticleSystemTemplate", &UBodyHitRegionDefinition::ParticleSystemTemplate)
        .def_readwrite("StatusEffectResistanceOverride", &UBodyHitRegionDefinition::StatusEffectResistanceOverride)
        .def_readwrite("StatusEffectBaseChanceOverride", &UBodyHitRegionDefinition::StatusEffectBaseChanceOverride)
        .def_readwrite("StatusEffectDamageModifierOverride", &UBodyHitRegionDefinition::StatusEffectDamageModifierOverride)
        .def_readwrite("OverrideDeathDef", &UBodyHitRegionDefinition::OverrideDeathDef)
        .def_readwrite("BehaviorProviderDefinition", &UBodyHitRegionDefinition::BehaviorProviderDefinition)
        .def("StaticClass", &UBodyHitRegionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnHealingReaction", &UBodyHitRegionDefinition::OnHealingReaction)
        .def("OnRegionRejuvenate", &UBodyHitRegionDefinition::OnRegionRejuvenate)
        .def("OnReflectedProjectile", &UBodyHitRegionDefinition::OnReflectedProjectile)
        .def("OnRegionGore", &UBodyHitRegionDefinition::OnRegionGore)
        .def("OnDamageReaction", &UBodyHitRegionDefinition::OnDamageReaction)
        .def("OnRegionDeath", &UBodyHitRegionDefinition::OnRegionDeath)
        .def("SetBehaviorProviderDefinition", &UBodyHitRegionDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UBodyHitRegionDefinition::GetBehaviorProviderDefinition, return_value_policy< reference_existing_object >())
        .def("GetDamageSurfaceType", &UBodyHitRegionDefinition::GetDamageSurfaceType)
        .def("GetDamageModifierPercentForImpact", &UBodyHitRegionDefinition::GetDamageModifierPercentForImpact)
        .def("GetResponseForImpact", &UBodyHitRegionDefinition::GetResponseForImpact)
        .staticmethod("StaticClass")
  ;
}