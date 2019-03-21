#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATerrain()
{
    class_< ATerrain, bases< AInfo >  , boost::noncopyable>("ATerrain", no_init)
        .def_readwrite("Heights", &ATerrain::Heights)
        .def_readwrite("InfoData", &ATerrain::InfoData)
        .def_readwrite("Layers", &ATerrain::Layers)
        .def_readwrite("NormalMapLayer", &ATerrain::NormalMapLayer)
        .def_readwrite("DecoLayers", &ATerrain::DecoLayers)
        .def_readwrite("AlphaMaps", &ATerrain::AlphaMaps)
        .def_readwrite("TerrainComponents", &ATerrain::TerrainComponents)
        .def_readwrite("NumSectionsX", &ATerrain::NumSectionsX)
        .def_readwrite("NumSectionsY", &ATerrain::NumSectionsY)
        .def_readwrite("WeightedMaterials", &ATerrain::WeightedMaterials)
        .def_readwrite("WeightedTextureMaps", &ATerrain::WeightedTextureMaps)
        .def_readwrite("MaxTesselationLevel", &ATerrain::MaxTesselationLevel)
        .def_readwrite("WeightmapQuadAlphaThreshold", &ATerrain::WeightmapQuadAlphaThreshold)
        .def_readwrite("WeightmapTexelAlphaThreshold", &ATerrain::WeightmapTexelAlphaThreshold)
        .def_readwrite("WeightmapQuadMaxLayers", &ATerrain::WeightmapQuadMaxLayers)
        .def_readwrite("WeightmapTexelMaxLayers", &ATerrain::WeightmapTexelMaxLayers)
        .def_readwrite("WeightmapTesselationLevel", &ATerrain::WeightmapTesselationLevel)
        .def_readwrite("PreviousWeightmapTesselationLevel", &ATerrain::PreviousWeightmapTesselationLevel)
        .def_readonly("CachedTerrainMaterials", &ATerrain::CachedTerrainMaterials)
        .def_readwrite("TerrainMaterialGBX", &ATerrain::TerrainMaterialGBX)
        .def_readwrite("TerrainMaterialResourceGBX", &ATerrain::TerrainMaterialResourceGBX)
        .def_readwrite("NumPatchesX", &ATerrain::NumPatchesX)
        .def_readwrite("PreviousNumPatchesX", &ATerrain::PreviousNumPatchesX)
        .def_readwrite("NumPatchesY", &ATerrain::NumPatchesY)
        .def_readwrite("PreviousNumPatchesY", &ATerrain::PreviousNumPatchesY)
        .def_readwrite("MaxComponentSize", &ATerrain::MaxComponentSize)
        .def_readwrite("StaticLightingResolution", &ATerrain::StaticLightingResolution)
        .def_readwrite("TerrainPhysMaterialOverride", &ATerrain::TerrainPhysMaterialOverride)
        .def_readwrite("LightingChannels", &ATerrain::LightingChannels)
        .def_readwrite("ReleaseResourcesFence", &ATerrain::ReleaseResourcesFence)
        .def_readwrite("SelectedVertices", &ATerrain::SelectedVertices)
        .def("StaticClass", &ATerrain::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPostBeginPlay", &ATerrain::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}