#pragma once

#ifdef MS_PLATFORM_WINDOWS
	#ifdef MS_BUILD_DLL
		#define MONSTER_API _declspec(dllexport)
	#else
		#define MONSTER_API _declspec(dllimport)
	#endif // MS_BUILD_DLL

#else 
#error Monster only supports Windows!

#endif // MS_PLATFORM_WINDOWS

#define BIT(x) (1 << x)
