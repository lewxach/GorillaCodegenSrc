// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Bool
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::VirtualKeyboardModelVisibility, "", "OVRPlugin/VirtualKeyboardModelVisibility");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/VirtualKeyboardModelVisibility
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::VirtualKeyboardModelVisibility/*, public ::System::ValueType*/ {
    public:
    public:
    // OVRPlugin/Bool _visible
    // Size: 0x4
    // Offset: 0x0
    ::GlobalNamespace::OVRPlugin::Bool visible;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Bool) == 0x4);
    public:
    // Creating value type constructor for type: VirtualKeyboardModelVisibility
    constexpr VirtualKeyboardModelVisibility(::GlobalNamespace::OVRPlugin::Bool visible_ = {}) noexcept : visible{visible_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::GlobalNamespace::OVRPlugin::Bool
    constexpr operator ::GlobalNamespace::OVRPlugin::Bool() const noexcept {
      return visible;
    }
    // Get instance field reference: OVRPlugin/Bool _visible
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Bool& dyn__visible();
    // public System.Boolean get_Visible()
    // Offset: 0x49062B4
    bool get_Visible();
    // public System.Void set_Visible(System.Boolean value)
    // Offset: 0x49062C4
    void set_Visible(bool value);
  }; // OVRPlugin/VirtualKeyboardModelVisibility
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::VirtualKeyboardModelVisibility), 0 + sizeof(::GlobalNamespace::OVRPlugin::Bool)> __GlobalNamespace_OVRPlugin_VirtualKeyboardModelVisibilitySizeCheck;
  static_assert(sizeof(OVRPlugin::VirtualKeyboardModelVisibility) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::VirtualKeyboardModelVisibility::get_Visible
// Il2CppName: get_Visible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRPlugin::VirtualKeyboardModelVisibility::*)()>(&GlobalNamespace::OVRPlugin::VirtualKeyboardModelVisibility::get_Visible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::VirtualKeyboardModelVisibility), "get_Visible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::VirtualKeyboardModelVisibility::set_Visible
// Il2CppName: set_Visible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlugin::VirtualKeyboardModelVisibility::*)(bool)>(&GlobalNamespace::OVRPlugin::VirtualKeyboardModelVisibility::set_Visible)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::VirtualKeyboardModelVisibility), "set_Visible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
