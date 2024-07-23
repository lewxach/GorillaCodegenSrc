// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Texture2DAtlas
#include "UnityEngine/Rendering/Texture2DAtlas.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Texture2DAtlas::BlitType, "UnityEngine.Rendering", "Texture2DAtlas/BlitType");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Texture2DAtlas/BlitType
  // [TokenAttribute] Offset: FFFFFFFF
  struct Texture2DAtlas::BlitType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BlitType
    constexpr BlitType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Texture2DAtlas/BlitType Default
    static constexpr const int Default = 0;
    // Get static field: static public UnityEngine.Rendering.Texture2DAtlas/BlitType Default
    static ::UnityEngine::Rendering::Texture2DAtlas::BlitType _get_Default();
    // Set static field: static public UnityEngine.Rendering.Texture2DAtlas/BlitType Default
    static void _set_Default(::UnityEngine::Rendering::Texture2DAtlas::BlitType value);
    // static field const value: static public UnityEngine.Rendering.Texture2DAtlas/BlitType CubeTo2DOctahedral
    static constexpr const int CubeTo2DOctahedral = 1;
    // Get static field: static public UnityEngine.Rendering.Texture2DAtlas/BlitType CubeTo2DOctahedral
    static ::UnityEngine::Rendering::Texture2DAtlas::BlitType _get_CubeTo2DOctahedral();
    // Set static field: static public UnityEngine.Rendering.Texture2DAtlas/BlitType CubeTo2DOctahedral
    static void _set_CubeTo2DOctahedral(::UnityEngine::Rendering::Texture2DAtlas::BlitType value);
    // static field const value: static public UnityEngine.Rendering.Texture2DAtlas/BlitType SingleChannel
    static constexpr const int SingleChannel = 2;
    // Get static field: static public UnityEngine.Rendering.Texture2DAtlas/BlitType SingleChannel
    static ::UnityEngine::Rendering::Texture2DAtlas::BlitType _get_SingleChannel();
    // Set static field: static public UnityEngine.Rendering.Texture2DAtlas/BlitType SingleChannel
    static void _set_SingleChannel(::UnityEngine::Rendering::Texture2DAtlas::BlitType value);
    // static field const value: static public UnityEngine.Rendering.Texture2DAtlas/BlitType CubeTo2DOctahedralSingleChannel
    static constexpr const int CubeTo2DOctahedralSingleChannel = 3;
    // Get static field: static public UnityEngine.Rendering.Texture2DAtlas/BlitType CubeTo2DOctahedralSingleChannel
    static ::UnityEngine::Rendering::Texture2DAtlas::BlitType _get_CubeTo2DOctahedralSingleChannel();
    // Set static field: static public UnityEngine.Rendering.Texture2DAtlas/BlitType CubeTo2DOctahedralSingleChannel
    static void _set_CubeTo2DOctahedralSingleChannel(::UnityEngine::Rendering::Texture2DAtlas::BlitType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Texture2DAtlas/BlitType
  #pragma pack(pop)
  static check_size<sizeof(Texture2DAtlas::BlitType), 0 + sizeof(int)> __UnityEngine_Rendering_Texture2DAtlas_BlitTypeSizeCheck;
  static_assert(sizeof(Texture2DAtlas::BlitType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"