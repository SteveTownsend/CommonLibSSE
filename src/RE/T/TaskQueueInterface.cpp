#include "RE/T/TaskQueueInterface.h"

namespace RE
{
	TaskQueueInterface* TaskQueueInterface::GetSingleton()
	{
#ifdef SKYRIM_AE
		REL::Relocation<TaskQueueInterface**> singleton{ REL::ID(403759) };
#else
		REL::Relocation<TaskQueueInterface**> singleton{ REL::ID(517228) };
#endif		
		return *singleton;
	}
}
