#include "Monster/Monster.h"

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
