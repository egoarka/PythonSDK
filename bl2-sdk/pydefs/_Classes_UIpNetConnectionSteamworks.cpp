#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIpNetConnectionSteamworks()
{
    class_< UIpNetConnectionSteamworks, bases< UTcpipConnection >  , boost::noncopyable>("UIpNetConnectionSteamworks", no_init)
        .def("StaticClass", &UIpNetConnectionSteamworks::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}