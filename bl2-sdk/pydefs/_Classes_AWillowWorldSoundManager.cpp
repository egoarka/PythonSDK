#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowWorldSoundManager()
{
    class_< AWillowWorldSoundManager, bases< AWorldSoundManager >  , boost::noncopyable>("AWillowWorldSoundManager", no_init)
        .def_readwrite("MusicComponent", &AWillowWorldSoundManager::MusicComponent)
        .def_readwrite("CurrentMusicStartAkEvent", &AWillowWorldSoundManager::CurrentMusicStartAkEvent)
        .def_readwrite("CurrentMusicStopAkEvent", &AWillowWorldSoundManager::CurrentMusicStopAkEvent)
        .def_readwrite("CurrentAmbientAkState", &AWillowWorldSoundManager::CurrentAmbientAkState)
        .def_readwrite("CurrentCombatAkState", &AWillowWorldSoundManager::CurrentCombatAkState)
        .def_readwrite("CurrentBossAkState", &AWillowWorldSoundManager::CurrentBossAkState)
        .def_readwrite("CurrentMusicState", &AWillowWorldSoundManager::CurrentMusicState)
        .def_readwrite("CurrentCustomCombatMusicAkState", &AWillowWorldSoundManager::CurrentCustomCombatMusicAkState)
        .def_readwrite("CurrentCustomAmbientMusicAkState", &AWillowWorldSoundManager::CurrentCustomAmbientMusicAkState)
        .def_readwrite("CombatMusicTransitionValue", &AWillowWorldSoundManager::CombatMusicTransitionValue)
        .def_readwrite("CombatMusicTransitionStartValue", &AWillowWorldSoundManager::CombatMusicTransitionStartValue)
        .def_readwrite("CombatMusicTransitionTargetValue", &AWillowWorldSoundManager::CombatMusicTransitionTargetValue)
        .def_readwrite("CombatMusicTransitionStartTime", &AWillowWorldSoundManager::CombatMusicTransitionStartTime)
        .def_readwrite("CombatMusicTransitionEndTime", &AWillowWorldSoundManager::CombatMusicTransitionEndTime)
        .def_readwrite("LastTransitionDuration", &AWillowWorldSoundManager::LastTransitionDuration)
        .def_readwrite("CombatMusicRtpc", &AWillowWorldSoundManager::CombatMusicRtpc)
        .def("StaticClass", &AWillowWorldSoundManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsLevelMusicPlaying", &AWillowWorldSoundManager::IsLevelMusicPlaying)
        .def("StaticSetCustomAmbientMusicAkState", &AWillowWorldSoundManager::StaticSetCustomAmbientMusicAkState)
        .def("StaticSetBossAkState", &AWillowWorldSoundManager::StaticSetBossAkState)
        .def("StaticConfigureLevelMusic", &AWillowWorldSoundManager::StaticConfigureLevelMusic)
        .staticmethod("StaticClass")
  ;
}