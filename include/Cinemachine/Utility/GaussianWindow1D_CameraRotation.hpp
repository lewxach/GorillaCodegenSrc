// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.Utility.GaussianWindow1d`1
#include "Cinemachine/Utility/GaussianWindow1d_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Cinemachine.Utility
namespace Cinemachine::Utility {
  // Forward declaring type: GaussianWindow1D_CameraRotation
  class GaussianWindow1D_CameraRotation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::Utility::GaussianWindow1D_CameraRotation);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::Utility::GaussianWindow1D_CameraRotation*, "Cinemachine.Utility", "GaussianWindow1D_CameraRotation");
// Type namespace: Cinemachine.Utility
namespace Cinemachine::Utility {
  // WARNING Size may be invalid!
  // Autogenerated type: Cinemachine.Utility.GaussianWindow1D_CameraRotation
  // [TokenAttribute] Offset: FFFFFFFF
  class GaussianWindow1D_CameraRotation : public ::Cinemachine::Utility::GaussianWindow1d_1<::UnityEngine::Vector2> {
    public:
    // protected UnityEngine.Vector2 Compute(System.Int32 windowPos)
    // Offset: 0x2ACD310
    ::UnityEngine::Vector2 Compute(int windowPos);
    // public System.Void .ctor(System.Single sigma, System.Int32 maxKernelRadius)
    // Offset: 0x2ACD2A8
    // Implemented from: Cinemachine.Utility.GaussianWindow1d`1
    // Base method: System.Void GaussianWindow1d_1::.ctor(System.Single sigma, System.Int32 maxKernelRadius)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GaussianWindow1D_CameraRotation* New_ctor(float sigma, int maxKernelRadius) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::Utility::GaussianWindow1D_CameraRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GaussianWindow1D_CameraRotation*, creationType>(sigma, maxKernelRadius)));
    }
  }; // Cinemachine.Utility.GaussianWindow1D_CameraRotation
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::Utility::GaussianWindow1D_CameraRotation::Compute
// Il2CppName: Compute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (Cinemachine::Utility::GaussianWindow1D_CameraRotation::*)(int)>(&Cinemachine::Utility::GaussianWindow1D_CameraRotation::Compute)> {
  static const MethodInfo* get() {
    static auto* windowPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Utility::GaussianWindow1D_CameraRotation*), "Compute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{windowPos});
  }
};
// Writing MetadataGetter for method: Cinemachine::Utility::GaussianWindow1D_CameraRotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!