#pragma once


// #include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Monster
{
	class MONSTER_API Log
	{
	public:
		//Log();
		//~Log();

		static void Init();
		inline static std::shared_ptr <spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr <spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

// Core Log Macros
#define MS_CORE_TRACE(...)	::Monster::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MS_CORE_INFO(...)	::Monster::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MS_CORE_WARN(...)	::Monster::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MS_CORE_ERROR(...)	::Monster::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MS_CORE_FATAL(...)	::Monster::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Log Macros
#define MS_TRACE(...)	::Monster::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MS_INFO(...)	::Monster::Log::GetClientLogger()->info(__VA_ARGS__)
#define MS_WARN(...)	::Monster::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MS_ERROR(...)	::Monster::Log::GetClientLogger()->error(__VA_ARGS__)
#define MS_FATAL(...)	::Monster::Log::GetClientLogger()->fatal(__VA_ARGS__)

