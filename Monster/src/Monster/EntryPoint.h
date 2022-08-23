#pragma once

#ifdef MS_PLATFORM_WINDOWS

extern Monster::Application* Monster::CreateApplication();

int main(int argc, char** argv)
{
	// Sandbox* sandbox = new Sandbox();
	Monster::Log::Init();
	Monster::Log::GetCoreLogger()->warn("Bunger!");
	Monster::Log::GetClientLogger()->info("Info!");

	auto app = Monster::CreateApplication();
	app->Run();
	delete app; 
}

#endif // MS_PLATFORM_WINDOWS
