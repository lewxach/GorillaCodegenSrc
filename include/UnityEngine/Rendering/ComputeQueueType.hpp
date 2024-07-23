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
  // Forward declaring type: ComputeQueueType
  struct ComputeQueueType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ComputeQueueType, "UnityEngine.Rendering", "ComputeQueueType");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.ComputeQueueType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ComputeQueueType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ComputeQueueType
    constexpr ComputeQueueType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.ComputeQueueType Default
    static constexpr const int Default = 0;
    // Get static field: static public UnityEngine.Rendering.ComputeQueueType Default
    static ::UnityEngine::Rendering::ComputeQueueType _get_Default();
    // Set static field: static public UnityEngine.Rendering.ComputeQueueType Default
    static void _set_Default(::UnityEngine::Rendering::ComputeQueueType value);
    // static field const value: static public UnityEngine.Rendering.ComputeQueueType Background
    static constexpr const int Background = 1;
    // Get static field: static public UnityEngine.Rendering.ComputeQueueType Background
    static ::UnityEngine::Rendering::ComputeQueueType _get_Background();
    // Set static field: static public UnityEngine.Rendering.ComputeQueueType Background
    static void _set_Background(::UnityEngine::Rendering::ComputeQueueType value);
    // static field const value: static public UnityEngine.Rendering.ComputeQueueType Urgent
    static constexpr const int Urgent = 2;
    // Get static field: static public UnityEngine.Rendering.ComputeQueueType Urgent
    static ::UnityEngine::Rendering::ComputeQueueType _get_Urgent();
    // Set static field: static public UnityEngine.Rendering.ComputeQueueType Urgent
    static void _set_Urgent(::UnityEngine::Rendering::ComputeQueueType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.ComputeQueueType
  #pragma pack(pop)
  static check_size<sizeof(ComputeQueueType), 0 + sizeof(int)> __UnityEngine_Rendering_ComputeQueueTypeSizeCheck;
  static_assert(sizeof(ComputeQueueType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"