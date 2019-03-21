#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_MultiplePlayersInGame()
{
    class_< UWillowSeqCond_MultiplePlayersInGame, bases< USequenceCondition >  , boost::noncopyable>("UWillowSeqCond_MultiplePlayersInGame", no_init)
        .def("StaticClass", &UWillowSeqCond_MultiplePlayersInGame::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}