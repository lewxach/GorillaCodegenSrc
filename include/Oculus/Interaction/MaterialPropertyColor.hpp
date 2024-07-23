// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: MaterialPropertyColor
  struct MaterialPropertyColor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::MaterialPropertyColor, "Oculus.Interaction", "MaterialPropertyColor");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Oculus.Interaction.MaterialPropertyColor
  // [TokenAttribute] Offset: FFFFFFFF
  struct MaterialPropertyColor/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.Color value
    // Size: 0x10
    // Offset: 0x8
    ::UnityEngine::Color value;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Creating value type constructor for type: MaterialPropertyColor
    constexpr MaterialPropertyColor(::StringW name_ = {}, ::UnityEngine::Color value_ = {}) noexcept : name{name_}, value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public UnityEngine.Color value
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_value();
  }; // Oculus.Interaction.MaterialPropertyColor
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyColor), 8 + sizeof(::UnityEngine::Color)> __Oculus_Interaction_MaterialPropertyColorSizeCheck;
  static_assert(sizeof(MaterialPropertyColor) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"