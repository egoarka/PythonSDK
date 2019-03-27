#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEncounterWaveData(py::module &m)
{
    py::class_< FEncounterWaveData >(m, "FEncounterWaveData")
        .def_readwrite("InitialDelay", &FEncounterWaveData::InitialDelay)
        .def_readwrite("PercentToComplete", &FEncounterWaveData::PercentToComplete)
        .def_readwrite("EncounterPopulationDef", &FEncounterWaveData::EncounterPopulationDef)
        .def_readwrite("MemberOpportunities", &FEncounterWaveData::MemberOpportunities)
        .def_readwrite("SpawnLimits", &FEncounterWaveData::SpawnLimits)
  ;
}