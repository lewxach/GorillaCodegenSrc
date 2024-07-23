// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RoomSystem
#include "GlobalNamespace/RoomSystem.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomSystem::PlayerEffect, "", "RoomSystem/PlayerEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: RoomSystem/PlayerEffect
  // [TokenAttribute] Offset: FFFFFFFF
  struct RoomSystem::PlayerEffect/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PlayerEffect
    constexpr PlayerEffect(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // RoomSystem/PlayerEffect
  #pragma pack(pop)
  static check_size<sizeof(RoomSystem::PlayerEffect), 0 + sizeof(int)> __GlobalNamespace_RoomSystem_PlayerEffectSizeCheck;
  static_assert(sizeof(RoomSystem::PlayerEffect) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"