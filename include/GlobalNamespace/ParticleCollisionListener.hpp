// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleCollisionEvent
#include "UnityEngine/ParticleCollisionEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ParticleCollisionListener
  class ParticleCollisionListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ParticleCollisionListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleCollisionListener*, "", "ParticleCollisionListener");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ParticleCollisionListener
  // [TokenAttribute] Offset: FFFFFFFF
  class ParticleCollisionListener : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.ParticleSystem target
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::ParticleSystem* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent> _events
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>* events;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.ParticleSystem target
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_target();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent> _events
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*& dyn__events();
    // private System.Void Awake()
    // Offset: 0x27500FC
    void Awake();
    // protected System.Void OnCollisionEvent(UnityEngine.ParticleCollisionEvent ev)
    // Offset: 0x2750178
    void OnCollisionEvent(::UnityEngine::ParticleCollisionEvent ev);
    // public System.Void OnParticleCollision(UnityEngine.GameObject other)
    // Offset: 0x275017C
    void OnParticleCollision(::UnityEngine::GameObject* other);
    // public System.Void .ctor()
    // Offset: 0x2750248
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParticleCollisionListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ParticleCollisionListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParticleCollisionListener*, creationType>()));
    }
  }; // ParticleCollisionListener
  #pragma pack(pop)
  static check_size<sizeof(ParticleCollisionListener), 40 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*)> __GlobalNamespace_ParticleCollisionListenerSizeCheck;
  static_assert(sizeof(ParticleCollisionListener) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ParticleCollisionListener::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleCollisionListener::*)()>(&GlobalNamespace::ParticleCollisionListener::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleCollisionListener*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleCollisionListener::OnCollisionEvent
// Il2CppName: OnCollisionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleCollisionListener::*)(::UnityEngine::ParticleCollisionEvent)>(&GlobalNamespace::ParticleCollisionListener::OnCollisionEvent)> {
  static const MethodInfo* get() {
    static auto* ev = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleCollisionEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleCollisionListener*), "OnCollisionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ev});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleCollisionListener::OnParticleCollision
// Il2CppName: OnParticleCollision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleCollisionListener::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::ParticleCollisionListener::OnParticleCollision)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleCollisionListener*), "OnParticleCollision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleCollisionListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
