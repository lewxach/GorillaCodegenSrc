// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TeleportPoint
  class TeleportPoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TeleportPoint);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleportPoint*, "", "TeleportPoint");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: TeleportPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportPoint : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single dimmingSpeed
    // Size: 0x4
    // Offset: 0x20
    float dimmingSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fullIntensity
    // Size: 0x4
    // Offset: 0x24
    float fullIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single lowIntensity
    // Size: 0x4
    // Offset: 0x28
    float lowIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lowIntensity and: destTransform
    char __padding2[0x4] = {};
    // public UnityEngine.Transform destTransform
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* destTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Single lastLookAtTime
    // Size: 0x4
    // Offset: 0x38
    float lastLookAtTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single dimmingSpeed
    [[deprecated("Use field access instead!")]] float& dyn_dimmingSpeed();
    // Get instance field reference: public System.Single fullIntensity
    [[deprecated("Use field access instead!")]] float& dyn_fullIntensity();
    // Get instance field reference: public System.Single lowIntensity
    [[deprecated("Use field access instead!")]] float& dyn_lowIntensity();
    // Get instance field reference: public UnityEngine.Transform destTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_destTransform();
    // Get instance field reference: private System.Single lastLookAtTime
    [[deprecated("Use field access instead!")]] float& dyn_lastLookAtTime();
    // private System.Void Start()
    // Offset: 0x2925A58
    void Start();
    // public UnityEngine.Transform GetDestTransform()
    // Offset: 0x2925A5C
    ::UnityEngine::Transform* GetDestTransform();
    // private System.Void Update()
    // Offset: 0x2925A64
    void Update();
    // public System.Void OnLookAt()
    // Offset: 0x2925B50
    void OnLookAt();
    // public System.Void .ctor()
    // Offset: 0x2925B6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportPoint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TeleportPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportPoint*, creationType>()));
    }
  }; // TeleportPoint
  #pragma pack(pop)
  static check_size<sizeof(TeleportPoint), 56 + sizeof(float)> __GlobalNamespace_TeleportPointSizeCheck;
  static_assert(sizeof(TeleportPoint) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TeleportPoint::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportPoint::*)()>(&GlobalNamespace::TeleportPoint::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportPoint*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportPoint::GetDestTransform
// Il2CppName: GetDestTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::TeleportPoint::*)()>(&GlobalNamespace::TeleportPoint::GetDestTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportPoint*), "GetDestTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportPoint::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportPoint::*)()>(&GlobalNamespace::TeleportPoint::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportPoint*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportPoint::OnLookAt
// Il2CppName: OnLookAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportPoint::*)()>(&GlobalNamespace::TeleportPoint::OnLookAt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportPoint*), "OnLookAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
