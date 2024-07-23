// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ContactPairPoint
  struct ContactPairPoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContactPairPoint, "UnityEngine", "ContactPairPoint");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ContactPairPoint
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct ContactPairPoint/*, public ::System::ValueType*/ {
    public:
    public:
    // readonly UnityEngine.Vector3 m_Position
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 m_Position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // readonly System.Single m_Separation
    // Size: 0x4
    // Offset: 0xC
    float m_Separation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // readonly UnityEngine.Vector3 m_Normal
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 m_Normal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // readonly System.UInt32 m_InternalFaceIndex0
    // Size: 0x4
    // Offset: 0x1C
    uint m_InternalFaceIndex0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // readonly UnityEngine.Vector3 m_Impulse
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 m_Impulse;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // readonly System.UInt32 m_InternalFaceIndex1
    // Size: 0x4
    // Offset: 0x2C
    uint m_InternalFaceIndex1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: ContactPairPoint
    constexpr ContactPairPoint(::UnityEngine::Vector3 m_Position_ = {}, float m_Separation_ = {}, ::UnityEngine::Vector3 m_Normal_ = {}, uint m_InternalFaceIndex0_ = {}, ::UnityEngine::Vector3 m_Impulse_ = {}, uint m_InternalFaceIndex1_ = {}) noexcept : m_Position{m_Position_}, m_Separation{m_Separation_}, m_Normal{m_Normal_}, m_InternalFaceIndex0{m_InternalFaceIndex0_}, m_Impulse{m_Impulse_}, m_InternalFaceIndex1{m_InternalFaceIndex1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: readonly UnityEngine.Vector3 m_Position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Position();
    // Get instance field reference: readonly System.Single m_Separation
    [[deprecated("Use field access instead!")]] float& dyn_m_Separation();
    // Get instance field reference: readonly UnityEngine.Vector3 m_Normal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Normal();
    // Get instance field reference: readonly System.UInt32 m_InternalFaceIndex0
    [[deprecated("Use field access instead!")]] uint& dyn_m_InternalFaceIndex0();
    // Get instance field reference: readonly UnityEngine.Vector3 m_Impulse
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Impulse();
    // Get instance field reference: readonly System.UInt32 m_InternalFaceIndex1
    [[deprecated("Use field access instead!")]] uint& dyn_m_InternalFaceIndex1();
  }; // UnityEngine.ContactPairPoint
  #pragma pack(pop)
  static check_size<sizeof(ContactPairPoint), 44 + sizeof(uint)> __UnityEngine_ContactPairPointSizeCheck;
  static_assert(sizeof(ContactPairPoint) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"