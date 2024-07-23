// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.IActiveState
#include "Oculus/Interaction/IActiveState.hpp"
// Including type: OVRInput/Button
#include "GlobalNamespace/OVRInput_Button.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Interaction.OVR.Input
namespace Oculus::Interaction::OVR::Input {
  // Forward declaring type: OVRButtonActiveState
  class OVRButtonActiveState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::OVR::Input::OVRButtonActiveState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::OVR::Input::OVRButtonActiveState*, "Oculus.Interaction.OVR.Input", "OVRButtonActiveState");
// Type namespace: Oculus.Interaction.OVR.Input
namespace Oculus::Interaction::OVR::Input {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.OVR.Input.OVRButtonActiveState
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRButtonActiveState : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::IActiveState*/ {
    public:
    public:
    // private OVRInput/Button _button
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::OVRInput::Button button;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Button) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IActiveState
    operator ::Oculus::Interaction::IActiveState() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IActiveState*>(this);
    }
    // Get instance field reference: private OVRInput/Button _button
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Button& dyn__button();
    // public System.Boolean get_Active()
    // Offset: 0x478E9C4
    bool get_Active();
    // public System.Void .ctor()
    // Offset: 0x478EA24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRButtonActiveState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::OVR::Input::OVRButtonActiveState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRButtonActiveState*, creationType>()));
    }
  }; // Oculus.Interaction.OVR.Input.OVRButtonActiveState
  #pragma pack(pop)
  static check_size<sizeof(OVRButtonActiveState), 32 + sizeof(::GlobalNamespace::OVRInput::Button)> __Oculus_Interaction_OVR_Input_OVRButtonActiveStateSizeCheck;
  static_assert(sizeof(OVRButtonActiveState) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::OVR::Input::OVRButtonActiveState::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::OVR::Input::OVRButtonActiveState::*)()>(&Oculus::Interaction::OVR::Input::OVRButtonActiveState::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OVR::Input::OVRButtonActiveState*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OVR::Input::OVRButtonActiveState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!