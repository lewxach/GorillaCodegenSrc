// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DebugUIBuilder
#include "GlobalNamespace/DebugUIBuilder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DebugUIBuilder::$$c__DisplayClass46_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DebugUIBuilder::$$c__DisplayClass46_0*, "", "DebugUIBuilder/<>c__DisplayClass46_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DebugUIBuilder/<>c__DisplayClass46_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DebugUIBuilder::$$c__DisplayClass46_0 : public ::Il2CppObject {
    public:
    public:
    // public DebugUIBuilder/OnToggleValueChange onValueChanged
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::DebugUIBuilder::OnToggleValueChange* onValueChanged;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DebugUIBuilder::OnToggleValueChange*) == 0x8);
    // public UnityEngine.UI.Toggle t
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Toggle* t;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    public:
    // Get instance field reference: public DebugUIBuilder/OnToggleValueChange onValueChanged
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DebugUIBuilder::OnToggleValueChange*& dyn_onValueChanged();
    // Get instance field reference: public UnityEngine.UI.Toggle t
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn_t();
    // public System.Void .ctor()
    // Offset: 0x291DB24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugUIBuilder::$$c__DisplayClass46_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DebugUIBuilder::$$c__DisplayClass46_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugUIBuilder::$$c__DisplayClass46_0*, creationType>()));
    }
    // System.Void <AddToggle>b__0(System.Boolean <p0>)
    // Offset: 0x291E50C
    void $AddToggle$b__0(bool $p0$);
  }; // DebugUIBuilder/<>c__DisplayClass46_0
  #pragma pack(pop)
  static check_size<sizeof(DebugUIBuilder::$$c__DisplayClass46_0), 24 + sizeof(::UnityEngine::UI::Toggle*)> __GlobalNamespace_DebugUIBuilder_$$c__DisplayClass46_0SizeCheck;
  static_assert(sizeof(DebugUIBuilder::$$c__DisplayClass46_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DebugUIBuilder::$$c__DisplayClass46_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DebugUIBuilder::$$c__DisplayClass46_0::$AddToggle$b__0
// Il2CppName: <AddToggle>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DebugUIBuilder::$$c__DisplayClass46_0::*)(bool)>(&GlobalNamespace::DebugUIBuilder::$$c__DisplayClass46_0::$AddToggle$b__0)> {
  static const MethodInfo* get() {
    static auto* $p0$ = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugUIBuilder::$$c__DisplayClass46_0*), "<AddToggle>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{$p0$});
  }
};
