// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Stopwatch
  class Stopwatch;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: SimulationItem
  class SimulationItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::SimulationItem);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SimulationItem*, "ExitGames.Client.Photon", "SimulationItem");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.SimulationItem
  // [TokenAttribute] Offset: FFFFFFFF
  class SimulationItem : public ::Il2CppObject {
    public:
    public:
    // readonly System.Diagnostics.Stopwatch stopw
    // Size: 0x8
    // Offset: 0x10
    ::System::Diagnostics::Stopwatch* stopw;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Stopwatch*) == 0x8);
    // public System.Int32 TimeToExecute
    // Size: 0x4
    // Offset: 0x18
    int TimeToExecute;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: TimeToExecute and: DelayedData
    char __padding1[0x4] = {};
    // public System.Byte[] DelayedData
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> DelayedData;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 <Delay>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int Delay;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: readonly System.Diagnostics.Stopwatch stopw
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Stopwatch*& dyn_stopw();
    // Get instance field reference: public System.Int32 TimeToExecute
    [[deprecated("Use field access instead!")]] int& dyn_TimeToExecute();
    // Get instance field reference: public System.Byte[] DelayedData
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_DelayedData();
    // Get instance field reference: private System.Int32 <Delay>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Delay$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0x49D71F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimulationItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::SimulationItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimulationItem*, creationType>()));
    }
    // public System.Int32 get_Delay()
    // Offset: 0x49D7278
    int get_Delay();
    // System.Void set_Delay(System.Int32 value)
    // Offset: 0x49D7280
    void set_Delay(int value);
  }; // ExitGames.Client.Photon.SimulationItem
  #pragma pack(pop)
  static check_size<sizeof(SimulationItem), 40 + sizeof(int)> __ExitGames_Client_Photon_SimulationItemSizeCheck;
  static_assert(sizeof(SimulationItem) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::SimulationItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::SimulationItem::get_Delay
// Il2CppName: get_Delay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::SimulationItem::*)()>(&ExitGames::Client::Photon::SimulationItem::get_Delay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SimulationItem*), "get_Delay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SimulationItem::set_Delay
// Il2CppName: set_Delay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::SimulationItem::*)(int)>(&ExitGames::Client::Photon::SimulationItem::set_Delay)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SimulationItem*), "set_Delay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};