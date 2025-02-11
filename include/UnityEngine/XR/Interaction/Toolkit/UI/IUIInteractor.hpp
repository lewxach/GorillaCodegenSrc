// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Forward declaring type: TrackedDeviceModel
  struct TrackedDeviceModel;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Forward declaring type: IUIInteractor
  class IUIInteractor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*, "UnityEngine.XR.Interaction.Toolkit.UI", "IUIInteractor");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.UI.IUIInteractor
  // [TokenAttribute] Offset: FFFFFFFF
  class IUIInteractor {
    public:
    // public System.Void UpdateUIModel(ref UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel model)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateUIModel(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model);
    // public System.Boolean TryGetUIModel(out UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel model)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryGetUIModel(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model);
  }; // UnityEngine.XR.Interaction.Toolkit.UI.IUIInteractor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor::UpdateUIModel
// Il2CppName: UpdateUIModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor::*)(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor::UpdateUIModel)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceModel")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*), "UpdateUIModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor::TryGetUIModel
// Il2CppName: TryGetUIModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor::*)(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor::TryGetUIModel)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceModel")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*), "TryGetUIModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
