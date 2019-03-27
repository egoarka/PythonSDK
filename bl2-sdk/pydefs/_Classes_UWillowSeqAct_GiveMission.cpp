#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_GiveMission(py::module &m)
{
    py::class_< UWillowSeqAct_GiveMission,  USequenceAction   >(m, "UWillowSeqAct_GiveMission")
		.def_static("StaticClass", &UWillowSeqAct_GiveMission::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AssociatedMission", &UWillowSeqAct_GiveMission::AssociatedMission)
          ;
}