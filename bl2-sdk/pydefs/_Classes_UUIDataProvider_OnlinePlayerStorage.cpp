#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataProvider_OnlinePlayerStorage()
{
    class_< UUIDataProvider_OnlinePlayerStorage, bases< UUIDataProvider_OnlinePlayerDataBase >  , boost::noncopyable>("UUIDataProvider_OnlinePlayerStorage", no_init)
        .def_readwrite("Profile", &UUIDataProvider_OnlinePlayerStorage::Profile)
        .def_readwrite("ProviderName", &UUIDataProvider_OnlinePlayerStorage::ProviderName)
        .def_readwrite("PlayerStorageArrayProviders", &UUIDataProvider_OnlinePlayerStorage::PlayerStorageArrayProviders)
        .def_readwrite("DeviceStorageSizeNeeded", &UUIDataProvider_OnlinePlayerStorage::DeviceStorageSizeNeeded)
        .def("StaticClass", &UUIDataProvider_OnlinePlayerStorage::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnExternalUIChange", &UUIDataProvider_OnlinePlayerStorage::OnExternalUIChange)
        .def("OnStorageDeviceChange", &UUIDataProvider_OnlinePlayerStorage::OnStorageDeviceChange)
        .def("OnSettingValueUpdated", &UUIDataProvider_OnlinePlayerStorage::OnSettingValueUpdated)
        .def("ArrayProviderPropertyChanged", &UUIDataProvider_OnlinePlayerStorage::ArrayProviderPropertyChanged)
        .def("OnDeviceSelectionComplete", &UUIDataProvider_OnlinePlayerStorage::OnDeviceSelectionComplete)
        .def("ShowDeviceSelection", &UUIDataProvider_OnlinePlayerStorage::ShowDeviceSelection)
        .def("RefreshStorageData", &UUIDataProvider_OnlinePlayerStorage::RefreshStorageData)
        .def("OnLoginChange", &UUIDataProvider_OnlinePlayerStorage::OnLoginChange)
        .def("OnReadStorageComplete", &UUIDataProvider_OnlinePlayerStorage::OnReadStorageComplete)
        .def("eventOnUnregister", &UUIDataProvider_OnlinePlayerStorage::eventOnUnregister)
        .def("eventOnRegister", &UUIDataProvider_OnlinePlayerStorage::eventOnRegister)
        .def("ClearReadCompleteDelegate", &UUIDataProvider_OnlinePlayerStorage::ClearReadCompleteDelegate)
        .def("AddReadCompleteDelegate", &UUIDataProvider_OnlinePlayerStorage::AddReadCompleteDelegate)
        .def("GetData", &UUIDataProvider_OnlinePlayerStorage::GetData)
        .def("WriteData", &UUIDataProvider_OnlinePlayerStorage::WriteData)
        .def("ReadData", &UUIDataProvider_OnlinePlayerStorage::ReadData)
        .staticmethod("StaticClass")
  ;
}