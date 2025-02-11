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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::LayerSharpenType, "", "OVRPlugin/LayerSharpenType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/LayerSharpenType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::LayerSharpenType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LayerSharpenType
    constexpr LayerSharpenType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/LayerSharpenType None
    static constexpr const int None = 0;
    // Get static field: static public OVRPlugin/LayerSharpenType None
    static ::GlobalNamespace::OVRPlugin::LayerSharpenType _get_None();
    // Set static field: static public OVRPlugin/LayerSharpenType None
    static void _set_None(::GlobalNamespace::OVRPlugin::LayerSharpenType value);
    // static field const value: static public OVRPlugin/LayerSharpenType Normal
    static constexpr const int Normal = 8192;
    // Get static field: static public OVRPlugin/LayerSharpenType Normal
    static ::GlobalNamespace::OVRPlugin::LayerSharpenType _get_Normal();
    // Set static field: static public OVRPlugin/LayerSharpenType Normal
    static void _set_Normal(::GlobalNamespace::OVRPlugin::LayerSharpenType value);
    // static field const value: static public OVRPlugin/LayerSharpenType Quality
    static constexpr const int Quality = 65536;
    // Get static field: static public OVRPlugin/LayerSharpenType Quality
    static ::GlobalNamespace::OVRPlugin::LayerSharpenType _get_Quality();
    // Set static field: static public OVRPlugin/LayerSharpenType Quality
    static void _set_Quality(::GlobalNamespace::OVRPlugin::LayerSharpenType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/LayerSharpenType
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::LayerSharpenType), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_LayerSharpenTypeSizeCheck;
  static_assert(sizeof(OVRPlugin::LayerSharpenType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
