// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRLipSyncMicInput
  class OVRLipSyncMicInput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRLipSyncMicInput);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLipSyncMicInput*, "", "OVRLipSyncMicInput");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x56
  #pragma pack(push, 1)
  // Autogenerated type: OVRLipSyncMicInput
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class OVRLipSyncMicInput : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OVRLipSyncMicInput::micActivation
    struct micActivation;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRLipSyncMicInput/micActivation
    // [TokenAttribute] Offset: FFFFFFFF
    struct micActivation/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: micActivation
      constexpr micActivation(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRLipSyncMicInput/micActivation HoldToSpeak
      static constexpr const int HoldToSpeak = 0;
      // Get static field: static public OVRLipSyncMicInput/micActivation HoldToSpeak
      static ::GlobalNamespace::OVRLipSyncMicInput::micActivation _get_HoldToSpeak();
      // Set static field: static public OVRLipSyncMicInput/micActivation HoldToSpeak
      static void _set_HoldToSpeak(::GlobalNamespace::OVRLipSyncMicInput::micActivation value);
      // static field const value: static public OVRLipSyncMicInput/micActivation PushToSpeak
      static constexpr const int PushToSpeak = 1;
      // Get static field: static public OVRLipSyncMicInput/micActivation PushToSpeak
      static ::GlobalNamespace::OVRLipSyncMicInput::micActivation _get_PushToSpeak();
      // Set static field: static public OVRLipSyncMicInput/micActivation PushToSpeak
      static void _set_PushToSpeak(::GlobalNamespace::OVRLipSyncMicInput::micActivation value);
      // static field const value: static public OVRLipSyncMicInput/micActivation ConstantSpeak
      static constexpr const int ConstantSpeak = 2;
      // Get static field: static public OVRLipSyncMicInput/micActivation ConstantSpeak
      static ::GlobalNamespace::OVRLipSyncMicInput::micActivation _get_ConstantSpeak();
      // Set static field: static public OVRLipSyncMicInput/micActivation ConstantSpeak
      static void _set_ConstantSpeak(::GlobalNamespace::OVRLipSyncMicInput::micActivation value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // OVRLipSyncMicInput/micActivation
    #pragma pack(pop)
    static check_size<sizeof(OVRLipSyncMicInput::micActivation), 0 + sizeof(int)> __GlobalNamespace_OVRLipSyncMicInput_micActivationSizeCheck;
    static_assert(sizeof(OVRLipSyncMicInput::micActivation) == 0x4);
    public:
    // public UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // public System.Boolean enableMicSelectionGUI
    // Size: 0x1
    // Offset: 0x28
    bool enableMicSelectionGUI;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enableMicSelectionGUI and: micSelectionGUIKey
    char __padding1[0x3] = {};
    // public UnityEngine.KeyCode micSelectionGUIKey
    // Size: 0x4
    // Offset: 0x2C
    ::UnityEngine::KeyCode micSelectionGUIKey;
    // Field size check
    static_assert(sizeof(::UnityEngine::KeyCode) == 0x4);
    // private System.Single micInputVolume
    // Size: 0x4
    // Offset: 0x30
    float micInputVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 micFrequency
    // Size: 0x4
    // Offset: 0x34
    int micFrequency;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public OVRLipSyncMicInput/micActivation micControl
    // Size: 0x4
    // Offset: 0x38
    ::GlobalNamespace::OVRLipSyncMicInput::micActivation micControl;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRLipSyncMicInput::micActivation) == 0x4);
    // public UnityEngine.KeyCode micActivationKey
    // Size: 0x4
    // Offset: 0x3C
    ::UnityEngine::KeyCode micActivationKey;
    // Field size check
    static_assert(sizeof(::UnityEngine::KeyCode) == 0x4);
    // public System.String selectedDevice
    // Size: 0x8
    // Offset: 0x40
    ::StringW selectedDevice;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean micSelected
    // Size: 0x1
    // Offset: 0x48
    bool micSelected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: micSelected and: minFreq
    char __padding8[0x3] = {};
    // private System.Int32 minFreq
    // Size: 0x4
    // Offset: 0x4C
    int minFreq;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 maxFreq
    // Size: 0x4
    // Offset: 0x50
    int maxFreq;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean focused
    // Size: 0x1
    // Offset: 0x54
    bool focused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean initialized
    // Size: 0x1
    // Offset: 0x55
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.AudioSource audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioSource();
    // Get instance field reference: public System.Boolean enableMicSelectionGUI
    [[deprecated("Use field access instead!")]] bool& dyn_enableMicSelectionGUI();
    // Get instance field reference: public UnityEngine.KeyCode micSelectionGUIKey
    [[deprecated("Use field access instead!")]] ::UnityEngine::KeyCode& dyn_micSelectionGUIKey();
    // Get instance field reference: private System.Single micInputVolume
    [[deprecated("Use field access instead!")]] float& dyn_micInputVolume();
    // Get instance field reference: private System.Int32 micFrequency
    [[deprecated("Use field access instead!")]] int& dyn_micFrequency();
    // Get instance field reference: public OVRLipSyncMicInput/micActivation micControl
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRLipSyncMicInput::micActivation& dyn_micControl();
    // Get instance field reference: public UnityEngine.KeyCode micActivationKey
    [[deprecated("Use field access instead!")]] ::UnityEngine::KeyCode& dyn_micActivationKey();
    // Get instance field reference: public System.String selectedDevice
    [[deprecated("Use field access instead!")]] ::StringW& dyn_selectedDevice();
    // Get instance field reference: private System.Boolean micSelected
    [[deprecated("Use field access instead!")]] bool& dyn_micSelected();
    // Get instance field reference: private System.Int32 minFreq
    [[deprecated("Use field access instead!")]] int& dyn_minFreq();
    // Get instance field reference: private System.Int32 maxFreq
    [[deprecated("Use field access instead!")]] int& dyn_maxFreq();
    // Get instance field reference: private System.Boolean focused
    [[deprecated("Use field access instead!")]] bool& dyn_focused();
    // Get instance field reference: private System.Boolean initialized
    [[deprecated("Use field access instead!")]] bool& dyn_initialized();
    // public System.Single get_MicFrequency()
    // Offset: 0x484C7F8
    float get_MicFrequency();
    // public System.Void set_MicFrequency(System.Single value)
    // Offset: 0x484C804
    void set_MicFrequency(float value);
    // private System.Void Awake()
    // Offset: 0x484C83C
    void Awake();
    // private System.Void Start()
    // Offset: 0x484C8F8
    void Start();
    // private System.Void InitializeMicrophone()
    // Offset: 0x484C938
    void InitializeMicrophone();
    // private System.Void Update()
    // Offset: 0x484CA78
    void Update();
    // private System.Void OnApplicationFocus(System.Boolean focus)
    // Offset: 0x484CECC
    void OnApplicationFocus(bool focus);
    // private System.Void OnApplicationPause(System.Boolean pauseStatus)
    // Offset: 0x484CEE0
    void OnApplicationPause(bool pauseStatus);
    // private System.Void OnDisable()
    // Offset: 0x484CEF8
    void OnDisable();
    // private System.Void OnGUI()
    // Offset: 0x484CEFC
    void OnGUI();
    // public System.Void MicDeviceGUI(System.Single left, System.Single top, System.Single width, System.Single height, System.Single buttonSpaceTop, System.Single buttonSpaceLeft)
    // Offset: 0x484CF70
    void MicDeviceGUI(float left, float top, float width, float height, float buttonSpaceTop, float buttonSpaceLeft);
    // public System.Void GetMicCaps()
    // Offset: 0x484C9C0
    void GetMicCaps();
    // public System.Void StartMicrophone()
    // Offset: 0x484CD44
    void StartMicrophone();
    // public System.Void StopMicrophone()
    // Offset: 0x484CC08
    void StopMicrophone();
    // private System.Single GetAveragedVolume()
    // Offset: 0x484D130
    float GetAveragedVolume();
    // public System.Void .ctor()
    // Offset: 0x484D138
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRLipSyncMicInput* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRLipSyncMicInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRLipSyncMicInput*, creationType>()));
    }
  }; // OVRLipSyncMicInput
  #pragma pack(pop)
  static check_size<sizeof(OVRLipSyncMicInput), 85 + sizeof(bool)> __GlobalNamespace_OVRLipSyncMicInputSizeCheck;
  static_assert(sizeof(OVRLipSyncMicInput) == 0x56);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLipSyncMicInput::micActivation, "", "OVRLipSyncMicInput/micActivation");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::get_MicFrequency
