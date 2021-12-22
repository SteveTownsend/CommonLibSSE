#include "RE/C/ContainerMenu.h"

namespace RE
{
	ContainerMenu::ContainerMode ContainerMenu::GetContainerMode()
	{
#ifdef SKYRIM_AE
		REL::Relocation<ContainerMode*> mode{ REL::ID(405937) };
#else
		REL::Relocation<ContainerMode*> mode{ REL::ID(519396) };
#endif		
		return *mode;
	}

	RefHandle ContainerMenu::GetTargetRefHandle()
	{
#ifdef SKYRIM_AE
		REL::Relocation<RefHandle*> handle{ REL::ID(405962) };
#else
		REL::Relocation<RefHandle*> handle{ REL::ID(519421) };
#endif		
		return *handle;
	}
}
