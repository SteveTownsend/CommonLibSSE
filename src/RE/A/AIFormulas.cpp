#include "RE/A/AIFormulas.h"

namespace RE
{
	namespace AIFormulas
	{
		std::int32_t ComputePickpocketSuccess(float a_thiefSkill, float a_targetSkill, std::uint32_t a_valueStolen, float a_weightStolen, Actor* a_thief, Actor* a_target, bool a_isDetected, TESForm* a_itemPickpocketing)
		{
			using func_t = decltype(ComputePickpocketSuccess);
#ifdef SKYRIM_AE
			REL::Relocation<func_t> func{ REL::ID(26379) };
#else
			REL::Relocation<func_t> func{ REL::ID(25822) };
#endif		
			return func(a_thiefSkill, a_targetSkill, a_valueStolen, a_weightStolen, a_thief, a_target, a_isDetected, a_itemPickpocketing);
		}
	}
}
