#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActor()
{
    class_< ASkeletalMeshActor, bases< AActor >  , boost::noncopyable>("ASkeletalMeshActor", no_init)
        .def_readwrite("VfTable_IIFaceFXActor", &ASkeletalMeshActor::VfTable_IIFaceFXActor)
        .def_readwrite("SkeletalMeshComponent", &ASkeletalMeshActor::SkeletalMeshComponent)
        .def_readwrite("LightEnvironment", &ASkeletalMeshActor::LightEnvironment)
        .def_readwrite("FacialAudioComp", &ASkeletalMeshActor::FacialAudioComp)
        .def_readwrite("ReplicatedMesh", &ASkeletalMeshActor::ReplicatedMesh)
        .def_readwrite("ReplicatedMaterial0", &ASkeletalMeshActor::ReplicatedMaterial0)
        .def_readwrite("ReplicatedMaterial1", &ASkeletalMeshActor::ReplicatedMaterial1)
        .def_readwrite("ControlTargets", &ASkeletalMeshActor::ControlTargets)
        .def_readwrite("InterpGroupList", &ASkeletalMeshActor::InterpGroupList)
        .def_readwrite("SavedAnimSeqName", &ASkeletalMeshActor::SavedAnimSeqName)
        .def_readwrite("SavedCurrentTime", &ASkeletalMeshActor::SavedCurrentTime)
        .def("StaticClass", &ASkeletalMeshActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventSetAudioCueOpenedByFaceFX", &ASkeletalMeshActor::eventSetAudioCueOpenedByFaceFX)
        .def("eventGetFaceFXAsset", &ASkeletalMeshActor::eventGetFaceFXAsset, return_value_policy< reference_existing_object >())
        .def("PlayFaceAnimation", &ASkeletalMeshActor::PlayFaceAnimation)
        .def("eventCreateForceField", &ASkeletalMeshActor::eventCreateForceField)
        .def("SkelMeshActorOnParticleSystemFinished", &ASkeletalMeshActor::SkelMeshActorOnParticleSystemFinished)
        .def("eventPlayParticleEffect", &ASkeletalMeshActor::eventPlayParticleEffect)
        .def("ApplyCheckpointRecord", &ASkeletalMeshActor::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ASkeletalMeshActor::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &ASkeletalMeshActor::ShouldSaveForCheckpoint)
        .def("eventTakeDamage", &ASkeletalMeshActor::eventTakeDamage)
        .def("DoKismetAttachment", &ASkeletalMeshActor::DoKismetAttachment)
        .def("eventShutDown", &ASkeletalMeshActor::eventShutDown)
        .def("eventOnSetSkelControlTarget", &ASkeletalMeshActor::eventOnSetSkelControlTarget)
        .def("eventOnUpdatePhysBonesFromAnim", &ASkeletalMeshActor::eventOnUpdatePhysBonesFromAnim)
        .def("eventOnSetMesh", &ASkeletalMeshActor::eventOnSetMesh)
        .def("IsActorPlayingFaceFXAnim", &ASkeletalMeshActor::IsActorPlayingFaceFXAnim)
        .def("eventIGetActorFaceFXAsset", &ASkeletalMeshActor::eventIGetActorFaceFXAsset, return_value_policy< reference_existing_object >())
        .def("eventGetActorFaceFXAsset", &ASkeletalMeshActor::eventGetActorFaceFXAsset, return_value_policy< reference_existing_object >())
        .def("OnPlayFaceFXAnim", &ASkeletalMeshActor::OnPlayFaceFXAnim)
        .def("eventGetFaceFXAudioComponent", &ASkeletalMeshActor::eventGetFaceFXAudioComponent, return_value_policy< reference_existing_object >())
        .def("eventStopActorFaceFXAnim", &ASkeletalMeshActor::eventStopActorFaceFXAnim)
        .def("eventPlayActorFaceFXAnim", &ASkeletalMeshActor::eventPlayActorFaceFXAnim)
        .def("MAT_FinishAnimControl", &ASkeletalMeshActor::MAT_FinishAnimControl)
        .def("eventFinishAnimControl", &ASkeletalMeshActor::eventFinishAnimControl)
        .def("eventSetAnimPosition", &ASkeletalMeshActor::eventSetAnimPosition)
        .def("MAT_BeginAnimControl", &ASkeletalMeshActor::MAT_BeginAnimControl)
        .def("eventBeginAnimControl", &ASkeletalMeshActor::eventBeginAnimControl)
        .def("OnSetMaterial", &ASkeletalMeshActor::OnSetMaterial)
        .def("OnToggle", &ASkeletalMeshActor::OnToggle)
        .def("eventReplicatedEvent", &ASkeletalMeshActor::eventReplicatedEvent)
        .def("UpdateAnimSetList", &ASkeletalMeshActor::UpdateAnimSetList)
        .def("eventDestroyed", &ASkeletalMeshActor::eventDestroyed)
        .def("eventPostBeginPlay", &ASkeletalMeshActor::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}