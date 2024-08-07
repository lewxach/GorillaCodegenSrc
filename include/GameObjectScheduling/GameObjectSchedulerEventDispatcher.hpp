// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: GameObjectScheduling
namespace GameObjectScheduling {
  // Forward declaring type: GameObjectSchedulerEventDispatcher
  class GameObjectSchedulerEventDispatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GameObjectScheduling::GameObjectSchedulerEventDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::GameObjectScheduling::GameObjectSchedulerEventDispatcher*, "GameObjectScheduling", "GameObjectSchedulerEventDispatcher");
// Type namespace: GameObjectScheduling
namespace GameObjectScheduling {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: GameObjectScheduling.GameObjectSchedulerEventDispatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class GameObjectSchedulerEventDispatcher : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Events.UnityEvent onScheduledActivation
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Events::UnityEvent* onScheduledActivation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent onScheduledDeactivation
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Events::UnityEvent* onScheduledDeactivation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Events.UnityEvent onScheduledActivation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_onScheduledActivation();
    // Get instance field reference: private UnityEngine.Events.UnityEvent onScheduledDeactivation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_onScheduledDeactivation();
    // public UnityEngine.Events.UnityEvent get_OnScheduledActivation()
    // Offset: 0x28CF0A0
    ::UnityEngine::Events::UnityEvent* get_OnScheduledActivation();
    // public UnityEngine.Events.UnityEvent get_OnScheduledDeactivation()
    // Offset: 0x28CF0A8
    ::UnityEngine::Events::UnityEvent* get_OnScheduledDeactivation();
    // public System.Void .ctor()
    // Offset: 0x28CF0B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameObjectSchedulerEventDispatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GameObjectScheduling::GameObjectSchedulerEventDispatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameObjectSchedulerEventDispatcher*, creationType>()));
    }
  }; // GameObjectScheduling.GameObjectSchedulerEventDispatcher
  #pragma pack(pop)
  static check_size<sizeof(GameObjectSchedulerEventDispatcher), 40 + sizeof(::UnityEngine::Events::UnityEvent*)> __GameObjectScheduling_GameObjectSchedulerEventDispatcherSizeCheck;
  static_assert(sizeof(GameObjectSchedulerEventDispatcher) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GameObjectScheduling::GameObjectSchedulerEventDispatcher::get_OnScheduledActivation
// Il2CppName: get_OnScheduledActivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (GameObjectScheduling::GameObjectSchedulerEventDispatcher::*)()>(&GameObjectScheduling::GameObjectSchedulerEventDispatcher::get_OnScheduledActivation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameObjectScheduling::GameObjectSchedulerEventDispatcher*), "get_OnScheduledActivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GameObjectScheduling::GameObjectSchedulerEventDispatcher::get_OnScheduledDeactivation
// Il2CppName: get_OnScheduledDeactivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (GameObjectScheduling::GameObjectSchedulerEventDispatcher::*)()>(&GameObjectScheduling::GameObjectSchedulerEventDispatcher::get_OnScheduledDeactivation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameObjectScheduling::GameObjectSchedulerEventDispatcher*), "get_OnScheduledDeactivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GameObjectScheduling::GameObjectSchedulerEventDispatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
