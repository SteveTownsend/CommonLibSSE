#include "RE/I/IHandlerFunctor.h"

namespace RE
{
	HandlerDictionary* HandlerDictionary::GetSingleton()
	{
#ifdef SKYRIM_AE
		REL::Relocation<HandlerDictionary**> singleton{ REL::ID(404607) };
#else
		REL::Relocation<HandlerDictionary**> singleton{ REL::ID(518086) };
#endif		
		return *singleton;
	}
}
