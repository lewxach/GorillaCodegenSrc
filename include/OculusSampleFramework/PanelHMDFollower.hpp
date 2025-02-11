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
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: PanelHMDFollower
  class PanelHMDFollower;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::PanelHMDFollower);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::PanelHMDFollower*, "OculusSampleFramework", "PanelHMDFollower");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.PanelHMDFollower
  // [TokenAttribute] Offset: FFFFFFFF
  class PanelHMDFollower : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::OculusSampleFramework::PanelHMDFollower::$LerpToHMD$d__13
    class $LerpToHMD$d__13;
    public:
    // private System.Single _maxDistance
    // Size: 0x4
    // Offset: 0x20
    float maxDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minDistance
    // Size: 0x4
    // Offset: 0x24
    float minDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minZDistance
    // Size: 0x4
    // Offset: 0x28
    float minZDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: minZDistance and: cameraRig
    char __padding2[0x4] = {};
    // private OVRCameraRig _cameraRig
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::OVRCameraRig* cameraRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRCameraRig*) == 0x8);
    // private UnityEngine.Vector3 _panelInitialPosition
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 panelInitialPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: panelInitialPosition and: coroutine
    char __padding4[0x4] = {};
    // private UnityEngine.Coroutine _coroutine
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Coroutine* coroutine;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    // private UnityEngine.Vector3 _prevPos
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 prevPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _lastMovedToPos
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 lastMovedToPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // static field const value: static private System.Single TOTAL_DURATION
    static constexpr const float TOTAL_DURATION = 3;
    // Get static field: static private System.Single TOTAL_DURATION
    static float _get_TOTAL_DURATION();
    // Set static field: static private System.Single TOTAL_DURATION
    static void _set_TOTAL_DURATION(float value);
    // static field const value: static private System.Single HMD_MOVEMENT_THRESHOLD
    static constexpr const float HMD_MOVEMENT_THRESHOLD = 0.3;
    // Get static field: static private System.Single HMD_MOVEMENT_THRESHOLD
    static float _get_HMD_MOVEMENT_THRESHOLD();
    // Set static field: static private System.Single HMD_MOVEMENT_THRESHOLD
    static void _set_HMD_MOVEMENT_THRESHOLD(float value);
    // Get instance field reference: private System.Single _maxDistance
    [[deprecated("Use field access instead!")]] float& dyn__maxDistance();
    // Get instance field reference: private System.Single _minDistance
    [[deprecated("Use field access instead!")]] float& dyn__minDistance();
    // Get instance field reference: private System.Single _minZDistance
    [[deprecated("Use field access instead!")]] float& dyn__minZDistance();
    // Get instance field reference: private OVRCameraRig _cameraRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRCameraRig*& dyn__cameraRig();
    // Get instance field reference: private UnityEngine.Vector3 _panelInitialPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__panelInitialPosition();
    // Get instance field reference: private UnityEngine.Coroutine _coroutine
    [[deprecated("Use field access instead!")]] ::UnityEngine::Coroutine*& dyn__coroutine();
    // Get instance field reference: private UnityEngine.Vector3 _prevPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__prevPos();
    // Get instance field reference: private UnityEngine.Vector3 _lastMovedToPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__lastMovedToPos();
    // private System.Void Awake()
    // Offset: 0x282AD04
    void Awake();
    // private System.Void Update()
    // Offset: 0x282ADA4
    void Update();
    // private UnityEngine.Vector3 CalculateIdealAnchorPosition()
    // Offset: 0x282B0AC
    ::UnityEngine::Vector3 CalculateIdealAnchorPosition();
    // private System.Collections.IEnumerator LerpToHMD()
    // Offset: 0x282B040
    ::System::Collections::IEnumerator* LerpToHMD();
    // public System.Void .ctor()
    // Offset: 0x282B114
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PanelHMDFollower* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::PanelHMDFollower::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PanelHMDFollower*, creationType>()));
    }
  }; // OculusSampleFramework.PanelHMDFollower
  #pragma pack(pop)
  static check_size<sizeof(PanelHMDFollower), 92 + sizeof(::UnityEngine::Vector3)> __OculusSampleFramework_PanelHMDFollowerSizeCheck;
  static_assert(sizeof(PanelHMDFollower) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::PanelHMDFollower::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::PanelHMDFollower::*)()>(&OculusSampleFramework::PanelHMDFollower::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::PanelHMDFollower*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::PanelHMDFollower::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::PanelHMDFollower::*)()>(&OculusSampleFramework::PanelHMDFollower::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::PanelHMDFollower*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::PanelHMDFollower::CalculateIdealAnchorPosition
// Il2CppName: CalculateIdealAnchorPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (OculusSampleFramework::PanelHMDFollower::*)()>(&OculusSampleFramework::PanelHMDFollower::CalculateIdealAnchorPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::PanelHMDFollower*), "CalculateIdealAnchorPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::PanelHMDFollower::LerpToHMD
// Il2CppName: LerpToHMD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (OculusSampleFramework::PanelHMDFollower::*)()>(&OculusSampleFramework::PanelHMDFollower::LerpToHMD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::PanelHMDFollower*), "LerpToHMD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::PanelHMDFollower::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
