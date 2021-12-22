#include "RE/G/GiftMenu.h"

namespace RE
{
	RefHandle GiftMenu::GetTargetRefHandle()
	{
#ifdef SKYRIM_AE
		REL::Relocation<RefHandle*> handle{ REL::ID(406111) };
#else
		REL::Relocation<RefHandle*> handle{ REL::ID(519570) };
#endif		
		return *handle;
	}
}
