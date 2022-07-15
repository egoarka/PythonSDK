#!/bin/bash

i686-w64-mingw32-g++ -std=c++11  -fpermissive -s -O1  -static-libgcc -static-libstdc++ -I ./src/include -I /var/python/Python-3.7.5/Include -I /var/python/Python-3.7.5/PC -L /var/python/python-embed -shared -o ddraw.dll ./src/main.cpp ./src/stdafx.cpp ./src/CPythonInterface.cpp  ./src/Settings.cpp ./src/Logging.cpp ./src/UnrealSDK.cpp ./src/pydefs/gamedefines.cpp ./src/pydefs/_TArray.cpp ./src/pydefs/Core_structs.cpp ./src/pydefs/Core_classes.cpp ./src/UnrealEngine/Core_functions.cpp  ./src/CoreExtensions.cpp ./src/Util.cpp ./src/CSigScan.cpp ./src/CHookManager.cpp ./src/AntiDebug.cpp   ./src/include/minhook/hook.c ./src/include/minhook/buffer.c ./src/include/minhook/trampoline.c ./src/include/minhook/hde/hde32.c -lpython37