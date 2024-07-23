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
  // Forward declaring type: SynchronisationStage
  struct SynchronisationStage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SynchronisationStage, "UnityEngine.Rendering", "SynchronisationStage");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.SynchronisationStage
  // [TokenAttribute] Offset: FFFFFFFF
  struct SynchronisationStage/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SynchronisationStage
    constexpr SynchronisationStage(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.SynchronisationStage VertexProcessing
    static constexpr const int VertexProcessing = 0;
    // Get static field: static public UnityEngine.Rendering.SynchronisationStage VertexProcessing
    static ::UnityEngine::Rendering::SynchronisationStage _get_VertexProcessing();
    // Set static field: static public UnityEngine.Rendering.SynchronisationStage VertexProcessing
    static void _set_VertexProcessing(::UnityEngine::Rendering::SynchronisationStage value);
    // static field const value: static public UnityEngine.Rendering.SynchronisationStage PixelProcessing
    static constexpr const int PixelProcessing = 1;
    // Get static field: static public UnityEngine.Rendering.SynchronisationStage PixelProcessing
    static ::UnityEngine::Rendering::SynchronisationStage _get_PixelProcessing();
    // Set static field: static public UnityEngine.Rendering.SynchronisationStage PixelProcessing
    static void _set_PixelProcessing(::UnityEngine::Rendering::SynchronisationStage value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.SynchronisationStage
  #pragma pack(pop)
  static check_size<sizeof(SynchronisationStage), 0 + sizeof(int)> __UnityEngine_Rendering_SynchronisationStageSizeCheck;
  static_assert(sizeof(SynchronisationStage) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"