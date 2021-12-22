#include "RE/B/BarterMenu.h"

namespace RE
{
	RefHandle BarterMenu::GetTargetRefHandle()
	{
#ifdef SKYRIM_AE
		REL::Relocation<RefHandle*> handle{ REL::ID(403520) };
#else
		REL::Relocation<RefHandle*> handle{ REL::ID(519283) };
#endif		
		return *handle;
	}
}
