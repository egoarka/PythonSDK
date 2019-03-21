#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVehicleState()
{
    class_< FVehicleState >("FVehicleState", no_init)
        .def_readwrite("RBState", &FVehicleState::RBState)
        .def_readwrite("ServerBrake", &FVehicleState::ServerBrake)
        .def_readwrite("ServerGas", &FVehicleState::ServerGas)
        .def_readwrite("ServerSteering", &FVehicleState::ServerSteering)
        .def_readwrite("ServerRise", &FVehicleState::ServerRise)
        .def_readwrite("ServerView", &FVehicleState::ServerView)
  ;
}