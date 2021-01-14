#pragma once

#ifdef DA_PLATFORM_WINDOWS
	#ifdef DA_BUILD_DLL
		#define DA_API __declspec(dllexport)
	#else
		#define DA_API __declspec(dllimport)
	#endif
#else
	#error Divine Architect only supports Windows!
#endif
