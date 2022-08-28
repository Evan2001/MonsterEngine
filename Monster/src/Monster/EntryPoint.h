#pragma once

#ifdef MS_PLATFORM_WINDOWS

extern Monster::Application* Monster::CreateApplication();

int main(int argc, char** argv)
{
	Monster::Log::Init();

	MS_CORE_WARN("Bunger!");
	int a = 5;
	MS_INFO("Info! Var={0}", a);

	auto app = Monster::CreateApplication();
	app->Run();
	delete app; 
}

#endif // MS_PLATFORM_WINDOWS
