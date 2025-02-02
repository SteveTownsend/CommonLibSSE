#include "RE/I/InventoryChanges.h"

namespace RE
{
	InventoryChanges::InventoryChanges() :
		InventoryChanges(nullptr)
	{}

	InventoryChanges::InventoryChanges(TESObjectREFR* a_ref)
	{
		Ctor(a_ref);
	}

	InventoryChanges::~InventoryChanges()
	{
		Dtor();
		stl::memzero(this);
	}

	void InventoryChanges::AddEntryData(InventoryEntryData* a_entry)
	{
		if (!entryList) {
			entryList = new std::remove_pointer_t<decltype(entryList)>;
		}

		entryList->push_front(a_entry);
		changed = true;
	}

	TESObjectARMO* InventoryChanges::GetArmorInSlot(std::int32_t a_slot)
	{
		using func_t = decltype(&InventoryChanges::GetArmorInSlot);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(16113) };
#else
		REL::Relocation<func_t> func{ REL::ID(15873) };
#endif		
		return func(this, a_slot);
	}

	std::uint16_t InventoryChanges::GetNextUniqueID()
	{
		using func_t = decltype(&InventoryChanges::GetNextUniqueID);
		REL::Relocation<func_t> func{ Offset::InventoryChanges::GetNextUniqueID };
		return func(this);
	}

	void InventoryChanges::SendContainerChangedEvent(ExtraDataList* a_itemExtraList, TESObjectREFR* a_fromRefr, TESForm* a_item, std::int32_t a_count)
	{
		using func_t = decltype(&InventoryChanges::SendContainerChangedEvent);
		REL::Relocation<func_t> func{ Offset::InventoryChanges::SendContainerChangedEvent };
		return func(this, a_itemExtraList, a_fromRefr, a_item, a_count);
	}

	void InventoryChanges::SetUniqueID(ExtraDataList* a_itemList, TESForm* a_oldForm, TESForm* a_newForm)
	{
		using func_t = decltype(&InventoryChanges::SetUniqueID);
		REL::Relocation<func_t> func{ Offset::InventoryChanges::SetUniqueID };
		return func(this, a_itemList, a_oldForm, a_newForm);
	}

	void InventoryChanges::InitFromContainerExtra()
	{
		using func_t = decltype(&InventoryChanges::InitFromContainerExtra);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(16130) };
#else
		REL::Relocation<func_t> func{ REL::ID(15890) };
#endif		
		return func(this);
	}

	void InventoryChanges::InitLeveledItems()
	{
		using func_t = decltype(&InventoryChanges::InitLeveledItems);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(16129) };
#else
		REL::Relocation<func_t> func{ REL::ID(15889) };
#endif		
		return func(this);
	}

	void InventoryChanges::InitScripts()
	{
		using func_t = decltype(&InventoryChanges::InitScripts);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(16068) };
#else
		REL::Relocation<func_t> func{ REL::ID(15829) };
#endif		
		return func(this);
	}

	InventoryChanges* InventoryChanges::Ctor(TESObjectREFR* a_ref)
	{
		using func_t = decltype(&InventoryChanges::Ctor);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(16050) };
#else
		REL::Relocation<func_t> func{ REL::ID(15812) };
#endif		
		return func(this, a_ref);
	}

	void InventoryChanges::Dtor()
	{
		using func_t = decltype(&InventoryChanges::Dtor);
#ifdef SKYRIM_AE
		REL::Relocation<func_t> func{ REL::ID(16051) };
#else
		REL::Relocation<func_t> func{ REL::ID(15813) };
#endif		
		return func(this);
	}
}
