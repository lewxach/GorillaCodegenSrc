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
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: MatchCasing
  struct MatchCasing;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MatchCasing, "System.IO", "MatchCasing");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.MatchCasing
  // [TokenAttribute] Offset: FFFFFFFF
  struct MatchCasing/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MatchCasing
    constexpr MatchCasing(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.MatchCasing PlatformDefault
    static constexpr const int PlatformDefault = 0;
    // Get static field: static public System.IO.MatchCasing PlatformDefault
    static ::System::IO::MatchCasing _get_PlatformDefault();
    // Set static field: static public System.IO.MatchCasing PlatformDefault
    static void _set_PlatformDefault(::System::IO::MatchCasing value);
    // static field const value: static public System.IO.MatchCasing CaseSensitive
    static constexpr const int CaseSensitive = 1;
    // Get static field: static public System.IO.MatchCasing CaseSensitive
    static ::System::IO::MatchCasing _get_CaseSensitive();
    // Set static field: static public System.IO.MatchCasing CaseSensitive
    static void _set_CaseSensitive(::System::IO::MatchCasing value);
    // static field const value: static public System.IO.MatchCasing CaseInsensitive
    static constexpr const int CaseInsensitive = 2;
    // Get static field: static public System.IO.MatchCasing CaseInsensitive
    static ::System::IO::MatchCasing _get_CaseInsensitive();
    // Set static field: static public System.IO.MatchCasing CaseInsensitive
    static void _set_CaseInsensitive(::System::IO::MatchCasing value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.IO.MatchCasing
  #pragma pack(pop)
  static check_size<sizeof(MatchCasing), 0 + sizeof(int)> __System_IO_MatchCasingSizeCheck;
  static_assert(sizeof(MatchCasing) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"