# UnrealEngine PythonSDK
[![Support Discord](https://img.shields.io/static/v1?label=&message=Support%20Discord&logo=discord&color=424)](https://discord.gg/bXeqV8Ef9R)
[![Developer Discord](https://img.shields.io/static/v1?label=&message=Developer%20Discord&logo=discord&color=222)](https://discord.gg/VJXtHvh)

An UnrealEngine Plugin enabling using Python to write plugins that interact directly with UE objects

## List of compatible games
- Borderlands 2
- Borderlands: The Pre-Sequel
- Tiny Tina’s Assault on Dragon Keep: A Wonderlands One-shot Adventure

### [For installation instructions, see the project site.](https://bl-sdk.github.io/)

## Linux (SteamPlay/Proton and Wine)

PythonSDK does not yet work natively on Linux, but it seems to work well under SteamPlay/Proton and Wine.  To load properly, though, Wine needs to be told to allow `ddraw.dll` overrides.  Additionally, the latest SDK release (as of February 29, 2020) wants the main executable name to be `Borderlands2.exe`, so the common workaround of a `Launcher.exe` symlink/copy won't do the trick.  Instead, set the game's launch options (via `Properties -> General`) to:

    WINEDLLOVERRIDES="ddraw=n,b" bash -c 'exec "${@/Launcher.exe/Borderlands2.exe}"' -- %command%

Or, for TPS:

    WINEDLLOVERRIDES="ddraw=n,b" bash -c 'exec "${@/Launcher.exe/BorderlandsPreSequel.exe}"' -- %command%

Note that using `WINEDLLOVERRIDES` for `ddraw` isn't supported by the Wine developers, so if you experience problems with the game while using this method, please don't ask the WineHQ team for assistance.


## Compile with MinGW

```
i686-w64-mingw32-g++ -std=c++11  -fpermissive -s  -static-libgcc -static-libstdc++ -I ./src/include -L ./python -lpython37 -I /Python37-32/include  -shared -o ddraw.dll ./src/main.cpp  ./src/Settings.cpp ./src/Logging.cpp ./src/UnrealSDK.cpp ./src/pydefs/gamedefines.cpp ./src/pydefs/_TArray.cpp ./src/pydefs/Core_structs.cpp ./src/pydefs/Core_classes.cpp ./src/UnrealEngine/Core_functions.cpp ./src/UnrealEngine/Engine_functions.cpp ./src/CPythonInterface.cpp ./src/stdafx.cpp ./src/CoreExtensions.cpp ./src/Util.cpp ./src/CSigScan.cpp ./src/CHookManager.cpp ./src/AntiDebug.cpp ./src/include/detours/disasm.cpp ./src/CSimpleDetour.cpp ./src/include/detours/detours.cpp  ./src/include/detours/modules.cpp 
```
