#include "RE/O/Object.h"

#include "RE/I/IObjectHandlePolicy.h"
#include "RE/O/ObjectTypeInfo.h"
#include "RE/V/VirtualMachine.h"

namespace RE
{
	namespace BSScript
	{
		Object::~Object()
		{
			Dtor();
			stl::memzero(this);
		}

		VMHandle Object::GetHandle() const
		{
			using func_t = decltype(&Object::GetHandle);
#ifdef SKYRIM_AE
			REL::Relocation<func_t> func{ REL::ID(104247) };
#else
			REL::Relocation<func_t> func{ REL::ID(97463) };
#endif		
			return func(this);
		}

		ObjectTypeInfo* Object::GetTypeInfo()
		{
			return type.get();
		}

		const ObjectTypeInfo* Object::GetTypeInfo() const
		{
			return type.get();
		}

		void* Object::Resolve(VMTypeID a_typeID) const
		{
			auto vm = Internal::VirtualMachine::GetSingleton();
			auto policy = vm ? vm->GetObjectHandlePolicy() : nullptr;
			auto myHandle = GetHandle();
			if (policy && policy->HandleIsType(a_typeID, myHandle) && policy->IsHandleObjectAvailable(myHandle)) {
				return policy->GetObjectForHandle(a_typeID, myHandle);
			} else {
				return nullptr;
			}
		}

		void Object::IncRef()
		{
			using func_t = decltype(&Object::IncRef);
#ifdef SKYRIM_AE
			REL::Relocation<func_t> func{ REL::ID(104252) };
#else
			REL::Relocation<func_t> func{ REL::ID(97468) };
#endif		
			return func(this);
		}

		std::uint32_t Object::DecRef()
		{
			using func_t = decltype(&Object::DecRef);
#ifdef SKYRIM_AE
			REL::Relocation<func_t> func{ REL::ID(104253) };
#else
			REL::Relocation<func_t> func{ REL::ID(97469) };
#endif		
			return func(this);
		}

		Variable* Object::GetProperty(const BSFixedString& a_name)
		{
			return const_cast<Variable*>(
				const_cast<const Object*>(this)->GetProperty(a_name));
		}

		const Variable* Object::GetProperty(const BSFixedString& a_name) const
		{
			constexpr auto INVALID = static_cast<std::uint32_t>(-1);

			auto idx = INVALID;
			for (auto cls = type.get(); cls && idx == INVALID; cls = cls->GetParent()) {
				idx = cls->GetPropertyIndex(a_name);
			}

			return idx != INVALID ? std::addressof(variables[idx]) : nullptr;
		}

		void Object::Dtor()
		{
			using func_t = decltype(&Object::Dtor);
#ifdef SKYRIM_AE
			REL::Relocation<func_t> func{ REL::ID(104246) };
#else
			REL::Relocation<func_t> func{ REL::ID(97462) };
#endif		
			return func(this);
		}
	}
}
