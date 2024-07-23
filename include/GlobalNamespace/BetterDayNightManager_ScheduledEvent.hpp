// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BetterDayNightManager
#include "GlobalNamespace/BetterDayNightManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BetterDayNightManager::ScheduledEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BetterDayNightManager::ScheduledEvent*, "", "BetterDayNightManager/ScheduledEvent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BetterDayNightManager/ScheduledEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class BetterDayNightManager::ScheduledEvent : public ::Il2CppObject {
    public:
    public:
    // public System.Int64 lastDayCalled
    // Size: 0x8
    // Offset: 0x10
    int64_t lastDayCalled;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Int32 hour
    // Size: 0x4
    // Offset: 0x18
    int hour;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: hour and: action
    char __padding1[0x4] = {};
    // public System.Action action
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* action;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: public System.Int64 lastDayCalled
    [[deprecated("Use field access instead!")]] int64_t& dyn_lastDayCalled();
    // Get instance field reference: public System.Int32 hour
    [[deprecated("Use field access instead!")]] int& dyn_hour();
    // Get instance field reference: public System.Action action
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_action();
    // public System.Void .ctor()
    // Offset: 0x2737A54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BetterDayNightManager::ScheduledEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BetterDayNightManager::ScheduledEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BetterDayNightManager::ScheduledEvent*, creationType>()));
    }
  }; // BetterDayNightManager/ScheduledEvent
  #pragma pack(pop)
  static check_size<sizeof(BetterDayNightManager::ScheduledEvent), 32 + sizeof(::System::Action*)> __GlobalNamespace_BetterDayNightManager_ScheduledEventSizeCheck;
  static_assert(sizeof(BetterDayNightManager::ScheduledEvent) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BetterDayNightManager::ScheduledEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!