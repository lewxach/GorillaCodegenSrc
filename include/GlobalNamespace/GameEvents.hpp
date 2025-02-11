// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaNetworking.GorillaKeyboardBindings
#include "GorillaNetworking/GorillaKeyboardBindings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent`1<T0>
  template<typename T0>
  class UnityEvent_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameEvents
  class GameEvents;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameEvents);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameEvents*, "", "GameEvents");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GameEvents
  // [TokenAttribute] Offset: FFFFFFFF
  class GameEvents : public ::Il2CppObject {
    public:
    // Get static field: static public UnityEngine.Events.UnityEvent`1<GorillaNetworking.GorillaKeyboardBindings> OnGorrillaKeyboardButtonPressedEvent
    static ::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaKeyboardBindings>* _get_OnGorrillaKeyboardButtonPressedEvent();
    // Set static field: static public UnityEngine.Events.UnityEvent`1<GorillaNetworking.GorillaKeyboardBindings> OnGorrillaKeyboardButtonPressedEvent
    static void _set_OnGorrillaKeyboardButtonPressedEvent(::UnityEngine::Events::UnityEvent_1<::GorillaNetworking::GorillaKeyboardBindings>* value);
    // Get static field: static UnityEngine.Events.UnityEvent`1<System.String> ScreenTextChangedEvent
    static ::UnityEngine::Events::UnityEvent_1<::StringW>* _get_ScreenTextChangedEvent();
    // Set static field: static UnityEngine.Events.UnityEvent`1<System.String> ScreenTextChangedEvent
    static void _set_ScreenTextChangedEvent(::UnityEngine::Events::UnityEvent_1<::StringW>* value);
    // Get static field: static UnityEngine.Events.UnityEvent`1<UnityEngine.Material[]> ScreenTextMaterialsEvent
    static ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityEngine::Material*>>* _get_ScreenTextMaterialsEvent();
    // Set static field: static UnityEngine.Events.UnityEvent`1<UnityEngine.Material[]> ScreenTextMaterialsEvent
    static void _set_ScreenTextMaterialsEvent(::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityEngine::Material*>>* value);
    // Get static field: static UnityEngine.Events.UnityEvent`1<System.String> FunctionSelectTextChangedEvent
    static ::UnityEngine::Events::UnityEvent_1<::StringW>* _get_FunctionSelectTextChangedEvent();
    // Set static field: static UnityEngine.Events.UnityEvent`1<System.String> FunctionSelectTextChangedEvent
    static void _set_FunctionSelectTextChangedEvent(::UnityEngine::Events::UnityEvent_1<::StringW>* value);
    // Get static field: static UnityEngine.Events.UnityEvent`1<UnityEngine.Material[]> FunctionTextMaterialsEvent
    static ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityEngine::Material*>>* _get_FunctionTextMaterialsEvent();
    // Set static field: static UnityEngine.Events.UnityEvent`1<UnityEngine.Material[]> FunctionTextMaterialsEvent
    static void _set_FunctionTextMaterialsEvent(::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityEngine::Material*>>* value);
    // Get static field: static UnityEngine.Events.UnityEvent`1<System.String> ScoreboardTextChangedEvent
    static ::UnityEngine::Events::UnityEvent_1<::StringW>* _get_ScoreboardTextChangedEvent();
    // Set static field: static UnityEngine.Events.UnityEvent`1<System.String> ScoreboardTextChangedEvent
    static void _set_ScoreboardTextChangedEvent(::UnityEngine::Events::UnityEvent_1<::StringW>* value);
    // Get static field: static UnityEngine.Events.UnityEvent`1<UnityEngine.Material[]> ScoreboardMaterialsEvent
    static ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityEngine::Material*>>* _get_ScoreboardMaterialsEvent();
    // Set static field: static UnityEngine.Events.UnityEvent`1<UnityEngine.Material[]> ScoreboardMaterialsEvent
    static void _set_ScoreboardMaterialsEvent(::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityEngine::Material*>>* value);
    // public System.Void .ctor()
    // Offset: 0x26DD630
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameEvents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameEvents*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x26DD638
    static void _cctor();
  }; // GameEvents
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameEvents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameEvents::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::GameEvents::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEvents*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
