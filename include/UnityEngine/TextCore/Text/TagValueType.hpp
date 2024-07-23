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
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: TagValueType
  struct TagValueType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TagValueType, "UnityEngine.TextCore.Text", "TagValueType");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.Text.TagValueType
  // [TokenAttribute] Offset: FFFFFFFF
  struct TagValueType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TagValueType
    constexpr TagValueType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextCore.Text.TagValueType None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.TextCore.Text.TagValueType None
    static ::UnityEngine::TextCore::Text::TagValueType _get_None();
    // Set static field: static public UnityEngine.TextCore.Text.TagValueType None
    static void _set_None(::UnityEngine::TextCore::Text::TagValueType value);
    // static field const value: static public UnityEngine.TextCore.Text.TagValueType NumericalValue
    static constexpr const int NumericalValue = 1;
    // Get static field: static public UnityEngine.TextCore.Text.TagValueType NumericalValue
    static ::UnityEngine::TextCore::Text::TagValueType _get_NumericalValue();
    // Set static field: static public UnityEngine.TextCore.Text.TagValueType NumericalValue
    static void _set_NumericalValue(::UnityEngine::TextCore::Text::TagValueType value);
    // static field const value: static public UnityEngine.TextCore.Text.TagValueType StringValue
    static constexpr const int StringValue = 2;
    // Get static field: static public UnityEngine.TextCore.Text.TagValueType StringValue
    static ::UnityEngine::TextCore::Text::TagValueType _get_StringValue();
    // Set static field: static public UnityEngine.TextCore.Text.TagValueType StringValue
    static void _set_StringValue(::UnityEngine::TextCore::Text::TagValueType value);
    // static field const value: static public UnityEngine.TextCore.Text.TagValueType ColorValue
    static constexpr const int ColorValue = 4;
    // Get static field: static public UnityEngine.TextCore.Text.TagValueType ColorValue
    static ::UnityEngine::TextCore::Text::TagValueType _get_ColorValue();
    // Set static field: static public UnityEngine.TextCore.Text.TagValueType ColorValue
    static void _set_ColorValue(::UnityEngine::TextCore::Text::TagValueType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TextCore.Text.TagValueType
  #pragma pack(pop)
  static check_size<sizeof(TagValueType), 0 + sizeof(int)> __UnityEngine_TextCore_Text_TagValueTypeSizeCheck;
  static_assert(sizeof(TagValueType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"