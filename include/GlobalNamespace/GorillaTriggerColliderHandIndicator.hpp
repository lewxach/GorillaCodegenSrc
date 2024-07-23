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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaThrowableController
  class GorillaThrowableController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaTriggerColliderHandIndicator
  class GorillaTriggerColliderHandIndicator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaTriggerColliderHandIndicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaTriggerColliderHandIndicator*, "", "GorillaTriggerColliderHandIndicator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTriggerColliderHandIndicator
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaTriggerColliderHandIndicator : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Vector3 currentVelocity
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 currentVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 lastPosition
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 lastPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Boolean isLeftHand
    // Size: 0x1
    // Offset: 0x38
    bool isLeftHand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isLeftHand and: throwableController
    char __padding2[0x7] = {};
    // public GorillaThrowableController throwableController
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::GorillaThrowableController* throwableController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaThrowableController*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Vector3 currentVelocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_currentVelocity();
    // Get instance field reference: public UnityEngine.Vector3 lastPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastPosition();
    // Get instance field reference: public System.Boolean isLeftHand
    [[deprecated("Use field access instead!")]] bool& dyn_isLeftHand();
    // Get instance field reference: public GorillaThrowableController throwableController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaThrowableController*& dyn_throwableController();
    // private System.Void Update()
    // Offset: 0x2741098
    void Update();
    // private System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0x2741118
    void OnTriggerEnter(::UnityEngine::Collider* other);
    // public System.Void .ctor()
    // Offset: 0x27411A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaTriggerColliderHandIndicator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaTriggerColliderHandIndicator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaTriggerColliderHandIndicator*, creationType>()));
    }
  }; // GorillaTriggerColliderHandIndicator
  #pragma pack(pop)
  static check_size<sizeof(GorillaTriggerColliderHandIndicator), 64 + sizeof(::GlobalNamespace::GorillaThrowableController*)> __GlobalNamespace_GorillaTriggerColliderHandIndicatorSizeCheck;
  static_assert(sizeof(GorillaTriggerColliderHandIndicator) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaTriggerColliderHandIndicator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaTriggerColliderHandIndicator::*)()>(&GlobalNamespace::GorillaTriggerColliderHandIndicator::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaTriggerColliderHandIndicator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaTriggerColliderHandIndicator::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaTriggerColliderHandIndicator::*)(::UnityEngine::Collider*)>(&GlobalNamespace::GorillaTriggerColliderHandIndicator::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaTriggerColliderHandIndicator*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaTriggerColliderHandIndicator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!