// Il2CppName: get_MicFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRLipSyncMicInput::*)()>(&GlobalNamespace::OVRLipSyncMicInput::get_MicFrequency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "get_MicFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::set_MicFrequency
// Il2CppName: set_MicFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncMicInput::*)(float)>(&GlobalNamespace::OVRLipSyncMicInput::set_MicFrequency)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "set_MicFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncMicInput::*)()>(&GlobalNamespace::OVRLipSyncMicInput::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncMicInput::*)()>(&GlobalNamespace::OVRLipSyncMicInput::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::InitializeMicrophone
// Il2CppName: InitializeMicrophone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncMicInput::*)()>(&GlobalNamespace::OVRLipSyncMicInput::InitializeMicrophone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "InitializeMicrophone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncMicInput::*)()>(&GlobalNamespace::OVRLipSyncMicInput::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::OnApplicationFocus
// Il2CppName: OnApplicationFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncMicInput::*)(bool)>(&GlobalNamespace::OVRLipSyncMicInput::OnApplicationFocus)> {
  static const MethodInfo* get() {
    static auto* focus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "OnApplicationFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{focus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::OnApplicationPause
// Il2CppName: OnApplicationPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncMicInput::*)(bool)>(&GlobalNamespace::OVRLipSyncMicInput::OnApplicationPause)> {
  static const MethodInfo* get() {
    static auto* pauseStatus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "OnApplicationPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pauseStatus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncMicInput::*)()>(&GlobalNamespace::OVRLipSyncMicInput::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncMicInput::*)()>(&GlobalNamespace::OVRLipSyncMicInput::OnGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::MicDeviceGUI
// Il2CppName: MicDeviceGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncMicInput::*)(float, float, float, float, float, float)>(&GlobalNamespace::OVRLipSyncMicInput::MicDeviceGUI)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* top = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* buttonSpaceTop = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* buttonSpaceLeft = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "MicDeviceGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, top, width, height, buttonSpaceTop, buttonSpaceLeft});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::GetMicCaps
// Il2CppName: GetMicCaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncMicInput::*)()>(&GlobalNamespace::OVRLipSyncMicInput::GetMicCaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "GetMicCaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::StartMicrophone
// Il2CppName: StartMicrophone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncMicInput::*)()>(&GlobalNamespace::OVRLipSyncMicInput::StartMicrophone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "StartMicrophone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::StopMicrophone
// Il2CppName: StopMicrophone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncMicInput::*)()>(&GlobalNamespace::OVRLipSyncMicInput::StopMicrophone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "StopMicrophone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::GetAveragedVolume
// Il2CppName: GetAveragedVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRLipSyncMicInput::*)()>(&GlobalNamespace::OVRLipSyncMicInput::GetAveragedVolume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncMicInput*), "GetAveragedVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncMicInput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!