// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.PointerCaptureOutEvent
#include "UnityEngine/UIElements/PointerCaptureOutEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureOutEvent::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureOutEvent::$$c*, "UnityEngine.UIElements", "PointerCaptureOutEvent/<>c");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.PointerCaptureOutEvent/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PointerCaptureOutEvent::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UIElements.PointerCaptureOutEvent/<>c <>9
    static ::UnityEngine::UIElements::PointerCaptureOutEvent::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UIElements.PointerCaptureOutEvent/<>c <>9
    static void _set_$$9(::UnityEngine::UIElements::PointerCaptureOutEvent::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x5646954
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x56469BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerCaptureOutEvent::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PointerCaptureOutEvent::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerCaptureOutEvent::$$c*, creationType>()));
    }
    // UnityEngine.UIElements.PointerCaptureOutEvent <.cctor>b__0_0()
    // Offset: 0x56469C4
    ::UnityEngine::UIElements::PointerCaptureOutEvent* $_cctor$b__0_0();
  }; // UnityEngine.UIElements.PointerCaptureOutEvent/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCaptureOutEvent::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::PointerCaptureOutEvent::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCaptureOutEvent::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCaptureOutEvent::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCaptureOutEvent::$$c::$_cctor$b__0_0
// Il2CppName: <.cctor>b__0_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::PointerCaptureOutEvent* (UnityEngine::UIElements::PointerCaptureOutEvent::$$c::*)()>(&UnityEngine::UIElements::PointerCaptureOutEvent::$$c::$_cctor$b__0_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCaptureOutEvent::$$c*), "<.cctor>b__0_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};