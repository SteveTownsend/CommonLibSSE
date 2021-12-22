#include "RE/B/BGSOpenCloseForm.h"

namespace RE
{
	auto BGSOpenCloseForm::GetOpenState(const TESObjectREFR* a_ref)
		-> OPEN_STATE
	{
		using func_t = decltype(&BGSOpenCloseForm::GetOpenState);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(14288) };
#else
		REL::Relocation<func_t> func{ REL::ID(14180) };
#endif		
		return func(a_ref);
	}

	void BGSOpenCloseForm::SetOpenState(TESObjectREFR* a_ref, bool a_open, bool a_snap)
	{
		using func_t = decltype(&BGSOpenCloseForm::SetOpenState);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(14287) };
#else
		REL::Relocation<func_t> func{ REL::ID(14179) };
#endif		
		return func(a_ref, a_open, a_snap);
	}
}
