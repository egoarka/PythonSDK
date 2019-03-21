#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMaterialInput()
{
    class_< FMaterialInput >("FMaterialInput", no_init)
        .def_readwrite("Expression", &FMaterialInput::Expression)
        .def_readwrite("Mask", &FMaterialInput::Mask)
        .def_readwrite("MaskR", &FMaterialInput::MaskR)
        .def_readwrite("MaskG", &FMaterialInput::MaskG)
        .def_readwrite("MaskB", &FMaterialInput::MaskB)
        .def_readwrite("MaskA", &FMaterialInput::MaskA)
        .def_readwrite("GCC64_Padding", &FMaterialInput::GCC64_Padding)
  ;
}