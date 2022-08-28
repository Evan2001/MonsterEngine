#include "Application.h"
#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Monster {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowsResizeEvent e(1280, 720);
		if (e.IsinCategory(EventCategoryApplication))
		{
			MS_TRACE(e);
		}
		if (e.IsinCategory(EventCategoryInput))
		{
			MS_TRACE(e);
		}

		MS_CORE_WARN("a warning has occured!");
		MS_INFO("Some Info!");

		while (true);
	}

}