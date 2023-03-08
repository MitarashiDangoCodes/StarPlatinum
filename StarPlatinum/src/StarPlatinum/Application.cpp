#include "Application.h"

#include "ApplicationEvent.h"
#include "Log.h"

namespace StarPlatinum {

	Application::Application()
	{
	}
	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		SP_TRACE(e);
		while (true);
	}

}