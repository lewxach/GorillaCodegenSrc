// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.VolumeParameter`1
#include "UnityEngine/Rendering/VolumeParameter_1.hpp"
// Including type: UnityEngine.Rendering.Universal.MotionBlurMode
#include "UnityEngine/Rendering/Universal/MotionBlurMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: MotionBlurModeParameter
  class MotionBlurModeParameter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::MotionBlurModeParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MotionBlurModeParameter*, "UnityEngine.Rendering.Universal", "MotionBlurModeParameter");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.MotionBlurModeParameter
  // [TokenAttribute] Offset: FFFFFFFF
  class MotionBlurModeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::Universal::MotionBlurMode> {
    public:
    // public System.Void .ctor(UnityEngine.Rendering.Universal.MotionBlurMode value, System.Boolean overrideState)
    // Offset: 0x52C2808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MotionBlurModeParameter* New_ctor(::UnityEngine::Rendering::Universal::MotionBlurMode value, bool overrideState) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::MotionBlurModeParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MotionBlurModeParameter*, creationType>(value, overrideState)));
    }
  }; // UnityEngine.Rendering.Universal.MotionBlurModeParameter
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::MotionBlurModeParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
