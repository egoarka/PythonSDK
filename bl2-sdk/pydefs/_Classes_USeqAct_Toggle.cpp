#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_Toggle()
{
    class_< USeqAct_Toggle, bases< UObject >  , boost::noncopyable>("USeqAct_Toggle", no_init)
        .def_readwrite("HandlerName", &USequenceAction::HandlerName)
        .def_readwrite("Targets", &USequenceAction::Targets)
        .def_readwrite("InputLinks", &USequenceOp::InputLinks)
        .def_readwrite("OutputLinks", &USequenceOp::OutputLinks)
        .def_readwrite("VariableLinks", &USequenceOp::VariableLinks)
        .def_readwrite("EventLinks", &USequenceOp::EventLinks)
        .def_readwrite("PlayerIndex", &USequenceOp::PlayerIndex)
        .def_readwrite("GamepadID", &USequenceOp::GamepadID)
        .def_readwrite("ActivateCount", &USequenceOp::ActivateCount)
        .def_readwrite("SearchTag", &USequenceOp::SearchTag)
        .def_readwrite("ObjInstanceVersion", &USequenceObject::ObjInstanceVersion)
        .def_readwrite("ParentSequence", &USequenceObject::ParentSequence)
        .def("StaticClass", &USeqAct_Toggle::StaticClass, return_value_policy< reference_existing_object >())
        .def("ForceActivateOutput", &USequenceOp::ForceActivateOutput)
        .def("ForceActivateInput", &USequenceOp::ForceActivateInput)
        .def("GetController", &USequenceOp::GetController, return_value_policy< reference_existing_object >())
        .def("GetPawn", &USequenceOp::GetPawn, return_value_policy< reference_existing_object >())
        .def("Reset", &USequenceOp::Reset)
        .def("PublishLinkedVariableValues", &USequenceOp::PublishLinkedVariableValues)
        .def("PopulateLinkedVariableValues", &USequenceOp::PopulateLinkedVariableValues)
        .def("eventVersionUpdated", &USequenceOp::eventVersionUpdated)
        .def("eventDeactivated", &USequenceOp::eventDeactivated)
        .def("eventActivated", &USequenceOp::eventActivated)
        .def("ActivateNamedOutputLink", &USequenceOp::ActivateNamedOutputLink)
        .def("ActivateOutputLink", &USequenceOp::ActivateOutputLink)
        .def("LinkedVariables", &USequenceOp::LinkedVariables)
        .def("GetBoolVars", &USequenceOp::GetBoolVars)
        .def("GetInterpDataVars", &USequenceOp::GetInterpDataVars)
        .def("GetObjectVars", &USequenceOp::GetObjectVars)
        .def("GetLinkedObjects", &USequenceOp::GetLinkedObjects)
        .def("HasLinkedOps", &USequenceOp::HasLinkedOps)
        .def("eventGetObjClassVersion", &USequenceObject::eventGetObjClassVersion)
        .def("eventIsPastingIntoLevelSequenceAllowed", &USequenceObject::eventIsPastingIntoLevelSequenceAllowed)
        .def("eventIsValidLevelSequenceObject", &USequenceObject::eventIsValidLevelSequenceObject)
        .def("GetWorldInfo", &USequenceObject::GetWorldInfo, return_value_policy< reference_existing_object >())
        .def("ScriptLog", &USequenceObject::ScriptLog)
        .staticmethod("StaticClass")
  ;
}