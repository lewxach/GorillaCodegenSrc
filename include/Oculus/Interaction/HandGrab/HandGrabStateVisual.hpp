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
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: Oculus::Interaction::HandGrab
namespace Oculus::Interaction::HandGrab {
  // Forward declaring type: IHandGrabState
  class IHandGrabState;
  // Forward declaring type: HandPose
  class HandPose;
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: SyntheticHand
  class SyntheticHand;
  // Forward declaring type: HandFingerFlags
  struct HandFingerFlags;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.HandGrab
namespace Oculus::Interaction::HandGrab {
  // Forward declaring type: HandGrabStateVisual
  class HandGrabStateVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::HandGrab::HandGrabStateVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandGrab::HandGrabStateVisual*, "Oculus.Interaction.HandGrab", "HandGrabStateVisual");
// Type namespace: Oculus.Interaction.HandGrab
namespace Oculus::Interaction::HandGrab {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandGrab.HandGrabStateVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class HandGrabStateVisual : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Object _handGrabState
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* handGrabState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.HandGrab.IHandGrabState HandGrabState
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::HandGrab::IHandGrabState* HandGrabState;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::HandGrab::IHandGrabState*) == 0x8);
    // private Oculus.Interaction.Input.SyntheticHand _syntheticHand
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Interaction::Input::SyntheticHand* syntheticHand;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::SyntheticHand*) == 0x8);
    // private System.Boolean _areFingersFree
    // Size: 0x1
    // Offset: 0x38
    bool areFingersFree;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isWristFree
    // Size: 0x1
    // Offset: 0x39
    bool isWristFree;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _wasCompletelyFree
    // Size: 0x1
    // Offset: 0x3A
    bool wasCompletelyFree;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x3B
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Object _handGrabState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__handGrabState();
    // Get instance field reference: private Oculus.Interaction.HandGrab.IHandGrabState HandGrabState
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::HandGrab::IHandGrabState*& dyn_HandGrabState();
    // Get instance field reference: private Oculus.Interaction.Input.SyntheticHand _syntheticHand
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::SyntheticHand*& dyn__syntheticHand();
    // Get instance field reference: private System.Boolean _areFingersFree
    [[deprecated("Use field access instead!")]] bool& dyn__areFingersFree();
    // Get instance field reference: private System.Boolean _isWristFree
    [[deprecated("Use field access instead!")]] bool& dyn__isWristFree();
    // Get instance field reference: private System.Boolean _wasCompletelyFree
    [[deprecated("Use field access instead!")]] bool& dyn__wasCompletelyFree();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // protected System.Void Awake()
    // Offset: 0x481FFC0
    void Awake();
    // protected System.Void Start()
    // Offset: 0x4820028
    void Start();
    // private System.Void LateUpdate()
    // Offset: 0x4820060
    void LateUpdate();
    // private System.Void ConstrainingForce(Oculus.Interaction.HandGrab.IHandGrabState grabSource, out System.Single fingersConstraint, out System.Single wristConstraint)
    // Offset: 0x48200E0
    void ConstrainingForce(::Oculus::Interaction::HandGrab::IHandGrabState* grabSource, ByRef<float> fingersConstraint, ByRef<float> wristConstraint);
    // private System.Void UpdateHandPose(Oculus.Interaction.HandGrab.IHandGrabState grabSource, System.Single fingersConstraint, System.Single wristConstraint)
    // Offset: 0x48203D0
    void UpdateHandPose(::Oculus::Interaction::HandGrab::IHandGrabState* grabSource, float fingersConstraint, float wristConstraint);
    // private System.Void UpdateFingers(Oculus.Interaction.HandGrab.HandPose handPose, Oculus.Interaction.Input.HandFingerFlags grabbingFingers, System.Single strength)
    // Offset: 0x482064C
    void UpdateFingers(::Oculus::Interaction::HandGrab::HandPose* handPose, ::Oculus::Interaction::Input::HandFingerFlags grabbingFingers, float strength);
    // private System.Boolean FreeFingers()
    // Offset: 0x48205C8
    bool FreeFingers();
    // private System.Boolean FreeWrist()
    // Offset: 0x4820608
    bool FreeWrist();
    // public System.Void InjectAllHandGrabInteractorVisual(Oculus.Interaction.HandGrab.IHandGrabState handGrabState, Oculus.Interaction.Input.SyntheticHand syntheticHand)
    // Offset: 0x482072C
    void InjectAllHandGrabInteractorVisual(::Oculus::Interaction::HandGrab::IHandGrabState* handGrabState, ::Oculus::Interaction::Input::SyntheticHand* syntheticHand);
    // public System.Void InjectHandGrabState(Oculus.Interaction.HandGrab.IHandGrabState handGrabState)
    // Offset: 0x4820758
    void InjectHandGrabState(::Oculus::Interaction::HandGrab::IHandGrabState* handGrabState);
    // public System.Void InjectSyntheticHand(Oculus.Interaction.Input.SyntheticHand syntheticHand)
    // Offset: 0x4820824
    void InjectSyntheticHand(::Oculus::Interaction::Input::SyntheticHand* syntheticHand);
    // public System.Void .ctor()
    // Offset: 0x482082C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandGrabStateVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::HandGrab::HandGrabStateVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandGrabStateVisual*, creationType>()));
    }
  }; // Oculus.Interaction.HandGrab.HandGrabStateVisual
  #pragma pack(pop)
  static check_size<sizeof(HandGrabStateVisual), 59 + sizeof(bool)> __Oculus_Interaction_HandGrab_HandGrabStateVisualSizeCheck;
  static_assert(sizeof(HandGrabStateVisual) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabStateVisual::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::HandGrabStateVisual::*)()>(&Oculus::Interaction::HandGrab::HandGrabStateVisual::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabStateVisual*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabStateVisual::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::HandGrabStateVisual::*)()>(&Oculus::Interaction::HandGrab::HandGrabStateVisual::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabStateVisual*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabStateVisual::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::HandGrabStateVisual::*)()>(&Oculus::Interaction::HandGrab::HandGrabStateVisual::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabStateVisual*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabStateVisual::ConstrainingForce
// Il2CppName: ConstrainingForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::HandGrabStateVisual::*)(::Oculus::Interaction::HandGrab::IHandGrabState*, ByRef<float>, ByRef<float>)>(&Oculus::Interaction::HandGrab::HandGrabStateVisual::ConstrainingForce)> {
  static const MethodInfo* get() {
    static auto* grabSource = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "IHandGrabState")->byval_arg;
    static auto* fingersConstraint = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* wristConstraint = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabStateVisual*), "ConstrainingForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabSource, fingersConstraint, wristConstraint});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabStateVisual::UpdateHandPose
