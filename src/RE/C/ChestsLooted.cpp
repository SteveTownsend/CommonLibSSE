#include "RE/C/ChestsLooted.h"

namespace RE
{
	BSTEventSource<ChestsLooted::Event>* ChestsLooted::GetEventSource()
	{
		using func_t = decltype(&ChestsLooted::GetEventSource);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(51182) };
#else
		REL::Relocation<func_t> func{ REL::ID(50257) };
#endif		
		return func();
	}

	void ChestsLooted::SendEvent()
	{
		const Event e{};
		auto        source = GetEventSource();
		if (source) {
			source->SendEvent(&e);
		}
	}
}
