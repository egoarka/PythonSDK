#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkillEffectData()
{
    class_< FSkillEffectData >("FSkillEffectData", no_init)
        .def_readwrite("AttributeToModify", &FSkillEffectData::AttributeToModify)
        .def_readwrite("EffectTarget", &FSkillEffectData::EffectTarget)
        .def_readwrite("TargetInstanceDataName", &FSkillEffectData::TargetInstanceDataName)
        .def_readwrite("TargetCriteria", &FSkillEffectData::TargetCriteria)
        .def_readwrite("ModifierType", &FSkillEffectData::ModifierType)
        .def_readwrite("BaseModifierValue", &FSkillEffectData::BaseModifierValue)
        .def_readwrite("GradeToStartApplyingEffect", &FSkillEffectData::GradeToStartApplyingEffect)
        .def_readwrite("PerGradeUpgradeInterval", &FSkillEffectData::PerGradeUpgradeInterval)
        .def_readwrite("PerGradeUpgrade", &FSkillEffectData::PerGradeUpgrade)
        .def_readwrite("BonusUpgradeList", &FSkillEffectData::BonusUpgradeList)
  ;
}