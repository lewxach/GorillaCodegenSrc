// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: ICinemachineCamera
  class ICinemachineCamera;
  // Forward declaring type: CameraState
  struct CameraState;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineBlend
  class CinemachineBlend;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineBlend);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineBlend*, "Cinemachine", "CinemachineBlend");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineBlend
  // [TokenAttribute] Offset: FFFFFFFF
  class CinemachineBlend : public ::Il2CppObject {
    public:
    public:
    // public Cinemachine.ICinemachineCamera CamA
    // Size: 0x8
    // Offset: 0x10
    ::Cinemachine::ICinemachineCamera* CamA;
    // Field size check
    static_assert(sizeof(::Cinemachine::ICinemachineCamera*) == 0x8);
    // public Cinemachine.ICinemachineCamera CamB
    // Size: 0x8
    // Offset: 0x18
    ::Cinemachine::ICinemachineCamera* CamB;
    // Field size check
    static_assert(sizeof(::Cinemachine::ICinemachineCamera*) == 0x8);
    // public UnityEngine.AnimationCurve BlendCurve
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AnimationCurve* BlendCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public System.Single TimeInBlend
    // Size: 0x4
    // Offset: 0x28
    float TimeInBlend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Duration
    // Size: 0x4
    // Offset: 0x2C
    float Duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public Cinemachine.ICinemachineCamera CamA
    [[deprecated("Use field access instead!")]] ::Cinemachine::ICinemachineCamera*& dyn_CamA();
    // Get instance field reference: public Cinemachine.ICinemachineCamera CamB
    [[deprecated("Use field access instead!")]] ::Cinemachine::ICinemachineCamera*& dyn_CamB();
    // Get instance field reference: public UnityEngine.AnimationCurve BlendCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_BlendCurve();
    // Get instance field reference: public System.Single TimeInBlend
    [[deprecated("Use field access instead!")]] float& dyn_TimeInBlend();
    // Get instance field reference: public System.Single Duration
    [[deprecated("Use field access instead!")]] float& dyn_Duration();
    // public System.Single get_BlendWeight()
    // Offset: 0x2AA9444
    float get_BlendWeight();
    // public System.Boolean get_IsValid()
    // Offset: 0x2AA94F0
    bool get_IsValid();
    // public System.Boolean get_IsComplete()
    // Offset: 0x2AA94C4
    bool get_IsComplete();
    // public System.String get_Description()
    // Offset: 0x2AA9610
    ::StringW get_Description();
    // public System.Boolean Uses(Cinemachine.ICinemachineCamera cam)
    // Offset: 0x2AA9960
    bool Uses(::Cinemachine::ICinemachineCamera* cam);
    // public System.Void .ctor(Cinemachine.ICinemachineCamera a, Cinemachine.ICinemachineCamera b, UnityEngine.AnimationCurve curve, System.Single duration, System.Single t)
    // Offset: 0x2AA9A60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineBlend* New_ctor(::Cinemachine::ICinemachineCamera* a, ::Cinemachine::ICinemachineCamera* b, ::UnityEngine::AnimationCurve* curve, float duration, float t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineBlend::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineBlend*, creationType>(a, b, curve, duration, t)));
    }
    // public System.Void UpdateCameraState(UnityEngine.Vector3 worldUp, System.Single deltaTime)
    // Offset: 0x2AA9AD8
    void UpdateCameraState(::UnityEngine::Vector3 worldUp, float deltaTime);
    // public Cinemachine.CameraState get_State()
    // Offset: 0x2AA9D04
    ::Cinemachine::CameraState get_State();
  }; // Cinemachine.CinemachineBlend
  #pragma pack(pop)
  static check_size<sizeof(CinemachineBlend), 44 + sizeof(float)> __Cinemachine_CinemachineBlendSizeCheck;
  static_assert(sizeof(CinemachineBlend) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineBlend::get_BlendWeight
// Il2CppName: get_BlendWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Cinemachine::CinemachineBlend::*)()>(&Cinemachine::CinemachineBlend::get_BlendWeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlend*), "get_BlendWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlend::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::CinemachineBlend::*)()>(&Cinemachine::CinemachineBlend::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlend*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlend::get_IsComplete
// Il2CppName: get_IsComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::CinemachineBlend::*)()>(&Cinemachine::CinemachineBlend::get_IsComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlend*), "get_IsComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlend::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Cinemachine::CinemachineBlend::*)()>(&Cinemachine::CinemachineBlend::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlend*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlend::Uses
// Il2CppName: Uses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::CinemachineBlend::*)(::Cinemachine::ICinemachineCamera*)>(&Cinemachine::CinemachineBlend::Uses)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("Cinemachine", "ICinemachineCamera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlend*), "Uses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlend::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cinemachine::CinemachineBlend::UpdateCameraState
// Il2CppName: UpdateCameraState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlend::*)(::UnityEngine::Vector3, float)>(&Cinemachine::CinemachineBlend::UpdateCameraState)> {
  static const MethodInfo* get() {
    static auto* worldUp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlend*), "UpdateCameraState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldUp, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlend::get_State
// Il2CppName: get_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::CameraState (Cinemachine::CinemachineBlend::*)()>(&Cinemachine::CinemachineBlend::get_State)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlend*), "get_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};