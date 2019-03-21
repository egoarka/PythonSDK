#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineCrossTitleContent()
{
    class_< FOnlineCrossTitleContent, bases< FOnlineContent >  >("FOnlineCrossTitleContent", no_init)
        .def_readwrite("TitleId", &FOnlineCrossTitleContent::TitleId)
  ;
}