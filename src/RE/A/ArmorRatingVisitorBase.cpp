#include "RE/A/ArmorRatingVisitorBase.h"

namespace RE
{
	bool ArmorRatingVisitorBase::Visit(InventoryEntryData* a_entryData)
	{
		using func_t = decltype(&ArmorRatingVisitorBase::Visit);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func(REL::ID(40299));
#else
		REL::Relocation<func_t> func(REL::ID(39223));
#endif		
		return func(this, a_entryData);
	}
}
