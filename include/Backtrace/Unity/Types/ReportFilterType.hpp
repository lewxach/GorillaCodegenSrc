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
  // Forward declaring type: ReportFilterType
  struct ReportFilterType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Types::ReportFilterType, "Backtrace.Unity.Types", "ReportFilterType");
// Type namespace: Backtrace.Unity.Types
namespace Backtrace::Unity::Types {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Types.ReportFilterType
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ReportFilterType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ReportFilterType
    constexpr ReportFilterType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Backtrace.Unity.Types.ReportFilterType None
    static constexpr const int None = 0;
    // Get static field: static public Backtrace.Unity.Types.ReportFilterType None
    static ::Backtrace::Unity::Types::ReportFilterType _get_None();
    // Set static field: static public Backtrace.Unity.Types.ReportFilterType None
    static void _set_None(::Backtrace::Unity::Types::ReportFilterType value);
    // static field const value: static public Backtrace.Unity.Types.ReportFilterType Message
    static constexpr const int Message = 1;
    // Get static field: static public Backtrace.Unity.Types.ReportFilterType Message
    static ::Backtrace::Unity::Types::ReportFilterType _get_Message();
    // Set static field: static public Backtrace.Unity.Types.ReportFilterType Message
    static void _set_Message(::Backtrace::Unity::Types::ReportFilterType value);
    // static field const value: static public Backtrace.Unity.Types.ReportFilterType Exception
    static constexpr const int Exception = 2;
    // Get static field: static public Backtrace.Unity.Types.ReportFilterType Exception
    static ::Backtrace::Unity::Types::ReportFilterType _get_Exception();
    // Set static field: static public Backtrace.Unity.Types.ReportFilterType Exception
    static void _set_Exception(::Backtrace::Unity::Types::ReportFilterType value);
    // static field const value: static public Backtrace.Unity.Types.ReportFilterType UnhandledException
    static constexpr const int UnhandledException = 4;
    // Get static field: static public Backtrace.Unity.Types.ReportFilterType UnhandledException
    static ::Backtrace::Unity::Types::ReportFilterType _get_UnhandledException();
    // Set static field: static public Backtrace.Unity.Types.ReportFilterType UnhandledException
    static void _set_UnhandledException(::Backtrace::Unity::Types::ReportFilterType value);
    // static field const value: static public Backtrace.Unity.Types.ReportFilterType Hang
    static constexpr const int Hang = 8;
    // Get static field: static public Backtrace.Unity.Types.ReportFilterType Hang
    static ::Backtrace::Unity::Types::ReportFilterType _get_Hang();
    // Set static field: static public Backtrace.Unity.Types.ReportFilterType Hang
    static void _set_Hang(::Backtrace::Unity::Types::ReportFilterType value);
    // static field const value: static public Backtrace.Unity.Types.ReportFilterType Error
    static constexpr const int Error = 16;
    // Get static field: static public Backtrace.Unity.Types.ReportFilterType Error
    static ::Backtrace::Unity::Types::ReportFilterType _get_Error();
    // Set static field: static public Backtrace.Unity.Types.ReportFilterType Error
    static void _set_Error(::Backtrace::Unity::Types::ReportFilterType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Backtrace.Unity.Types.ReportFilterType
  #pragma pack(pop)
  static check_size<sizeof(ReportFilterType), 0 + sizeof(int)> __Backtrace_Unity_Types_ReportFilterTypeSizeCheck;
  static_assert(sizeof(ReportFilterType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"