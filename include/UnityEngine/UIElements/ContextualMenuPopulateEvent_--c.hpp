// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.ContextualMenuPopulateEvent
#include "UnityEngine/UIElements/ContextualMenuPopulateEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::ContextualMenuPopulateEvent::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextualMenuPopulateEvent::$$c*, "UnityEngine.UIElements", "ContextualMenuPopulateEvent/<>c");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.ContextualMenuPopulateEvent/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ContextualMenuPopulateEvent::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UIElements.ContextualMenuPopulateEvent/<>c <>9
    static ::UnityEngine::UIElements::ContextualMenuPopulateEvent::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UIElements.ContextualMenuPopulateEvent/<>c <>9
    static void _set_$$9(::UnityEngine::UIElements::ContextualMenuPopulateEvent::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x565234C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x56523B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextualMenuPopulateEvent::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::ContextualMenuPopulateEvent::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextualMenuPopulateEvent::$$c*, creationType>()));
    }
    // UnityEngine.UIElements.ContextualMenuPopulateEvent <.cctor>b__0_0()
    // Offset: 0x56523BC
    ::UnityEngine::UIElements::ContextualMenuPopulateEvent* $_cctor$b__0_0();
  }; // UnityEngine.UIElements.ContextualMenuPopulateEvent/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::ContextualMenuPopulateEvent::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::ContextualMenuPopulateEvent::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ContextualMenuPopulateEvent::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ContextualMenuPopulateEvent::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::ContextualMenuPopulateEvent::$$c::$_cctor$b__0_0
// Il2CppName: <.cctor>b__0_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ContextualMenuPopulateEvent* (UnityEngine::UIElements::ContextualMenuPopulateEvent::$$c::*)()>(&UnityEngine::UIElements::ContextualMenuPopulateEvent::$$c::$_cctor$b__0_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ContextualMenuPopulateEvent::$$c*), "<.cctor>b__0_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
