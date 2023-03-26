#pragma once

#include <memory>

#include "Core.hpp"
#include "spdlog/spdlog.h"
namespace Arcadia {

	class ARCADIA_API Log
	{
	public:
		static void init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}
// CORE LOG MACROS
#define ARC_CORE_TRACE(...)		::Arcadia::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ARC_CORE_INFO(...)		::Arcadia::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ARC_CORE_WARN(...)		::Arcadia::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ARC_CORE_ERROR(...)		::Arcadia::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ARC_CORE_CRITICAL(...)	::Arcadia::Log::GetCoreLogger()->critical(__VA_ARGS__)


// CLIENT LOG MACROS
#define ARC_TRACE(...)			::Arcadia::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ARC_INFO(...)			::Arcadia::Log::GetClientLogger()->info(__VA_ARGS__)
#define ARC_WARN(...)			::Arcadia::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ARC_ERROR(...)			::Arcadia::Log::GetClientLogger()->error(__VA_ARGS__)
#define ARC_CRITICAL(...)		::Arcadia::Log::GetClientLogger()->critical(__VA_ARGS__)