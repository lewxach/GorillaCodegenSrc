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
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // Forward declaring type: ParserScanResult
  struct ParserScanResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cysharp::Text::ParserScanResult, "Cysharp.Text", "ParserScanResult");
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Cysharp.Text.ParserScanResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParserScanResult/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ParserScanResult
    constexpr ParserScanResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Cysharp.Text.ParserScanResult BraceOpen
    static constexpr const int BraceOpen = 0;
    // Get static field: static public Cysharp.Text.ParserScanResult BraceOpen
    static ::Cysharp::Text::ParserScanResult _get_BraceOpen();
    // Set static field: static public Cysharp.Text.ParserScanResult BraceOpen
    static void _set_BraceOpen(::Cysharp::Text::ParserScanResult value);
    // static field const value: static public Cysharp.Text.ParserScanResult EscapedChar
    static constexpr const int EscapedChar = 1;
    // Get static field: static public Cysharp.Text.ParserScanResult EscapedChar
    static ::Cysharp::Text::ParserScanResult _get_EscapedChar();
    // Set static field: static public Cysharp.Text.ParserScanResult EscapedChar
    static void _set_EscapedChar(::Cysharp::Text::ParserScanResult value);
    // static field const value: static public Cysharp.Text.ParserScanResult NormalChar
    static constexpr const int NormalChar = 2;
    // Get static field: static public Cysharp.Text.ParserScanResult NormalChar
    static ::Cysharp::Text::ParserScanResult _get_NormalChar();
    // Set static field: static public Cysharp.Text.ParserScanResult NormalChar
    static void _set_NormalChar(::Cysharp::Text::ParserScanResult value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Cysharp.Text.ParserScanResult
  #pragma pack(pop)
  static check_size<sizeof(ParserScanResult), 0 + sizeof(int)> __Cysharp_Text_ParserScanResultSizeCheck;
  static_assert(sizeof(ParserScanResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
