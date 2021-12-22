#include "RE/N/NiTimeController.h"

namespace RE
{
	const NiRTTI* NiTimeController::GetRTTI() const
	{
		REL::Relocation<const NiRTTI*> rtti{ NiTimeController::Ni_RTTI };
		return rtti.get();
	}

	void NiTimeController::LoadBinary(NiStream& a_stream)
	{
		using func_t = decltype(&NiTimeController::LoadBinary);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(70810) };
#else
		REL::Relocation<func_t> func{ REL::ID(69433) };
#endif		
		return func(this, a_stream);
	}

	void NiTimeController::LinkObject(NiStream& a_stream)
	{
		using func_t = decltype(&NiTimeController::LinkObject);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(70811) };
#else
		REL::Relocation<func_t> func{ REL::ID(69434) };
#endif		
		return func(this, a_stream);
	}

	bool NiTimeController::RegisterStreamables(NiStream& a_stream)
	{
		using func_t = decltype(&NiTimeController::RegisterStreamables);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(70812) };
#else
		REL::Relocation<func_t> func{ REL::ID(69435) };
#endif		
		return func(this, a_stream);
	}

	void NiTimeController::SaveBinary(NiStream& a_stream)
	{
		using func_t = decltype(&NiTimeController::SaveBinary);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(70813) };
#else
		REL::Relocation<func_t> func{ REL::ID(69436) };
#endif		
		return func(this, a_stream);
	}

	bool NiTimeController::IsEqual(NiObject* a_object)
	{
		using func_t = decltype(&NiTimeController::IsEqual);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(70814) };
#else
		REL::Relocation<func_t> func{ REL::ID(69437) };
#endif		
		return func(this, a_object);
	}

	void NiTimeController::ProcessClone(NiCloningProcess& a_cloning)
	{
		using func_t = decltype(&NiTimeController::ProcessClone);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(70826) };
#else
		REL::Relocation<func_t> func{ REL::ID(69449) };
#endif		
		return func(this, a_cloning);
	}

	void NiTimeController::Start(float a_time)
	{
		using func_t = decltype(&NiTimeController::Start);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(70817) };
#else
		REL::Relocation<func_t> func{ REL::ID(69440) };
#endif		
		return func(this, a_time);
	}

	void NiTimeController::Stop()
	{
		using func_t = decltype(&NiTimeController::Stop);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(70818) };
#else
		REL::Relocation<func_t> func{ REL::ID(69441) };
#endif		
		return func(this);
	}

	void NiTimeController::SetTarget(NiObjectNET* a_target)
	{
		using func_t = decltype(&NiTimeController::SetTarget);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(70819) };
#else
		REL::Relocation<func_t> func{ REL::ID(69442) };
#endif		
		return func(this, a_target);
	}

	float NiTimeController::ComputeScaledTime(float a_time)
	{
		using func_t = decltype(&NiTimeController::ComputeScaledTime);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(70824) };
#else
		REL::Relocation<func_t> func{ REL::ID(69447) };
#endif		
		return func(this, a_time);
	}

	NiTimeController* NiTimeController::ctor()
	{
		using func_t = decltype(&NiTimeController::ctor);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(70815) };
#else
		REL::Relocation<func_t> func{ REL::ID(69438) };
#endif		
		return func(this);
	}

	void NiTimeController::dtor()
	{
		using func_t = decltype(&NiTimeController::dtor);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(70816) };
#else
		REL::Relocation<func_t> func{ REL::ID(69439) };
#endif		
		return func(this);
	}
}
