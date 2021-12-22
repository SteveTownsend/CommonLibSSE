#include "RE/B/BookMenu.h"

#include "RE/T/TESObjectREFR.h"

namespace RE
{
	TESObjectREFR* BookMenu::GetTargetReference()
	{
#ifdef SKYRIM_AE
		REL::Relocation<TESObjectREFRPtr*> refptr{ REL::ID(405840) };
#else
		REL::Relocation<TESObjectREFRPtr*> refptr{ REL::ID(519300) };
#endif		
		return refptr->get();
	}
}
