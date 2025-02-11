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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Campfire
  class Campfire;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Campfire);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Campfire*, "", "Campfire");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC1
  #pragma pack(push, 1)
  // Autogenerated type: Campfire
  // [TokenAttribute] Offset: FFFFFFFF
  class Campfire : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Transform baseFire
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* baseFire;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform middleFire
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* middleFire;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform topFire
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* topFire;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single baseMultiplier
    // Size: 0x4
    // Offset: 0x38
    float baseMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single middleMultiplier
    // Size: 0x4
    // Offset: 0x3C
    float middleMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single topMultiplier
    // Size: 0x4
    // Offset: 0x40
    float topMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single bottomRange
    // Size: 0x4
    // Offset: 0x44
    float bottomRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single middleRange
    // Size: 0x4
    // Offset: 0x48
    float middleRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single topRange
    // Size: 0x4
    // Offset: 0x4C
    float topRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single lastAngleBottom
    // Size: 0x4
    // Offset: 0x50
    float lastAngleBottom;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single lastAngleMiddle
    // Size: 0x4
    // Offset: 0x54
    float lastAngleMiddle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single lastAngleTop
    // Size: 0x4
    // Offset: 0x58
    float lastAngleTop;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single perlinStepBottom
    // Size: 0x4
    // Offset: 0x5C
    float perlinStepBottom;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single perlinStepMiddle
    // Size: 0x4
    // Offset: 0x60
    float perlinStepMiddle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single perlinStepTop
    // Size: 0x4
    // Offset: 0x64
    float perlinStepTop;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single perlinBottom
    // Size: 0x4
    // Offset: 0x68
    float perlinBottom;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single perlinMiddle
    // Size: 0x4
    // Offset: 0x6C
    float perlinMiddle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single perlinTop
    // Size: 0x4
    // Offset: 0x70
    float perlinTop;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single startingRotationBottom
    // Size: 0x4
    // Offset: 0x74
    float startingRotationBottom;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single startingRotationMiddle
    // Size: 0x4
    // Offset: 0x78
    float startingRotationMiddle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single startingRotationTop
    // Size: 0x4
    // Offset: 0x7C
    float startingRotationTop;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single slerp
    // Size: 0x4
    // Offset: 0x80
    float slerp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean mergedBottom
    // Size: 0x1
    // Offset: 0x84
    bool mergedBottom;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean mergedMiddle
    // Size: 0x1
    // Offset: 0x85
    bool mergedMiddle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean mergedTop
    // Size: 0x1
    // Offset: 0x86
    bool mergedTop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: mergedTop and: lastTimeOfDay
    char __padding24[0x1] = {};
    // public System.String lastTimeOfDay
    // Size: 0x8
    // Offset: 0x88
    ::StringW lastTimeOfDay;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.Material mat
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::Material* mat;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private System.Single h
    // Size: 0x4
    // Offset: 0x98
    float h;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single s
    // Size: 0x4
    // Offset: 0x9C
    float s;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single v
    // Size: 0x4
    // Offset: 0xA0
    float v;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 overrideDayNight
    // Size: 0x4
    // Offset: 0xA4
    int overrideDayNight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector3 tempVec
    // Size: 0xC
    // Offset: 0xA8
    ::UnityEngine::Vector3 tempVec;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: tempVec and: isActive
    char __padding31[0x4] = {};
    // public System.Boolean[] isActive
    // Size: 0x8
    // Offset: 0xB8
    ::ArrayW<bool> isActive;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // public System.Boolean wasActive
    // Size: 0x1
    // Offset: 0xC0
    bool wasActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Transform baseFire
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_baseFire();
    // Get instance field reference: public UnityEngine.Transform middleFire
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_middleFire();
    // Get instance field reference: public UnityEngine.Transform topFire
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_topFire();
    // Get instance field reference: public System.Single baseMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_baseMultiplier();
    // Get instance field reference: public System.Single middleMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_middleMultiplier();
    // Get instance field reference: public System.Single topMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_topMultiplier();
    // Get instance field reference: public System.Single bottomRange
    [[deprecated("Use field access instead!")]] float& dyn_bottomRange();
    // Get instance field reference: public System.Single middleRange
    [[deprecated("Use field access instead!")]] float& dyn_middleRange();
    // Get instance field reference: public System.Single topRange
    [[deprecated("Use field access instead!")]] float& dyn_topRange();
    // Get instance field reference: private System.Single lastAngleBottom
    [[deprecated("Use field access instead!")]] float& dyn_lastAngleBottom();
    // Get instance field reference: private System.Single lastAngleMiddle
    [[deprecated("Use field access instead!")]] float& dyn_lastAngleMiddle();
    // Get instance field reference: private System.Single lastAngleTop
    [[deprecated("Use field access instead!")]] float& dyn_lastAngleTop();
    // Get instance field reference: public System.Single perlinStepBottom
    [[deprecated("Use field access instead!")]] float& dyn_perlinStepBottom();
    // Get instance field reference: public System.Single perlinStepMiddle
    [[deprecated("Use field access instead!")]] float& dyn_perlinStepMiddle();
    // Get instance field reference: public System.Single perlinStepTop
    [[deprecated("Use field access instead!")]] float& dyn_perlinStepTop();
    // Get instance field reference: private System.Single perlinBottom
    [[deprecated("Use field access instead!")]] float& dyn_perlinBottom();
    // Get instance field reference: private System.Single perlinMiddle
    [[deprecated("Use field access instead!")]] float& dyn_perlinMiddle();
    // Get instance field reference: private System.Single perlinTop
    [[deprecated("Use field access instead!")]] float& dyn_perlinTop();
    // Get instance field reference: public System.Single startingRotationBottom
    [[deprecated("Use field access instead!")]] float& dyn_startingRotationBottom();
    // Get instance field reference: public System.Single startingRotationMiddle
    [[deprecated("Use field access instead!")]] float& dyn_startingRotationMiddle();
    // Get instance field reference: public System.Single startingRotationTop
    [[deprecated("Use field access instead!")]] float& dyn_startingRotationTop();
    // Get instance field reference: public System.Single slerp
    [[deprecated("Use field access instead!")]] float& dyn_slerp();
    // Get instance field reference: private System.Boolean mergedBottom
    [[deprecated("Use field access instead!")]] bool& dyn_mergedBottom();
    // Get instance field reference: private System.Boolean mergedMiddle
    [[deprecated("Use field access instead!")]] bool& dyn_mergedMiddle();
    // Get instance field reference: private System.Boolean mergedTop
    [[deprecated("Use field access instead!")]] bool& dyn_mergedTop();
    // Get instance field reference: public System.String lastTimeOfDay
    [[deprecated("Use field access instead!")]] ::StringW& dyn_lastTimeOfDay();
    // Get instance field reference: public UnityEngine.Material mat
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_mat();
    // Get instance field reference: private System.Single h
    [[deprecated("Use field access instead!")]] float& dyn_h();
    // Get instance field reference: private System.Single s
    [[deprecated("Use field access instead!")]] float& dyn_s();
    // Get instance field reference: private System.Single v
    [[deprecated("Use field access instead!")]] float& dyn_v();
    // Get instance field reference: public System.Int32 overrideDayNight
    [[deprecated("Use field access instead!")]] int& dyn_overrideDayNight();
    // Get instance field reference: private UnityEngine.Vector3 tempVec
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_tempVec();
    // Get instance field reference: public System.Boolean[] isActive
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn_isActive();
    // Get instance field reference: public System.Boolean wasActive
    [[deprecated("Use field access instead!")]] bool& dyn_wasActive();
    // private System.Void Start()
    // Offset: 0x26EF0DC
    void Start();
    // private System.Void LateUpdate()
    // Offset: 0x26EF194
    void LateUpdate();
    // private System.Void Flap(ref System.Single perlinValue, System.Single perlinStep, ref System.Single lastAngle, ref UnityEngine.Transform flameTransform, System.Single range, System.Single multiplier, ref System.Boolean isMerged)
    // Offset: 0x26EF44C
    void Flap(ByRef<float> perlinValue, float perlinStep, ByRef<float> lastAngle, ByRef<::UnityEngine::Transform*> flameTransform, float range, float multiplier, ByRef<bool> isMerged);
    // private System.Void ReturnToOff(ref UnityEngine.Transform startTransform, System.Single targetAngle, ref System.Boolean isMerged)
    // Offset: 0x26EF5D0
    void ReturnToOff(ByRef<::UnityEngine::Transform*> startTransform, float targetAngle, ByRef<bool> isMerged);
    // public System.Void .ctor()
    // Offset: 0x26EF6F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Campfire* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Campfire::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Campfire*, creationType>()));
    }
  }; // Campfire
  #pragma pack(pop)
  static check_size<sizeof(Campfire), 192 + sizeof(bool)> __GlobalNamespace_CampfireSizeCheck;
  static_assert(sizeof(Campfire) == 0xC1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Campfire::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Campfire::*)()>(&GlobalNamespace::Campfire::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Campfire*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Campfire::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Campfire::*)()>(&GlobalNamespace::Campfire::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Campfire*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Campfire::Flap
// Il2CppName: Flap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Campfire::*)(ByRef<float>, float, ByRef<float>, ByRef<::UnityEngine::Transform*>, float, float, ByRef<bool>)>(&GlobalNamespace::Campfire::Flap)> {
  static const MethodInfo* get() {
    static auto* perlinValue = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* perlinStep = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* lastAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* flameTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->this_arg;
    static auto* range = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* isMerged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Campfire*), "Flap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{perlinValue, perlinStep, lastAngle, flameTransform, range, multiplier, isMerged});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Campfire::ReturnToOff
// Il2CppName: ReturnToOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Campfire::*)(ByRef<::UnityEngine::Transform*>, float, ByRef<bool>)>(&GlobalNamespace::Campfire::ReturnToOff)> {
  static const MethodInfo* get() {
    static auto* startTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->this_arg;
    static auto* targetAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* isMerged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Campfire*), "ReturnToOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTransform, targetAngle, isMerged});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Campfire::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
