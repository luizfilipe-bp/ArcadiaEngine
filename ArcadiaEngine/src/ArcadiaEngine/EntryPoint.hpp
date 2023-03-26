#pragma once

#ifdef ARC_PLATFORM_WINDOWS

extern Arcadia::Application* Arcadia::createApplication();

int main(int argc, char** argv) {
	auto app = Arcadia::createApplication();
	app->run();
	delete app;
}

#endif