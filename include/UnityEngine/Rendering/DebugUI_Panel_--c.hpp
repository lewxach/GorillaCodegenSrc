// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.DebugUI/Panel
#include "UnityEngine/Rendering/DebugUI_Panel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI::Panel::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI::Panel::$$c*, "UnityEngine.Rendering", "DebugUI/Panel/<>c");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.DebugUI/Panel/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DebugUI::Panel::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.Rendering.DebugUI/Panel/<>c <>9
    static ::UnityEngine::Rendering::DebugUI::Panel::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Rendering.DebugUI/Panel/<>c <>9
    static void _set_$$9(::UnityEngine::Rendering::DebugUI::Panel::$$c* value);
    // Get static field: static public System.Action`1<UnityEngine.Rendering.DebugUI/Panel> <>9__29_0
    static ::System::Action_1<::UnityEngine::Rendering::DebugUI::Panel*>* _get_$$9__29_0();
    // Set static field: static public System.Action`1<UnityEngine.Rendering.DebugUI/Panel> <>9__29_0
    static void _set_$$9__29_0(::System::Action_1<::UnityEngine::Rendering::DebugUI::Panel*>* value);
    // static private System.Void .cctor()
    // Offset: 0x524AE90
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x524AEF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugUI::Panel::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::DebugUI::Panel::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugUI::Panel::$$c*, creationType>()));
    }
    // System.Void <.ctor>b__29_0(UnityEngine.Rendering.DebugUI/Panel <p0>)
    // Offset: 0x524AF00
    void $_ctor$b__29_0(::UnityEngine::Rendering::DebugUI::Panel* $p0$);
  }; // UnityEngine.Rendering.DebugUI/Panel/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::DebugUI::Panel::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::Panel::$$c::$_ctor$b__29_0
// Il2CppName: <.ctor>b__29_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DebugUI::Panel::$$c::*)(::UnityEngine::Rendering::DebugUI::Panel*)>(&UnityEngine::Rendering::DebugUI::Panel::$$c::$_ctor$b__29_0)> {
  static const MethodInfo* get() {
    static auto* $p0$ = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DebugUI/Panel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::Panel::$$c*), "<.ctor>b__29_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{$p0$});
  }
};
