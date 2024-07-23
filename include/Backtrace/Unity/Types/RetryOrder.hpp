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
  // Forward declaring type: RetryOrder
  struct RetryOrder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Types::RetryOrder, "Backtrace.Unity.Types", "RetryOrder");
// Type namespace: Backtrace.Unity.Types
namespace Backtrace::Unity::Types {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Types.RetryOrder
  // [TokenAttribute] Offset: FFFFFFFF
  struct RetryOrder/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RetryOrder
    constexpr RetryOrder(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Backtrace.Unity.Types.RetryOrder Stack
    static constexpr const int Stack = 0;
    // Get static field: static public Backtrace.Unity.Types.RetryOrder Stack
    static ::Backtrace::Unity::Types::RetryOrder _get_Stack();
    // Set static field: static public Backtrace.Unity.Types.RetryOrder Stack
    static void _set_Stack(::Backtrace::Unity::Types::RetryOrder value);
    // static field const value: static public Backtrace.Unity.Types.RetryOrder Queue
    static constexpr const int Queue = 1;
    // Get static field: static public Backtrace.Unity.Types.RetryOrder Queue
    static ::Backtrace::Unity::Types::RetryOrder _get_Queue();
    // Set static field: static public Backtrace.Unity.Types.RetryOrder Queue
    static void _set_Queue(::Backtrace::Unity::Types::RetryOrder value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Backtrace.Unity.Types.RetryOrder
  #pragma pack(pop)
  static check_size<sizeof(RetryOrder), 0 + sizeof(int)> __Backtrace_Unity_Types_RetryOrderSizeCheck;
  static_assert(sizeof(RetryOrder) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"