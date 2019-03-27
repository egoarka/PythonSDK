#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_PawnClonerLink(py::module &m)
{
    py::class_< UGearboxSeqAct_PawnClonerLink,  USeqAct_Latent   >(m, "UGearboxSeqAct_PawnClonerLink")
		.def_static("StaticClass", &UGearboxSeqAct_PawnClonerLink::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ClonePoints", &UGearboxSeqAct_PawnClonerLink::ClonePoints)
        .def_readwrite("SpawnedCount", &UGearboxSeqAct_PawnClonerLink::SpawnedCount)
        .def_readwrite("RemainingDelay", &UGearboxSeqAct_PawnClonerLink::RemainingDelay)
          ;
}