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
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: SelectionCylinder
  class SelectionCylinder;
  // Forward declaring type: WindmillBladesController
  class WindmillBladesController;
  // Forward declaring type: InteractableTool
  class InteractableTool;
  // Forward declaring type: InteractableStateArgs
  class InteractableStateArgs;
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: WindmillController
  class WindmillController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::WindmillController);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::WindmillController*, "OculusSampleFramework", "WindmillController");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.WindmillController
  // [TokenAttribute] Offset: FFFFFFFF
  class WindmillController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.GameObject _startStopButton
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* startStopButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Single _maxSpeed
    // Size: 0x4
    // Offset: 0x28
    float maxSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxSpeed and: selectionCylinder
    char __padding1[0x4] = {};
    // private OculusSampleFramework.SelectionCylinder _selectionCylinder
    // Size: 0x8
    // Offset: 0x30
    ::OculusSampleFramework::SelectionCylinder* selectionCylinder;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::SelectionCylinder*) == 0x8);
    // private OculusSampleFramework.WindmillBladesController _bladesRotation
    // Size: 0x8
    // Offset: 0x38
    ::OculusSampleFramework::WindmillBladesController* bladesRotation;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::WindmillBladesController*) == 0x8);
    // private OculusSampleFramework.InteractableTool _toolInteractingWithMe
    // Size: 0x8
    // Offset: 0x40
    ::OculusSampleFramework::InteractableTool* toolInteractingWithMe;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::InteractableTool*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.GameObject _startStopButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__startStopButton();
    // Get instance field reference: private System.Single _maxSpeed
    [[deprecated("Use field access instead!")]] float& dyn__maxSpeed();
    // Get instance field reference: private OculusSampleFramework.SelectionCylinder _selectionCylinder
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::SelectionCylinder*& dyn__selectionCylinder();
    // Get instance field reference: private OculusSampleFramework.WindmillBladesController _bladesRotation
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::WindmillBladesController*& dyn__bladesRotation();
    // Get instance field reference: private OculusSampleFramework.InteractableTool _toolInteractingWithMe
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::InteractableTool*& dyn__toolInteractingWithMe();
    // private System.Void Awake()
    // Offset: 0x282F400
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x282F474
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x282F538
    void OnDisable();
    // private System.Void StartStopStateChanged(OculusSampleFramework.InteractableStateArgs obj)
    // Offset: 0x282F644
    void StartStopStateChanged(::OculusSampleFramework::InteractableStateArgs* obj);
    // private System.Void Update()
    // Offset: 0x282F6C0
    void Update();
    // public System.Void .ctor()
    // Offset: 0x282F788
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindmillController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::WindmillController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindmillController*, creationType>()));
    }
  }; // OculusSampleFramework.WindmillController
  #pragma pack(pop)
  static check_size<sizeof(WindmillController), 64 + sizeof(::OculusSampleFramework::InteractableTool*)> __OculusSampleFramework_WindmillControllerSizeCheck;
  static_assert(sizeof(WindmillController) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::WindmillController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::WindmillController::*)()>(&OculusSampleFramework::WindmillController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::WindmillController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::WindmillController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::WindmillController::*)()>(&OculusSampleFramework::WindmillController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::WindmillController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::WindmillController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::WindmillController::*)()>(&OculusSampleFramework::WindmillController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::WindmillController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::WindmillController::StartStopStateChanged
// Il2CppName: StartStopStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::WindmillController::*)(::OculusSampleFramework::InteractableStateArgs*)>(&OculusSampleFramework::WindmillController::StartStopStateChanged)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("OculusSampleFramework", "InteractableStateArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::WindmillController*), "StartStopStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::WindmillController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::WindmillController::*)()>(&OculusSampleFramework::WindmillController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::WindmillController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::WindmillController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!