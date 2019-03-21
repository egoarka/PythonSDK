#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleMesh()
{
    class_< UGFxMovieDrawStyleMesh, bases< UGFxMovieDrawStyleComponent >  , boost::noncopyable>("UGFxMovieDrawStyleMesh", no_init)
        .def_readwrite("MeshComponentArchetype", &UGFxMovieDrawStyleMesh::MeshComponentArchetype)
        .def_readwrite("UseStaticMesh", &UGFxMovieDrawStyleMesh::UseStaticMesh)
        .def_readwrite("UseSkeletalMesh", &UGFxMovieDrawStyleMesh::UseSkeletalMesh)
        .def_readwrite("UseMeshInstanceName", &UGFxMovieDrawStyleMesh::UseMeshInstanceName)
        .def_readwrite("MaterialIndex", &UGFxMovieDrawStyleMesh::MaterialIndex)
        .def_readwrite("OverrideMaterial", &UGFxMovieDrawStyleMesh::OverrideMaterial)
        .def_readwrite("TextureParameterName", &UGFxMovieDrawStyleMesh::TextureParameterName)
        .def_readwrite("Component", &UGFxMovieDrawStyleMesh::Component)
        .def_readwrite("Mati", &UGFxMovieDrawStyleMesh::Mati)
        .def_readwrite("OriginalMaterial", &UGFxMovieDrawStyleMesh::OriginalMaterial)
        .def("StaticClass", &UGFxMovieDrawStyleMesh::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetStyleDebugString", &UGFxMovieDrawStyleMesh::GetStyleDebugString)
        .def("eventRequiresClientInstance", &UGFxMovieDrawStyleMesh::eventRequiresClientInstance)
        .staticmethod("StaticClass")
  ;
}