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
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: LiftGammaGain
  class LiftGammaGain;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LiftGammaGain);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LiftGammaGain*, "UnityEngine.Rendering.Universal", "LiftGammaGain");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.LiftGammaGain
  // [TokenAttribute] Offset: FFFFFFFF
  // [VolumeComponentMenuForRenderPipeline] Offset: FFFFFFFF
  class LiftGammaGain : public ::UnityEngine::Rendering::VolumeComponent/*, public ::UnityEngine::Rendering::Universal::IPostProcessComponent*/ {
    public:
    public:
    // public UnityEngine.Rendering.Vector4Parameter lift
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Rendering::Vector4Parameter* lift;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Vector4Parameter*) == 0x8);
    // public UnityEngine.Rendering.Vector4Parameter gamma
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Rendering::Vector4Parameter* gamma;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Vector4Parameter*) == 0x8);
    // public UnityEngine.Rendering.Vector4Parameter gain
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Rendering::Vector4Parameter* gain;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Vector4Parameter*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Rendering::Universal::IPostProcessComponent
    operator ::UnityEngine::Rendering::Universal::IPostProcessComponent() noexcept {
      return *reinterpret_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(this);
    }
    // Get instance field reference: public UnityEngine.Rendering.Vector4Parameter lift
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Vector4Parameter*& dyn_lift();
    // Get instance field reference: public UnityEngine.Rendering.Vector4Parameter gamma
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Vector4Parameter*& dyn_gamma();
    // Get instance field reference: public UnityEngine.Rendering.Vector4Parameter gain
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Vector4Parameter*& dyn_gain();
    // public System.Boolean IsActive()
    // Offset: 0x52C24CC
    bool IsActive();
    // public System.Boolean IsTileCompatible()
    // Offset: 0x52C2574
    bool IsTileCompatible();
    // public System.Void .ctor()
    // Offset: 0x52C257C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LiftGammaGain* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::LiftGammaGain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LiftGammaGain*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.LiftGammaGain
  #pragma pack(pop)
  static check_size<sizeof(LiftGammaGain), 72 + sizeof(::UnityEngine::Rendering::Vector4Parameter*)> __UnityEngine_Rendering_Universal_LiftGammaGainSizeCheck;
  static_assert(sizeof(LiftGammaGain) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LiftGammaGain::IsActive
// Il2CppName: IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::LiftGammaGain::*)()>(&UnityEngine::Rendering::Universal::LiftGammaGain::IsActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LiftGammaGain*), "IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LiftGammaGain::IsTileCompatible
// Il2CppName: IsTileCompatible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::LiftGammaGain::*)()>(&UnityEngine::Rendering::Universal::LiftGammaGain::IsTileCompatible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LiftGammaGain*), "IsTileCompatible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LiftGammaGain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!