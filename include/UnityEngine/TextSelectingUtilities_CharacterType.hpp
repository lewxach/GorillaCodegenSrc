// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TextSelectingUtilities
#include "UnityEngine/TextSelectingUtilities.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextSelectingUtilities::CharacterType, "UnityEngine", "TextSelectingUtilities/CharacterType");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextSelectingUtilities/CharacterType
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextSelectingUtilities::CharacterType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CharacterType
    constexpr CharacterType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextSelectingUtilities/CharacterType LetterLike
    static constexpr const int LetterLike = 0;
    // Get static field: static public UnityEngine.TextSelectingUtilities/CharacterType LetterLike
    static ::UnityEngine::TextSelectingUtilities::CharacterType _get_LetterLike();
    // Set static field: static public UnityEngine.TextSelectingUtilities/CharacterType LetterLike
    static void _set_LetterLike(::UnityEngine::TextSelectingUtilities::CharacterType value);
    // static field const value: static public UnityEngine.TextSelectingUtilities/CharacterType Symbol
    static constexpr const int Symbol = 1;
    // Get static field: static public UnityEngine.TextSelectingUtilities/CharacterType Symbol
    static ::UnityEngine::TextSelectingUtilities::CharacterType _get_Symbol();
    // Set static field: static public UnityEngine.TextSelectingUtilities/CharacterType Symbol
    static void _set_Symbol(::UnityEngine::TextSelectingUtilities::CharacterType value);
    // static field const value: static public UnityEngine.TextSelectingUtilities/CharacterType Symbol2
    static constexpr const int Symbol2 = 2;
    // Get static field: static public UnityEngine.TextSelectingUtilities/CharacterType Symbol2
    static ::UnityEngine::TextSelectingUtilities::CharacterType _get_Symbol2();
    // Set static field: static public UnityEngine.TextSelectingUtilities/CharacterType Symbol2
    static void _set_Symbol2(::UnityEngine::TextSelectingUtilities::CharacterType value);
    // static field const value: static public UnityEngine.TextSelectingUtilities/CharacterType WhiteSpace
    static constexpr const int WhiteSpace = 3;
    // Get static field: static public UnityEngine.TextSelectingUtilities/CharacterType WhiteSpace
    static ::UnityEngine::TextSelectingUtilities::CharacterType _get_WhiteSpace();
    // Set static field: static public UnityEngine.TextSelectingUtilities/CharacterType WhiteSpace
    static void _set_WhiteSpace(::UnityEngine::TextSelectingUtilities::CharacterType value);
    // static field const value: static public UnityEngine.TextSelectingUtilities/CharacterType NewLine
    static constexpr const int NewLine = 4;
    // Get static field: static public UnityEngine.TextSelectingUtilities/CharacterType NewLine
    static ::UnityEngine::TextSelectingUtilities::CharacterType _get_NewLine();
    // Set static field: static public UnityEngine.TextSelectingUtilities/CharacterType NewLine
    static void _set_NewLine(::UnityEngine::TextSelectingUtilities::CharacterType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TextSelectingUtilities/CharacterType
  #pragma pack(pop)
  static check_size<sizeof(TextSelectingUtilities::CharacterType), 0 + sizeof(int)> __UnityEngine_TextSelectingUtilities_CharacterTypeSizeCheck;
  static_assert(sizeof(TextSelectingUtilities::CharacterType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"