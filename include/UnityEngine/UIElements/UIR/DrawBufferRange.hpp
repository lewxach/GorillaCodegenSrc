// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: DrawBufferRange
  struct DrawBufferRange;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::DrawBufferRange, "UnityEngine.UIElements.UIR", "DrawBufferRange");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.UIR.DrawBufferRange
  // [TokenAttribute] Offset: FFFFFFFF
  struct DrawBufferRange/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 firstIndex
    // Size: 0x4
    // Offset: 0x0
    int firstIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 indexCount
    // Size: 0x4
    // Offset: 0x4
    int indexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 minIndexVal
    // Size: 0x4
    // Offset: 0x8
    int minIndexVal;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 vertsReferenced
    // Size: 0x4
    // Offset: 0xC
    int vertsReferenced;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DrawBufferRange
    constexpr DrawBufferRange(int firstIndex_ = {}, int indexCount_ = {}, int minIndexVal_ = {}, int vertsReferenced_ = {}) noexcept : firstIndex{firstIndex_}, indexCount{indexCount_}, minIndexVal{minIndexVal_}, vertsReferenced{vertsReferenced_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 firstIndex
    [[deprecated("Use field access instead!")]] int& dyn_firstIndex();
    // Get instance field reference: public System.Int32 indexCount
    [[deprecated("Use field access instead!")]] int& dyn_indexCount();
    // Get instance field reference: public System.Int32 minIndexVal
    [[deprecated("Use field access instead!")]] int& dyn_minIndexVal();
    // Get instance field reference: public System.Int32 vertsReferenced
    [[deprecated("Use field access instead!")]] int& dyn_vertsReferenced();
  }; // UnityEngine.UIElements.UIR.DrawBufferRange
  #pragma pack(pop)
  static check_size<sizeof(DrawBufferRange), 12 + sizeof(int)> __UnityEngine_UIElements_UIR_DrawBufferRangeSizeCheck;
  static_assert(sizeof(DrawBufferRange) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
