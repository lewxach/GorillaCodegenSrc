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
  // Forward declaring type: ExpressionType
  struct ExpressionType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType, "UnityEngine.UIElements.StyleSheets.Syntax", "ExpressionType");
// Type namespace: UnityEngine.UIElements.StyleSheets.Syntax
namespace UnityEngine::UIElements::StyleSheets::Syntax {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ExpressionType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ExpressionType
    constexpr ExpressionType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType Unknown
    static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType _get_Unknown();
    // Set static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType Unknown
    static void _set_Unknown(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType value);
    // static field const value: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType Data
    static constexpr const int Data = 1;
    // Get static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType Data
    static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType _get_Data();
    // Set static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType Data
    static void _set_Data(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType value);
    // static field const value: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType Keyword
    static constexpr const int Keyword = 2;
    // Get static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType Keyword
    static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType _get_Keyword();
    // Set static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType Keyword
    static void _set_Keyword(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType value);
    // static field const value: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType Combinator
    static constexpr const int Combinator = 3;
    // Get static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType Combinator
    static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType _get_Combinator();
    // Set static field: static public UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType Combinator
    static void _set_Combinator(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType
  #pragma pack(pop)
  static check_size<sizeof(ExpressionType), 0 + sizeof(int)> __UnityEngine_UIElements_StyleSheets_Syntax_ExpressionTypeSizeCheck;
  static_assert(sizeof(ExpressionType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"