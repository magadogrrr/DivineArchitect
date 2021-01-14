workspace "DevineArchitect"
	architecture "x64"
	
	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}
	
outputdir = %{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}
	
project "DivineArchitecture"
	location "DivineArchitecture"
	kind "SharedLib"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h"
		"%{prj.name}/src/**.cpp "
	}

	include
	{
		"%{prj.name}/vendor/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"
		
		defines
		{
			DA_PLATFORM_WINDOWS
			DA_BUILD_DLL
		}
		
		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

	filter "configurations:Debug"
		defines "DA_DEBUG"
		symbols "On"
		
	filter "configurations:Release"
		defines "DA_RELEASE"
		optimize "On"
	
	filter "configurations:Dist"
		defines "DA_DIST"
		optimize "On"





