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
  // Forward declaring type: Vector4Parameter
  class Vector4Parameter;
  // Forward declaring type: MinFloatParameter
  class MinFloatParameter;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ShadowsMidtonesHighlights
  class ShadowsMidtonesHighlights;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*, "UnityEngine.Rendering.Universal", "ShadowsMidtonesHighlights");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ShadowsMidtonesHighlights
  // [TokenAttribute] Offset: FFFFFFFF
  // [VolumeComponentMenuForRenderPipeline] Offset: FFFFFFFF
  class ShadowsMidtonesHighlights : public ::UnityEngine::Rendering::VolumeComponent/*, public ::UnityEngine::Rendering::Universal::IPostProcessComponent*/ {
    public:
    public:
    // public UnityEngine.Rendering.Vector4Parameter shadows
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Rendering::Vector4Parameter* shadows;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Vector4Parameter*) == 0x8);
    // public UnityEngine.Rendering.Vector4Parameter midtones
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Rendering::Vector4Parameter* midtones;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Vector4Parameter*) == 0x8);
    // public UnityEngine.Rendering.Vector4Parameter highlights
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Rendering::Vector4Parameter* highlights;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Vector4Parameter*) == 0x8);
    // public UnityEngine.Rendering.MinFloatParameter shadowsStart
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Rendering::MinFloatParameter* shadowsStart;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::MinFloatParameter*) == 0x8);
    // public UnityEngine.Rendering.MinFloatParameter shadowsEnd
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Rendering::MinFloatParameter* shadowsEnd;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::MinFloatParameter*) == 0x8);
    // public UnityEngine.Rendering.MinFloatParameter highlightsStart
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Rendering::MinFloatParameter* highlightsStart;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::MinFloatParameter*) == 0x8);
    // public UnityEngine.Rendering.MinFloatParameter highlightsEnd
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Rendering::MinFloatParameter* highlightsEnd;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::MinFloatParameter*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Rendering::Universal::IPostProcessComponent
    operator ::UnityEngine::Rendering::Universal::IPostProcessComponent() noexcept {
      return *reinterpret_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(this);
    }
    // Get instance field reference: public UnityEngine.Rendering.Vector4Parameter shadows
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Vector4Parameter*& dyn_shadows();
    // Get instance field reference: public UnityEngine.Rendering.Vector4Parameter midtones
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Vector4Parameter*& dyn_midtones();
    // Get instance field reference: public UnityEngine.Rendering.Vector4Parameter highlights
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Vector4Parameter*& dyn_highlights();
    // Get instance field reference: public UnityEngine.Rendering.MinFloatParameter shadowsStart
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::MinFloatParameter*& dyn_shadowsStart();
    // Get instance field reference: public UnityEngine.Rendering.MinFloatParameter shadowsEnd
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::MinFloatParameter*& dyn_shadowsEnd();
    // Get instance field reference: public UnityEngine.Rendering.MinFloatParameter highlightsStart
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::MinFloatParameter*& dyn_highlightsStart();
    // Get instance field reference: public UnityEngine.Rendering.MinFloatParameter highlightsEnd
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::MinFloatParameter*& dyn_highlightsEnd();
    // public System.Boolean IsActive()
    // Offset: 0x52C29B0
    bool IsActive();
    // public System.Boolean IsTileCompatible()
    // Offset: 0x52C2A58
    bool IsTileCompatible();
    // public System.Void .ctor()
    // Offset: 0x52C2A60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShadowsMidtonesHighlights* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShadowsMidtonesHighlights*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.ShadowsMidtonesHighlights
  #pragma pack(pop)
  static check_size<sizeof(ShadowsMidtonesHighlights), 104 + sizeof(::UnityEngine::Rendering::MinFloatParameter*)> __UnityEngine_Rendering_Universal_ShadowsMidtonesHighlightsSizeCheck;
  static_assert(sizeof(ShadowsMidtonesHighlights) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::IsActive
// Il2CppName: IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::*)()>(&UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::IsActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*), "IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::IsTileCompatible
// Il2CppName: IsTileCompatible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::*)()>(&UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::IsTileCompatible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*), "IsTileCompatible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!