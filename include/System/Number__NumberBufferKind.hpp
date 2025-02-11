// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Number
#include "System/Number_.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Number_::NumberBufferKind, "System", "Number/NumberBufferKind");
// Type namespace: System
namespace System {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: System.Number/NumberBufferKind
  // [TokenAttribute] Offset: FFFFFFFF
  struct Number_::NumberBufferKind/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: NumberBufferKind
    constexpr NumberBufferKind(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public System.Number/NumberBufferKind Unknown
    static constexpr const uint8_t Unknown = 0u;
    // Get static field: static public System.Number/NumberBufferKind Unknown
    static ::System::Number_::NumberBufferKind _get_Unknown();
    // Set static field: static public System.Number/NumberBufferKind Unknown
    static void _set_Unknown(::System::Number_::NumberBufferKind value);
    // static field const value: static public System.Number/NumberBufferKind Integer
    static constexpr const uint8_t Integer = 1u;
    // Get static field: static public System.Number/NumberBufferKind Integer
    static ::System::Number_::NumberBufferKind _get_Integer();
    // Set static field: static public System.Number/NumberBufferKind Integer
    static void _set_Integer(::System::Number_::NumberBufferKind value);
    // static field const value: static public System.Number/NumberBufferKind Decimal
    static constexpr const uint8_t Decimal = 2u;
    // Get static field: static public System.Number/NumberBufferKind Decimal
    static ::System::Number_::NumberBufferKind _get_Decimal();
    // Set static field: static public System.Number/NumberBufferKind Decimal
    static void _set_Decimal(::System::Number_::NumberBufferKind value);
    // static field const value: static public System.Number/NumberBufferKind FloatingPoint
    static constexpr const uint8_t FloatingPoint = 3u;
    // Get static field: static public System.Number/NumberBufferKind FloatingPoint
    static ::System::Number_::NumberBufferKind _get_FloatingPoint();
    // Set static field: static public System.Number/NumberBufferKind FloatingPoint
    static void _set_FloatingPoint(::System::Number_::NumberBufferKind value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // System.Number/NumberBufferKind
  #pragma pack(pop)
  static check_size<sizeof(Number_::NumberBufferKind), 0 + sizeof(uint8_t)> __System_Number__NumberBufferKindSizeCheck;
  static_assert(sizeof(Number_::NumberBufferKind) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
