// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRBaseGrabTransformer.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRInteractor
  class IXRInteractor;
  // Forward declaring type: XRGrabInteractable
  class XRGrabInteractable;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Transformers
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
  // Forward declaring type: XRLegacyGrabTransformer
  class XRLegacyGrabTransformer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRLegacyGrabTransformer");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Transformers
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Transformers.XRLegacyGrabTransformer
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  class XRLegacyGrabTransformer : public ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer {
    public:
    public:
    // private UnityEngine.Rigidbody m_Rigidbody
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Rigidbody* m_Rigidbody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // private UnityEngine.Pose m_OffsetPose
    // Size: 0x1C
    // Offset: 0x28
    ::UnityEngine::Pose m_OffsetPose;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    public:
    // Get instance field reference: private UnityEngine.Rigidbody m_Rigidbody
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_m_Rigidbody();
    // Get instance field reference: private UnityEngine.Pose m_OffsetPose
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_m_OffsetPose();
    // private UnityEngine.Pose CalculateOffsetPoseLegacy(UnityEngine.XR.Interaction.Toolkit.IXRInteractor interactor, UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable grabInteractable)
    // Offset: 0x542AB4C
    ::UnityEngine::Pose CalculateOffsetPoseLegacy(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable);
    // private System.Void UpdateTarget(UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable grabInteractable, ref UnityEngine.Pose targetPose)
    // Offset: 0x542ADDC
    void UpdateTarget(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ByRef<::UnityEngine::Pose> targetPose);
    // public override System.Void OnLink(UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable grabInteractable)
    // Offset: 0x542AA1C
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer
    // Base method: System.Void XRBaseGrabTransformer::OnLink(UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable grabInteractable)
    void OnLink(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable);
    // public override System.Void OnGrabCountChanged(UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable grabInteractable, UnityEngine.Pose targetPose, UnityEngine.Vector3 localScale)
    // Offset: 0x542AA80
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer
    // Base method: System.Void XRBaseGrabTransformer::OnGrabCountChanged(UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable grabInteractable, UnityEngine.Pose targetPose, UnityEngine.Vector3 localScale)
    void OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ::UnityEngine::Pose targetPose, ::UnityEngine::Vector3 localScale);
    // public override System.Void Process(UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable grabInteractable, UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase updatePhase, ref UnityEngine.Pose targetPose, ref UnityEngine.Vector3 localScale)
    // Offset: 0x542ADC4
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer
    // Base method: System.Void XRBaseGrabTransformer::Process(UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable grabInteractable, UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase updatePhase, ref UnityEngine.Pose targetPose, ref UnityEngine.Vector3 localScale)
    void Process(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder::UpdatePhase updatePhase, ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Vector3> localScale);
    // public System.Void .ctor()
    // Offset: 0x542B010
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer
    // Base method: System.Void XRBaseGrabTransformer::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRLegacyGrabTransformer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRLegacyGrabTransformer*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.Transformers.XRLegacyGrabTransformer
  #pragma pack(pop)
  static check_size<sizeof(XRLegacyGrabTransformer), 40 + sizeof(::UnityEngine::Pose)> __UnityEngine_XR_Interaction_Toolkit_Transformers_XRLegacyGrabTransformerSizeCheck;
  static_assert(sizeof(XRLegacyGrabTransformer) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::CalculateOffsetPoseLegacy
// Il2CppName: CalculateOffsetPoseLegacy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::CalculateOffsetPoseLegacy)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractor")->byval_arg;
    static auto* grabInteractable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRGrabInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*), "CalculateOffsetPoseLegacy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, grabInteractable});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::UpdateTarget
// Il2CppName: UpdateTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*, ByRef<::UnityEngine::Pose>)>(&UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::UpdateTarget)> {
  static const MethodInfo* get() {
    static auto* grabInteractable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRGrabInteractable")->byval_arg;
    static auto* targetPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*), "UpdateTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabInteractable, targetPose});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::OnLink
// Il2CppName: OnLink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::OnLink)> {
  static const MethodInfo* get() {
    static auto* grabInteractable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRGrabInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*), "OnLink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabInteractable});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::OnGrabCountChanged
// Il2CppName: OnGrabCountChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*, ::UnityEngine::Pose, ::UnityEngine::Vector3)>(&UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::OnGrabCountChanged)> {
  static const MethodInfo* get() {
    static auto* grabInteractable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRGrabInteractable")->byval_arg;
    static auto* targetPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    static auto* localScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*), "OnGrabCountChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabInteractable, targetPose, localScale});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*, ::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder::UpdatePhase, ByRef<::UnityEngine::Pose>, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::Process)> {
  static const MethodInfo* get() {
    static auto* grabInteractable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRGrabInteractable")->byval_arg;
    static auto* updatePhase = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRInteractionUpdateOrder/UpdatePhase")->byval_arg;
    static auto* targetPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    static auto* localScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabInteractable, updatePhase, targetPose, localScale});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
