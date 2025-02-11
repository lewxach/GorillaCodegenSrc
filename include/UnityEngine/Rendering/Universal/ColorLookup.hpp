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
  // Forward declaring type: TextureParameter
  class TextureParameter;
  // Forward declaring type: ClampedFloatParameter
  class ClampedFloatParameter;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ColorLookup
  class ColorLookup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ColorLookup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ColorLookup*, "UnityEngine.Rendering.Universal", "ColorLookup");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ColorLookup
  // [TokenAttribute] Offset: FFFFFFFF
  // [VolumeComponentMenuForRenderPipeline] Offset: FFFFFFFF
  class ColorLookup : public ::UnityEngine::Rendering::VolumeComponent/*, public ::UnityEngine::Rendering::Universal::IPostProcessComponent*/ {
    public:
    public:
    // public UnityEngine.Rendering.TextureParameter texture
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Rendering::TextureParameter* texture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::TextureParameter*) == 0x8);
    // public UnityEngine.Rendering.ClampedFloatParameter contribution
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Rendering::ClampedFloatParameter* contribution;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ClampedFloatParameter*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Rendering::Universal::IPostProcessComponent
    operator ::UnityEngine::Rendering::Universal::IPostProcessComponent() noexcept {
      return *reinterpret_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(this);
    }
    // Get instance field reference: public UnityEngine.Rendering.TextureParameter texture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::TextureParameter*& dyn_texture();
    // Get instance field reference: public UnityEngine.Rendering.ClampedFloatParameter contribution
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ClampedFloatParameter*& dyn_contribution();
    // public System.Boolean IsActive()
    // Offset: 0x52C1938
    bool IsActive();
    // public System.Boolean IsTileCompatible()
    // Offset: 0x52C1BCC
    bool IsTileCompatible();
    // public System.Boolean ValidateLUT()
    // Offset: 0x52C197C
    bool ValidateLUT();
    // public System.Void .ctor()
    // Offset: 0x52C1BD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorLookup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::ColorLookup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorLookup*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.ColorLookup
  #pragma pack(pop)
  static check_size<sizeof(ColorLookup), 64 + sizeof(::UnityEngine::Rendering::ClampedFloatParameter*)> __UnityEngine_Rendering_Universal_ColorLookupSizeCheck;
  static_assert(sizeof(ColorLookup) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ColorLookup::IsActive
// Il2CppName: IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::ColorLookup::*)()>(&UnityEngine::Rendering::Universal::ColorLookup::IsActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ColorLookup*), "IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ColorLookup::IsTileCompatible
// Il2CppName: IsTileCompatible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::ColorLookup::*)()>(&UnityEngine::Rendering::Universal::ColorLookup::IsTileCompatible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ColorLookup*), "IsTileCompatible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ColorLookup::ValidateLUT
// Il2CppName: ValidateLUT
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::ColorLookup::*)()>(&UnityEngine::Rendering::Universal::ColorLookup::ValidateLUT)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ColorLookup*), "ValidateLUT", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ColorLookup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
