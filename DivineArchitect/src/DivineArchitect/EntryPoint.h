#pragma once

#ifdef DA_PLATFORM_WINDOWS

extern DivineArchitect::Application* DivineArchitect::CreateApplication();

int main(int argc, char** argv) {
	DivineArchitect::Log::Init();
	
	DA_CORE_CRITICAL("CORE-CRITICAL");
	DA_CORE_ERROR("CORE-ERROR");
	DA_CORE_WARN("CORE-WARN");
	DA_CORE_INFO("CORE-INFO");
	DA_CORE_DEBUG("CORE-DEBUG");
	DA_CORE_TRACE("CORE-TRACE");

	DA_CLIENT_CRITICAL("CLIENT-CRITICAL");
	DA_CLIENT_ERROR("CLIENT-ERROR");
	DA_CLIENT_WARN("CLIENT-WARN");
	DA_CLIENT_INFO("CLIENT-INFO");
	DA_CLIENT_DEBUG("CLIENT-DEBUG");
	DA_CLIENT_TRACE("CLIENT-TRACE");

	
	auto app = DivineArchitect::CreateApplication();
	printf("application created!");
	
	app->Run();

	delete app;
}
#endif
