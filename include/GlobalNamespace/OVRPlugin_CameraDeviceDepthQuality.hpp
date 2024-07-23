// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::CameraDeviceDepthQuality, "", "OVRPlugin/CameraDeviceDepthQuality");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/CameraDeviceDepthQuality
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::CameraDeviceDepthQuality/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CameraDeviceDepthQuality
    constexpr CameraDeviceDepthQuality(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/CameraDeviceDepthQuality Low
    static constexpr const int Low = 0;
    // Get static field: static public OVRPlugin/CameraDeviceDepthQuality Low
    static ::GlobalNamespace::OVRPlugin::CameraDeviceDepthQuality _get_Low();
    // Set static field: static public OVRPlugin/CameraDeviceDepthQuality Low
    static void _set_Low(::GlobalNamespace::OVRPlugin::CameraDeviceDepthQuality value);
    // static field const value: static public OVRPlugin/CameraDeviceDepthQuality Medium
    static constexpr const int Medium = 1;
    // Get static field: static public OVRPlugin/CameraDeviceDepthQuality Medium
    static ::GlobalNamespace::OVRPlugin::CameraDeviceDepthQuality _get_Medium();
    // Set static field: static public OVRPlugin/CameraDeviceDepthQuality Medium
    static void _set_Medium(::GlobalNamespace::OVRPlugin::CameraDeviceDepthQuality value);
    // static field const value: static public OVRPlugin/CameraDeviceDepthQuality High
    static constexpr const int High = 2;
    // Get static field: static public OVRPlugin/CameraDeviceDepthQuality High
    static ::GlobalNamespace::OVRPlugin::CameraDeviceDepthQuality _get_High();
    // Set static field: static public OVRPlugin/CameraDeviceDepthQuality High
    static void _set_High(::GlobalNamespace::OVRPlugin::CameraDeviceDepthQuality value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/CameraDeviceDepthQuality
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::CameraDeviceDepthQuality), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_CameraDeviceDepthQualitySizeCheck;
  static_assert(sizeof(OVRPlugin::CameraDeviceDepthQuality) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"