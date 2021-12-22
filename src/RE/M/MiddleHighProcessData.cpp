#include "RE/M/MiddleHighProcessData.h"
#include "SKSE/API.h"

namespace RE
{
	void HitData::Populate(Actor* a_aggressor, Actor* a_target, InventoryEntryData* a_weapon)
	{
		using func_t = decltype(&HitData::Populate);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func(REL::ID(44001));
#else
		REL::Relocation<func_t> func(REL::ID(42832));
#endif		
		return func(this, a_aggressor, a_target, a_weapon);
	}
}
