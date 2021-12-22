#include "RE/L/LockpickingMenu.h"

#include "RE/T/TESObjectREFR.h"

namespace RE
{
	TESObjectREFR* LockpickingMenu::GetTargetReference()
	{
#ifdef SKYRIM_AE
		REL::Relocation<TESObjectREFRPtr*> refptr{ REL::ID(406271) };
#else
		REL::Relocation<TESObjectREFRPtr*> refptr{ REL::ID(519716) };
#endif		
		return refptr->get();
	}
}
