// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: WordInfo
  struct WordInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::WordInfo, "UnityEngine.TextCore.Text", "WordInfo");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.Text.WordInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct WordInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 firstCharacterIndex
    // Size: 0x4
    // Offset: 0x0
    int firstCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lastCharacterIndex
    // Size: 0x4
    // Offset: 0x4
    int lastCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 characterCount
    // Size: 0x4
    // Offset: 0x8
    int characterCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WordInfo
    constexpr WordInfo(int firstCharacterIndex_ = {}, int lastCharacterIndex_ = {}, int characterCount_ = {}) noexcept : firstCharacterIndex{firstCharacterIndex_}, lastCharacterIndex{lastCharacterIndex_}, characterCount{characterCount_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 firstCharacterIndex
    [[deprecated("Use field access instead!")]] int& dyn_firstCharacterIndex();
    // Get instance field reference: public System.Int32 lastCharacterIndex
    [[deprecated("Use field access instead!")]] int& dyn_lastCharacterIndex();
    // Get instance field reference: public System.Int32 characterCount
    [[deprecated("Use field access instead!")]] int& dyn_characterCount();
  }; // UnityEngine.TextCore.Text.WordInfo
  #pragma pack(pop)
  static check_size<sizeof(WordInfo), 8 + sizeof(int)> __UnityEngine_TextCore_Text_WordInfoSizeCheck;
  static_assert(sizeof(WordInfo) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"