#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineAuthInterfaceBaseImpl(py::module &m)
{
    py::class_< UOnlineAuthInterfaceBaseImpl,  UObject   >(m, "UOnlineAuthInterfaceBaseImpl")
		.def_static("StaticClass", &UOnlineAuthInterfaceBaseImpl::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ClientAuthSessions", &UOnlineAuthInterfaceBaseImpl::ClientAuthSessions)
        .def_readwrite("ServerAuthSessions", &UOnlineAuthInterfaceBaseImpl::ServerAuthSessions)
        .def_readwrite("PeerAuthSessions", &UOnlineAuthInterfaceBaseImpl::PeerAuthSessions)
        .def_readwrite("LocalClientAuthSessions", &UOnlineAuthInterfaceBaseImpl::LocalClientAuthSessions)
        .def_readwrite("LocalServerAuthSessions", &UOnlineAuthInterfaceBaseImpl::LocalServerAuthSessions)
        .def_readwrite("LocalPeerAuthSessions", &UOnlineAuthInterfaceBaseImpl::LocalPeerAuthSessions)
        .def("GetServerAddr", &UOnlineAuthInterfaceBaseImpl::GetServerAddr)
        .def("GetServerUniqueId", &UOnlineAuthInterfaceBaseImpl::GetServerUniqueId)
        .def("FindLocalServerAuthSession", &UOnlineAuthInterfaceBaseImpl::FindLocalServerAuthSession)
        .def("FindServerAuthSession", &UOnlineAuthInterfaceBaseImpl::FindServerAuthSession)
        .def("FindLocalClientAuthSession", &UOnlineAuthInterfaceBaseImpl::FindLocalClientAuthSession)
        .def("FindClientAuthSession", &UOnlineAuthInterfaceBaseImpl::FindClientAuthSession)
        .def("EndRemoteServerAuthSession", &UOnlineAuthInterfaceBaseImpl::EndRemoteServerAuthSession)
        .def("EndLocalServerAuthSession", &UOnlineAuthInterfaceBaseImpl::EndLocalServerAuthSession)
        .def("VerifyServerAuthSession", &UOnlineAuthInterfaceBaseImpl::VerifyServerAuthSession)
        .def("CreateServerAuthSession", &UOnlineAuthInterfaceBaseImpl::CreateServerAuthSession)
        .def("EndRemoteClientAuthSession", &UOnlineAuthInterfaceBaseImpl::EndRemoteClientAuthSession)
        .def("EndLocalClientAuthSession", &UOnlineAuthInterfaceBaseImpl::EndLocalClientAuthSession)
        .def("VerifyClientAuthSession", &UOnlineAuthInterfaceBaseImpl::VerifyClientAuthSession)
        .def("CreateClientAuthSession", &UOnlineAuthInterfaceBaseImpl::CreateClientAuthSession)
        .def("SendAuthRetryServer", &UOnlineAuthInterfaceBaseImpl::SendAuthRetryServer)
        .def("SendAuthKillClient", &UOnlineAuthInterfaceBaseImpl::SendAuthKillClient)
        .def("SendAuthBlobServer", &UOnlineAuthInterfaceBaseImpl::SendAuthBlobServer)
        .def("SendAuthBlobClient", &UOnlineAuthInterfaceBaseImpl::SendAuthBlobClient)
        .def("SendAuthRequestServer", &UOnlineAuthInterfaceBaseImpl::SendAuthRequestServer)
        .def("SendAuthRequestClient", &UOnlineAuthInterfaceBaseImpl::SendAuthRequestClient)
        .def("ClearServerConnectionCloseDelegate", &UOnlineAuthInterfaceBaseImpl::ClearServerConnectionCloseDelegate)
        .def("AddServerConnectionCloseDelegate", &UOnlineAuthInterfaceBaseImpl::AddServerConnectionCloseDelegate)
        .def("OnServerConnectionClose", &UOnlineAuthInterfaceBaseImpl::OnServerConnectionClose)
        .def("ClearClientConnectionCloseDelegate", &UOnlineAuthInterfaceBaseImpl::ClearClientConnectionCloseDelegate)
        .def("AddClientConnectionCloseDelegate", &UOnlineAuthInterfaceBaseImpl::AddClientConnectionCloseDelegate)
        .def("OnClientConnectionClose", &UOnlineAuthInterfaceBaseImpl::OnClientConnectionClose)
        .def("ClearAuthRetryServerDelegate", &UOnlineAuthInterfaceBaseImpl::ClearAuthRetryServerDelegate)
        .def("AddAuthRetryServerDelegate", &UOnlineAuthInterfaceBaseImpl::AddAuthRetryServerDelegate)
        .def("OnAuthRetryServer", &UOnlineAuthInterfaceBaseImpl::OnAuthRetryServer)
        .def("ClearAuthKillClientDelegate", &UOnlineAuthInterfaceBaseImpl::ClearAuthKillClientDelegate)
        .def("AddAuthKillClientDelegate", &UOnlineAuthInterfaceBaseImpl::AddAuthKillClientDelegate)
        .def("OnAuthKillClient", &UOnlineAuthInterfaceBaseImpl::OnAuthKillClient)
        .def("ClearAuthCompleteServerDelegate", &UOnlineAuthInterfaceBaseImpl::ClearAuthCompleteServerDelegate)
        .def("AddAuthCompleteServerDelegate", &UOnlineAuthInterfaceBaseImpl::AddAuthCompleteServerDelegate)
        .def("OnAuthCompleteServer", &UOnlineAuthInterfaceBaseImpl::OnAuthCompleteServer)
        .def("ClearAuthCompleteClientDelegate", &UOnlineAuthInterfaceBaseImpl::ClearAuthCompleteClientDelegate)
        .def("AddAuthCompleteClientDelegate", &UOnlineAuthInterfaceBaseImpl::AddAuthCompleteClientDelegate)
        .def("OnAuthCompleteClient", &UOnlineAuthInterfaceBaseImpl::OnAuthCompleteClient)
        .def("ClearAuthBlobReceivedServerDelegate", &UOnlineAuthInterfaceBaseImpl::ClearAuthBlobReceivedServerDelegate)
        .def("AddAuthBlobReceivedServerDelegate", &UOnlineAuthInterfaceBaseImpl::AddAuthBlobReceivedServerDelegate)
        .def("OnAuthBlobReceivedServer", &UOnlineAuthInterfaceBaseImpl::OnAuthBlobReceivedServer)
        .def("ClearAuthBlobReceivedClientDelegate", &UOnlineAuthInterfaceBaseImpl::ClearAuthBlobReceivedClientDelegate)
        .def("AddAuthBlobReceivedClientDelegate", &UOnlineAuthInterfaceBaseImpl::AddAuthBlobReceivedClientDelegate)
        .def("OnAuthBlobReceivedClient", &UOnlineAuthInterfaceBaseImpl::OnAuthBlobReceivedClient)
        .def("ClearAuthRequestServerDelegate", &UOnlineAuthInterfaceBaseImpl::ClearAuthRequestServerDelegate)
        .def("AddAuthRequestServerDelegate", &UOnlineAuthInterfaceBaseImpl::AddAuthRequestServerDelegate)
        .def("OnAuthRequestServer", &UOnlineAuthInterfaceBaseImpl::OnAuthRequestServer)
        .def("ClearAuthRequestClientDelegate", &UOnlineAuthInterfaceBaseImpl::ClearAuthRequestClientDelegate)
        .def("AddAuthRequestClientDelegate", &UOnlineAuthInterfaceBaseImpl::AddAuthRequestClientDelegate)
        .def("OnAuthRequestClient", &UOnlineAuthInterfaceBaseImpl::OnAuthRequestClient)
        .def("ClearAuthReadyDelegate", &UOnlineAuthInterfaceBaseImpl::ClearAuthReadyDelegate)
        .def("AddAuthReadyDelegate", &UOnlineAuthInterfaceBaseImpl::AddAuthReadyDelegate)
        .def("OnAuthReady", &UOnlineAuthInterfaceBaseImpl::OnAuthReady)
        .def("IsReady", &UOnlineAuthInterfaceBaseImpl::IsReady)
          ;
}