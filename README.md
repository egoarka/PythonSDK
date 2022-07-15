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

requirements: python3.7.5 headers & python37.lib (win x32)

[build.sh](build.sh)

## Build with Docker

```
docker build . -t sdk:env
docker run --rm -it -v $PWD:/var/sdk sdk:env
```

The built `ddraw.dll` will be in current directory.

