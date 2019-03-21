#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_Drive_AvoidWall()
{
    class_< UAction_Drive_AvoidWall, bases< UWillowActionSequencePawn >  , boost::noncopyable>("UAction_Drive_AvoidWall", no_init)
        .def_readwrite("LineCheckDistance", &UAction_Drive_AvoidWall::LineCheckDistance)
        .def_readwrite("NumLineChecks", &UAction_Drive_AvoidWall::NumLineChecks)
        .def_readwrite("HitNormalDotZThreshold", &UAction_Drive_AvoidWall::HitNormalDotZThreshold)
        .def_readwrite("SpeedThresholdWhenVeering", &UAction_Drive_AvoidWall::SpeedThresholdWhenVeering)
        .def_readwrite("MyVehicle", &UAction_Drive_AvoidWall::MyVehicle)
        .def_readwrite("PursuitPoint", &UAction_Drive_AvoidWall::PursuitPoint)
        .def_readwrite("CollisionPoint", &UAction_Drive_AvoidWall::CollisionPoint)
        .def_readwrite("HitNormal", &UAction_Drive_AvoidWall::HitNormal)
        .def_readwrite("Speed", &UAction_Drive_AvoidWall::Speed)
        .def_readwrite("SpeedMultiplier", &UAction_Drive_AvoidWall::SpeedMultiplier)
        .def("StaticClass", &UAction_Drive_AvoidWall::StaticClass, return_value_policy< reference_existing_object >())
        .def("IAmBlocked", &UAction_Drive_AvoidWall::IAmBlocked)
        .def("GetPursuitPoint", &UAction_Drive_AvoidWall::GetPursuitPoint)
        .def("eventStart", &UAction_Drive_AvoidWall::eventStart)
        .def("eventCanRun", &UAction_Drive_AvoidWall::eventCanRun)
        .def("TestForCollision", &UAction_Drive_AvoidWall::TestForCollision)
        .staticmethod("StaticClass")
  ;
}