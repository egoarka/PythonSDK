#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxMovie3D(py::module &m)
{
    py::class_< UWillowGFxMovie3D,  UWillowGFxMovie   >(m, "UWillowGFxMovie3D")
		.def_static("StaticClass", &UWillowGFxMovie3D::StaticClass, py::return_value_policy::reference)
        .def_readwrite("My3DDefinition", &UWillowGFxMovie3D::My3DDefinition)
        .def_readwrite("SplitRegionOrg", &UWillowGFxMovie3D::SplitRegionOrg)
        .def_readwrite("SplitRegionExt", &UWillowGFxMovie3D::SplitRegionExt)
        .def_readwrite("ChainedObjectMap", &UWillowGFxMovie3D::ChainedObjectMap)
        .def_readwrite("RedundantClipArray", &UWillowGFxMovie3D::RedundantClipArray)
        .def_readwrite("FocusObject", &UWillowGFxMovie3D::FocusObject)
        .def_readwrite("FocusOffset", &UWillowGFxMovie3D::FocusOffset)
        .def_readwrite("InterpFocusOffset", &UWillowGFxMovie3D::InterpFocusOffset)
        .def_readwrite("SlidingObjects", &UWillowGFxMovie3D::SlidingObjects)
        .def_readwrite("SlidingObjectMetrics", &UWillowGFxMovie3D::SlidingObjectMetrics)
        .def_readwrite("SlidingObjectOrigins", &UWillowGFxMovie3D::SlidingObjectOrigins)
        .def_readwrite("CachedViewMat", &UWillowGFxMovie3D::CachedViewMat)
        .def_readwrite("CachedProjMat", &UWillowGFxMovie3D::CachedProjMat)
        .def("extGenericButtonClicked", &UWillowGFxMovie3D::extGenericButtonClicked)
        .def("InitForConsole", &UWillowGFxMovie3D::InitForConsole)
        .def("InitForPC", &UWillowGFxMovie3D::InitForPC)
        .def("InitForPlatform", &UWillowGFxMovie3D::InitForPlatform)
        .def("eventFilterAxisInput", &UWillowGFxMovie3D::eventFilterAxisInput)
        .def("eventFilterButtonInput", &UWillowGFxMovie3D::eventFilterButtonInput)
        .def("GetDynamicFOVScalar", &UWillowGFxMovie3D::GetDynamicFOVScalar)
        .def("GetHUDElemScale", &UWillowGFxMovie3D::GetHUDElemScale)
        .def("GetHUDScale", &UWillowGFxMovie3D::GetHUDScale)
        .def("GetPrimaryPlayerWPC", &UWillowGFxMovie3D::GetPrimaryPlayerWPC, py::return_value_policy::reference)
        .def("IsPropTweening", &UWillowGFxMovie3D::IsPropTweening)
        .def("GetMaybeTweenedProperty", &UWillowGFxMovie3D::GetMaybeTweenedProperty)
        .def("GetViewportScale", &UWillowGFxMovie3D::GetViewportScale)
        .def("GetViewportDimensions", &UWillowGFxMovie3D::GetViewportDimensions)
        .def("GetViewport", &UWillowGFxMovie3D::GetViewport, py::return_value_policy::reference)
        .def("GetMovieDimensions", &UWillowGFxMovie3D::GetMovieDimensions)
        .def("ClearSplitscreenPanningCache", &UWillowGFxMovie3D::ClearSplitscreenPanningCache)
        .def("ResetSlidingObjects", &UWillowGFxMovie3D::ResetSlidingObjects)
        .def("UpdateSlidingObjects", &UWillowGFxMovie3D::UpdateSlidingObjects)
        .def("AddSlidingObject", &UWillowGFxMovie3D::AddSlidingObject)
        .def("ClampFocusOffset", &UWillowGFxMovie3D::ClampFocusOffset)
        .def("UpdateFocusOffset", &UWillowGFxMovie3D::UpdateFocusOffset)
        .def("FocusOn", &UWillowGFxMovie3D::FocusOn)
        .def("GetParentClip", &UWillowGFxMovie3D::GetParentClip, py::return_value_policy::reference)
        .def("AddClipToMap", &UWillowGFxMovie3D::AddClipToMap)
        .def("GetKeyFor", &UWillowGFxMovie3D::GetKeyFor)
        .def("DoVerticalSplitscreenPanning", &UWillowGFxMovie3D::DoVerticalSplitscreenPanning)
        .def("DoHorizontalSplitscreenPanning", &UWillowGFxMovie3D::DoHorizontalSplitscreenPanning)
        .def("Get3DRotationOffset", &UWillowGFxMovie3D::Get3DRotationOffset)
        .def("Get3DLocationOffset", &UWillowGFxMovie3D::Get3DLocationOffset)
        .def("Set3DMatrices", &UWillowGFxMovie3D::Set3DMatrices)
        .def("InitFromDefinition", &UWillowGFxMovie3D::InitFromDefinition)
        .def("eventOnSetViewport", &UWillowGFxMovie3D::eventOnSetViewport)
        .def("eventStart", &UWillowGFxMovie3D::eventStart)
          ;
}