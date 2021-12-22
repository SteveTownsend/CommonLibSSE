#include "RE/B/BSResponse.h"

namespace RE
{
	ResponseDictionary* ResponseDictionary::GetSingleton()
	{
#ifdef SKYRIM_AE
		REL::Relocation<ResponseDictionary**> singleton{ REL::ID(403902) };
#else
		REL::Relocation<ResponseDictionary**> singleton{ REL::ID(517372) };
#endif		
		return *singleton;
	}
}
