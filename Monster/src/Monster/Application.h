#pragma once

#include "Core.h"

namespace Monster {

	class MONSTER_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	private:

	};

	Application* CreateApplication();
}
