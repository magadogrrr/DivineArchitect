#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"


namespace DivineArchitect
{
	class DA_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger;  }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger;  }
	
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	
	};

}

#define DA_CLIENT_CRITICAL(...) ::DivineArchitect::Log::GetClientLogger()->critical(__VA_ARGS__);
#define DA_CLIENT_ERROR(...) ::DivineArchitect::Log::GetClientLogger()->error(__VA_ARGS__);
#define DA_CLIENT_WARN(...) ::DivineArchitect::Log::GetClientLogger()->warn(__VA_ARGS__);
#define DA_CLIENT_INFO(...) ::DivineArchitect::Log::GetClientLogger()->info(__VA_ARGS__);
#define DA_CLIENT_DEBUG(...) ::DivineArchitect::Log::GetClientLogger()->debug(__VA_ARGS__);
#define DA_CLIENT_TRACE(...) ::DivineArchitect::Log::GetClientLogger()->trace(__VA_ARGS__);

#define DA_CORE_CRITICAL(...) ::DivineArchitect::Log::GetCoreLogger()->critical(__VA_ARGS__);
#define DA_CORE_ERROR(...) ::DivineArchitect::Log::GetCoreLogger()->error(__VA_ARGS__);
#define DA_CORE_WARN(...) ::DivineArchitect::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define DA_CORE_INFO(...) ::DivineArchitect::Log::GetCoreLogger()->info(__VA_ARGS__);
#define DA_CORE_DEBUG(...) ::DivineArchitect::Log::GetCoreLogger()->debug(__VA_ARGS__);
#define DA_CORE_TRACE(...) ::DivineArchitect::Log::GetCoreLogger()->trace(__VA_ARGS__);