#pragma once
#include "Core.hpp"
namespace Arcadia {


	class ARCADIA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();

	};
	// To be defined in the client 
	Application* createApplication();
}