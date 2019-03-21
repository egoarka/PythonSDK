#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkeletalMesh()
{
    class_< USkeletalMesh, bases< UObject >  , boost::noncopyable>("USkeletalMesh", no_init)
        .def_readwrite("Bounds", &USkeletalMesh::Bounds)
        .def_readwrite("Materials", &USkeletalMesh::Materials)
        .def_readwrite("ClothingAssets", &USkeletalMesh::ClothingAssets)
        .def_readwrite("Origin", &USkeletalMesh::Origin)
        .def_readwrite("RotOrigin", &USkeletalMesh::RotOrigin)
        .def_readwrite("RefSkeleton", &USkeletalMesh::RefSkeleton)
        .def_readwrite("SkeletalDepth", &USkeletalMesh::SkeletalDepth)
        .def_readonly("UnknownData00", &USkeletalMesh::UnknownData00)
        .def_readwrite("LODModels", &USkeletalMesh::LODModels)
        .def_readwrite("RefBasesInvMatrix", &USkeletalMesh::RefBasesInvMatrix)
        .def_readwrite("ReferencePoseBounds", &USkeletalMesh::ReferencePoseBounds)
        .def_readwrite("SkelMirrorTable", &USkeletalMesh::SkelMirrorTable)
        .def_readwrite("SkelMirrorAxis", &USkeletalMesh::SkelMirrorAxis)
        .def_readwrite("SkelMirrorFlipAxis", &USkeletalMesh::SkelMirrorFlipAxis)
        .def_readwrite("Sockets", &USkeletalMesh::Sockets)
        .def_readwrite("BoneBreakNames", &USkeletalMesh::BoneBreakNames)
        .def_readwrite("BoneBreakOptions", &USkeletalMesh::BoneBreakOptions)
        .def_readwrite("LODInfo", &USkeletalMesh::LODInfo)
        .def_readwrite("PerPolyCollisionBones", &USkeletalMesh::PerPolyCollisionBones)
        .def_readwrite("AddToParentPerPolyCollisionBone", &USkeletalMesh::AddToParentPerPolyCollisionBone)
        .def_readwrite("PerPolyBoneKDOPs", &USkeletalMesh::PerPolyBoneKDOPs)
        .def_readwrite("FaceFXAsset", &USkeletalMesh::FaceFXAsset)
        .def_readwrite("LODBiasPC", &USkeletalMesh::LODBiasPC)
        .def_readwrite("LODBiasPS3", &USkeletalMesh::LODBiasPS3)
        .def_readwrite("LODBiasXbox360", &USkeletalMesh::LODBiasXbox360)
        .def_readwrite("ClothMesh", &USkeletalMesh::ClothMesh)
        .def_readwrite("ClothMeshScale", &USkeletalMesh::ClothMeshScale)
        .def_readwrite("ClothToGraphicsVertMap", &USkeletalMesh::ClothToGraphicsVertMap)
        .def_readwrite("ClothMovementScale", &USkeletalMesh::ClothMovementScale)
        .def_readwrite("ClothMovementScaleGenMode", &USkeletalMesh::ClothMovementScaleGenMode)
        .def_readwrite("ClothToAnimMeshMaxDist", &USkeletalMesh::ClothToAnimMeshMaxDist)
        .def_readwrite("ClothWeldingMap", &USkeletalMesh::ClothWeldingMap)
        .def_readwrite("ClothWeldingDomain", &USkeletalMesh::ClothWeldingDomain)
        .def_readwrite("ClothWeldedIndices", &USkeletalMesh::ClothWeldedIndices)
        .def_readwrite("NumFreeClothVerts", &USkeletalMesh::NumFreeClothVerts)
        .def_readwrite("ClothIndexBuffer", &USkeletalMesh::ClothIndexBuffer)
        .def_readwrite("ClothBones", &USkeletalMesh::ClothBones)
        .def_readwrite("ClothHierarchyLevels", &USkeletalMesh::ClothHierarchyLevels)
        .def_readwrite("ClothStretchStiffness", &USkeletalMesh::ClothStretchStiffness)
        .def_readwrite("ClothBendStiffness", &USkeletalMesh::ClothBendStiffness)
        .def_readwrite("ClothDensity", &USkeletalMesh::ClothDensity)
        .def_readwrite("ClothThickness", &USkeletalMesh::ClothThickness)
        .def_readwrite("ClothDamping", &USkeletalMesh::ClothDamping)
        .def_readwrite("ClothIterations", &USkeletalMesh::ClothIterations)
        .def_readwrite("ClothHierarchicalIterations", &USkeletalMesh::ClothHierarchicalIterations)
        .def_readwrite("ClothFriction", &USkeletalMesh::ClothFriction)
        .def_readwrite("ClothRelativeGridSpacing", &USkeletalMesh::ClothRelativeGridSpacing)
        .def_readwrite("ClothPressure", &USkeletalMesh::ClothPressure)
        .def_readwrite("ClothCollisionResponseCoefficient", &USkeletalMesh::ClothCollisionResponseCoefficient)
        .def_readwrite("ClothAttachmentResponseCoefficient", &USkeletalMesh::ClothAttachmentResponseCoefficient)
        .def_readwrite("ClothAttachmentTearFactor", &USkeletalMesh::ClothAttachmentTearFactor)
        .def_readwrite("ClothSleepLinearVelocity", &USkeletalMesh::ClothSleepLinearVelocity)
        .def_readwrite("HardStretchLimitFactor", &USkeletalMesh::HardStretchLimitFactor)
        .def_readwrite("ClothSpecialBones", &USkeletalMesh::ClothSpecialBones)
        .def_readwrite("ClothMetalImpulseThreshold", &USkeletalMesh::ClothMetalImpulseThreshold)
        .def_readwrite("ClothMetalPenetrationDepth", &USkeletalMesh::ClothMetalPenetrationDepth)
        .def_readwrite("ClothMetalMaxDeformationDistance", &USkeletalMesh::ClothMetalMaxDeformationDistance)
        .def_readwrite("ClothTearFactor", &USkeletalMesh::ClothTearFactor)
        .def_readwrite("ClothTearReserve", &USkeletalMesh::ClothTearReserve)
        .def_readwrite("ValidBoundsMin", &USkeletalMesh::ValidBoundsMin)
        .def_readwrite("ValidBoundsMax", &USkeletalMesh::ValidBoundsMax)
        .def_readwrite("ClothTornTriMap", &USkeletalMesh::ClothTornTriMap)
        .def_readwrite("SoftBodySurfaceToGraphicsVertMap", &USkeletalMesh::SoftBodySurfaceToGraphicsVertMap)
        .def_readwrite("SoftBodySurfaceIndices", &USkeletalMesh::SoftBodySurfaceIndices)
        .def_readwrite("SoftBodyTetraVertsUnscaled", &USkeletalMesh::SoftBodyTetraVertsUnscaled)
        .def_readwrite("SoftBodyTetraIndices", &USkeletalMesh::SoftBodyTetraIndices)
        .def_readwrite("SoftBodyTetraLinks", &USkeletalMesh::SoftBodyTetraLinks)
        .def_readwrite("CachedSoftBodyMeshes", &USkeletalMesh::CachedSoftBodyMeshes)
        .def_readwrite("CachedSoftBodyMeshScales", &USkeletalMesh::CachedSoftBodyMeshScales)
        .def_readwrite("SoftBodyBones", &USkeletalMesh::SoftBodyBones)
        .def_readwrite("SoftBodySpecialBones", &USkeletalMesh::SoftBodySpecialBones)
        .def_readwrite("SoftBodyVolumeStiffness", &USkeletalMesh::SoftBodyVolumeStiffness)
        .def_readwrite("SoftBodyStretchingStiffness", &USkeletalMesh::SoftBodyStretchingStiffness)
        .def_readwrite("SoftBodyDensity", &USkeletalMesh::SoftBodyDensity)
        .def_readwrite("SoftBodyParticleRadius", &USkeletalMesh::SoftBodyParticleRadius)
        .def_readwrite("SoftBodyDamping", &USkeletalMesh::SoftBodyDamping)
        .def_readwrite("SoftBodySolverIterations", &USkeletalMesh::SoftBodySolverIterations)
        .def_readwrite("SoftBodyFriction", &USkeletalMesh::SoftBodyFriction)
        .def_readwrite("SoftBodyRelativeGridSpacing", &USkeletalMesh::SoftBodyRelativeGridSpacing)
        .def_readwrite("SoftBodySleepLinearVelocity", &USkeletalMesh::SoftBodySleepLinearVelocity)
        .def_readwrite("SoftBodyAttachmentResponse", &USkeletalMesh::SoftBodyAttachmentResponse)
        .def_readwrite("SoftBodyCollisionResponse", &USkeletalMesh::SoftBodyCollisionResponse)
        .def_readwrite("SoftBodyDetailLevel", &USkeletalMesh::SoftBodyDetailLevel)
        .def_readwrite("SoftBodySubdivisionLevel", &USkeletalMesh::SoftBodySubdivisionLevel)
        .def_readwrite("SoftBodyAttachmentThreshold", &USkeletalMesh::SoftBodyAttachmentThreshold)
        .def_readwrite("SoftBodyAttachmentTearFactor", &USkeletalMesh::SoftBodyAttachmentTearFactor)
        .def_readwrite("GraphicsIndexIsCloth", &USkeletalMesh::GraphicsIndexIsCloth)
        .def_readwrite("CachedStreamingTextureFactors", &USkeletalMesh::CachedStreamingTextureFactors)
        .def_readwrite("StreamingDistanceMultiplier", &USkeletalMesh::StreamingDistanceMultiplier)
        .def_readwrite("ReleaseResourcesFence", &USkeletalMesh::ReleaseResourcesFence)
        .def_readwrite("SkelMeshRUID", &USkeletalMesh::SkelMeshRUID)
        .def_readwrite("CachedRefBoneAtoms", &USkeletalMesh::CachedRefBoneAtoms)
        .def_readwrite("CachedAnimSetLinkupName", &USkeletalMesh::CachedAnimSetLinkupName)
        .def("StaticClass", &USkeletalMesh::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}