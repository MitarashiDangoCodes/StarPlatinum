#pragma once

#include "Core.h"
#include "Event.h"

namespace StarPlatinum {
	class STARPLATINUM_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}
