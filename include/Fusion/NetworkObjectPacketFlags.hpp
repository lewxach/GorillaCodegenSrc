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
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObjectPacketFlags
  struct NetworkObjectPacketFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkObjectPacketFlags, "Fusion", "NetworkObjectPacketFlags");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkObjectPacketFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct NetworkObjectPacketFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetworkObjectPacketFlags
    constexpr NetworkObjectPacketFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.NetworkObjectPacketFlags Destroy
    static constexpr const int Destroy = 1;
    // Get static field: static public Fusion.NetworkObjectPacketFlags Destroy
    static ::Fusion::NetworkObjectPacketFlags _get_Destroy();
    // Set static field: static public Fusion.NetworkObjectPacketFlags Destroy
    static void _set_Destroy(::Fusion::NetworkObjectPacketFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.NetworkObjectPacketFlags
  #pragma pack(pop)
  static check_size<sizeof(NetworkObjectPacketFlags), 0 + sizeof(int)> __Fusion_NetworkObjectPacketFlagsSizeCheck;
  static_assert(sizeof(NetworkObjectPacketFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
