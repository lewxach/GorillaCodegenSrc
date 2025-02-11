// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRInteractor
  class IXRInteractor;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Filtering
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
  // Forward declaring type: IXRTargetEvaluatorLinkable
  class IXRTargetEvaluatorLinkable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "IXRTargetEvaluatorLinkable");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Filtering
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetEvaluatorLinkable
  // [TokenAttribute] Offset: FFFFFFFF
  class IXRTargetEvaluatorLinkable {
    public:
    // public System.Void OnLink(UnityEngine.XR.Interaction.Toolkit.IXRInteractor interactor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnLink(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);
    // public System.Void OnUnlink(UnityEngine.XR.Interaction.Toolkit.IXRInteractor interactor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnUnlink(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);
  }; // UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetEvaluatorLinkable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable::OnLink
// Il2CppName: OnLink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable::OnLink)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*), "OnLink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable::OnUnlink
// Il2CppName: OnUnlink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable::OnUnlink)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*), "OnUnlink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
