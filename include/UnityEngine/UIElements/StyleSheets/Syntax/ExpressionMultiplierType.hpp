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
// Type namespace: UnityEngine.UIElements.StyleSheets.Syntax
namespace UnityEngine::UIElements::StyleSheets::Syntax {
  // Forward declaring type: ExpressionMultiplierType
  struct ExpressionMultiplierType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType, "UnityEngine.UIElements.StyleSheets.Syntax", "ExpressionMultiplierType");
// Type namespace: UnityEngine.UIElements.StyleSheets.Syntax
namespace UnityEngine::UIElements::StyleSheets::Syntax {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ExpressionMultiplierType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ExpressionMultiplierType
    constexpr ExpressionMultiplierType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType None
    static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType _get_None();
    // Set static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType None
    static void _set_None(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value);
    // static field const value: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType ZeroOrMore
    static constexpr const int ZeroOrMore = 1;
    // Get static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType ZeroOrMore
    static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType _get_ZeroOrMore();
    // Set static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType ZeroOrMore
    static void _set_ZeroOrMore(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value);
    // static field const value: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType OneOrMore
    static constexpr const int OneOrMore = 2;
    // Get static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType OneOrMore
    static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType _get_OneOrMore();
    // Set static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType OneOrMore
    static void _set_OneOrMore(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value);
    // static field const value: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType ZeroOrOne
    static constexpr const int ZeroOrOne = 3;
    // Get static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType ZeroOrOne
    static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType _get_ZeroOrOne();
    // Set static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType ZeroOrOne
    static void _set_ZeroOrOne(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value);
    // static field const value: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType Ranges
    static constexpr const int Ranges = 4;
    // Get static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType Ranges
    static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType _get_Ranges();
    // Set static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType Ranges
    static void _set_Ranges(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value);
    // static field const value: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType OneOrMoreComma
    static constexpr const int OneOrMoreComma = 5;
    // Get static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType OneOrMoreComma
    static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType _get_OneOrMoreComma();
    // Set static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType OneOrMoreComma
    static void _set_OneOrMoreComma(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value);
    // static field const value: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType GroupAtLeastOne
    static constexpr const int GroupAtLeastOne = 6;
    // Get static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType GroupAtLeastOne
    static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType _get_GroupAtLeastOne();
    // Set static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType GroupAtLeastOne
    static void _set_GroupAtLeastOne(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType
  #pragma pack(pop)
  static check_size<sizeof(ExpressionMultiplierType), 0 + sizeof(int)> __UnityEngine_UIElements_StyleSheets_Syntax_ExpressionMultiplierTypeSizeCheck;
  static_assert(sizeof(ExpressionMultiplierType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
