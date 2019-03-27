#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_DisplayTrainingMessage(py::module &m)
{
    py::class_< USeqAct_DisplayTrainingMessage,  USequenceAction   >(m, "USeqAct_DisplayTrainingMessage")
		.def_static("StaticClass", &USeqAct_DisplayTrainingMessage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Key", &USeqAct_DisplayTrainingMessage::Key)
        .def_readwrite("TitleKey", &USeqAct_DisplayTrainingMessage::TitleKey)
        .def_readwrite("Duration", &USeqAct_DisplayTrainingMessage::Duration)
        .def_readwrite("HUDInitializationFrame", &USeqAct_DisplayTrainingMessage::HUDInitializationFrame)
        .def_readwrite("PauseContinueDelay", &USeqAct_DisplayTrainingMessage::PauseContinueDelay)
          ;
}