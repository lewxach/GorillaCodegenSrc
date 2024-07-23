// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.Locomotion.ILocomotionEventHandler
#include "Oculus/Interaction/Locomotion/ILocomotionEventHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Locomotion
namespace Oculus::Interaction::Locomotion {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Locomotion
namespace Oculus::Interaction::Locomotion {
  // Forward declaring type: PlayerLocomotor
  class PlayerLocomotor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Locomotion::PlayerLocomotor);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Locomotion::PlayerLocomotor*, "Oculus.Interaction.Locomotion", "PlayerLocomotor");
// Type namespace: Oculus.Interaction.Locomotion
namespace Oculus::Interaction::Locomotion {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Locomotion.PlayerLocomotor
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerLocomotor : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*/ {
    public:
    // Nested type: ::Oculus::Interaction::Locomotion::PlayerLocomotor::$$c
    class $$c;
    public:
    // private UnityEngine.Transform _playerOrigin
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* playerOrigin;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _playerHead
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* playerHead;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Action`2<Oculus.Interaction.Locomotion.LocomotionEvent,UnityEngine.Pose> _whenLocomotionEventHandled
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose>* whenLocomotionEventHandled;
    // Field size check
    static_assert(sizeof(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose>*) == 0x8);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x38
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: deferredEvent
    char __padding3[0x7] = {};
    // private System.Collections.Generic.Queue`1<Oculus.Interaction.Locomotion.LocomotionEvent> _deferredEvent
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* deferredEvent;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Locomotion::ILocomotionEventHandler
    operator ::Oculus::Interaction::Locomotion::ILocomotionEventHandler() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>(this);
    }
    // Get instance field reference: private UnityEngine.Transform _playerOrigin
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__playerOrigin();
    // Get instance field reference: private UnityEngine.Transform _playerHead
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__playerHead();
    // Get instance field reference: private System.Action`2<Oculus.Interaction.Locomotion.LocomotionEvent,UnityEngine.Pose> _whenLocomotionEventHandled
    [[deprecated("Use field access instead!")]] ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose>*& dyn__whenLocomotionEventHandled();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // Get instance field reference: private System.Collections.Generic.Queue`1<Oculus.Interaction.Locomotion.LocomotionEvent> _deferredEvent
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& dyn__deferredEvent();
    // public System.Void add_WhenLocomotionEventHandled(System.Action`2<Oculus.Interaction.Locomotion.LocomotionEvent,UnityEngine.Pose> value)
    // Offset: 0x48077CC
    void add_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose>* value);
    // public System.Void remove_WhenLocomotionEventHandled(System.Action`2<Oculus.Interaction.Locomotion.LocomotionEvent,UnityEngine.Pose> value)
    // Offset: 0x4807874
    void remove_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose>* value);
    // protected System.Void Start()
    // Offset: 0x480791C
    void Start();
    // private System.Void OnEnable()
    // Offset: 0x4807954
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x4807A08
    void OnDisable();
    // public System.Void HandleLocomotionEvent(Oculus.Interaction.Locomotion.LocomotionEvent locomotionEvent)
    // Offset: 0x4807A9C
    void HandleLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent locomotionEvent);
    // private System.Void MovePlayer()
    // Offset: 0x4807B20
    void MovePlayer();
    // private System.Void MovePlayer(UnityEngine.Vector3 targetPosition, Oculus.Interaction.Locomotion.LocomotionEvent/TranslationType translationMode)
    // Offset: 0x4807CFC
    void MovePlayer(::UnityEngine::Vector3 targetPosition, ::Oculus::Interaction::Locomotion::LocomotionEvent::TranslationType translationMode);
    // private System.Void RotatePlayer(UnityEngine.Quaternion targetRotation, Oculus.Interaction.Locomotion.LocomotionEvent/RotationType rotationMode)
    // Offset: 0x4807E70
    void RotatePlayer(::UnityEngine::Quaternion targetRotation, ::Oculus::Interaction::Locomotion::LocomotionEvent::RotationType rotationMode);
    // public System.Void InjectAllPlayerLocomotor(UnityEngine.Transform playerOrigin, UnityEngine.Transform playerHead)
    // Offset: 0x48083D0
    void InjectAllPlayerLocomotor(::UnityEngine::Transform* playerOrigin, ::UnityEngine::Transform* playerHead);
    // public System.Void InjectPlayerOrigin(UnityEngine.Transform playerOrigin)
    // Offset: 0x4808400
    void InjectPlayerOrigin(::UnityEngine::Transform* playerOrigin);
    // public System.Void InjectPlayerHead(UnityEngine.Transform playerHead)
    // Offset: 0x4808408
    void InjectPlayerHead(::UnityEngine::Transform* playerHead);
    // public System.Void .ctor()
    // Offset: 0x4808410
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerLocomotor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Locomotion::PlayerLocomotor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerLocomotor*, creationType>()));
    }
  }; // Oculus.Interaction.Locomotion.PlayerLocomotor
  #pragma pack(pop)
  static check_size<sizeof(PlayerLocomotor), 64 + sizeof(::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)> __Oculus_Interaction_Locomotion_PlayerLocomotorSizeCheck;
  static_assert(sizeof(PlayerLocomotor) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::PlayerLocomotor::add_WhenLocomotionEventHandled
// Il2CppName: add_WhenLocomotionEventHandled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose>*)>(&Oculus::Interaction::Locomotion::PlayerLocomotor::add_WhenLocomotionEventHandled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction.Locomotion", "LocomotionEvent"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::PlayerLocomotor*), "add_WhenLocomotionEventHandled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::PlayerLocomotor::remove_WhenLocomotionEventHandled
// Il2CppName: remove_WhenLocomotionEventHandled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose>*)>(&Oculus::Interaction::Locomotion::PlayerLocomotor::remove_WhenLocomotionEventHandled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction.Locomotion", "LocomotionEvent"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::PlayerLocomotor*), "remove_WhenLocomotionEventHandled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::PlayerLocomotor::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::PlayerLocomotor::*)()>(&Oculus::Interaction::Locomotion::PlayerLocomotor::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::PlayerLocomotor*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::PlayerLocomotor::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::PlayerLocomotor::*)()>(&Oculus::Interaction::Locomotion::PlayerLocomotor::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::PlayerLocomotor*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::PlayerLocomotor::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::PlayerLocomotor::*)()>(&Oculus::Interaction::Locomotion::PlayerLocomotor::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::PlayerLocomotor*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::PlayerLocomotor::HandleLocomotionEvent
// Il2CppName: HandleLocomotionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&Oculus::Interaction::Locomotion::PlayerLocomotor::HandleLocomotionEvent)> {
  static const MethodInfo* get() {
    static auto* locomotionEvent = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Locomotion", "LocomotionEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::PlayerLocomotor*), "HandleLocomotionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{locomotionEvent});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::PlayerLocomotor::MovePlayer
// Il2CppName: MovePlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::PlayerLocomotor::*)()>(&Oculus::Interaction::Locomotion::PlayerLocomotor::MovePlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::PlayerLocomotor*), "MovePlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::PlayerLocomotor::MovePlayer
// Il2CppName: MovePlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::UnityEngine::Vector3, ::Oculus::Interaction::Locomotion::LocomotionEvent::TranslationType)>(&Oculus::Interaction::Locomotion::PlayerLocomotor::MovePlayer)> {
  static const MethodInfo* get() {
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* translationMode = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Locomotion", "LocomotionEvent/TranslationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::PlayerLocomotor*), "MovePlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPosition, translationMode});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::PlayerLocomotor::RotatePlayer
// Il2CppName: RotatePlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::UnityEngine::Quaternion, ::Oculus::Interaction::Locomotion::LocomotionEvent::RotationType)>(&Oculus::Interaction::Locomotion::PlayerLocomotor::RotatePlayer)> {
  static const MethodInfo* get() {
    static auto* targetRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* rotationMode = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Locomotion", "LocomotionEvent/RotationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::PlayerLocomotor*), "RotatePlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetRotation, rotationMode});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::PlayerLocomotor::InjectAllPlayerLocomotor
// Il2CppName: InjectAllPlayerLocomotor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&Oculus::Interaction::Locomotion::PlayerLocomotor::InjectAllPlayerLocomotor)> {
  static const MethodInfo* get() {
    static auto* playerOrigin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* playerHead = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::PlayerLocomotor*), "InjectAllPlayerLocomotor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerOrigin, playerHead});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::PlayerLocomotor::InjectPlayerOrigin
// Il2CppName: InjectPlayerOrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::UnityEngine::Transform*)>(&Oculus::Interaction::Locomotion::PlayerLocomotor::InjectPlayerOrigin)> {
  static const MethodInfo* get() {
    static auto* playerOrigin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::PlayerLocomotor*), "InjectPlayerOrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerOrigin});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::PlayerLocomotor::InjectPlayerHead
// Il2CppName: InjectPlayerHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::UnityEngine::Transform*)>(&Oculus::Interaction::Locomotion::PlayerLocomotor::InjectPlayerHead)> {
  static const MethodInfo* get() {
    static auto* playerHead = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::PlayerLocomotor*), "InjectPlayerHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerHead});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::PlayerLocomotor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!