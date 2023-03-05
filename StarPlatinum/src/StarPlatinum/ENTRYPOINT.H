#pragma once

#ifdef SP_PLATFORM_WINDOWS


extern StarPlatinum::Application* StarPlatinum::CreateApplication();

int main(int argc, char** argv) {
	StarPlatinum::Log::Init();

	SP_CORE_WARN("Innitialized Log!");
	int a = 5;
	SP_INFO("Hello! Var={0}", a);

	auto app = StarPlatinum::CreateApplication();
	app->Run();
	delete app;
}

#endif
