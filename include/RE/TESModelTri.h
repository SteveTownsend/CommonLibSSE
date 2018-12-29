#pragma once

#include "RE/TESModel.h"


namespace RE
{
	class TESModelTri : public TESModel
	{
	public:
		virtual ~TESModelTri();											// 00

		// override (TESModel)
		virtual void SetModelName(const char* a_modelName) override;	// 05
	};
	STATIC_ASSERT(sizeof(TESModelTri) == 0x28);
}
