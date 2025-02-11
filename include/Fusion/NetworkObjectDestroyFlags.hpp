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
  // Forward declaring type: NetworkObjectDestroyFlags
  struct NetworkObjectDestroyFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkObjectDestroyFlags, "Fusion", "NetworkObjectDestroyFlags");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkObjectDestroyFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct NetworkObjectDestroyFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetworkObjectDestroyFlags
    constexpr NetworkObjectDestroyFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.NetworkObjectDestroyFlags None
    static constexpr const int None = 0;
    // Get static field: static public Fusion.NetworkObjectDestroyFlags None
    static ::Fusion::NetworkObjectDestroyFlags _get_None();
    // Set static field: static public Fusion.NetworkObjectDestroyFlags None
    static void _set_None(::Fusion::NetworkObjectDestroyFlags value);
    // static field const value: static public Fusion.NetworkObjectDestroyFlags DestroyedByEngine
    static constexpr const int DestroyedByEngine = 1;
    // Get static field: static public Fusion.NetworkObjectDestroyFlags DestroyedByEngine
    static ::Fusion::NetworkObjectDestroyFlags _get_DestroyedByEngine();
    // Set static field: static public Fusion.NetworkObjectDestroyFlags DestroyedByEngine
    static void _set_DestroyedByEngine(::Fusion::NetworkObjectDestroyFlags value);
    // static field const value: static public Fusion.NetworkObjectDestroyFlags DestroyState
    static constexpr const int DestroyState = 2;
    // Get static field: static public Fusion.NetworkObjectDestroyFlags DestroyState
    static ::Fusion::NetworkObjectDestroyFlags _get_DestroyState();
    // Set static field: static public Fusion.NetworkObjectDestroyFlags DestroyState
    static void _set_DestroyState(::Fusion::NetworkObjectDestroyFlags value);
    // static field const value: static public Fusion.NetworkObjectDestroyFlags DestroyedByReplicator
    static constexpr const int DestroyedByReplicator = 4;
    // Get static field: static public Fusion.NetworkObjectDestroyFlags DestroyedByReplicator
    static ::Fusion::NetworkObjectDestroyFlags _get_DestroyedByReplicator();
    // Set static field: static public Fusion.NetworkObjectDestroyFlags DestroyedByReplicator
    static void _set_DestroyedByReplicator(::Fusion::NetworkObjectDestroyFlags value);
    // static field const value: static public Fusion.NetworkObjectDestroyFlags DestroyedByDespawn
    static constexpr const int DestroyedByDespawn = 8;
    // Get static field: static public Fusion.NetworkObjectDestroyFlags DestroyedByDespawn
    static ::Fusion::NetworkObjectDestroyFlags _get_DestroyedByDespawn();
    // Set static field: static public Fusion.NetworkObjectDestroyFlags DestroyedByDespawn
    static void _set_DestroyedByDespawn(::Fusion::NetworkObjectDestroyFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.NetworkObjectDestroyFlags
  #pragma pack(pop)
  static check_size<sizeof(NetworkObjectDestroyFlags), 0 + sizeof(int)> __Fusion_NetworkObjectDestroyFlagsSizeCheck;
  static_assert(sizeof(NetworkObjectDestroyFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
