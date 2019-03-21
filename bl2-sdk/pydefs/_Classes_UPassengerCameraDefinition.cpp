#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPassengerCameraDefinition()
{
    class_< UPassengerCameraDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UPassengerCameraDefinition", no_init)
        .def_readwrite("AfterburnerHandlingCamera", &UPassengerCameraDefinition::AfterburnerHandlingCamera)
        .def_readwrite("CameraModifierSpeed", &UPassengerCameraDefinition::CameraModifierSpeed)
        .def_readwrite("CameraRollSmoothingSpeed", &UPassengerCameraDefinition::CameraRollSmoothingSpeed)
        .def_readwrite("LerpStyle", &UPassengerCameraDefinition::LerpStyle)
        .def_readwrite("CameraTarget", &UPassengerCameraDefinition::CameraTarget)
        .def_readwrite("CameraBehaviorOnEntry", &UPassengerCameraDefinition::CameraBehaviorOnEntry)
        .def_readwrite("BaseCameraPosition", &UPassengerCameraDefinition::BaseCameraPosition)
        .def_readwrite("CameraOffset", &UPassengerCameraDefinition::CameraOffset)
        .def_readwrite("ForcedCameraRotation", &UPassengerCameraDefinition::ForcedCameraRotation)
        .def_readwrite("CameraPitchUpOffset", &UPassengerCameraDefinition::CameraPitchUpOffset)
        .def_readwrite("CameraPitchDownOffset", &UPassengerCameraDefinition::CameraPitchDownOffset)
        .def_readwrite("ViewPitchMin", &UPassengerCameraDefinition::ViewPitchMin)
        .def_readwrite("ViewPitchMax", &UPassengerCameraDefinition::ViewPitchMax)
        .def_readwrite("ViewYawLimitFromTurretFacing", &UPassengerCameraDefinition::ViewYawLimitFromTurretFacing)
        .def_readwrite("CameraSnapDelay", &UPassengerCameraDefinition::CameraSnapDelay)
        .def_readwrite("CameraSnapSpeed", &UPassengerCameraDefinition::CameraSnapSpeed)
        .def_readwrite("CameraFastScale", &UPassengerCameraDefinition::CameraFastScale)
        .def_readwrite("RotationRateYaw", &UPassengerCameraDefinition::RotationRateYaw)
        .def_readwrite("RotationRatePitch", &UPassengerCameraDefinition::RotationRatePitch)
        .def_readwrite("LookForwardDist", &UPassengerCameraDefinition::LookForwardDist)
        .def("StaticClass", &UPassengerCameraDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}