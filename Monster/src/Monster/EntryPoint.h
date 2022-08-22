#pragma once

#ifdef MS_PLATFORM_WINDOWS

extern Monster::Application* Monster::CreateApplication();

int main(int argc, char** argv)
{
	// Sandbox* sandbox = new Sandbox();
	auto app = Monster::CreateApplication();
	app->Run();
	delete app;
}

#endif // MS_PLATFORM_WINDOWS
