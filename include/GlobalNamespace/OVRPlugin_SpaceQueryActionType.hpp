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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::SpaceQueryActionType, "", "OVRPlugin/SpaceQueryActionType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/SpaceQueryActionType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::SpaceQueryActionType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SpaceQueryActionType
    constexpr SpaceQueryActionType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/SpaceQueryActionType Load
    static constexpr const int Load = 0;
    // Get static field: static public OVRPlugin/SpaceQueryActionType Load
    static ::GlobalNamespace::OVRPlugin::SpaceQueryActionType _get_Load();
    // Set static field: static public OVRPlugin/SpaceQueryActionType Load
    static void _set_Load(::GlobalNamespace::OVRPlugin::SpaceQueryActionType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/SpaceQueryActionType
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::SpaceQueryActionType), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_SpaceQueryActionTypeSizeCheck;
  static_assert(sizeof(OVRPlugin::SpaceQueryActionType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"