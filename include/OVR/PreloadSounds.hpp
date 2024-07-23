// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR
namespace OVR {
  // Forward declaring type: PreloadSounds
  struct PreloadSounds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::PreloadSounds, "OVR", "PreloadSounds");
// Type namespace: OVR
namespace OVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.PreloadSounds
  // [TokenAttribute] Offset: FFFFFFFF
  struct PreloadSounds/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PreloadSounds
    constexpr PreloadSounds(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.PreloadSounds Default
    static constexpr const int Default = 0;
    // Get static field: static public OVR.PreloadSounds Default
    static ::OVR::PreloadSounds _get_Default();
    // Set static field: static public OVR.PreloadSounds Default
    static void _set_Default(::OVR::PreloadSounds value);
    // static field const value: static public OVR.PreloadSounds Preload
    static constexpr const int Preload = 1;
    // Get static field: static public OVR.PreloadSounds Preload
    static ::OVR::PreloadSounds _get_Preload();
    // Set static field: static public OVR.PreloadSounds Preload
    static void _set_Preload(::OVR::PreloadSounds value);
    // static field const value: static public OVR.PreloadSounds ManualPreload
    static constexpr const int ManualPreload = 2;
    // Get static field: static public OVR.PreloadSounds ManualPreload
    static ::OVR::PreloadSounds _get_ManualPreload();
    // Set static field: static public OVR.PreloadSounds ManualPreload
    static void _set_ManualPreload(::OVR::PreloadSounds value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVR.PreloadSounds
  #pragma pack(pop)
  static check_size<sizeof(PreloadSounds), 0 + sizeof(int)> __OVR_PreloadSoundsSizeCheck;
  static_assert(sizeof(PreloadSounds) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"