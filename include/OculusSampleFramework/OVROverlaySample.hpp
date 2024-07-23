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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Texture
  class Texture;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVROverlay
  class OVROverlay;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: OVROverlaySample
  class OVROverlaySample;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::OVROverlaySample);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::OVROverlaySample*, "OculusSampleFramework", "OVROverlaySample");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.OVROverlaySample
  // [TokenAttribute] Offset: FFFFFFFF
  class OVROverlaySample : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::OculusSampleFramework::OVROverlaySample::$WaitforOVROverlay$d__30
    class $WaitforOVROverlay$d__30;
    public:
    // private System.Boolean inMenu
    // Size: 0x1
    // Offset: 0x20
    bool inMenu;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inMenu and: applicationRadioButton
    char __padding0[0x7] = {};
    // private UnityEngine.UI.Toggle applicationRadioButton
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Toggle* applicationRadioButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle noneRadioButton
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Toggle* noneRadioButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // public UnityEngine.GameObject mainCamera
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* mainCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject uiCamera
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* uiCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject uiGeoParent
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::GameObject* uiGeoParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject worldspaceGeoParent
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::GameObject* worldspaceGeoParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public OVROverlay cameraRenderOverlay
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::OVROverlay* cameraRenderOverlay;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVROverlay*) == 0x8);
    // public OVROverlay renderingLabelOverlay
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::OVROverlay* renderingLabelOverlay;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVROverlay*) == 0x8);
    // public UnityEngine.Texture applicationLabelTexture
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Texture* applicationLabelTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture compositorLabelTexture
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Texture* compositorLabelTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // public UnityEngine.GameObject prefabForLevelLoadSim
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::GameObject* prefabForLevelLoadSim;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public OVROverlay cubemapOverlay
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::OVROverlay* cubemapOverlay;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVROverlay*) == 0x8);
    // public OVROverlay loadingTextQuadOverlay
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::OVROverlay* loadingTextQuadOverlay;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVROverlay*) == 0x8);
    // public System.Single distanceFromCamToLoadText
    // Size: 0x4
    // Offset: 0x90
    float distanceFromCamToLoadText;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single cubeSpawnRadius
    // Size: 0x4
    // Offset: 0x94
    float cubeSpawnRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single heightBetweenItems
    // Size: 0x4
    // Offset: 0x98
    float heightBetweenItems;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 numObjectsPerLevel
    // Size: 0x4
    // Offset: 0x9C
    int numObjectsPerLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 numLevels
    // Size: 0x4
    // Offset: 0xA0
    int numLevels;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 numLoopsTrigger
    // Size: 0x4
    // Offset: 0xA4
    int numLoopsTrigger;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.List`1<UnityEngine.GameObject> spawnedCubes
    // Size: 0x8
    // Offset: 0xA8
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* spawnedCubes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    public:
    // static field const value: static private System.String ovrOverlayID
    static constexpr const char* ovrOverlayID = "OVROverlayID";
    // Get static field: static private System.String ovrOverlayID
    static ::StringW _get_ovrOverlayID();
    // Set static field: static private System.String ovrOverlayID
    static void _set_ovrOverlayID(::StringW value);
    // static field const value: static private System.String applicationID
    static constexpr const char* applicationID = "ApplicationID";
    // Get static field: static private System.String applicationID
    static ::StringW _get_applicationID();
    // Set static field: static private System.String applicationID
    static void _set_applicationID(::StringW value);
    // static field const value: static private System.String noneID
    static constexpr const char* noneID = "NoneID";
    // Get static field: static private System.String noneID
    static ::StringW _get_noneID();
    // Set static field: static private System.String noneID
    static void _set_noneID(::StringW value);
    // Get instance field reference: private System.Boolean inMenu
    [[deprecated("Use field access instead!")]] bool& dyn_inMenu();
    // Get instance field reference: private UnityEngine.UI.Toggle applicationRadioButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn_applicationRadioButton();
    // Get instance field reference: private UnityEngine.UI.Toggle noneRadioButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn_noneRadioButton();
    // Get instance field reference: public UnityEngine.GameObject mainCamera
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_mainCamera();
    // Get instance field reference: public UnityEngine.GameObject uiCamera
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_uiCamera();
    // Get instance field reference: public UnityEngine.GameObject uiGeoParent
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_uiGeoParent();
    // Get instance field reference: public UnityEngine.GameObject worldspaceGeoParent
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_worldspaceGeoParent();
    // Get instance field reference: public OVROverlay cameraRenderOverlay
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVROverlay*& dyn_cameraRenderOverlay();
    // Get instance field reference: public OVROverlay renderingLabelOverlay
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVROverlay*& dyn_renderingLabelOverlay();
    // Get instance field reference: public UnityEngine.Texture applicationLabelTexture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn_applicationLabelTexture();
    // Get instance field reference: public UnityEngine.Texture compositorLabelTexture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn_compositorLabelTexture();
    // Get instance field reference: public UnityEngine.GameObject prefabForLevelLoadSim
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_prefabForLevelLoadSim();
    // Get instance field reference: public OVROverlay cubemapOverlay
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVROverlay*& dyn_cubemapOverlay();
    // Get instance field reference: public OVROverlay loadingTextQuadOverlay
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVROverlay*& dyn_loadingTextQuadOverlay();
    // Get instance field reference: public System.Single distanceFromCamToLoadText
    [[deprecated("Use field access instead!")]] float& dyn_distanceFromCamToLoadText();
    // Get instance field reference: public System.Single cubeSpawnRadius
    [[deprecated("Use field access instead!")]] float& dyn_cubeSpawnRadius();
    // Get instance field reference: public System.Single heightBetweenItems
    [[deprecated("Use field access instead!")]] float& dyn_heightBetweenItems();
    // Get instance field reference: public System.Int32 numObjectsPerLevel
    [[deprecated("Use field access instead!")]] int& dyn_numObjectsPerLevel();
    // Get instance field reference: public System.Int32 numLevels
    [[deprecated("Use field access instead!")]] int& dyn_numLevels();
    // Get instance field reference: public System.Int32 numLoopsTrigger
    [[deprecated("Use field access instead!")]] int& dyn_numLoopsTrigger();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.GameObject> spawnedCubes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_spawnedCubes();
    // private System.Void Start()
    // Offset: 0x282F798
    void Start();
    // private System.Void Update()
    // Offset: 0x282FFC0
    void Update();
    // private System.Void ActivateWorldGeo()
    // Offset: 0x28300E8
    void ActivateWorldGeo();
    // private System.Void ActivateOVROverlay()
    // Offset: 0x2830218
    void ActivateOVROverlay();
    // private System.Void ActivateNone()
    // Offset: 0x2830348
    void ActivateNone();
    // private System.Void TriggerLoad()
    // Offset: 0x28300C8
    void TriggerLoad();
    // private System.Collections.IEnumerator WaitforOVROverlay()
    // Offset: 0x283041C
    ::System::Collections::IEnumerator* WaitforOVROverlay();
    // private System.Void TriggerUnload()
    // Offset: 0x28304B0
    void TriggerUnload();
    // private System.Void CameraAndRenderTargetSetup()
    // Offset: 0x282FBF4
    void CameraAndRenderTargetSetup();
    // private System.Void SimulateLevelLoad()
    // Offset: 0x28305F8
    void SimulateLevelLoad();
    // private System.Void ClearObjects()
    // Offset: 0x28304D8
    void ClearObjects();
    // public System.Void RadioPressed(System.String radioLabel, System.String group, UnityEngine.UI.Toggle t)
    // Offset: 0x2830990
    void RadioPressed(::StringW radioLabel, ::StringW group, ::UnityEngine::UI::Toggle* t);
    // public System.Void .ctor()
    // Offset: 0x2830A7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVROverlaySample* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::OVROverlaySample::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVROverlaySample*, creationType>()));
    }
    // private System.Void <Start>b__24_0(UnityEngine.UI.Toggle t)
    // Offset: 0x2830B10
    void $Start$b__24_0(::UnityEngine::UI::Toggle* t);
    // private System.Void <Start>b__24_1(UnityEngine.UI.Toggle t)
    // Offset: 0x2830B64
    void $Start$b__24_1(::UnityEngine::UI::Toggle* t);
    // private System.Void <Start>b__24_2(UnityEngine.UI.Toggle t)
    // Offset: 0x2830BB8
    void $Start$b__24_2(::UnityEngine::UI::Toggle* t);
  }; // OculusSampleFramework.OVROverlaySample
  #pragma pack(pop)
  static check_size<sizeof(OVROverlaySample), 168 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)> __OculusSampleFramework_OVROverlaySampleSizeCheck;
  static_assert(sizeof(OVROverlaySample) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::OVROverlaySample::*)()>(&OculusSampleFramework::OVROverlaySample::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::OVROverlaySample::*)()>(&OculusSampleFramework::OVROverlaySample::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::ActivateWorldGeo
// Il2CppName: ActivateWorldGeo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::OVROverlaySample::*)()>(&OculusSampleFramework::OVROverlaySample::ActivateWorldGeo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "ActivateWorldGeo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::ActivateOVROverlay
// Il2CppName: ActivateOVROverlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::OVROverlaySample::*)()>(&OculusSampleFramework::OVROverlaySample::ActivateOVROverlay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "ActivateOVROverlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::ActivateNone
// Il2CppName: ActivateNone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::OVROverlaySample::*)()>(&OculusSampleFramework::OVROverlaySample::ActivateNone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "ActivateNone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::TriggerLoad
// Il2CppName: TriggerLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::OVROverlaySample::*)()>(&OculusSampleFramework::OVROverlaySample::TriggerLoad)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "TriggerLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::WaitforOVROverlay
// Il2CppName: WaitforOVROverlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (OculusSampleFramework::OVROverlaySample::*)()>(&OculusSampleFramework::OVROverlaySample::WaitforOVROverlay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "WaitforOVROverlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::TriggerUnload
// Il2CppName: TriggerUnload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::OVROverlaySample::*)()>(&OculusSampleFramework::OVROverlaySample::TriggerUnload)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "TriggerUnload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::CameraAndRenderTargetSetup
// Il2CppName: CameraAndRenderTargetSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::OVROverlaySample::*)()>(&OculusSampleFramework::OVROverlaySample::CameraAndRenderTargetSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "CameraAndRenderTargetSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::SimulateLevelLoad
// Il2CppName: SimulateLevelLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::OVROverlaySample::*)()>(&OculusSampleFramework::OVROverlaySample::SimulateLevelLoad)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "SimulateLevelLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::ClearObjects
// Il2CppName: ClearObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::OVROverlaySample::*)()>(&OculusSampleFramework::OVROverlaySample::ClearObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "ClearObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::RadioPressed
// Il2CppName: RadioPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::OVROverlaySample::*)(::StringW, ::StringW, ::UnityEngine::UI::Toggle*)>(&OculusSampleFramework::OVROverlaySample::RadioPressed)> {
  static const MethodInfo* get() {
    static auto* radioLabel = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* group = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "RadioPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{radioLabel, group, t});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::$Start$b__24_0
// Il2CppName: <Start>b__24_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::OVROverlaySample::*)(::UnityEngine::UI::Toggle*)>(&OculusSampleFramework::OVROverlaySample::$Start$b__24_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "<Start>b__24_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::$Start$b__24_1
// Il2CppName: <Start>b__24_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::OVROverlaySample::*)(::UnityEngine::UI::Toggle*)>(&OculusSampleFramework::OVROverlaySample::$Start$b__24_1)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "<Start>b__24_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::OVROverlaySample::$Start$b__24_2
// Il2CppName: <Start>b__24_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::OVROverlaySample::*)(::UnityEngine::UI::Toggle*)>(&OculusSampleFramework::OVROverlaySample::$Start$b__24_2)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::OVROverlaySample*), "<Start>b__24_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};