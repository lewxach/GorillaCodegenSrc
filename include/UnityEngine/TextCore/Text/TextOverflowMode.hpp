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
  // Forward declaring type: TextOverflowMode
  struct TextOverflowMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextOverflowMode, "UnityEngine.TextCore.Text", "TextOverflowMode");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.Text.TextOverflowMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextOverflowMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TextOverflowMode
    constexpr TextOverflowMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextCore.Text.TextOverflowMode Overflow
    static constexpr const int Overflow = 0;
    // Get static field: static public UnityEngine.TextCore.Text.TextOverflowMode Overflow
    static ::UnityEngine::TextCore::Text::TextOverflowMode _get_Overflow();
    // Set static field: static public UnityEngine.TextCore.Text.TextOverflowMode Overflow
    static void _set_Overflow(::UnityEngine::TextCore::Text::TextOverflowMode value);
    // static field const value: static public UnityEngine.TextCore.Text.TextOverflowMode Ellipsis
    static constexpr const int Ellipsis = 1;
    // Get static field: static public UnityEngine.TextCore.Text.TextOverflowMode Ellipsis
    static ::UnityEngine::TextCore::Text::TextOverflowMode _get_Ellipsis();
    // Set static field: static public UnityEngine.TextCore.Text.TextOverflowMode Ellipsis
    static void _set_Ellipsis(::UnityEngine::TextCore::Text::TextOverflowMode value);
    // static field const value: static public UnityEngine.TextCore.Text.TextOverflowMode Masking
    static constexpr const int Masking = 2;
    // Get static field: static public UnityEngine.TextCore.Text.TextOverflowMode Masking
    static ::UnityEngine::TextCore::Text::TextOverflowMode _get_Masking();
    // Set static field: static public UnityEngine.TextCore.Text.TextOverflowMode Masking
    static void _set_Masking(::UnityEngine::TextCore::Text::TextOverflowMode value);
    // static field const value: static public UnityEngine.TextCore.Text.TextOverflowMode Truncate
    static constexpr const int Truncate = 3;
    // Get static field: static public UnityEngine.TextCore.Text.TextOverflowMode Truncate
    static ::UnityEngine::TextCore::Text::TextOverflowMode _get_Truncate();
    // Set static field: static public UnityEngine.TextCore.Text.TextOverflowMode Truncate
    static void _set_Truncate(::UnityEngine::TextCore::Text::TextOverflowMode value);
    // static field const value: static public UnityEngine.TextCore.Text.TextOverflowMode ScrollRect
    static constexpr const int ScrollRect = 4;
    // Get static field: static public UnityEngine.TextCore.Text.TextOverflowMode ScrollRect
    static ::UnityEngine::TextCore::Text::TextOverflowMode _get_ScrollRect();
    // Set static field: static public UnityEngine.TextCore.Text.TextOverflowMode ScrollRect
    static void _set_ScrollRect(::UnityEngine::TextCore::Text::TextOverflowMode value);
    // static field const value: static public UnityEngine.TextCore.Text.TextOverflowMode Page
    static constexpr const int Page = 5;
    // Get static field: static public UnityEngine.TextCore.Text.TextOverflowMode Page
    static ::UnityEngine::TextCore::Text::TextOverflowMode _get_Page();
    // Set static field: static public UnityEngine.TextCore.Text.TextOverflowMode Page
    static void _set_Page(::UnityEngine::TextCore::Text::TextOverflowMode value);
    // static field const value: static public UnityEngine.TextCore.Text.TextOverflowMode Linked
    static constexpr const int Linked = 6;
    // Get static field: static public UnityEngine.TextCore.Text.TextOverflowMode Linked
    static ::UnityEngine::TextCore::Text::TextOverflowMode _get_Linked();
    // Set static field: static public UnityEngine.TextCore.Text.TextOverflowMode Linked
    static void _set_Linked(::UnityEngine::TextCore::Text::TextOverflowMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TextCore.Text.TextOverflowMode
  #pragma pack(pop)
  static check_size<sizeof(TextOverflowMode), 0 + sizeof(int)> __UnityEngine_TextCore_Text_TextOverflowModeSizeCheck;
  static_assert(sizeof(TextOverflowMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
