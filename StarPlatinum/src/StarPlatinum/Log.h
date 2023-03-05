#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace StarPlatinum {
	class STARPLATINUM_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core Log Macros
#define SP_CORE_TRACE(...)		::StarPlatinum::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SP_CORE_INFO(...)		::StarPlatinum::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SP_CORE_WARN(...)		::StarPlatinum::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SP_CORE_ERROR(...)		::StarPlatinum::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SP_CORE_FATAL(...)		::StarPlatinum::Log::GetCoreLogger()->critical(__VA_ARGS__)


// Client Log macros
#define SP_TRACE(...)		::StarPlatinum::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SP_INFO(...)		::StarPlatinum::Log::GetClientLogger()->info(__VA_ARGS__)
#define SP_WARN(...)		::StarPlatinum::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SP_ERROR(...)		::StarPlatinum::Log::GetClientLogger()->error(__VA_ARGS__)
#define SP_FATAL(...)		::StarPlatinum::Log::GetClientLogger()->critical(__VA_ARGS__)