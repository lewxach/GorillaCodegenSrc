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
// Including type: OVRPlugin/Fovf
#include "GlobalNamespace/OVRPlugin_Fovf.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::FovfPair, "", "OVRPlugin/FovfPair");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/FovfPair
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  struct OVRPlugin::FovfPair/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVRPlugin/Fovf Fov0
    // Size: 0x10
    // Offset: 0x0
    ::GlobalNamespace::OVRPlugin::Fovf Fov0;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Fovf) == 0x10);
    // public OVRPlugin/Fovf Fov1
    // Size: 0x10
    // Offset: 0x10
    ::GlobalNamespace::OVRPlugin::Fovf Fov1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Fovf) == 0x10);
    public:
    // Creating value type constructor for type: FovfPair
    constexpr FovfPair(::GlobalNamespace::OVRPlugin::Fovf Fov0_ = {}, ::GlobalNamespace::OVRPlugin::Fovf Fov1_ = {}) noexcept : Fov0{Fov0_}, Fov1{Fov1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public OVRPlugin/Fovf Fov0
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Fovf& dyn_Fov0();
    // Get instance field reference: public OVRPlugin/Fovf Fov1
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Fovf& dyn_Fov1();
    // public OVRPlugin/Fovf get_Item(System.Int32 i)
    // Offset: 0x4905D88
    ::GlobalNamespace::OVRPlugin::Fovf get_Item(int i);
    // public System.Void set_Item(System.Int32 i, OVRPlugin/Fovf value)
    // Offset: 0x4905E4C
    void set_Item(int i, ::GlobalNamespace::OVRPlugin::Fovf value);
  }; // OVRPlugin/FovfPair
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::FovfPair), 16 + sizeof(::GlobalNamespace::OVRPlugin::Fovf)> __GlobalNamespace_OVRPlugin_FovfPairSizeCheck;
  static_assert(sizeof(OVRPlugin::FovfPair) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::FovfPair::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Fovf (GlobalNamespace::OVRPlugin::FovfPair::*)(int)>(&GlobalNamespace::OVRPlugin::FovfPair::get_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::FovfPair), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::FovfPair::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlugin::FovfPair::*)(int, ::GlobalNamespace::OVRPlugin::Fovf)>(&GlobalNamespace::OVRPlugin::FovfPair::set_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Fovf")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::FovfPair), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, value});
  }
};
