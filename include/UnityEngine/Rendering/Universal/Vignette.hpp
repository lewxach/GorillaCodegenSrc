// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.VolumeComponent
#include "UnityEngine/Rendering/VolumeComponent.hpp"
// Including type: UnityEngine.Rendering.Universal.IPostProcessComponent
#include "UnityEngine/Rendering/Universal/IPostProcessComponent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ColorParameter
  class ColorParameter;
  // Forward declaring type: Vector2Parameter
  class Vector2Parameter;
  // Forward declaring type: ClampedFloatParameter
  class ClampedFloatParameter;
  // Forward declaring type: BoolParameter
  class BoolParameter;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: Vignette
  class Vignette;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Vignette);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Vignette*, "UnityEngine.Rendering.Universal", "Vignette");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.Vignette
  // [TokenAttribute] Offset: FFFFFFFF
  // [VolumeComponentMenuForRenderPipeline] Offset: FFFFFFFF
  class Vignette : public ::UnityEngine::Rendering::VolumeComponent/*, public ::UnityEngine::Rendering::Universal::IPostProcessComponent*/ {
    public:
    public:
    // public UnityEngine.Rendering.ColorParameter color
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Rendering::ColorParameter* color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ColorParameter*) == 0x8);
    // public UnityEngine.Rendering.Vector2Parameter center
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Rendering::Vector2Parameter* center;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Vector2Parameter*) == 0x8);
    // public UnityEngine.Rendering.ClampedFloatParameter intensity
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Rendering::ClampedFloatParameter* intensity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ClampedFloatParameter*) == 0x8);
    // public UnityEngine.Rendering.ClampedFloatParameter smoothness
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Rendering::ClampedFloatParameter* smoothness;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ClampedFloatParameter*) == 0x8);
    // public UnityEngine.Rendering.BoolParameter rounded
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Rendering::BoolParameter* rounded;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::BoolParameter*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Rendering::Universal::IPostProcessComponent
    operator ::UnityEngine::Rendering::Universal::IPostProcessComponent() noexcept {
      return *reinterpret_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(this);
    }
    // Get instance field reference: public UnityEngine.Rendering.ColorParameter color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ColorParameter*& dyn_color();
    // Get instance field reference: public UnityEngine.Rendering.Vector2Parameter center
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Vector2Parameter*& dyn_center();
    // Get instance field reference: public UnityEngine.Rendering.ClampedFloatParameter intensity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ClampedFloatParameter*& dyn_intensity();
    // Get instance field reference: public UnityEngine.Rendering.ClampedFloatParameter smoothness
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ClampedFloatParameter*& dyn_smoothness();
    // Get instance field reference: public UnityEngine.Rendering.BoolParameter rounded
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::BoolParameter*& dyn_rounded();
    // public System.Boolean IsActive()
    // Offset: 0x52C31A4
    bool IsActive();
    // public System.Boolean IsTileCompatible()
    // Offset: 0x52C31D4
    bool IsTileCompatible();
    // public System.Void .ctor()
    // Offset: 0x52C31DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vignette* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::Vignette::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vignette*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.Vignette
  #pragma pack(pop)
  static check_size<sizeof(Vignette), 88 + sizeof(::UnityEngine::Rendering::BoolParameter*)> __UnityEngine_Rendering_Universal_VignetteSizeCheck;
  static_assert(sizeof(Vignette) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Vignette::IsActive
// Il2CppName: IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::Vignette::*)()>(&UnityEngine::Rendering::Universal::Vignette::IsActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Vignette*), "IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Vignette::IsTileCompatible
// Il2CppName: IsTileCompatible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::Vignette::*)()>(&UnityEngine::Rendering::Universal::Vignette::IsTileCompatible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Vignette*), "IsTileCompatible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Vignette::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!