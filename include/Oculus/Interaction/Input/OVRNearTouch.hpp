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
// Including type: OVRInput/NearTouch
#include "GlobalNamespace/OVRInput_NearTouch.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: OVRNearTouch
  class OVRNearTouch;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Input::OVRNearTouch);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::OVRNearTouch*, "Oculus.Interaction.Input", "OVRNearTouch");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Input.OVRNearTouch
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRNearTouch : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::Input::IButton*/ {
    public:
    public:
    // private OVRInput/Controller _controller
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::OVRInput::Controller controller;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Controller) == 0x4);
    // private OVRInput/NearTouch _nearTouch
    // Size: 0x4
    // Offset: 0x24
    ::GlobalNamespace::OVRInput::NearTouch nearTouch;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::NearTouch) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Input::IButton
    operator ::Oculus::Interaction::Input::IButton() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Input::IButton*>(this);
    }
    // Get instance field reference: private OVRInput/Controller _controller
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Controller& dyn__controller();
    // Get instance field reference: private OVRInput/NearTouch _nearTouch
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::NearTouch& dyn__nearTouch();
    // public System.Boolean Value()
    // Offset: 0x4793EAC
    bool Value();
    // public System.Void .ctor()
    // Offset: 0x4793F0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRNearTouch* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::OVRNearTouch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRNearTouch*, creationType>()));
    }
  }; // Oculus.Interaction.Input.OVRNearTouch
  #pragma pack(pop)
  static check_size<sizeof(OVRNearTouch), 36 + sizeof(::GlobalNamespace::OVRInput::NearTouch)> __Oculus_Interaction_Input_OVRNearTouchSizeCheck;
  static_assert(sizeof(OVRNearTouch) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Input::OVRNearTouch::Value
// Il2CppName: Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Input::OVRNearTouch::*)()>(&Oculus::Interaction::Input::OVRNearTouch::Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OVRNearTouch*), "Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OVRNearTouch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!