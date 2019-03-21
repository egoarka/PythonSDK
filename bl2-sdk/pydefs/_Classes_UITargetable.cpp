#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UITargetable()
{
    class_< UITargetable, bases< UInterface >  , boost::noncopyable>("UITargetable", no_init)
        .def("StaticClass", &UITargetable::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetPatsy", &UITargetable::SetPatsy)
        .def("GetPatsy", &UITargetable::GetPatsy, return_value_policy< reference_existing_object >())
        .def("IsBeingHealed", &UITargetable::IsBeingHealed)
        .def("SetBeingHealed", &UITargetable::SetBeingHealed)
        .def("IsBoss", &UITargetable::IsBoss)
        .def("Behavior_RegisterTargetable", &UITargetable::Behavior_RegisterTargetable)
        .def("IsTargetableProxy", &UITargetable::IsTargetableProxy)
        .def("GetAutoAimProfile", &UITargetable::GetAutoAimProfile)
        .def("GetMagnetismRange", &UITargetable::GetMagnetismRange)
        .def("GetMagnetismOrigin", &UITargetable::GetMagnetismOrigin)
        .def("IsAutoAimTarget", &UITargetable::IsAutoAimTarget)
        .def("GetTargetingModifier", &UITargetable::GetTargetingModifier)
        .def("HasHomingTargetComponents", &UITargetable::HasHomingTargetComponents)
        .def("IsValidHomingTarget", &UITargetable::IsValidHomingTarget)
        .def("GetTargetableIsHidden", &UITargetable::GetTargetableIsHidden)
        .def("CanSnapZoom", &UITargetable::CanSnapZoom)
        .def("GetSnapLocation", &UITargetable::GetSnapLocation)
        .def("GetTargetableLocation", &UITargetable::GetTargetableLocation)
        .def("Behavior_SetCanTarget", &UITargetable::Behavior_SetCanTarget)
        .def("IsTargetable", &UITargetable::IsTargetable)
        .def("ShowSelfAsTarget", &UITargetable::ShowSelfAsTarget)
        .def("GetOpinion", &UITargetable::GetOpinion)
        .def("SetAllegiance", &UITargetable::SetAllegiance)
        .def("GetDefaultAllegiance", &UITargetable::GetDefaultAllegiance, return_value_policy< reference_existing_object >())
        .def("GetObjectAllegiance", &UITargetable::GetObjectAllegiance, return_value_policy< reference_existing_object >())
        .def("IsSameAllegiance", &UITargetable::IsSameAllegiance)
        .def("IsNeutral", &UITargetable::IsNeutral)
        .def("IsFriendly", &UITargetable::IsFriendly)
        .def("IsEnemy", &UITargetable::IsEnemy)
        .def("SetInfoBarVisibility", &UITargetable::SetInfoBarVisibility)
        .def("HideTargetInfoOnHud", &UITargetable::HideTargetInfoOnHud)
        .def("IsChampion", &UITargetable::IsChampion)
        .def("eventGetTargetName", &UITargetable::eventGetTargetName)
        .def("DoesTargetableTakeDamage", &UITargetable::DoesTargetableTakeDamage)
        .def("DisplayParentInfo", &UITargetable::DisplayParentInfo)
        .def("GetAllBarInfo", &UITargetable::GetAllBarInfo)
        .def("GetExpInfo", &UITargetable::GetExpInfo)
        .def("GetTargetableActor", &UITargetable::GetTargetableActor, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}