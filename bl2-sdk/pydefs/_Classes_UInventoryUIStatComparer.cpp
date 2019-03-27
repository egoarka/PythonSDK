#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryUIStatComparer(py::module &m)
{
    py::class_< UInventoryUIStatComparer,  UQSortComparer   >(m, "UInventoryUIStatComparer")
		.def_static("StaticClass", &UInventoryUIStatComparer::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StatIndex", &UInventoryUIStatComparer::StatIndex)
          ;
}