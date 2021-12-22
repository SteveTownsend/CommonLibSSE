#include "RE/P/ProcessLists.h"

namespace RE
{
	ProcessLists* ProcessLists::GetSingleton()
	{
#ifdef SKYRIM_AE
		REL::Relocation<ProcessLists**> singleton{ REL::ID(400315) };
#else
		REL::Relocation<ProcessLists**> singleton{ REL::ID(514167) };
#endif		
		return *singleton;
	}

	void ProcessLists::ClearCachedFactionFightReactions() const
	{
		using func_t = decltype(&ProcessLists::ClearCachedFactionFightReactions);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(41410) };
#else
		REL::Relocation<func_t> func{ REL::ID(40396) };
#endif		
		return func(this);
	}

	void ProcessLists::StopCombatAndAlarmOnActor(Actor* a_actor, bool a_notAlarm)
	{
		using func_t = decltype(&ProcessLists::StopCombatAndAlarmOnActor);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(41340) };
#else
		REL::Relocation<func_t> func{ REL::ID(40330) };
#endif		
		return func(this, a_actor, a_notAlarm);
	}
}
