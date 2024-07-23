// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRLocatable
  struct OVRLocatable;
  // Forward declaring type: OVRBounded2D
  struct OVRBounded2D;
  // Forward declaring type: OVRBounded3D
  struct OVRBounded3D;
  // Forward declaring type: OVRTriangleMesh
  struct OVRTriangleMesh;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SceneManagerHelper
  class SceneManagerHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SceneManagerHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneManagerHelper*, "", "SceneManagerHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SceneManagerHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneManagerHelper : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::SceneManagerHelper::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // Nested type: ::GlobalNamespace::SceneManagerHelper::$RequestSceneCapture$d__11
    struct $RequestSceneCapture$d__11;
    public:
    // private readonly UnityEngine.GameObject <AnchorGameObject>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* AnchorGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::GameObject*
    constexpr operator ::UnityEngine::GameObject*() const noexcept {
      return AnchorGameObject;
    }
    // Get static field: static private System.Boolean SceneCaptureRunning
    static bool _get_SceneCaptureRunning();
    // Set static field: static private System.Boolean SceneCaptureRunning
    static void _set_SceneCaptureRunning(bool value);
    // Get instance field reference: private readonly UnityEngine.GameObject <AnchorGameObject>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_$AnchorGameObject$k__BackingField();
    // public UnityEngine.GameObject get_AnchorGameObject()
    // Offset: 0x294397C
    ::UnityEngine::GameObject* get_AnchorGameObject();
    // public System.Void .ctor(UnityEngine.GameObject gameObject)
    // Offset: 0x2942B14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneManagerHelper* New_ctor(::UnityEngine::GameObject* gameObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SceneManagerHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneManagerHelper*, creationType>(gameObject)));
    }
    // public System.Void SetLocation(OVRLocatable locatable, UnityEngine.Camera camera)
    // Offset: 0x2942B44
    void SetLocation(::GlobalNamespace::OVRLocatable locatable, ::UnityEngine::Camera* camera);
    // public System.Void CreatePlane(OVRBounded2D bounds)
    // Offset: 0x2943984
    void CreatePlane(::GlobalNamespace::OVRBounded2D bounds);
    // public System.Void UpdatePlane(OVRBounded2D bounds)
    // Offset: 0x2943ADC
    void UpdatePlane(::GlobalNamespace::OVRBounded2D bounds);
    // public System.Void CreateVolume(OVRBounded3D bounds)
    // Offset: 0x2943BF8
    void CreateVolume(::GlobalNamespace::OVRBounded3D bounds);
    // public System.Void UpdateVolume(OVRBounded3D bounds)
    // Offset: 0x2943D90
    void UpdateVolume(::GlobalNamespace::OVRBounded3D bounds);
    // public System.Void CreateMesh(OVRTriangleMesh mesh)
    // Offset: 0x2943EEC
    void CreateMesh(::GlobalNamespace::OVRTriangleMesh mesh);
    // public System.Void UpdateMesh(OVRTriangleMesh mesh)
    // Offset: 0x294431C
    void UpdateMesh(::GlobalNamespace::OVRTriangleMesh mesh);
    // static public System.Threading.Tasks.Task`1<System.Boolean> RequestSceneCapture()
    // Offset: 0x29435FC
    static ::System::Threading::Tasks::Task_1<bool>* RequestSceneCapture();
    // static public System.Void RequestScenePermission()
    // Offset: 0x29443F0
    static void RequestScenePermission();
  }; // SceneManagerHelper
  #pragma pack(pop)
  static check_size<sizeof(SceneManagerHelper), 16 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_SceneManagerHelperSizeCheck;
  static_assert(sizeof(SceneManagerHelper) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SceneManagerHelper::get_AnchorGameObject
// Il2CppName: get_AnchorGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::SceneManagerHelper::*)()>(&GlobalNamespace::SceneManagerHelper::get_AnchorGameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneManagerHelper*), "get_AnchorGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneManagerHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SceneManagerHelper::SetLocation
// Il2CppName: SetLocation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneManagerHelper::*)(::GlobalNamespace::OVRLocatable, ::UnityEngine::Camera*)>(&GlobalNamespace::SceneManagerHelper::SetLocation)> {
  static const MethodInfo* get() {
    static auto* locatable = &::il2cpp_utils::GetClassFromName("", "OVRLocatable")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneManagerHelper*), "SetLocation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{locatable, camera});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneManagerHelper::CreatePlane
// Il2CppName: CreatePlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneManagerHelper::*)(::GlobalNamespace::OVRBounded2D)>(&GlobalNamespace::SceneManagerHelper::CreatePlane)> {
  static const MethodInfo* get() {
    static auto* bounds = &::il2cpp_utils::GetClassFromName("", "OVRBounded2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneManagerHelper*), "CreatePlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bounds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneManagerHelper::UpdatePlane
// Il2CppName: UpdatePlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneManagerHelper::*)(::GlobalNamespace::OVRBounded2D)>(&GlobalNamespace::SceneManagerHelper::UpdatePlane)> {
  static const MethodInfo* get() {
    static auto* bounds = &::il2cpp_utils::GetClassFromName("", "OVRBounded2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneManagerHelper*), "UpdatePlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bounds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneManagerHelper::CreateVolume
// Il2CppName: CreateVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneManagerHelper::*)(::GlobalNamespace::OVRBounded3D)>(&GlobalNamespace::SceneManagerHelper::CreateVolume)> {
  static const MethodInfo* get() {
    static auto* bounds = &::il2cpp_utils::GetClassFromName("", "OVRBounded3D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneManagerHelper*), "CreateVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bounds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneManagerHelper::UpdateVolume
// Il2CppName: UpdateVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneManagerHelper::*)(::GlobalNamespace::OVRBounded3D)>(&GlobalNamespace::SceneManagerHelper::UpdateVolume)> {
  static const MethodInfo* get() {
    static auto* bounds = &::il2cpp_utils::GetClassFromName("", "OVRBounded3D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneManagerHelper*), "UpdateVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bounds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneManagerHelper::CreateMesh
// Il2CppName: CreateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneManagerHelper::*)(::GlobalNamespace::OVRTriangleMesh)>(&GlobalNamespace::SceneManagerHelper::CreateMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("", "OVRTriangleMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneManagerHelper*), "CreateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneManagerHelper::UpdateMesh
// Il2CppName: UpdateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneManagerHelper::*)(::GlobalNamespace::OVRTriangleMesh)>(&GlobalNamespace::SceneManagerHelper::UpdateMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("", "OVRTriangleMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneManagerHelper*), "UpdateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneManagerHelper::RequestSceneCapture
// Il2CppName: RequestSceneCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)()>(&GlobalNamespace::SceneManagerHelper::RequestSceneCapture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneManagerHelper*), "RequestSceneCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneManagerHelper::RequestScenePermission
// Il2CppName: RequestScenePermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SceneManagerHelper::RequestScenePermission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneManagerHelper*), "RequestScenePermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};