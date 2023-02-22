#pragma once

#ifdef SP_PLATFORM_WINDOWS


extern StarPlatinum::Application* StarPlatinum::CreateApplication();

int main(int argc, char** argv) {
	printf("StarPlatinum Engine");
	auto app = StarPlatinum::CreateApplication();
	app->Run();
	delete app;
}


#endif
