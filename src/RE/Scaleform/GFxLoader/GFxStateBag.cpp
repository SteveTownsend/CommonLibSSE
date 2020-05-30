#include "RE/GFxStateBag.h"


namespace RE
{
	GFxStateBag* GFxStateBag::GetStateBagImpl() const
	{
		return nullptr;
	}


	GFxStateBag::~GFxStateBag()
	{}


	void GFxStateBag::SetState(GFxState::StateType a_stateType, GFxState* a_state)
	{
		assert(a_state);
		GFxStateBag* stateBag = GetStateBagImpl();
		if (stateBag) {
			assert(a_state->GetStateType() == a_stateType);
			stateBag->SetState(a_stateType, a_state);
		}
	}


	GFxState* GFxStateBag::GetStateAddRef(GFxState::StateType a_stateType) const
	{
		GFxStateBag* stateBag = GetStateBagImpl();
		return stateBag ? stateBag->GetStateAddRef(a_stateType) : nullptr;
	}


	void GFxStateBag::GetStatesAddRef(GFxState** a_stateList, const GFxState::StateType* a_stateTypes, UInt32 a_count) const
	{
		GFxStateBag* stateBag = GetStateBagImpl();
		if (stateBag) {
			stateBag->GetStatesAddRef(a_stateList, a_stateTypes, a_count);
		}
	}


	GPtr<GFxState> GFxStateBag::GetState(GFxState::StateType a_stateType) const
	{
		GPtr<GFxState> ptr(GetStateAddRef(a_stateType));
		ptr->Release();
		return ptr;
	}
}