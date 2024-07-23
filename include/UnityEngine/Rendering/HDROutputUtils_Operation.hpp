// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.HDROutputUtils
#include "UnityEngine/Rendering/HDROutputUtils.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HDROutputUtils::Operation, "UnityEngine.Rendering", "HDROutputUtils/Operation");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.HDROutputUtils/Operation
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct HDROutputUtils::Operation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Operation
    constexpr Operation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.HDROutputUtils/Operation None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.HDROutputUtils/Operation None
    static ::UnityEngine::Rendering::HDROutputUtils::Operation _get_None();
    // Set static field: static public UnityEngine.Rendering.HDROutputUtils/Operation None
    static void _set_None(::UnityEngine::Rendering::HDROutputUtils::Operation value);
    // static field const value: static public UnityEngine.Rendering.HDROutputUtils/Operation ColorConversion
    static constexpr const int ColorConversion = 1;
    // Get static field: static public UnityEngine.Rendering.HDROutputUtils/Operation ColorConversion
    static ::UnityEngine::Rendering::HDROutputUtils::Operation _get_ColorConversion();
    // Set static field: static public UnityEngine.Rendering.HDROutputUtils/Operation ColorConversion
    static void _set_ColorConversion(::UnityEngine::Rendering::HDROutputUtils::Operation value);
    // static field const value: static public UnityEngine.Rendering.HDROutputUtils/Operation ColorEncoding
    static constexpr const int ColorEncoding = 2;
    // Get static field: static public UnityEngine.Rendering.HDROutputUtils/Operation ColorEncoding
    static ::UnityEngine::Rendering::HDROutputUtils::Operation _get_ColorEncoding();
    // Set static field: static public UnityEngine.Rendering.HDROutputUtils/Operation ColorEncoding
    static void _set_ColorEncoding(::UnityEngine::Rendering::HDROutputUtils::Operation value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.HDROutputUtils/Operation
  #pragma pack(pop)
  static check_size<sizeof(HDROutputUtils::Operation), 0 + sizeof(int)> __UnityEngine_Rendering_HDROutputUtils_OperationSizeCheck;
  static_assert(sizeof(HDROutputUtils::Operation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"