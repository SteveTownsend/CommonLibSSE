#include "RE/M/Main.h"

namespace RE
{
	Main* Main::GetSingleton()
	{
		REL::Relocation<Main**> singleton{ Offset::Main::Singleton };
		return *singleton;
	}

	float Main::QFrameAnimTime()
	{
#ifdef SKYRIM_AE
		REL::Relocation<float*> data{ REL::ID(403447) };
#else
		REL::Relocation<float*> data{ REL::ID(516940) };
#endif		
		return *data;
	}
}
