// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2Int
#include "UnityEngine/Vector2Int.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RTHandleProperties
  struct RTHandleProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RTHandleProperties, "UnityEngine.Rendering", "RTHandleProperties");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.RTHandleProperties
  // [TokenAttribute] Offset: FFFFFFFF
  struct RTHandleProperties/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector2Int previousViewportSize
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Vector2Int previousViewportSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2Int) == 0x8);
    // public UnityEngine.Vector2Int previousRenderTargetSize
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Vector2Int previousRenderTargetSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2Int) == 0x8);
    // public UnityEngine.Vector2Int currentViewportSize
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Vector2Int currentViewportSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2Int) == 0x8);
    // public UnityEngine.Vector2Int currentRenderTargetSize
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Vector2Int currentRenderTargetSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2Int) == 0x8);
    // public UnityEngine.Vector4 rtHandleScale
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Vector4 rtHandleScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    public:
    // Creating value type constructor for type: RTHandleProperties
    constexpr RTHandleProperties(::UnityEngine::Vector2Int previousViewportSize_ = {}, ::UnityEngine::Vector2Int previousRenderTargetSize_ = {}, ::UnityEngine::Vector2Int currentViewportSize_ = {}, ::UnityEngine::Vector2Int currentRenderTargetSize_ = {}, ::UnityEngine::Vector4 rtHandleScale_ = {}) noexcept : previousViewportSize{previousViewportSize_}, previousRenderTargetSize{previousRenderTargetSize_}, currentViewportSize{currentViewportSize_}, currentRenderTargetSize{currentRenderTargetSize_}, rtHandleScale{rtHandleScale_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector2Int previousViewportSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2Int& dyn_previousViewportSize();
    // Get instance field reference: public UnityEngine.Vector2Int previousRenderTargetSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2Int& dyn_previousRenderTargetSize();
    // Get instance field reference: public UnityEngine.Vector2Int currentViewportSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2Int& dyn_currentViewportSize();
    // Get instance field reference: public UnityEngine.Vector2Int currentRenderTargetSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2Int& dyn_currentRenderTargetSize();
    // Get instance field reference: public UnityEngine.Vector4 rtHandleScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_rtHandleScale();
  }; // UnityEngine.Rendering.RTHandleProperties
  #pragma pack(pop)
  static check_size<sizeof(RTHandleProperties), 32 + sizeof(::UnityEngine::Vector4)> __UnityEngine_Rendering_RTHandlePropertiesSizeCheck;
  static_assert(sizeof(RTHandleProperties) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"