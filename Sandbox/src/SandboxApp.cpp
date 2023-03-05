#include <StarPlatinum.h>

class Sandbox : public StarPlatinum::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

StarPlatinum::Application* StarPlatinum::CreateApplication() {
	return new Sandbox();
} 