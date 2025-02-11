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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HauntedObject
  class HauntedObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HauntedObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HauntedObject*, "", "HauntedObject");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: HauntedObject
  // [TokenAttribute] Offset: FFFFFFFF
  class HauntedObject : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::HauntedObject::$Shake$d__19
    class $Shake$d__19;
    // Nested type: ::GlobalNamespace::HauntedObject::$TurnOff$d__20
    class $TurnOff$d__20;
    public:
    // public System.Boolean rattle
    // Size: 0x1
    // Offset: 0x20
    bool rattle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: rattle and: speed
    char __padding0[0x3] = {};
    // public System.Single speed
    // Size: 0x4
    // Offset: 0x24
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single amount
    // Size: 0x4
    // Offset: 0x28
    float amount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single duration
    // Size: 0x4
    // Offset: 0x2C
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.GameObject FBXprefab
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* FBXprefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject TurnOffLight
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* TurnOffLight;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Single TurnOffDuration
    // Size: 0x4
    // Offset: 0x40
    float TurnOffDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 initialPos
    // Size: 0xC
    // Offset: 0x44
    ::UnityEngine::Vector3 initialPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single passedTime
    // Size: 0x4
    // Offset: 0x50
    float passedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single lightPassedTime
    // Size: 0x4
    // Offset: 0x54
    float lightPassedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.GameObject lurkerGhost
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::GameObject* lurkerGhost;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject wanderingGhost
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::GameObject* wanderingGhost;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Animator[] animators
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::UnityEngine::Animator*> animators;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Animator*>) == 0x8);
    // private UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // public UnityEngine.AudioClip hauntedSound
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::AudioClip* hauntedSound;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean rattle
    [[deprecated("Use field access instead!")]] bool& dyn_rattle();
    // Get instance field reference: public System.Single speed
    [[deprecated("Use field access instead!")]] float& dyn_speed();
    // Get instance field reference: public System.Single amount
    [[deprecated("Use field access instead!")]] float& dyn_amount();
    // Get instance field reference: public System.Single duration
    [[deprecated("Use field access instead!")]] float& dyn_duration();
    // Get instance field reference: public UnityEngine.GameObject FBXprefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_FBXprefab();
    // Get instance field reference: public UnityEngine.GameObject TurnOffLight
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_TurnOffLight();
    // Get instance field reference: public System.Single TurnOffDuration
    [[deprecated("Use field access instead!")]] float& dyn_TurnOffDuration();
    // Get instance field reference: private UnityEngine.Vector3 initialPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_initialPos();
    // Get instance field reference: private System.Single passedTime
    [[deprecated("Use field access instead!")]] float& dyn_passedTime();
    // Get instance field reference: private System.Single lightPassedTime
    [[deprecated("Use field access instead!")]] float& dyn_lightPassedTime();
    // Get instance field reference: private UnityEngine.GameObject lurkerGhost
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_lurkerGhost();
    // Get instance field reference: private UnityEngine.GameObject wanderingGhost
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_wanderingGhost();
    // Get instance field reference: private UnityEngine.Animator[] animators
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Animator*>& dyn_animators();
    // Get instance field reference: private UnityEngine.AudioSource audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioSource();
    // Get instance field reference: public UnityEngine.AudioClip hauntedSound
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_hauntedSound();
    // private System.Void Awake()
    // Offset: 0x2725820
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x2725B14
    void OnDestroy();
    // private System.Void Start()
    // Offset: 0x2725D6C
    void Start();
    // private System.Void TriggerEffects(UnityEngine.GameObject go)
    // Offset: 0x2725DA0
    void TriggerEffects(::UnityEngine::GameObject* go);
    // private System.Collections.IEnumerator Shake()
    // Offset: 0x2726000
    ::System::Collections::IEnumerator* Shake();
    // private System.Collections.IEnumerator TurnOff()
    // Offset: 0x2726094
    ::System::Collections::IEnumerator* TurnOff();
    // public System.Void .ctor()
    // Offset: 0x2726128
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HauntedObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HauntedObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HauntedObject*, creationType>()));
    }
  }; // HauntedObject
  #pragma pack(pop)
  static check_size<sizeof(HauntedObject), 120 + sizeof(::UnityEngine::AudioClip*)> __GlobalNamespace_HauntedObjectSizeCheck;
  static_assert(sizeof(HauntedObject) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HauntedObject::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HauntedObject::*)()>(&GlobalNamespace::HauntedObject::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HauntedObject*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HauntedObject::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HauntedObject::*)()>(&GlobalNamespace::HauntedObject::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HauntedObject*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HauntedObject::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HauntedObject::*)()>(&GlobalNamespace::HauntedObject::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HauntedObject*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HauntedObject::TriggerEffects
// Il2CppName: TriggerEffects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HauntedObject::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::HauntedObject::TriggerEffects)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HauntedObject*), "TriggerEffects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HauntedObject::Shake
// Il2CppName: Shake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::HauntedObject::*)()>(&GlobalNamespace::HauntedObject::Shake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HauntedObject*), "Shake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HauntedObject::TurnOff
// Il2CppName: TurnOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::HauntedObject::*)()>(&GlobalNamespace::HauntedObject::TurnOff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HauntedObject*), "TurnOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HauntedObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
