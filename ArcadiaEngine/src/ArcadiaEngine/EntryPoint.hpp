#pragma once
#ifdef ARC_PLATFORM_WINDOWS

extern Arcadia::Application* Arcadia::createApplication();

int main(int argc, char** argv) {

	Arcadia::Log::init();

	ARC_CORE_WARN("Initialized log");
	int value = 5;
	ARC_INFO("Hello clientlogger Var={0}", value);

	auto app = Arcadia::createApplication();
	app->run();
	delete app;
}

#endif