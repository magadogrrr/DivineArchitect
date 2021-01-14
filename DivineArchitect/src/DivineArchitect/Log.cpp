#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"


namespace DivineArchitect {

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init() {
		spdlog::set_pattern("%^[%-8l] %Y%m%d %T %e [%7n]: %v%$");

		s_CoreLogger = spdlog::stdout_color_mt("ENGINE");
		spdlog::set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("C_APP");
		spdlog::set_level(spdlog::level::trace);
		
	}


}