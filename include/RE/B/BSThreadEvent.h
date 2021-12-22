#pragma once

namespace RE
{
	struct BSThreadEvent
	{
		static void InitSDM()
		{
			using func_t = decltype(&BSThreadEvent::InitSDM);
#ifdef SKYRIM_AE			
			REL::Relocation<func_t> func{ REL::ID(68449) };
#else			
			REL::Relocation<func_t> func{ REL::ID(67151) };
#endif			
			return func();
		}
	};
}
