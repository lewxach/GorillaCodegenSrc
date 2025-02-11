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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: BatchCullingViewType
  struct BatchCullingViewType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchCullingViewType, "UnityEngine.Rendering", "BatchCullingViewType");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.BatchCullingViewType
  // [TokenAttribute] Offset: FFFFFFFF
  struct BatchCullingViewType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BatchCullingViewType
    constexpr BatchCullingViewType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.BatchCullingViewType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public UnityEngine.Rendering.BatchCullingViewType Unknown
    static ::UnityEngine::Rendering::BatchCullingViewType _get_Unknown();
    // Set static field: static public UnityEngine.Rendering.BatchCullingViewType Unknown
    static void _set_Unknown(::UnityEngine::Rendering::BatchCullingViewType value);
    // static field const value: static public UnityEngine.Rendering.BatchCullingViewType Camera
    static constexpr const int Camera = 1;
    // Get static field: static public UnityEngine.Rendering.BatchCullingViewType Camera
    static ::UnityEngine::Rendering::BatchCullingViewType _get_Camera();
    // Set static field: static public UnityEngine.Rendering.BatchCullingViewType Camera
    static void _set_Camera(::UnityEngine::Rendering::BatchCullingViewType value);
    // static field const value: static public UnityEngine.Rendering.BatchCullingViewType Light
    static constexpr const int Light = 2;
    // Get static field: static public UnityEngine.Rendering.BatchCullingViewType Light
    static ::UnityEngine::Rendering::BatchCullingViewType _get_Light();
    // Set static field: static public UnityEngine.Rendering.BatchCullingViewType Light
    static void _set_Light(::UnityEngine::Rendering::BatchCullingViewType value);
    // static field const value: static public UnityEngine.Rendering.BatchCullingViewType Picking
    static constexpr const int Picking = 3;
    // Get static field: static public UnityEngine.Rendering.BatchCullingViewType Picking
    static ::UnityEngine::Rendering::BatchCullingViewType _get_Picking();
    // Set static field: static public UnityEngine.Rendering.BatchCullingViewType Picking
    static void _set_Picking(::UnityEngine::Rendering::BatchCullingViewType value);
    // static field const value: static public UnityEngine.Rendering.BatchCullingViewType SelectionOutline
    static constexpr const int SelectionOutline = 4;
    // Get static field: static public UnityEngine.Rendering.BatchCullingViewType SelectionOutline
    static ::UnityEngine::Rendering::BatchCullingViewType _get_SelectionOutline();
    // Set static field: static public UnityEngine.Rendering.BatchCullingViewType SelectionOutline
    static void _set_SelectionOutline(::UnityEngine::Rendering::BatchCullingViewType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.BatchCullingViewType
  #pragma pack(pop)
  static check_size<sizeof(BatchCullingViewType), 0 + sizeof(int)> __UnityEngine_Rendering_BatchCullingViewTypeSizeCheck;
  static_assert(sizeof(BatchCullingViewType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
