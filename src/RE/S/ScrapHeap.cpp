#include "RE/S/ScrapHeap.h"

namespace RE
{
	void* ScrapHeap::Allocate(std::size_t a_size, std::size_t a_alignment)
	{
		using func_t = decltype(&ScrapHeap::Allocate);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(68144) };
#else
		REL::Relocation<func_t> func{ REL::ID(66884) };
#endif		
		return func(this, a_size, a_alignment);
	}

	void ScrapHeap::Deallocate(void* a_mem)
	{
		using func_t = decltype(&ScrapHeap::Deallocate);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(68146) };
#else
		REL::Relocation<func_t> func{ REL::ID(66885) };
#endif		
		return func(this, a_mem);
	}
}
