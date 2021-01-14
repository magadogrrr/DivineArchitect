#pragma once

#include "Core.h"


namespace DivineArchitect {
	class DA_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	Application* CreateApplication();
}