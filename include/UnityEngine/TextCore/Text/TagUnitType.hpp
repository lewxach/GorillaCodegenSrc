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
  // Forward declaring type: TagUnitType
  struct TagUnitType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TagUnitType, "UnityEngine.TextCore.Text", "TagUnitType");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.Text.TagUnitType
  // [TokenAttribute] Offset: FFFFFFFF
  struct TagUnitType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TagUnitType
    constexpr TagUnitType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextCore.Text.TagUnitType Pixels
    static constexpr const int Pixels = 0;
    // Get static field: static public UnityEngine.TextCore.Text.TagUnitType Pixels
    static ::UnityEngine::TextCore::Text::TagUnitType _get_Pixels();
    // Set static field: static public UnityEngine.TextCore.Text.TagUnitType Pixels
    static void _set_Pixels(::UnityEngine::TextCore::Text::TagUnitType value);
    // static field const value: static public UnityEngine.TextCore.Text.TagUnitType FontUnits
    static constexpr const int FontUnits = 1;
    // Get static field: static public UnityEngine.TextCore.Text.TagUnitType FontUnits
    static ::UnityEngine::TextCore::Text::TagUnitType _get_FontUnits();
    // Set static field: static public UnityEngine.TextCore.Text.TagUnitType FontUnits
    static void _set_FontUnits(::UnityEngine::TextCore::Text::TagUnitType value);
    // static field const value: static public UnityEngine.TextCore.Text.TagUnitType Percentage
    static constexpr const int Percentage = 2;
    // Get static field: static public UnityEngine.TextCore.Text.TagUnitType Percentage
    static ::UnityEngine::TextCore::Text::TagUnitType _get_Percentage();
    // Set static field: static public UnityEngine.TextCore.Text.TagUnitType Percentage
    static void _set_Percentage(::UnityEngine::TextCore::Text::TagUnitType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TextCore.Text.TagUnitType
  #pragma pack(pop)
  static check_size<sizeof(TagUnitType), 0 + sizeof(int)> __UnityEngine_TextCore_Text_TagUnitTypeSizeCheck;
  static_assert(sizeof(TagUnitType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"