#include "Monster.h"

class Sandbox : public Monster::Application
{
public:
	Sandbox() {}
	~Sandbox() {}

};

Monster::Application* Monster::CreateApplication()
{
	return new Sandbox();
}

//int main()
//{
//	Sandbox* sandbox = new Sandbox();
//	sandbox->Run();
//	delete sandbox;
//}