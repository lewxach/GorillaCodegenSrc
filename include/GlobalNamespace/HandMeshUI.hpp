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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SphereCollider
  class SphereCollider;
  // Forward declaring type: TextMesh
  class TextMesh;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRSkeleton
  class OVRSkeleton;
  // Forward declaring type: HandMeshMask
  class HandMeshMask;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HandMeshUI
  class HandMeshUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HandMeshUI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HandMeshUI*, "", "HandMeshUI");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: HandMeshUI
  // [TokenAttribute] Offset: FFFFFFFF
  class HandMeshUI : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.SphereCollider[] knobs
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::SphereCollider*> knobs;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::SphereCollider*>) == 0x8);
    // public UnityEngine.TextMesh[] readouts
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::TextMesh*> readouts;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::TextMesh*>) == 0x8);
    // private System.Int32 rightHeldKnob
    // Size: 0x4
    // Offset: 0x30
    int rightHeldKnob;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 leftHeldKnob
    // Size: 0x4
    // Offset: 0x34
    int leftHeldKnob;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public OVRSkeleton leftHand
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::OVRSkeleton* leftHand;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSkeleton*) == 0x8);
    // public OVRSkeleton rightHand
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::OVRSkeleton* rightHand;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSkeleton*) == 0x8);
    // public HandMeshMask leftMask
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::HandMeshMask* leftMask;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HandMeshMask*) == 0x8);
    // public HandMeshMask rightMask
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::HandMeshMask* rightMask;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HandMeshMask*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.SphereCollider[] knobs
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::SphereCollider*>& dyn_knobs();
    // Get instance field reference: public UnityEngine.TextMesh[] readouts
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::TextMesh*>& dyn_readouts();
    // Get instance field reference: private System.Int32 rightHeldKnob
    [[deprecated("Use field access instead!")]] int& dyn_rightHeldKnob();
    // Get instance field reference: private System.Int32 leftHeldKnob
    [[deprecated("Use field access instead!")]] int& dyn_leftHeldKnob();
    // Get instance field reference: public OVRSkeleton leftHand
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRSkeleton*& dyn_leftHand();
    // Get instance field reference: public OVRSkeleton rightHand
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRSkeleton*& dyn_rightHand();
    // Get instance field reference: public HandMeshMask leftMask
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HandMeshMask*& dyn_leftMask();
    // Get instance field reference: public HandMeshMask rightMask
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HandMeshMask*& dyn_rightMask();
    // private System.Void Start()
    // Offset: 0x29368F8
    void Start();
    // private System.Void Update()
    // Offset: 0x2936C60
    void Update();
    // private System.Void SetSliderValue(System.Int32 sliderID, System.Single value, System.Boolean isNormalized)
    // Offset: 0x2936994
    void SetSliderValue(int sliderID, float value, bool isNormalized);
    // private System.Void CheckForHands()
    // Offset: 0x29370D0
    void CheckForHands();
    // public System.Void .ctor()
    // Offset: 0x2937640
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandMeshUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HandMeshUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandMeshUI*, creationType>()));
    }
  }; // HandMeshUI
  #pragma pack(pop)
  static check_size<sizeof(HandMeshUI), 80 + sizeof(::GlobalNamespace::HandMeshMask*)> __GlobalNamespace_HandMeshUISizeCheck;
  static_assert(sizeof(HandMeshUI) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HandMeshUI::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandMeshUI::*)()>(&GlobalNamespace::HandMeshUI::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandMeshUI*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandMeshUI::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandMeshUI::*)()>(&GlobalNamespace::HandMeshUI::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandMeshUI*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandMeshUI::SetSliderValue
// Il2CppName: SetSliderValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandMeshUI::*)(int, float, bool)>(&GlobalNamespace::HandMeshUI::SetSliderValue)> {
  static const MethodInfo* get() {
    static auto* sliderID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* isNormalized = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandMeshUI*), "SetSliderValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderID, value, isNormalized});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandMeshUI::CheckForHands
// Il2CppName: CheckForHands
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandMeshUI::*)()>(&GlobalNamespace::HandMeshUI::CheckForHands)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandMeshUI*), "CheckForHands", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandMeshUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
