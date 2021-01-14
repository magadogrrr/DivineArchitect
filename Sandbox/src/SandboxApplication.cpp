#include <DivineArchitect.h>

class Sandbox : public DivineArchitect::Application {
public:
	Sandbox() {}
	~Sandbox() {}
};


DivineArchitect::Application* DivineArchitect::CreateApplication() {
	return new Sandbox();
}