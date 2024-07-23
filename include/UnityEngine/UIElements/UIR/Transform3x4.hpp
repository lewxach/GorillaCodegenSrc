// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: Transform3x4
  struct Transform3x4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Transform3x4, "UnityEngine.UIElements.UIR", "Transform3x4");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.UIR.Transform3x4
  // [TokenAttribute] Offset: FFFFFFFF
  struct Transform3x4/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector4 v0
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Vector4 v0;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 v1
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Vector4 v1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 v2
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Vector4 v2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    public:
    // Creating value type constructor for type: Transform3x4
    constexpr Transform3x4(::UnityEngine::Vector4 v0_ = {}, ::UnityEngine::Vector4 v1_ = {}, ::UnityEngine::Vector4 v2_ = {}) noexcept : v0{v0_}, v1{v1_}, v2{v2_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector4 v0
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_v0();
    // Get instance field reference: public UnityEngine.Vector4 v1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_v1();
    // Get instance field reference: public UnityEngine.Vector4 v2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_v2();
  }; // UnityEngine.UIElements.UIR.Transform3x4
  #pragma pack(pop)
  static check_size<sizeof(Transform3x4), 32 + sizeof(::UnityEngine::Vector4)> __UnityEngine_UIElements_UIR_Transform3x4SizeCheck;
  static_assert(sizeof(Transform3x4) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"