// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MicrophoneCosmetic
  class MicrophoneCosmetic;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MicrophoneCosmetic);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MicrophoneCosmetic*, "", "MicrophoneCosmetic");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MicrophoneCosmetic
  // [TokenAttribute] Offset: FFFFFFFF
  class MicrophoneCosmetic : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Transform mouthTransform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* mouthTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector2 mouthProximityRampRange
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Vector2 mouthProximityRampRange;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Single[] zero
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<float> zero;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Transform mouthTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_mouthTransform();
    // Get instance field reference: private UnityEngine.Vector2 mouthProximityRampRange
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_mouthProximityRampRange();
    // Get instance field reference: private UnityEngine.AudioSource audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioSource();
    // Get instance field reference: private System.Single[] zero
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_zero();
    // private System.Void Awake()
    // Offset: 0x2789444
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x2789598
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x2789690
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x27896AC
    void Update();
    // private System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0x278984C
    void OnAudioFilterRead(::ArrayW<float> data, int channels);
    // public System.Void .ctor()
    // Offset: 0x2789850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MicrophoneCosmetic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MicrophoneCosmetic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MicrophoneCosmetic*, creationType>()));
    }
  }; // MicrophoneCosmetic
  #pragma pack(pop)
  static check_size<sizeof(MicrophoneCosmetic), 56 + sizeof(::ArrayW<float>)> __GlobalNamespace_MicrophoneCosmeticSizeCheck;
  static_assert(sizeof(MicrophoneCosmetic) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MicrophoneCosmetic::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MicrophoneCosmetic::*)()>(&GlobalNamespace::MicrophoneCosmetic::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MicrophoneCosmetic*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MicrophoneCosmetic::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MicrophoneCosmetic::*)()>(&GlobalNamespace::MicrophoneCosmetic::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MicrophoneCosmetic*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MicrophoneCosmetic::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MicrophoneCosmetic::*)()>(&GlobalNamespace::MicrophoneCosmetic::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MicrophoneCosmetic*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MicrophoneCosmetic::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MicrophoneCosmetic::*)()>(&GlobalNamespace::MicrophoneCosmetic::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MicrophoneCosmetic*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MicrophoneCosmetic::OnAudioFilterRead
// Il2CppName: OnAudioFilterRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MicrophoneCosmetic::*)(::ArrayW<float>, int)>(&GlobalNamespace::MicrophoneCosmetic::OnAudioFilterRead)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MicrophoneCosmetic*), "OnAudioFilterRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, channels});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MicrophoneCosmetic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!