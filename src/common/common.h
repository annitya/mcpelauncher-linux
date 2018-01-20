#pragma once

#include <string>

bool loadLibrary(std::string path);
#ifdef __APPLE__
void* loadFmodDarwin(const char** symbols);
#endif
void* loadLibraryOS(std::string path, const char** symbols);
void* loadMod(std::string path);
void stubSymbols(const char** symbols, void* stubfunc);
void hookAndroidLog();
void patchCallInstruction(void* patchOff, void* func, bool jump);
void registerCrashHandler();
void workaroundShutdownCrash(void* handle);
