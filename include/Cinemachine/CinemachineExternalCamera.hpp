// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineVirtualCameraBase
#include "Cinemachine/CinemachineVirtualCameraBase.hpp"
// Including type: Cinemachine.CameraState
#include "Cinemachine/CameraState.hpp"
// Including type: Cinemachine.CinemachineVirtualCameraBase/BlendHint
#include "Cinemachine/CinemachineVirtualCameraBase_BlendHint.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Camera because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineExternalCamera
  class CinemachineExternalCamera;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineExternalCamera);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineExternalCamera*, "Cinemachine", "CinemachineExternalCamera");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x1AC
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineExternalCamera
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  // [DocumentationSortingAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class CinemachineExternalCamera : public ::Cinemachine::CinemachineVirtualCameraBase {
    public:
    // Writing base type padding for base size: 0xA2 to desired offset: 0xA8
    char ___base_padding[0x6] = {};
    public:
    // public UnityEngine.Transform m_LookAt
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::Transform* m_LookAt;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Camera m_Camera
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::Camera* m_Camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private Cinemachine.CameraState m_State
    // Size: 0xE4
    // Offset: 0xB8
    ::Cinemachine::CameraState m_State;
    // Field size check
    static_assert(sizeof(::Cinemachine::CameraState) == 0xE4);
    // Padding between fields: m_State and: Follow
    char __padding2[0x4] = {};
    // private UnityEngine.Transform <Follow>k__BackingField
    // Size: 0x8
    // Offset: 0x1A0
    ::UnityEngine::Transform* Follow;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public Cinemachine.CinemachineVirtualCameraBase/BlendHint m_BlendHint
    // Size: 0x4
    // Offset: 0x1A8
    ::Cinemachine::CinemachineVirtualCameraBase::BlendHint m_BlendHint;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineVirtualCameraBase::BlendHint) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Transform m_LookAt
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_LookAt();
    // Get instance field reference: private UnityEngine.Camera m_Camera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn_m_Camera();
    // Get instance field reference: private Cinemachine.CameraState m_State
    [[deprecated("Use field access instead!")]] ::Cinemachine::CameraState& dyn_m_State();
    // Get instance field reference: private UnityEngine.Transform <Follow>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$Follow$k__BackingField();
    // Get instance field reference: public Cinemachine.CinemachineVirtualCameraBase/BlendHint m_BlendHint
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineVirtualCameraBase::BlendHint& dyn_m_BlendHint();
    // public override Cinemachine.CameraState get_State()
    // Offset: 0x2A8C5FC
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: Cinemachine.CameraState CinemachineVirtualCameraBase::get_State()
    ::Cinemachine::CameraState get_State();
    // public override UnityEngine.Transform get_LookAt()
    // Offset: 0x2A8C60C
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: UnityEngine.Transform CinemachineVirtualCameraBase::get_LookAt()
    ::UnityEngine::Transform* get_LookAt();
    // public override System.Void set_LookAt(UnityEngine.Transform value)
    // Offset: 0x2A8C614
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.Void CinemachineVirtualCameraBase::set_LookAt(UnityEngine.Transform value)
    void set_LookAt(::UnityEngine::Transform* value);
    // public override UnityEngine.Transform get_Follow()
    // Offset: 0x2A8C61C
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: UnityEngine.Transform CinemachineVirtualCameraBase::get_Follow()
    ::UnityEngine::Transform* get_Follow();
    // public override System.Void set_Follow(UnityEngine.Transform value)
    // Offset: 0x2A8C624
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.Void CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform value)
    void set_Follow(::UnityEngine::Transform* value);
    // public override System.Void InternalUpdateCameraState(UnityEngine.Vector3 worldUp, System.Single deltaTime)
    // Offset: 0x2A8C634
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.Void CinemachineVirtualCameraBase::InternalUpdateCameraState(UnityEngine.Vector3 worldUp, System.Single deltaTime)
    void InternalUpdateCameraState(::UnityEngine::Vector3 worldUp, float deltaTime);
    // public System.Void .ctor()
    // Offset: 0x2A8CACC
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.Void CinemachineVirtualCameraBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineExternalCamera* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineExternalCamera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineExternalCamera*, creationType>()));
    }
  }; // Cinemachine.CinemachineExternalCamera
  #pragma pack(pop)
  static check_size<sizeof(CinemachineExternalCamera), 424 + sizeof(::Cinemachine::CinemachineVirtualCameraBase::BlendHint)> __Cinemachine_CinemachineExternalCameraSizeCheck;
  static_assert(sizeof(CinemachineExternalCamera) == 0x1AC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineExternalCamera::get_State
// Il2CppName: get_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::CameraState (Cinemachine::CinemachineExternalCamera::*)()>(&Cinemachine::CinemachineExternalCamera::get_State)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExternalCamera*), "get_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExternalCamera::get_LookAt
// Il2CppName: get_LookAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Cinemachine::CinemachineExternalCamera::*)()>(&Cinemachine::CinemachineExternalCamera::get_LookAt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExternalCamera*), "get_LookAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExternalCamera::set_LookAt
// Il2CppName: set_LookAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineExternalCamera::*)(::UnityEngine::Transform*)>(&Cinemachine::CinemachineExternalCamera::set_LookAt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExternalCamera*), "set_LookAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExternalCamera::get_Follow
// Il2CppName: get_Follow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Cinemachine::CinemachineExternalCamera::*)()>(&Cinemachine::CinemachineExternalCamera::get_Follow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExternalCamera*), "get_Follow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExternalCamera::set_Follow
// Il2CppName: set_Follow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineExternalCamera::*)(::UnityEngine::Transform*)>(&Cinemachine::CinemachineExternalCamera::set_Follow)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExternalCamera*), "set_Follow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExternalCamera::InternalUpdateCameraState
// Il2CppName: InternalUpdateCameraState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineExternalCamera::*)(::UnityEngine::Vector3, float)>(&Cinemachine::CinemachineExternalCamera::InternalUpdateCameraState)> {
  static const MethodInfo* get() {
    static auto* worldUp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExternalCamera*), "InternalUpdateCameraState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldUp, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExternalCamera::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!