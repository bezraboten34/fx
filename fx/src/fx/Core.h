#pragma once

#ifdef FX_PLATFORM_WINDOWS
	#ifdef FX_BUILD_DLL
		#define FX_API __declspec(dllexport)
	#else
		#define FX_API __declspec(dllimport)
	#endif // FX_BUILD_DLL
#else
	#error Windows is the only supported platform
#endif // FX_PLATFORM_WINDOWS
