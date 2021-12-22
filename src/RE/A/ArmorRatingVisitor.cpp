#include "RE/A/ArmorRatingVisitor.h"

namespace RE
{
	bool ArmorRatingVisitor::HaveNotVisitedArmor(TESObjectARMO* a_armor)
	{
		using func_t = decltype(&ArmorRatingVisitor::HaveNotVisitedArmor);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func(REL::ID(40297));
#else
		REL::Relocation<func_t> func(REL::ID(39221));
#endif		
		return func(this, a_armor);
	}

	void ArmorRatingVisitor::VisitArmor(TESObjectARMO* a_armor)
	{
		using func_t = decltype(&ArmorRatingVisitor::VisitArmor);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func(REL::ID(40293));
#else
		REL::Relocation<func_t> func(REL::ID(39217));
#endif		
		return func(this, a_armor);
	}
}
