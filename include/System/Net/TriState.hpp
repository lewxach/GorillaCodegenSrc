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
  // Forward declaring type: TriState
  struct TriState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TriState, "System.Net", "TriState");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TriState
  // [TokenAttribute] Offset: FFFFFFFF
  struct TriState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TriState
    constexpr TriState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.TriState Unspecified
    static constexpr const int Unspecified = -1;
    // Get static field: static public System.Net.TriState Unspecified
    static ::System::Net::TriState _get_Unspecified();
    // Set static field: static public System.Net.TriState Unspecified
    static void _set_Unspecified(::System::Net::TriState value);
    // static field const value: static public System.Net.TriState False
    static constexpr const int False = 0;
    // Get static field: static public System.Net.TriState False
    static ::System::Net::TriState _get_False();
    // Set static field: static public System.Net.TriState False
    static void _set_False(::System::Net::TriState value);
    // static field const value: static public System.Net.TriState True
    static constexpr const int True = 1;
    // Get static field: static public System.Net.TriState True
    static ::System::Net::TriState _get_True();
    // Set static field: static public System.Net.TriState True
    static void _set_True(::System::Net::TriState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.TriState
  #pragma pack(pop)
  static check_size<sizeof(TriState), 0 + sizeof(int)> __System_Net_TriStateSizeCheck;
  static_assert(sizeof(TriState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"