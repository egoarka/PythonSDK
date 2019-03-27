#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHashDisplayGFxDefinition(py::module &m)
{
    py::class_< UHashDisplayGFxDefinition,  UGFxMovieDefinition   >(m, "UHashDisplayGFxDefinition")
		.def_static("StaticClass", &UHashDisplayGFxDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LeftSideDef", &UHashDisplayGFxDefinition::LeftSideDef)
        .def_readwrite("EmptySlotColor", &UHashDisplayGFxDefinition::EmptySlotColor)
        .def_readwrite("CardCellWidth", &UHashDisplayGFxDefinition::CardCellWidth)
        .def_readwrite("CardCellHeight", &UHashDisplayGFxDefinition::CardCellHeight)
        .def_readwrite("CardTextureWidth", &UHashDisplayGFxDefinition::CardTextureWidth)
        .def_readwrite("CardTextureHeight", &UHashDisplayGFxDefinition::CardTextureHeight)
        .def_readwrite("Card1ExternalTextureMap", &UHashDisplayGFxDefinition::Card1ExternalTextureMap)
          ;
}