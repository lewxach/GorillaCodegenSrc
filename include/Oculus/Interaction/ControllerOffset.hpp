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
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: Pose
  struct Pose;
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IController
  class IController;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: ControllerOffset
  class ControllerOffset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::ControllerOffset);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::ControllerOffset*, "Oculus.Interaction", "ControllerOffset");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x4D
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.ControllerOffset
  // [TokenAttribute] Offset: FFFFFFFF
  class ControllerOffset : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Object _controller
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* controller;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.IController <Controller>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::Input::IController* Controller;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IController*) == 0x8);
    // private UnityEngine.Vector3 _offset
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _rotation
    // Size: 0x10
    // Offset: 0x3C
    ::UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x4C
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Object _controller
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__controller();
    // Get instance field reference: private Oculus.Interaction.Input.IController <Controller>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IController*& dyn_$Controller$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 _offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__offset();
    // Get instance field reference: private UnityEngine.Quaternion _rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__rotation();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // public Oculus.Interaction.Input.IController get_Controller()
    // Offset: 0x47CDC24
    ::Oculus::Interaction::Input::IController* get_Controller();
    // private System.Void set_Controller(Oculus.Interaction.Input.IController value)
    // Offset: 0x47CDC2C
    void set_Controller(::Oculus::Interaction::Input::IController* value);
    // protected System.Void Awake()
    // Offset: 0x47CDC34
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47CDC8C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47CDCC4
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x47CDDC4
    void OnDisable();
    // private System.Void HandleUpdated()
    // Offset: 0x47CDEC4
    void HandleUpdated();
    // public System.Void GetOffset(ref UnityEngine.Pose pose)
    // Offset: 0x47CE050
    void GetOffset(ByRef<::UnityEngine::Pose> pose);
    // public System.Void GetWorldPose(ref UnityEngine.Pose pose)
    // Offset: 0x47CE11C
    void GetWorldPose(ByRef<::UnityEngine::Pose> pose);
    // public System.Void InjectController(Oculus.Interaction.Input.IController controller)
    // Offset: 0x47CE178
    void InjectController(::Oculus::Interaction::Input::IController* controller);
    // public System.Void InjectOffset(UnityEngine.Vector3 offset)
    // Offset: 0x47CE248
    void InjectOffset(::UnityEngine::Vector3 offset);
    // public System.Void InjectRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x47CE254
    void InjectRotation(::UnityEngine::Quaternion rotation);
    // public System.Void InjectAllControllerOffset(Oculus.Interaction.Input.IController controller, UnityEngine.Vector3 offset, UnityEngine.Quaternion rotation)
    // Offset: 0x47CE260
    void InjectAllControllerOffset(::Oculus::Interaction::Input::IController* controller, ::UnityEngine::Vector3 offset, ::UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x47CE2C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ControllerOffset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::ControllerOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ControllerOffset*, creationType>()));
    }
  }; // Oculus.Interaction.ControllerOffset
  #pragma pack(pop)
  static check_size<sizeof(ControllerOffset), 76 + sizeof(bool)> __Oculus_Interaction_ControllerOffsetSizeCheck;
  static_assert(sizeof(ControllerOffset) == 0x4D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::ControllerOffset::get_Controller
// Il2CppName: get_Controller
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::IController* (Oculus::Interaction::ControllerOffset::*)()>(&Oculus::Interaction::ControllerOffset::get_Controller)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerOffset*), "get_Controller", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerOffset::set_Controller
// Il2CppName: set_Controller
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerOffset::*)(::Oculus::Interaction::Input::IController*)>(&Oculus::Interaction::ControllerOffset::set_Controller)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerOffset*), "set_Controller", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerOffset::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerOffset::*)()>(&Oculus::Interaction::ControllerOffset::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerOffset*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerOffset::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerOffset::*)()>(&Oculus::Interaction::ControllerOffset::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerOffset*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerOffset::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerOffset::*)()>(&Oculus::Interaction::ControllerOffset::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerOffset*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerOffset::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerOffset::*)()>(&Oculus::Interaction::ControllerOffset::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerOffset*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerOffset::HandleUpdated
// Il2CppName: HandleUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerOffset::*)()>(&Oculus::Interaction::ControllerOffset::HandleUpdated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerOffset*), "HandleUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerOffset::GetOffset
// Il2CppName: GetOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerOffset::*)(ByRef<::UnityEngine::Pose>)>(&Oculus::Interaction::ControllerOffset::GetOffset)> {
  static const MethodInfo* get() {
    static auto* pose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerOffset*), "GetOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerOffset::GetWorldPose
// Il2CppName: GetWorldPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerOffset::*)(ByRef<::UnityEngine::Pose>)>(&Oculus::Interaction::ControllerOffset::GetWorldPose)> {
  static const MethodInfo* get() {
    static auto* pose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerOffset*), "GetWorldPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerOffset::InjectController
// Il2CppName: InjectController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerOffset::*)(::Oculus::Interaction::Input::IController*)>(&Oculus::Interaction::ControllerOffset::InjectController)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerOffset*), "InjectController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerOffset::InjectOffset
// Il2CppName: InjectOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerOffset::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::ControllerOffset::InjectOffset)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerOffset*), "InjectOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerOffset::InjectRotation
// Il2CppName: InjectRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerOffset::*)(::UnityEngine::Quaternion)>(&Oculus::Interaction::ControllerOffset::InjectRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerOffset*), "InjectRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerOffset::InjectAllControllerOffset
// Il2CppName: InjectAllControllerOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerOffset::*)(::Oculus::Interaction::Input::IController*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&Oculus::Interaction::ControllerOffset::InjectAllControllerOffset)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IController")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerOffset*), "InjectAllControllerOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller, offset, rotation});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
