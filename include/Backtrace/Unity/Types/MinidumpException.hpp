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
// Type namespace: Backtrace.Unity.Types
namespace Backtrace::Unity::Types {
  // Forward declaring type: MinidumpException
  struct MinidumpException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Types::MinidumpException, "Backtrace.Unity.Types", "MinidumpException");
// Type namespace: Backtrace.Unity.Types
namespace Backtrace::Unity::Types {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Types.MinidumpException
  // [TokenAttribute] Offset: FFFFFFFF
  struct MinidumpException/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MinidumpException
    constexpr MinidumpException(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Backtrace.Unity.Types.MinidumpException None
    static constexpr const int None = 0;
    // Get static field: static public Backtrace.Unity.Types.MinidumpException None
    static ::Backtrace::Unity::Types::MinidumpException _get_None();
    // Set static field: static public Backtrace.Unity.Types.MinidumpException None
    static void _set_None(::Backtrace::Unity::Types::MinidumpException value);
    // static field const value: static public Backtrace.Unity.Types.MinidumpException Present
    static constexpr const int Present = 1;
    // Get static field: static public Backtrace.Unity.Types.MinidumpException Present
    static ::Backtrace::Unity::Types::MinidumpException _get_Present();
    // Set static field: static public Backtrace.Unity.Types.MinidumpException Present
    static void _set_Present(::Backtrace::Unity::Types::MinidumpException value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Backtrace.Unity.Types.MinidumpException
  #pragma pack(pop)
  static check_size<sizeof(MinidumpException), 0 + sizeof(int)> __Backtrace_Unity_Types_MinidumpExceptionSizeCheck;
  static_assert(sizeof(MinidumpException) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"