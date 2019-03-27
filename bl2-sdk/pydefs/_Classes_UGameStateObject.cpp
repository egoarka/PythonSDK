#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameStateObject(py::module &m)
{
    py::class_< UGameStateObject,  UGameplayEventsHandler   >(m, "UGameStateObject")
		.def_static("StaticClass", &UGameStateObject::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TeamStates", &UGameStateObject::TeamStates)
        .def_readwrite("PlayerStates", &UGameStateObject::PlayerStates)
        .def_readwrite("SessionType", &UGameStateObject::SessionType)
        .def_readwrite("RoundNumber", &UGameStateObject::RoundNumber)
        .def_readwrite("MaxRoundNumber", &UGameStateObject::MaxRoundNumber)
        .def("Reset", &UGameStateObject::Reset)
        .def("eventPreProcessStream", &UGameStateObject::eventPreProcessStream)
          ;
}