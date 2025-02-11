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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: InputField
  class InputField;
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRVirtualKeyboard
  class OVRVirtualKeyboard;
  // Forward declaring type: OVRVirtualKeyboardSampleInputHandler
  class OVRVirtualKeyboardSampleInputHandler;
  // Forward declaring type: OVRHand
  class OVRHand;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: OVRPhysicsRaycaster
  class OVRPhysicsRaycaster;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRVirtualKeyboardSampleControls
  class OVRVirtualKeyboardSampleControls;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboardSampleControls);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboardSampleControls*, "", "OVRVirtualKeyboardSampleControls");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xF0
  #pragma pack(push, 1)
  // Autogenerated type: OVRVirtualKeyboardSampleControls
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class OVRVirtualKeyboardSampleControls : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OVRVirtualKeyboardSampleControls::OVRVirtualKeyboardBackup
    struct OVRVirtualKeyboardBackup;
    // Size: 0x80
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OVRVirtualKeyboardSampleControls/OVRVirtualKeyboardBackup
    // [TokenAttribute] Offset: FFFFFFFF
    struct OVRVirtualKeyboardBackup/*, public ::System::ValueType*/ {
      public:
      public:
      // private readonly UnityEngine.UI.InputField _textCommitField
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::UI::InputField* textCommitField;
      // Field size check
      static_assert(sizeof(::UnityEngine::UI::InputField*) == 0x8);
      // private readonly UnityEngine.Vector3 _position
      // Size: 0xC
      // Offset: 0x8
      ::UnityEngine::Vector3 position;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // private readonly UnityEngine.Quaternion _rotation
      // Size: 0x10
      // Offset: 0x14
      ::UnityEngine::Quaternion rotation;
      // Field size check
      static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
      // private readonly UnityEngine.Vector3 _scale
      // Size: 0xC
      // Offset: 0x24
      ::UnityEngine::Vector3 scale;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // private readonly UnityEngine.Transform _rightControllerDirectTransform
      // Size: 0x8
      // Offset: 0x30
      ::UnityEngine::Transform* rightControllerDirectTransform;
      // Field size check
      static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
      // private readonly UnityEngine.Transform _rightControllerRootTransform
      // Size: 0x8
      // Offset: 0x38
      ::UnityEngine::Transform* rightControllerRootTransform;
      // Field size check
      static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
      // private readonly UnityEngine.Transform _leftControllerDirectTransform
      // Size: 0x8
      // Offset: 0x40
      ::UnityEngine::Transform* leftControllerDirectTransform;
      // Field size check
      static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
      // private readonly UnityEngine.Transform _leftControllerRootTransform
      // Size: 0x8
      // Offset: 0x48
      ::UnityEngine::Transform* leftControllerRootTransform;
      // Field size check
      static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
      // private readonly System.Boolean _controllerRayInteraction
      // Size: 0x1
      // Offset: 0x50
      bool controllerRayInteraction;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // private readonly System.Boolean _controllerDirectInteraction
      // Size: 0x1
      // Offset: 0x51
      bool controllerDirectInteraction;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: controllerDirectInteraction and: handLeft
      char __padding9[0x6] = {};
      // private readonly OVRHand _handLeft
      // Size: 0x8
      // Offset: 0x58
      ::GlobalNamespace::OVRHand* handLeft;
      // Field size check
      static_assert(sizeof(::GlobalNamespace::OVRHand*) == 0x8);
      // private readonly OVRHand _handRight
      // Size: 0x8
      // Offset: 0x60
      ::GlobalNamespace::OVRHand* handRight;
      // Field size check
      static_assert(sizeof(::GlobalNamespace::OVRHand*) == 0x8);
      // private readonly System.Boolean _handRayInteraction
      // Size: 0x1
      // Offset: 0x68
      bool handRayInteraction;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // private readonly System.Boolean _handDirectInteraction
      // Size: 0x1
      // Offset: 0x69
      bool handDirectInteraction;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: handDirectInteraction and: controllerRaycaster
      char __padding13[0x6] = {};
      // private readonly UnityEngine.EventSystems.OVRPhysicsRaycaster _controllerRaycaster
      // Size: 0x8
      // Offset: 0x70
      ::UnityEngine::EventSystems::OVRPhysicsRaycaster* controllerRaycaster;
      // Field size check
      static_assert(sizeof(::UnityEngine::EventSystems::OVRPhysicsRaycaster*) == 0x8);
      // private readonly UnityEngine.EventSystems.OVRPhysicsRaycaster _handRaycaster
      // Size: 0x8
      // Offset: 0x78
      ::UnityEngine::EventSystems::OVRPhysicsRaycaster* handRaycaster;
      // Field size check
      static_assert(sizeof(::UnityEngine::EventSystems::OVRPhysicsRaycaster*) == 0x8);
      public:
      // Creating value type constructor for type: OVRVirtualKeyboardBackup
      constexpr OVRVirtualKeyboardBackup(::UnityEngine::UI::InputField* textCommitField_ = {}, ::UnityEngine::Vector3 position_ = {}, ::UnityEngine::Quaternion rotation_ = {}, ::UnityEngine::Vector3 scale_ = {}, ::UnityEngine::Transform* rightControllerDirectTransform_ = {}, ::UnityEngine::Transform* rightControllerRootTransform_ = {}, ::UnityEngine::Transform* leftControllerDirectTransform_ = {}, ::UnityEngine::Transform* leftControllerRootTransform_ = {}, bool controllerRayInteraction_ = {}, bool controllerDirectInteraction_ = {}, ::GlobalNamespace::OVRHand* handLeft_ = {}, ::GlobalNamespace::OVRHand* handRight_ = {}, bool handRayInteraction_ = {}, bool handDirectInteraction_ = {}, ::UnityEngine::EventSystems::OVRPhysicsRaycaster* controllerRaycaster_ = {}, ::UnityEngine::EventSystems::OVRPhysicsRaycaster* handRaycaster_ = {}) noexcept : textCommitField{textCommitField_}, position{position_}, rotation{rotation_}, scale{scale_}, rightControllerDirectTransform{rightControllerDirectTransform_}, rightControllerRootTransform{rightControllerRootTransform_}, leftControllerDirectTransform{leftControllerDirectTransform_}, leftControllerRootTransform{leftControllerRootTransform_}, controllerRayInteraction{controllerRayInteraction_}, controllerDirectInteraction{controllerDirectInteraction_}, handLeft{handLeft_}, handRight{handRight_}, handRayInteraction{handRayInteraction_}, handDirectInteraction{handDirectInteraction_}, controllerRaycaster{controllerRaycaster_}, handRaycaster{handRaycaster_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: private readonly UnityEngine.UI.InputField _textCommitField
      [[deprecated("Use field access instead!")]] ::UnityEngine::UI::InputField*& dyn__textCommitField();
      // Get instance field reference: private readonly UnityEngine.Vector3 _position
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__position();
      // Get instance field reference: private readonly UnityEngine.Quaternion _rotation
      [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__rotation();
      // Get instance field reference: private readonly UnityEngine.Vector3 _scale
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__scale();
      // Get instance field reference: private readonly UnityEngine.Transform _rightControllerDirectTransform
      [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__rightControllerDirectTransform();
      // Get instance field reference: private readonly UnityEngine.Transform _rightControllerRootTransform
      [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__rightControllerRootTransform();
      // Get instance field reference: private readonly UnityEngine.Transform _leftControllerDirectTransform
      [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__leftControllerDirectTransform();
      // Get instance field reference: private readonly UnityEngine.Transform _leftControllerRootTransform
      [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__leftControllerRootTransform();
      // Get instance field reference: private readonly System.Boolean _controllerRayInteraction
      [[deprecated("Use field access instead!")]] bool& dyn__controllerRayInteraction();
      // Get instance field reference: private readonly System.Boolean _controllerDirectInteraction
      [[deprecated("Use field access instead!")]] bool& dyn__controllerDirectInteraction();
      // Get instance field reference: private readonly OVRHand _handLeft
      [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRHand*& dyn__handLeft();
      // Get instance field reference: private readonly OVRHand _handRight
      [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRHand*& dyn__handRight();
      // Get instance field reference: private readonly System.Boolean _handRayInteraction
      [[deprecated("Use field access instead!")]] bool& dyn__handRayInteraction();
      // Get instance field reference: private readonly System.Boolean _handDirectInteraction
      [[deprecated("Use field access instead!")]] bool& dyn__handDirectInteraction();
      // Get instance field reference: private readonly UnityEngine.EventSystems.OVRPhysicsRaycaster _controllerRaycaster
      [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::OVRPhysicsRaycaster*& dyn__controllerRaycaster();
      // Get instance field reference: private readonly UnityEngine.EventSystems.OVRPhysicsRaycaster _handRaycaster
      [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::OVRPhysicsRaycaster*& dyn__handRaycaster();
      // public System.Void .ctor(OVRVirtualKeyboard keyboard)
      // Offset: 0x493CB64
      OVRVirtualKeyboardBackup(::GlobalNamespace::OVRVirtualKeyboard* keyboard);
      // public System.Void RestoreTo(OVRVirtualKeyboard keyboard)
      // Offset: 0x493C5D4
      void RestoreTo(::GlobalNamespace::OVRVirtualKeyboard* keyboard);
    }; // OVRVirtualKeyboardSampleControls/OVRVirtualKeyboardBackup
    #pragma pack(pop)
    static check_size<sizeof(OVRVirtualKeyboardSampleControls::OVRVirtualKeyboardBackup), 120 + sizeof(::UnityEngine::EventSystems::OVRPhysicsRaycaster*)> __GlobalNamespace_OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackupSizeCheck;
    static_assert(sizeof(OVRVirtualKeyboardSampleControls::OVRVirtualKeyboardBackup) == 0x80);
    public:
    // private UnityEngine.UI.Button ShowButton
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Button* ShowButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button MoveButton
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Button* MoveButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button HideButton
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Button* HideButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button MoveNearButton
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Button* MoveNearButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button MoveFarButton
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::UI::Button* MoveFarButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button DestroyKeyboardButton
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::UI::Button* DestroyKeyboardButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private OVRVirtualKeyboard keyboard
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::OVRVirtualKeyboard* keyboard;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRVirtualKeyboard*) == 0x8);
    // private OVRVirtualKeyboardSampleInputHandler inputHandler
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler* inputHandler;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*) == 0x8);
    // private System.Boolean isMovingKeyboard_
    // Size: 0x1
    // Offset: 0x60
    bool isMovingKeyboard;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isMovingKeyboardFinished_
    // Size: 0x1
    // Offset: 0x61
    bool isMovingKeyboardFinished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isMovingKeyboardFinished and: keyboardMoveDistance
    char __padding9[0x2] = {};
    // private System.Single keyboardMoveDistance_
    // Size: 0x4
    // Offset: 0x64
    float keyboardMoveDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single keyboardScale_
    // Size: 0x4
    // Offset: 0x68
    float keyboardScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: keyboardScale and: keyboardBackup
    char __padding11[0x4] = {};
    // private OVRVirtualKeyboardSampleControls/OVRVirtualKeyboardBackup keyboardBackup
    // Size: 0x80
    // Offset: 0x70
    ::GlobalNamespace::OVRVirtualKeyboardSampleControls::OVRVirtualKeyboardBackup keyboardBackup;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRVirtualKeyboardSampleControls::OVRVirtualKeyboardBackup) == 0x80);
    public:
    // static field const value: static private System.Single THUMBSTICK_DEADZONE
    static constexpr const float THUMBSTICK_DEADZONE = 0.2;
    // Get static field: static private System.Single THUMBSTICK_DEADZONE
    static float _get_THUMBSTICK_DEADZONE();
    // Set static field: static private System.Single THUMBSTICK_DEADZONE
    static void _set_THUMBSTICK_DEADZONE(float value);
    // Get instance field reference: private UnityEngine.UI.Button ShowButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn_ShowButton();
    // Get instance field reference: private UnityEngine.UI.Button MoveButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn_MoveButton();
    // Get instance field reference: private UnityEngine.UI.Button HideButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn_HideButton();
    // Get instance field reference: private UnityEngine.UI.Button MoveNearButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn_MoveNearButton();
    // Get instance field reference: private UnityEngine.UI.Button MoveFarButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn_MoveFarButton();
    // Get instance field reference: private UnityEngine.UI.Button DestroyKeyboardButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn_DestroyKeyboardButton();
    // Get instance field reference: private OVRVirtualKeyboard keyboard
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRVirtualKeyboard*& dyn_keyboard();
    // Get instance field reference: private OVRVirtualKeyboardSampleInputHandler inputHandler
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*& dyn_inputHandler();
    // Get instance field reference: private System.Boolean isMovingKeyboard_
    [[deprecated("Use field access instead!")]] bool& dyn_isMovingKeyboard_();
    // Get instance field reference: private System.Boolean isMovingKeyboardFinished_
    [[deprecated("Use field access instead!")]] bool& dyn_isMovingKeyboardFinished_();
    // Get instance field reference: private System.Single keyboardMoveDistance_
    [[deprecated("Use field access instead!")]] float& dyn_keyboardMoveDistance_();
    // Get instance field reference: private System.Single keyboardScale_
    [[deprecated("Use field access instead!")]] float& dyn_keyboardScale_();
    // Get instance field reference: private OVRVirtualKeyboardSampleControls/OVRVirtualKeyboardBackup keyboardBackup
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRVirtualKeyboardSampleControls::OVRVirtualKeyboardBackup& dyn_keyboardBackup();
    // private System.Void Start()
    // Offset: 0x493C108
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x493C400
    void OnDestroy();
    // public System.Void ShowKeyboard()
    // Offset: 0x493C2E8
    void ShowKeyboard();
    // public System.Void MoveKeyboard()
    // Offset: 0x493C83C
    void MoveKeyboard();
    // public System.Void MoveKeyboardNear()
    // Offset: 0x493C98C
    void MoveKeyboardNear();
    // public System.Void MoveKeyboardFar()
    // Offset: 0x493C9D4
    void MoveKeyboardFar();
    // public System.Void HideKeyboard()
    // Offset: 0x493CA1C
    void HideKeyboard();
    // public System.Void DestroyKeyboard()
    // Offset: 0x493CA58
    void DestroyKeyboard();
    // private System.Void OnHideKeyboard()
    // Offset: 0x493CC90
    void OnHideKeyboard();
    // private System.Void UpdateButtonInteractable()
    // Offset: 0x493C6E8
    void UpdateButtonInteractable();
    // private System.Void Update()
    // Offset: 0x493CC94
    void Update();
    // public System.Void .ctor()
    // Offset: 0x493D228
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRVirtualKeyboardSampleControls* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRVirtualKeyboardSampleControls::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRVirtualKeyboardSampleControls*, creationType>()));
    }
  }; // OVRVirtualKeyboardSampleControls
  #pragma pack(pop)
  static check_size<sizeof(OVRVirtualKeyboardSampleControls), 112 + sizeof(::GlobalNamespace::OVRVirtualKeyboardSampleControls::OVRVirtualKeyboardBackup)> __GlobalNamespace_OVRVirtualKeyboardSampleControlsSizeCheck;
  static_assert(sizeof(OVRVirtualKeyboardSampleControls) == 0xF0);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboardSampleControls::OVRVirtualKeyboardBackup, "", "OVRVirtualKeyboardSampleControls/OVRVirtualKeyboardBackup");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleControls::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleControls::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleControls*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleControls::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleControls::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleControls*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleControls::ShowKeyboard
// Il2CppName: ShowKeyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleControls::ShowKeyboard)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleControls*), "ShowKeyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleControls::MoveKeyboard
// Il2CppName: MoveKeyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleControls::MoveKeyboard)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleControls*), "MoveKeyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleControls::MoveKeyboardNear
// Il2CppName: MoveKeyboardNear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleControls::MoveKeyboardNear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleControls*), "MoveKeyboardNear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleControls::MoveKeyboardFar
// Il2CppName: MoveKeyboardFar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleControls::MoveKeyboardFar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleControls*), "MoveKeyboardFar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleControls::HideKeyboard
// Il2CppName: HideKeyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleControls::HideKeyboard)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleControls*), "HideKeyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleControls::DestroyKeyboard
// Il2CppName: DestroyKeyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleControls::DestroyKeyboard)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleControls*), "DestroyKeyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleControls::OnHideKeyboard
// Il2CppName: OnHideKeyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleControls::OnHideKeyboard)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleControls*), "OnHideKeyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleControls::UpdateButtonInteractable
// Il2CppName: UpdateButtonInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleControls::UpdateButtonInteractable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleControls*), "UpdateButtonInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleControls::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleControls::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleControls*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleControls::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
