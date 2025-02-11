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
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: NetworkAccess
  struct NetworkAccess;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkAccess, "System.Net", "NetworkAccess");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkAccess
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct NetworkAccess/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetworkAccess
    constexpr NetworkAccess(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.NetworkAccess Accept
    static constexpr const int Accept = 128;
    // Get static field: static public System.Net.NetworkAccess Accept
    static ::System::Net::NetworkAccess _get_Accept();
    // Set static field: static public System.Net.NetworkAccess Accept
    static void _set_Accept(::System::Net::NetworkAccess value);
    // static field const value: static public System.Net.NetworkAccess Connect
    static constexpr const int Connect = 64;
    // Get static field: static public System.Net.NetworkAccess Connect
    static ::System::Net::NetworkAccess _get_Connect();
    // Set static field: static public System.Net.NetworkAccess Connect
    static void _set_Connect(::System::Net::NetworkAccess value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.NetworkAccess
  #pragma pack(pop)
  static check_size<sizeof(NetworkAccess), 0 + sizeof(int)> __System_Net_NetworkAccessSizeCheck;
  static_assert(sizeof(NetworkAccess) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
