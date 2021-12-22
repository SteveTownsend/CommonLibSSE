#include "RE/S/ScriptEventSourceHolder.h"

#include "RE/T/TESActivateEvent.h"
#include "RE/T/TESObjectREFR.h"

namespace RE
{
	ScriptEventSourceHolder* ScriptEventSourceHolder::GetSingleton()
	{
		using func_t = decltype(&ScriptEventSourceHolder::GetSingleton);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(14298) };
#else
		REL::Relocation<func_t> func{ REL::ID(14108) };
#endif		
		return func();
	}

	void ScriptEventSourceHolder::SendActivateEvent(const NiPointer<TESObjectREFR>& a_objectActivated, const NiPointer<TESObjectREFR>& a_actionRef)
	{
#ifdef SKYRIM_AE
		const TESActivateEvent e{
			a_objectActivated,
			a_actionRef
		};

		this->SendEvent(&e);
#else
		using func_t = decltype(&ScriptEventSourceHolder::SendActivateEvent);
		REL::Relocation<func_t> func{ REL::ID(19666) };
		func(this, a_objectActivated, a_actionRef);
#endif		
	}

	void ScriptEventSourceHolder::SendOpenCloseEvent(const NiPointer<TESObjectREFR>& a_ref, const NiPointer<TESObjectREFR>& a_activeRef, bool a_isOpened)
	{
		using func_t = decltype(&ScriptEventSourceHolder::SendOpenCloseEvent);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(14299) };
#else
		REL::Relocation<func_t> func{ REL::ID(14190) };
#endif		
		return func(this, a_ref, a_activeRef, a_isOpened);
	}
}
