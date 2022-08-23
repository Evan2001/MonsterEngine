#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

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

