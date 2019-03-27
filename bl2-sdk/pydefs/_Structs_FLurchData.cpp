#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLurchData(py::module &m)
{
    py::class_< FLurchData >(m, "FLurchData")
        .def_readwrite("StartTime", &FLurchData::StartTime)
        .def_readwrite("LocMagnitude", &FLurchData::LocMagnitude)
        .def_readwrite("RotMagnitude", &FLurchData::RotMagnitude)
        .def_readwrite("Duration", &FLurchData::Duration)
        .def_readwrite("FalloffRate", &FLurchData::FalloffRate)
  ;
}