// Il2CppName: UpdateHandPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::HandGrabStateVisual::*)(::Oculus::Interaction::HandGrab::IHandGrabState*, float, float)>(&Oculus::Interaction::HandGrab::HandGrabStateVisual::UpdateHandPose)> {
  static const MethodInfo* get() {
    static auto* grabSource = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "IHandGrabState")->byval_arg;
    static auto* fingersConstraint = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* wristConstraint = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabStateVisual*), "UpdateHandPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabSource, fingersConstraint, wristConstraint});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabStateVisual::UpdateFingers
// Il2CppName: UpdateFingers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::HandGrabStateVisual::*)(::Oculus::Interaction::HandGrab::HandPose*, ::Oculus::Interaction::Input::HandFingerFlags, float)>(&Oculus::Interaction::HandGrab::HandGrabStateVisual::UpdateFingers)> {
  static const MethodInfo* get() {
    static auto* handPose = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "HandPose")->byval_arg;
    static auto* grabbingFingers = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFingerFlags")->byval_arg;
    static auto* strength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabStateVisual*), "UpdateFingers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handPose, grabbingFingers, strength});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabStateVisual::FreeFingers
// Il2CppName: FreeFingers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::HandGrab::HandGrabStateVisual::*)()>(&Oculus::Interaction::HandGrab::HandGrabStateVisual::FreeFingers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabStateVisual*), "FreeFingers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabStateVisual::FreeWrist
// Il2CppName: FreeWrist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::HandGrab::HandGrabStateVisual::*)()>(&Oculus::Interaction::HandGrab::HandGrabStateVisual::FreeWrist)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabStateVisual*), "FreeWrist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabStateVisual::InjectAllHandGrabInteractorVisual
// Il2CppName: InjectAllHandGrabInteractorVisual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::HandGrabStateVisual::*)(::Oculus::Interaction::HandGrab::IHandGrabState*, ::Oculus::Interaction::Input::SyntheticHand*)>(&Oculus::Interaction::HandGrab::HandGrabStateVisual::InjectAllHandGrabInteractorVisual)> {
  static const MethodInfo* get() {
    static auto* handGrabState = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "IHandGrabState")->byval_arg;
    static auto* syntheticHand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "SyntheticHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabStateVisual*), "InjectAllHandGrabInteractorVisual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handGrabState, syntheticHand});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabStateVisual::InjectHandGrabState
// Il2CppName: InjectHandGrabState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::HandGrabStateVisual::*)(::Oculus::Interaction::HandGrab::IHandGrabState*)>(&Oculus::Interaction::HandGrab::HandGrabStateVisual::InjectHandGrabState)> {
  static const MethodInfo* get() {
    static auto* handGrabState = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "IHandGrabState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabStateVisual*), "InjectHandGrabState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handGrabState});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabStateVisual::InjectSyntheticHand
// Il2CppName: InjectSyntheticHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::HandGrabStateVisual::*)(::Oculus::Interaction::Input::SyntheticHand*)>(&Oculus::Interaction::HandGrab::HandGrabStateVisual::InjectSyntheticHand)> {
  static const MethodInfo* get() {
    static auto* syntheticHand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "SyntheticHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabStateVisual*), "InjectSyntheticHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{syntheticHand});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabStateVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
