#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleEmitterReplayFrame(py::module &m)
{
    py::class_< FParticleEmitterReplayFrame >(m, "FParticleEmitterReplayFrame")
        .def_readwrite("EmitterType", &FParticleEmitterReplayFrame::EmitterType)
        .def_readwrite("OriginalEmitterIndex", &FParticleEmitterReplayFrame::OriginalEmitterIndex)
        .def_readwrite("FrameState", &FParticleEmitterReplayFrame::FrameState)
  ;
}