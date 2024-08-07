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
  // Forward declaring type: PageInfo
  struct PageInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::PageInfo, "UnityEngine.TextCore.Text", "PageInfo");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.Text.PageInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct PageInfo/*, public ::System::ValueType*/ {
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
    // public System.Single ascender
    // Size: 0x4
    // Offset: 0x8
    float ascender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single baseLine
    // Size: 0x4
    // Offset: 0xC
    float baseLine;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single descender
    // Size: 0x4
    // Offset: 0x10
    float descender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: PageInfo
    constexpr PageInfo(int firstCharacterIndex_ = {}, int lastCharacterIndex_ = {}, float ascender_ = {}, float baseLine_ = {}, float descender_ = {}) noexcept : firstCharacterIndex{firstCharacterIndex_}, lastCharacterIndex{lastCharacterIndex_}, ascender{ascender_}, baseLine{baseLine_}, descender{descender_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 firstCharacterIndex
    [[deprecated("Use field access instead!")]] int& dyn_firstCharacterIndex();
    // Get instance field reference: public System.Int32 lastCharacterIndex
    [[deprecated("Use field access instead!")]] int& dyn_lastCharacterIndex();
    // Get instance field reference: public System.Single ascender
    [[deprecated("Use field access instead!")]] float& dyn_ascender();
    // Get instance field reference: public System.Single baseLine
    [[deprecated("Use field access instead!")]] float& dyn_baseLine();
    // Get instance field reference: public System.Single descender
    [[deprecated("Use field access instead!")]] float& dyn_descender();
  }; // UnityEngine.TextCore.Text.PageInfo
  #pragma pack(pop)
  static check_size<sizeof(PageInfo), 16 + sizeof(float)> __UnityEngine_TextCore_Text_PageInfoSizeCheck;
  static_assert(sizeof(PageInfo) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
