#pragma once
#pragma once

#include "Core.h"

namespace fx
{
	class FX_API App
	{
	public:
		App();
		virtual ~App();
		void Run();
	};

	// to be defined by client
	App* CreateApp();
}
