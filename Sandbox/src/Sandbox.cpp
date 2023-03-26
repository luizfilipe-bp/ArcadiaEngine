#include <Arcadia.hpp>

class Sandbox : public Arcadia::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Arcadia::Application* Arcadia::createApplication() {
	return new Sandbox();
}