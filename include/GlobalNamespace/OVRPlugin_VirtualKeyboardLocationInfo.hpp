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
// Including type: OVRPlugin/VirtualKeyboardLocationType
#include "GlobalNamespace/OVRPlugin_VirtualKeyboardLocationType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::VirtualKeyboardLocationInfo, "", "OVRPlugin/VirtualKeyboardLocationInfo");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/VirtualKeyboardLocationInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::VirtualKeyboardLocationInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVRPlugin/VirtualKeyboardLocationType locationType
    // Size: 0x4
    // Offset: 0x0
    ::GlobalNamespace::OVRPlugin::VirtualKeyboardLocationType locationType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::VirtualKeyboardLocationType) == 0x4);
    // public OVRPlugin/Posef pose
    // Size: 0x1C
    // Offset: 0x4
    ::GlobalNamespace::OVRPlugin::Posef pose;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Posef) == 0x1C);
    // public System.Single scale
    // Size: 0x4
    // Offset: 0x20
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: VirtualKeyboardLocationInfo
    constexpr VirtualKeyboardLocationInfo(::GlobalNamespace::OVRPlugin::VirtualKeyboardLocationType locationType_ = {}, ::GlobalNamespace::OVRPlugin::Posef pose_ = {}, float scale_ = {}) noexcept : locationType{locationType_}, pose{pose_}, scale{scale_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public OVRPlugin/VirtualKeyboardLocationType locationType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::VirtualKeyboardLocationType& dyn_locationType();
    // Get instance field reference: public OVRPlugin/Posef pose
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Posef& dyn_pose();
    // Get instance field reference: public System.Single scale
    [[deprecated("Use field access instead!")]] float& dyn_scale();
  }; // OVRPlugin/VirtualKeyboardLocationInfo
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::VirtualKeyboardLocationInfo), 32 + sizeof(float)> __GlobalNamespace_OVRPlugin_VirtualKeyboardLocationInfoSizeCheck;
  static_assert(sizeof(OVRPlugin::VirtualKeyboardLocationInfo) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
