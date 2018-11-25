#pragma once

#ifdef FX_PLATFORM_WINDOWS

extern fx::App* fx::CreateApp();

int main(int argc,char** argv) {
	printf("fx Entry point");
	auto app = fx::CreateApp();
	app->Run();
	delete app;
}
#endif // FX_PLATFORM_WINDOWS
