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
  // Forward declaring type: IXRSelectInteractor
  class IXRSelectInteractor;
  // Forward declaring type: IXRSelectInteractable
  class IXRSelectInteractable;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Filtering
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
  // Forward declaring type: IXRSelectFilter
  class IXRSelectFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "IXRSelectFilter");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Filtering
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class IXRSelectFilter {
    public:
    // public System.Boolean get_canProcess()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_canProcess();
    // public System.Boolean Process(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor interactor, UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable interactable)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Process(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);
  }; // UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter::get_canProcess
// Il2CppName: get_canProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter::*)()>(&UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter::get_canProcess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*), "get_canProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter::*)(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter::Process)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRSelectInteractor")->byval_arg;
    static auto* interactable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRSelectInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, interactable});
  }
};
