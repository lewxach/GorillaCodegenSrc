// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OverrideControllers
#include "GlobalNamespace/OverrideControllers.hpp"
// Including type: UnityEngine.XR.InputDeviceCharacteristics
#include "UnityEngine/XR/InputDeviceCharacteristics.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HandTransformFollowOffest
  class HandTransformFollowOffest;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRController
  class XRController;
  // Forward declaring type: GorillaSnapTurn
  class GorillaSnapTurn;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GorillaLocomotion
namespace GorillaLocomotion {
  // Forward declaring type: Player
  class Player;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: InputDevice
  struct InputDevice;
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ConnectedControllerHandler
  class ConnectedControllerHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ConnectedControllerHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedControllerHandler*, "", "ConnectedControllerHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA4
  #pragma pack(push, 1)
  // Autogenerated type: ConnectedControllerHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectedControllerHandler : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::ConnectedControllerHandler::$ControllerValidator$d__36
    class $ControllerValidator$d__36;
    public:
    // private HandTransformFollowOffest rightHandFollower
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::HandTransformFollowOffest* rightHandFollower;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HandTransformFollowOffest*) == 0x8);
    // private HandTransformFollowOffest leftHandFollower
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::HandTransformFollowOffest* leftHandFollower;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HandTransformFollowOffest*) == 0x8);
    // private UnityEngine.XR.Interaction.Toolkit.XRController rightXRController
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::XR::Interaction::Toolkit::XRController* rightXRController;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRController*) == 0x8);
    // private UnityEngine.XR.Interaction.Toolkit.XRController leftXRController
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::XR::Interaction::Toolkit::XRController* leftXRController;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRController*) == 0x8);
    // private UnityEngine.XR.Interaction.Toolkit.GorillaSnapTurn snapTurnController
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn* snapTurnController;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRController> rightControllerList
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRController*>* rightControllerList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRController*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRController> leftcontrollerList
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRController*>* leftcontrollerList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRController*>*) == 0x8);
    // private System.Boolean rightControllerValid
    // Size: 0x1
    // Offset: 0x58
    bool rightControllerValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean leftControllerValid
    // Size: 0x1
    // Offset: 0x59
    bool leftControllerValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean rightValid
    // Size: 0x1
    // Offset: 0x5A
    bool rightValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean leftValid
    // Size: 0x1
    // Offset: 0x5B
    bool leftValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.Vector3 lastRightPos
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 lastRightPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastLeftPos
    // Size: 0xC
    // Offset: 0x68
    ::UnityEngine::Vector3 lastLeftPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 tempRightPos
    // Size: 0xC
    // Offset: 0x74
    ::UnityEngine::Vector3 tempRightPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 tempLeftPos
    // Size: 0xC
    // Offset: 0x80
    ::UnityEngine::Vector3 tempLeftPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean updateControllers
    // Size: 0x1
    // Offset: 0x8C
    bool updateControllers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: updateControllers and: playerHandler
    char __padding15[0x3] = {};
    // private GorillaLocomotion.Player playerHandler
    // Size: 0x8
    // Offset: 0x90
    ::GorillaLocomotion::Player* playerHandler;
    // Field size check
    static_assert(sizeof(::GorillaLocomotion::Player*) == 0x8);
    // private System.Single overridePollRate
    // Size: 0x4
    // Offset: 0x98
    float overridePollRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean overrideEnabled
    // Size: 0x1
    // Offset: 0x9C
    bool overrideEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideEnabled and: overrideController
    char __padding18[0x3] = {};
    // private OverrideControllers overrideController
    // Size: 0x4
    // Offset: 0xA0
    ::GlobalNamespace::OverrideControllers overrideController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OverrideControllers) == 0x4);
    public:
    // Get static field: static private ConnectedControllerHandler <Instance>k__BackingField
    static ::GlobalNamespace::ConnectedControllerHandler* _get_$Instance$k__BackingField();
    // Set static field: static private ConnectedControllerHandler <Instance>k__BackingField
    static void _set_$Instance$k__BackingField(::GlobalNamespace::ConnectedControllerHandler* value);
    // static field const value: static private UnityEngine.XR.InputDeviceCharacteristics rightCharecteristics
    static constexpr const uint rightCharecteristics = 576u;
    // Get static field: static private UnityEngine.XR.InputDeviceCharacteristics rightCharecteristics
    static ::UnityEngine::XR::InputDeviceCharacteristics _get_rightCharecteristics();
    // Set static field: static private UnityEngine.XR.InputDeviceCharacteristics rightCharecteristics
    static void _set_rightCharecteristics(::UnityEngine::XR::InputDeviceCharacteristics value);
    // static field const value: static private UnityEngine.XR.InputDeviceCharacteristics leftCharecteristics
    static constexpr const uint leftCharecteristics = 320u;
    // Get static field: static private UnityEngine.XR.InputDeviceCharacteristics leftCharecteristics
    static ::UnityEngine::XR::InputDeviceCharacteristics _get_leftCharecteristics();
    // Set static field: static private UnityEngine.XR.InputDeviceCharacteristics leftCharecteristics
    static void _set_leftCharecteristics(::UnityEngine::XR::InputDeviceCharacteristics value);
    // Get instance field reference: private HandTransformFollowOffest rightHandFollower
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HandTransformFollowOffest*& dyn_rightHandFollower();
    // Get instance field reference: private HandTransformFollowOffest leftHandFollower
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HandTransformFollowOffest*& dyn_leftHandFollower();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.XRController rightXRController
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::XRController*& dyn_rightXRController();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.XRController leftXRController
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::XRController*& dyn_leftXRController();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.GorillaSnapTurn snapTurnController
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*& dyn_snapTurnController();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRController> rightControllerList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRController*>*& dyn_rightControllerList();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRController> leftcontrollerList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRController*>*& dyn_leftcontrollerList();
    // Get instance field reference: private System.Boolean rightControllerValid
    [[deprecated("Use field access instead!")]] bool& dyn_rightControllerValid();
    // Get instance field reference: private System.Boolean leftControllerValid
    [[deprecated("Use field access instead!")]] bool& dyn_leftControllerValid();
    // Get instance field reference: private System.Boolean rightValid
    [[deprecated("Use field access instead!")]] bool& dyn_rightValid();
    // Get instance field reference: private System.Boolean leftValid
    [[deprecated("Use field access instead!")]] bool& dyn_leftValid();
    // Get instance field reference: private UnityEngine.Vector3 lastRightPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastRightPos();
    // Get instance field reference: private UnityEngine.Vector3 lastLeftPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastLeftPos();
    // Get instance field reference: private UnityEngine.Vector3 tempRightPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_tempRightPos();
    // Get instance field reference: private UnityEngine.Vector3 tempLeftPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_tempLeftPos();
    // Get instance field reference: private System.Boolean updateControllers
    [[deprecated("Use field access instead!")]] bool& dyn_updateControllers();
    // Get instance field reference: private GorillaLocomotion.Player playerHandler
    [[deprecated("Use field access instead!")]] ::GorillaLocomotion::Player*& dyn_playerHandler();
    // Get instance field reference: private System.Single overridePollRate
    [[deprecated("Use field access instead!")]] float& dyn_overridePollRate();
    // Get instance field reference: private System.Boolean overrideEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_overrideEnabled();
    // Get instance field reference: private OverrideControllers overrideController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OverrideControllers& dyn_overrideController();
    // static public ConnectedControllerHandler get_Instance()
    // Offset: 0x26F000C
    static ::GlobalNamespace::ConnectedControllerHandler* get_Instance();
    // static private System.Void set_Instance(ConnectedControllerHandler value)
    // Offset: 0x26F0054
    static void set_Instance(::GlobalNamespace::ConnectedControllerHandler* value);
    // public System.Boolean get_RightValid()
    // Offset: 0x26F00AC
    bool get_RightValid();
    // public System.Boolean get_LeftValid()
    // Offset: 0x26F00B4
    bool get_LeftValid();
    // private System.Void Awake()
    // Offset: 0x26F00BC
    void Awake();
    // private System.Void Start()
    // Offset: 0x26F0618
    void Start();
    // private System.Void OnEnable()
    // Offset: 0x26F0888
    void OnEnable();
    // private System.Void ONDisable()
    // Offset: 0x26F0914
    void ONDisable();
    // private System.Void OnDestroy()
    // Offset: 0x26F0934
    void OnDestroy();
    // private System.Void LateUpdate()
    // Offset: 0x26F0AF4
    void LateUpdate();
    // private System.Collections.IEnumerator ControllerValidator()
    // Offset: 0x26F08A8
    ::System::Collections::IEnumerator* ControllerValidator();
    // private System.Void DeviceDisconnected(UnityEngine.XR.InputDevice device)
    // Offset: 0x26F0B5C
    void DeviceDisconnected(::UnityEngine::XR::InputDevice device);
    // private System.Void DeviceConnected(UnityEngine.XR.InputDevice device)
    // Offset: 0x26F0BB8
    void DeviceConnected(::UnityEngine::XR::InputDevice device);
    // private System.Void UpdateControllerStates()
    // Offset: 0x26F057C
    void UpdateControllerStates();
    // private System.Void AssignSnapturnController()
    // Offset: 0x26F0C1C
    void AssignSnapturnController();
    // public System.Boolean GetValidForXRNode(UnityEngine.XR.XRNode controllerNode)
    // Offset: 0x26F0C60
    bool GetValidForXRNode(::UnityEngine::XR::XRNode controllerNode);
    // public System.Void .ctor()
    // Offset: 0x26F0C90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectedControllerHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ConnectedControllerHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectedControllerHandler*, creationType>()));
    }
  }; // ConnectedControllerHandler
  #pragma pack(pop)
  static check_size<sizeof(ConnectedControllerHandler), 160 + sizeof(::GlobalNamespace::OverrideControllers)> __GlobalNamespace_ConnectedControllerHandlerSizeCheck;
  static_assert(sizeof(ConnectedControllerHandler) == 0xA4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedControllerHandler* (*)()>(&GlobalNamespace::ConnectedControllerHandler::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::set_Instance
// Il2CppName: set_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::ConnectedControllerHandler*)>(&GlobalNamespace::ConnectedControllerHandler::set_Instance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "ConnectedControllerHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "set_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::get_RightValid
// Il2CppName: get_RightValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedControllerHandler::*)()>(&GlobalNamespace::ConnectedControllerHandler::get_RightValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "get_RightValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::get_LeftValid
// Il2CppName: get_LeftValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedControllerHandler::*)()>(&GlobalNamespace::ConnectedControllerHandler::get_LeftValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "get_LeftValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedControllerHandler::*)()>(&GlobalNamespace::ConnectedControllerHandler::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedControllerHandler::*)()>(&GlobalNamespace::ConnectedControllerHandler::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedControllerHandler::*)()>(&GlobalNamespace::ConnectedControllerHandler::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::ONDisable
// Il2CppName: ONDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedControllerHandler::*)()>(&GlobalNamespace::ConnectedControllerHandler::ONDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "ONDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedControllerHandler::*)()>(&GlobalNamespace::ConnectedControllerHandler::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedControllerHandler::*)()>(&GlobalNamespace::ConnectedControllerHandler::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::ControllerValidator
// Il2CppName: ControllerValidator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::ConnectedControllerHandler::*)()>(&GlobalNamespace::ConnectedControllerHandler::ControllerValidator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "ControllerValidator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::DeviceDisconnected
// Il2CppName: DeviceDisconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedControllerHandler::*)(::UnityEngine::XR::InputDevice)>(&GlobalNamespace::ConnectedControllerHandler::DeviceDisconnected)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "DeviceDisconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::DeviceConnected
// Il2CppName: DeviceConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedControllerHandler::*)(::UnityEngine::XR::InputDevice)>(&GlobalNamespace::ConnectedControllerHandler::DeviceConnected)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "DeviceConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::UpdateControllerStates
// Il2CppName: UpdateControllerStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedControllerHandler::*)()>(&GlobalNamespace::ConnectedControllerHandler::UpdateControllerStates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "UpdateControllerStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::AssignSnapturnController
// Il2CppName: AssignSnapturnController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedControllerHandler::*)()>(&GlobalNamespace::ConnectedControllerHandler::AssignSnapturnController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "AssignSnapturnController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::GetValidForXRNode
// Il2CppName: GetValidForXRNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ConnectedControllerHandler::*)(::UnityEngine::XR::XRNode)>(&GlobalNamespace::ConnectedControllerHandler::GetValidForXRNode)> {
  static const MethodInfo* get() {
    static auto* controllerNode = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedControllerHandler*), "GetValidForXRNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerNode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedControllerHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
