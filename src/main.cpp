#include "stdafx.h"
#include "UnrealSDK.h"
#include "Util.h"
#include "Settings.h"
#include "Logging.h"
#include <MinHook.h>
/* typedef char* PSTR, *LPSTR; */

wchar_t exeBaseFolder[FILENAME_MAX];
int DLLcount = 0;

// Sets exeBaseFolder to hold current executable's path, including "\"
void SetExecutableFolder()
{
	GetModuleFileNameW(nullptr, exeBaseFolder, FILENAME_MAX);
	int x = sizeof(exeBaseFolder) - 1;
	while (exeBaseFolder[x] != '\\')
		x--;
	exeBaseFolder[x + 1] = '\0';
}

DWORD WINAPI Start(LPVOID lpParam)
{
	SetExecutableFolder();
	Settings::Initialize(exeBaseFolder);
	Logging::InitializeFile(Settings::GetLogFilePath());
#ifdef _DEBUG
	Logging::InitializeExtern();
#endif

	if (MH_Initialize() != MH_OK) {
		Logging::Log("Undefined behaviour, can't Initialize MinHook\n");
		return 1;
	}

	Logging::LogF("======= Borderlands 2 Python Loader =======\n");
	UnrealSDK::Initialize();
	/* LoadPlugins(L".\\Plugins"); */

	return 0;
}

extern "C" BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hInst);

		DWORD dwThreadId, dwThrdParam = 1;
		HANDLE hThread;
		hThread = CreateThread(nullptr, 0, Start, &dwThrdParam, 0, &dwThreadId);
	}
	if (reason == DLL_PROCESS_DETACH)
	{
		UnrealSDK::Cleanup();
	}

	return 1;
}
