// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.Input.IButton
#include "Oculus/Interaction/Input/IButton.hpp"
// Including type: OVRInput/Controller
#include "GlobalNamespace/OVRInput.hpp"
// Including type: OVRInput/Button
#include "GlobalNamespace/OVRInput_Button.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Interaction.OVR.Input
namespace Oculus::Interaction::OVR::Input {
  // Forward declaring type: OVRButton
  class OVRButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::OVR::Input::OVRButton);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::OVR::Input::OVRButton*, "Oculus.Interaction.OVR.Input", "OVRButton");
// Type namespace: Oculus.Interaction.OVR.Input
namespace Oculus::Interaction::OVR::Input {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.OVR.Input.OVRButton
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRButton : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::Input::IButton*/ {
    public:
    public:
    // private OVRInput/Controller _controller
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::OVRInput::Controller controller;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Controller) == 0x4);
    // private OVRInput/Button _button
    // Size: 0x4
    // Offset: 0x24
    ::GlobalNamespace::OVRInput::Button button;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Button) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Input::IButton
    operator ::Oculus::Interaction::Input::IButton() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Input::IButton*>(this);
    }
    // Get instance field reference: private OVRInput/Controller _controller
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Controller& dyn__controller();
    // Get instance field reference: private OVRInput/Button _button
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Button& dyn__button();
    // public System.Boolean Value()
    // Offset: 0x478E95C
    bool Value();
    // public System.Void .ctor()
    // Offset: 0x478E9BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::OVR::Input::OVRButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRButton*, creationType>()));
    }
  }; // Oculus.Interaction.OVR.Input.OVRButton
  #pragma pack(pop)
  static check_size<sizeof(OVRButton), 36 + sizeof(::GlobalNamespace::OVRInput::Button)> __Oculus_Interaction_OVR_Input_OVRButtonSizeCheck;
  static_assert(sizeof(OVRButton) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::OVR::Input::OVRButton::Value
// Il2CppName: Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::OVR::Input::OVRButton::*)()>(&Oculus::Interaction::OVR::Input::OVRButton::Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OVR::Input::OVRButton*), "Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OVR::Input::OVRButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!