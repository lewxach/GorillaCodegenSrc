// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TransferrableObject
  class TransferrableObject;
  // Forward declaring type: VRRig
  class VRRig;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Collider
  class Collider;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AutoCatchThrowBall
  class AutoCatchThrowBall;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AutoCatchThrowBall);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutoCatchThrowBall*, "", "AutoCatchThrowBall");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: AutoCatchThrowBall
  // [TokenAttribute] Offset: FFFFFFFF
  class AutoCatchThrowBall : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::AutoCatchThrowBall::HeldBall
    struct HeldBall;
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: AutoCatchThrowBall/HeldBall
    // [TokenAttribute] Offset: FFFFFFFF
    struct HeldBall/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Boolean held
      // Size: 0x1
      // Offset: 0x0
      bool held;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: held and: catchTime
      char __padding0[0x3] = {};
      // public System.Single catchTime
      // Size: 0x4
      // Offset: 0x4
      float catchTime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single throwTime
      // Size: 0x4
      // Offset: 0x8
      float throwTime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Padding between fields: throwTime and: transferrable
      char __padding2[0x4] = {};
      // public TransferrableObject transferrable
      // Size: 0x8
      // Offset: 0x10
      ::GlobalNamespace::TransferrableObject* transferrable;
      // Field size check
      static_assert(sizeof(::GlobalNamespace::TransferrableObject*) == 0x8);
      public:
      // Creating value type constructor for type: HeldBall
      constexpr HeldBall(bool held_ = {}, float catchTime_ = {}, float throwTime_ = {}, ::GlobalNamespace::TransferrableObject* transferrable_ = {}) noexcept : held{held_}, catchTime{catchTime_}, throwTime{throwTime_}, transferrable{transferrable_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Boolean held
      [[deprecated("Use field access instead!")]] bool& dyn_held();
      // Get instance field reference: public System.Single catchTime
      [[deprecated("Use field access instead!")]] float& dyn_catchTime();
      // Get instance field reference: public System.Single throwTime
      [[deprecated("Use field access instead!")]] float& dyn_throwTime();
      // Get instance field reference: public TransferrableObject transferrable
      [[deprecated("Use field access instead!")]] ::GlobalNamespace::TransferrableObject*& dyn_transferrable();
    }; // AutoCatchThrowBall/HeldBall
    #pragma pack(pop)
    static check_size<sizeof(AutoCatchThrowBall::HeldBall), 16 + sizeof(::GlobalNamespace::TransferrableObject*)> __GlobalNamespace_AutoCatchThrowBall_HeldBallSizeCheck;
    static_assert(sizeof(AutoCatchThrowBall::HeldBall) == 0x18);
    public:
    // public UnityEngine.GameObject ballPrefab
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* ballPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Single throwPitch
    // Size: 0x4
    // Offset: 0x28
    float throwPitch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single throwSpeed
    // Size: 0x4
    // Offset: 0x2C
    float throwSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single throwWaitTime
    // Size: 0x4
    // Offset: 0x30
    float throwWaitTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single catchWaitTime
    // Size: 0x4
    // Offset: 0x34
    float catchWaitTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.LayerMask ballLayer
    // Size: 0x4
    // Offset: 0x38
    ::UnityEngine::LayerMask ballLayer;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // Padding between fields: ballLayer and: vrRig
    char __padding5[0x4] = {};
    // private VRRig vrRig
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::VRRig* vrRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    // private UnityEngine.Collider[] overlapResults
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::UnityEngine::Collider*> overlapResults;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private System.Collections.Generic.List`1<AutoCatchThrowBall/HeldBall> heldBalls
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::GlobalNamespace::AutoCatchThrowBall::HeldBall>* heldBalls;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::AutoCatchThrowBall::HeldBall>*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.GameObject ballPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_ballPrefab();
    // Get instance field reference: public System.Single throwPitch
    [[deprecated("Use field access instead!")]] float& dyn_throwPitch();
    // Get instance field reference: public System.Single throwSpeed
    [[deprecated("Use field access instead!")]] float& dyn_throwSpeed();
    // Get instance field reference: public System.Single throwWaitTime
    [[deprecated("Use field access instead!")]] float& dyn_throwWaitTime();
    // Get instance field reference: public System.Single catchWaitTime
    [[deprecated("Use field access instead!")]] float& dyn_catchWaitTime();
    // Get instance field reference: public UnityEngine.LayerMask ballLayer
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_ballLayer();
    // Get instance field reference: private VRRig vrRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_vrRig();
    // Get instance field reference: private UnityEngine.Collider[] overlapResults
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn_overlapResults();
    // Get instance field reference: private System.Collections.Generic.List`1<AutoCatchThrowBall/HeldBall> heldBalls
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::AutoCatchThrowBall::HeldBall>*& dyn_heldBalls();
    // private System.Void Start()
    // Offset: 0x2771454
    void Start();
    // private System.Void Update()
    // Offset: 0x27714AC
    void Update();
    // private System.Void Throw(TransferrableObject transferrable, UnityEngine.Vector3 throwDir)
    // Offset: 0x2772064
    void Throw(::GlobalNamespace::TransferrableObject* transferrable, ::UnityEngine::Vector3 throwDir);
    // public System.Void .ctor()
    // Offset: 0x277221C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutoCatchThrowBall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AutoCatchThrowBall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutoCatchThrowBall*, creationType>()));
    }
  }; // AutoCatchThrowBall
  #pragma pack(pop)
  static check_size<sizeof(AutoCatchThrowBall), 80 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::AutoCatchThrowBall::HeldBall>*)> __GlobalNamespace_AutoCatchThrowBallSizeCheck;
  static_assert(sizeof(AutoCatchThrowBall) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutoCatchThrowBall::HeldBall, "", "AutoCatchThrowBall/HeldBall");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AutoCatchThrowBall::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoCatchThrowBall::*)()>(&GlobalNamespace::AutoCatchThrowBall::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoCatchThrowBall*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutoCatchThrowBall::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoCatchThrowBall::*)()>(&GlobalNamespace::AutoCatchThrowBall::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoCatchThrowBall*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutoCatchThrowBall::Throw
// Il2CppName: Throw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoCatchThrowBall::*)(::GlobalNamespace::TransferrableObject*, ::UnityEngine::Vector3)>(&GlobalNamespace::AutoCatchThrowBall::Throw)> {
  static const MethodInfo* get() {
    static auto* transferrable = &::il2cpp_utils::GetClassFromName("", "TransferrableObject")->byval_arg;
    static auto* throwDir = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoCatchThrowBall*), "Throw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transferrable, throwDir});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutoCatchThrowBall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
