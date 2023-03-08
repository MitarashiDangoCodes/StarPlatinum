#pragma once

#ifdef SP_PLATFORM_WINDOWS
	#ifdef SP_BUILD_DLL
		#define STARPLATINUM_API __declspec(dllexport)
	#else 
		#define STARPLATINUM_API __declspec(dllimport)
	#endif
#else
	#error StarPlatinum only supports Windows!
#endif

#define BIT(x) (1 << x)