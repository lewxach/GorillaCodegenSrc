// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.VersionedMonoBehaviour
#include "Pathfinding/VersionedMonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: IAstarAI
  class IAstarAI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: Pathfinding.Examples
namespace Pathfinding::Examples {
  // Forward declaring type: MecanimBridge
  class MecanimBridge;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Examples::MecanimBridge);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Examples::MecanimBridge*, "Pathfinding.Examples", "MecanimBridge");
// Type namespace: Pathfinding.Examples
namespace Pathfinding::Examples {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Examples.MecanimBridge
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class MecanimBridge : public ::Pathfinding::VersionedMonoBehaviour {
    public:
    public:
    // public System.Single velocitySmoothing
    // Size: 0x4
    // Offset: 0x24
    float velocitySmoothing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Pathfinding.IAstarAI ai
    // Size: 0x8
    // Offset: 0x28
    ::Pathfinding::IAstarAI* ai;
    // Field size check
    static_assert(sizeof(::Pathfinding::IAstarAI*) == 0x8);
    // private UnityEngine.Animator anim
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Animator* anim;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // private UnityEngine.Transform tr
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* tr;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 smoothedVelocity
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 smoothedVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: smoothedVelocity and: prevFootPos
    char __padding4[0x4] = {};
    // private UnityEngine.Vector3[] prevFootPos
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::Vector3> prevFootPos;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Transform[] footTransforms
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::UnityEngine::Transform*> footTransforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    public:
    // Get instance field reference: public System.Single velocitySmoothing
    [[deprecated("Use field access instead!")]] float& dyn_velocitySmoothing();
    // Get instance field reference: private Pathfinding.IAstarAI ai
    [[deprecated("Use field access instead!")]] ::Pathfinding::IAstarAI*& dyn_ai();
    // Get instance field reference: private UnityEngine.Animator anim
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn_anim();
    // Get instance field reference: private UnityEngine.Transform tr
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_tr();
    // Get instance field reference: private UnityEngine.Vector3 smoothedVelocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_smoothedVelocity();
    // Get instance field reference: private UnityEngine.Vector3[] prevFootPos
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_prevFootPos();
    // Get instance field reference: private UnityEngine.Transform[] footTransforms
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_footTransforms();
    // private System.Void Update()
    // Offset: 0x2A485F8
    void Update();
    // private UnityEngine.Vector3 CalculateBlendPoint()
    // Offset: 0x2A48674
    ::UnityEngine::Vector3 CalculateBlendPoint();
    // private System.Void OnAnimatorMove()
    // Offset: 0x2A489AC
    void OnAnimatorMove();
    // static private UnityEngine.Vector3 RotatePointAround(UnityEngine.Vector3 point, UnityEngine.Vector3 around, UnityEngine.Quaternion rotation)
    // Offset: 0x2A4920C
    static ::UnityEngine::Vector3 RotatePointAround(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 around, ::UnityEngine::Quaternion rotation);
    // protected UnityEngine.Quaternion RotateTowards(UnityEngine.Vector3 direction, System.Single maxDegrees)
    // Offset: 0x2A49268
    ::UnityEngine::Quaternion RotateTowards(::UnityEngine::Vector3 direction, float maxDegrees);
    // protected override System.Void Awake()
    // Offset: 0x2A48458
    // Implemented from: Pathfinding.VersionedMonoBehaviour
    // Base method: System.Void VersionedMonoBehaviour::Awake()
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x2A49430
    // Implemented from: Pathfinding.VersionedMonoBehaviour
    // Base method: System.Void VersionedMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MecanimBridge* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Examples::MecanimBridge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MecanimBridge*, creationType>()));
    }
  }; // Pathfinding.Examples.MecanimBridge
  #pragma pack(pop)
  static check_size<sizeof(MecanimBridge), 88 + sizeof(::ArrayW<::UnityEngine::Transform*>)> __Pathfinding_Examples_MecanimBridgeSizeCheck;
  static_assert(sizeof(MecanimBridge) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Examples::MecanimBridge::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::MecanimBridge::*)()>(&Pathfinding::Examples::MecanimBridge::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::MecanimBridge*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::MecanimBridge::CalculateBlendPoint
// Il2CppName: CalculateBlendPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::Examples::MecanimBridge::*)()>(&Pathfinding::Examples::MecanimBridge::CalculateBlendPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::MecanimBridge*), "CalculateBlendPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::MecanimBridge::OnAnimatorMove
// Il2CppName: OnAnimatorMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::MecanimBridge::*)()>(&Pathfinding::Examples::MecanimBridge::OnAnimatorMove)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::MecanimBridge*), "OnAnimatorMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::MecanimBridge::RotatePointAround
// Il2CppName: RotatePointAround
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&Pathfinding::Examples::MecanimBridge::RotatePointAround)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* around = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::MecanimBridge*), "RotatePointAround", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, around, rotation});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::MecanimBridge::RotateTowards
// Il2CppName: RotateTowards
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (Pathfinding::Examples::MecanimBridge::*)(::UnityEngine::Vector3, float)>(&Pathfinding::Examples::MecanimBridge::RotateTowards)> {
  static const MethodInfo* get() {
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* maxDegrees = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::MecanimBridge*), "RotateTowards", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direction, maxDegrees});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::MecanimBridge::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::MecanimBridge::*)()>(&Pathfinding::Examples::MecanimBridge::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::MecanimBridge*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::MecanimBridge::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!