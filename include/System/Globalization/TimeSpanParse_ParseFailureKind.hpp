// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.TimeSpanParse
#include "System/Globalization/TimeSpanParse.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse::ParseFailureKind, "System.Globalization", "TimeSpanParse/ParseFailureKind");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.TimeSpanParse/ParseFailureKind
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimeSpanParse::ParseFailureKind/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: ParseFailureKind
    constexpr ParseFailureKind(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public System.Globalization.TimeSpanParse/ParseFailureKind None
    static constexpr const uint8_t None = 0u;
    // Get static field: static public System.Globalization.TimeSpanParse/ParseFailureKind None
    static ::System::Globalization::TimeSpanParse::ParseFailureKind _get_None();
    // Set static field: static public System.Globalization.TimeSpanParse/ParseFailureKind None
    static void _set_None(::System::Globalization::TimeSpanParse::ParseFailureKind value);
    // static field const value: static public System.Globalization.TimeSpanParse/ParseFailureKind ArgumentNull
    static constexpr const uint8_t ArgumentNull = 1u;
    // Get static field: static public System.Globalization.TimeSpanParse/ParseFailureKind ArgumentNull
    static ::System::Globalization::TimeSpanParse::ParseFailureKind _get_ArgumentNull();
    // Set static field: static public System.Globalization.TimeSpanParse/ParseFailureKind ArgumentNull
    static void _set_ArgumentNull(::System::Globalization::TimeSpanParse::ParseFailureKind value);
    // static field const value: static public System.Globalization.TimeSpanParse/ParseFailureKind Format
    static constexpr const uint8_t Format = 2u;
    // Get static field: static public System.Globalization.TimeSpanParse/ParseFailureKind Format
    static ::System::Globalization::TimeSpanParse::ParseFailureKind _get_Format();
    // Set static field: static public System.Globalization.TimeSpanParse/ParseFailureKind Format
    static void _set_Format(::System::Globalization::TimeSpanParse::ParseFailureKind value);
    // static field const value: static public System.Globalization.TimeSpanParse/ParseFailureKind FormatWithParameter
    static constexpr const uint8_t FormatWithParameter = 3u;
    // Get static field: static public System.Globalization.TimeSpanParse/ParseFailureKind FormatWithParameter
    static ::System::Globalization::TimeSpanParse::ParseFailureKind _get_FormatWithParameter();
    // Set static field: static public System.Globalization.TimeSpanParse/ParseFailureKind FormatWithParameter
    static void _set_FormatWithParameter(::System::Globalization::TimeSpanParse::ParseFailureKind value);
    // static field const value: static public System.Globalization.TimeSpanParse/ParseFailureKind Overflow
    static constexpr const uint8_t Overflow = 4u;
    // Get static field: static public System.Globalization.TimeSpanParse/ParseFailureKind Overflow
    static ::System::Globalization::TimeSpanParse::ParseFailureKind _get_Overflow();
    // Set static field: static public System.Globalization.TimeSpanParse/ParseFailureKind Overflow
    static void _set_Overflow(::System::Globalization::TimeSpanParse::ParseFailureKind value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // System.Globalization.TimeSpanParse/ParseFailureKind
  #pragma pack(pop)
  static check_size<sizeof(TimeSpanParse::ParseFailureKind), 0 + sizeof(uint8_t)> __System_Globalization_TimeSpanParse_ParseFailureKindSizeCheck;
  static_assert(sizeof(TimeSpanParse::ParseFailureKind) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
