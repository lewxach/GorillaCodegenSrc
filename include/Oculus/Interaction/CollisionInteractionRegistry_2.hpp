// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.InteractableRegistry`2
#include "Oculus/Interaction/InteractableRegistry_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: Interactor`2<TInteractor, TInteractable>
  template<typename TInteractor, typename TInteractable>
  class Interactor_2;
  // Forward declaring type: IRigidbodyRef
  class IRigidbodyRef;
  // Forward declaring type: Interactable`2<TInteractor, TInteractable>
  template<typename TInteractor, typename TInteractable>
  class Interactable_2;
  // Forward declaring type: InteractableTriggerBroadcaster
  class InteractableTriggerBroadcaster;
  // Forward declaring type: IInteractable
  class IInteractable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: CollisionInteractionRegistry`2<TInteractor, TInteractable>
  template<typename TInteractor, typename TInteractable>
  class CollisionInteractionRegistry_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Interaction::CollisionInteractionRegistry_2, "Oculus.Interaction", "CollisionInteractionRegistry`2");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.CollisionInteractionRegistry`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TInteractor, typename TInteractable>
  class CollisionInteractionRegistry_2 : public ::Oculus::Interaction::InteractableRegistry_2<TInteractor, TInteractable> {
    public:
    public:
    // private System.Collections.Generic.Dictionary`2<UnityEngine.Rigidbody,System.Collections.Generic.HashSet`1<TInteractable>> _rigidbodyCollisionMap
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rigidbody*, ::System::Collections::Generic::HashSet_1<TInteractable>*>* rigidbodyCollisionMap;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::Rigidbody*, ::System::Collections::Generic::HashSet_1<TInteractable>*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<TInteractable,Oculus.Interaction.InteractableTriggerBroadcaster> _broadcasters
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<TInteractable, ::Oculus::Interaction::InteractableTriggerBroadcaster*>* broadcasters;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<TInteractable, ::Oculus::Interaction::InteractableTriggerBroadcaster*>*) == 0x8);
    public:
    // Autogenerated static field getter
    // Get static field: static private readonly Oculus.Interaction.InteractableRegistry`2/InteractableSet<TInteractor,TInteractable> _empty
    static typename ::Oculus::Interaction::InteractableRegistry_2<TInteractor, TInteractable>::InteractableSet _get__empty() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::CollisionInteractionRegistry_2::_get__empty");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename ::Oculus::Interaction::InteractableRegistry_2<TInteractor, TInteractable>::InteractableSet>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<CollisionInteractionRegistry_2<TInteractor, TInteractable>*>::get(), "_empty")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly Oculus.Interaction.InteractableRegistry`2/InteractableSet<TInteractor,TInteractable> _empty
    static void _set__empty(typename ::Oculus::Interaction::InteractableRegistry_2<TInteractor, TInteractable>::InteractableSet value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::CollisionInteractionRegistry_2::_set__empty");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<CollisionInteractionRegistry_2<TInteractor, TInteractable>*>::get(), "_empty", value)));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Dictionary`2<UnityEngine.Rigidbody,System.Collections.Generic.HashSet`1<TInteractable>> _rigidbodyCollisionMap
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rigidbody*, ::System::Collections::Generic::HashSet_1<TInteractable>*>*& dyn__rigidbodyCollisionMap() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::CollisionInteractionRegistry_2::dyn__rigidbodyCollisionMap");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_rigidbodyCollisionMap"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::Rigidbody*, ::System::Collections::Generic::HashSet_1<TInteractable>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Dictionary`2<TInteractable,Oculus.Interaction.InteractableTriggerBroadcaster> _broadcasters
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<TInteractable, ::Oculus::Interaction::InteractableTriggerBroadcaster*>*& dyn__broadcasters() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::CollisionInteractionRegistry_2::dyn__broadcasters");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_broadcasters"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<TInteractable, ::Oculus::Interaction::InteractableTriggerBroadcaster*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private System.Void HandleTriggerEntered(Oculus.Interaction.IInteractable interactable, UnityEngine.Rigidbody rigidbody)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleTriggerEntered(::Oculus::Interaction::IInteractable* interactable, ::UnityEngine::Rigidbody* rigidbody) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::CollisionInteractionRegistry_2::HandleTriggerEntered");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandleTriggerEntered", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(interactable), ::il2cpp_utils::ExtractType(rigidbody)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, interactable, rigidbody);
    }
    // private System.Void HandleTriggerExited(Oculus.Interaction.IInteractable interactable, UnityEngine.Rigidbody rigidbody)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleTriggerExited(::Oculus::Interaction::IInteractable* interactable, ::UnityEngine::Rigidbody* rigidbody) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::CollisionInteractionRegistry_2::HandleTriggerExited");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandleTriggerExited", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(interactable), ::il2cpp_utils::ExtractType(rigidbody)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, interactable, rigidbody);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::CollisionInteractionRegistry_2::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<CollisionInteractionRegistry_2<TInteractor, TInteractable>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Oculus.Interaction.InteractableRegistry`2
    // Base method: System.Void InteractableRegistry_2::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CollisionInteractionRegistry_2<TInteractor, TInteractable>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::CollisionInteractionRegistry_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CollisionInteractionRegistry_2<TInteractor, TInteractable>*, creationType>()));
    }
    // public override System.Void Register(TInteractable interactable)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Oculus.Interaction.InteractableRegistry`2
    // Base method: System.Void InteractableRegistry_2::Register(TInteractable interactable)
    void Register(TInteractable interactable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::CollisionInteractionRegistry_2::Register");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::InteractableRegistry_2<TInteractor, TInteractable>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, interactable);
    }
    // public override System.Void Unregister(TInteractable interactable)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Oculus.Interaction.InteractableRegistry`2
    // Base method: System.Void InteractableRegistry_2::Unregister(TInteractable interactable)
    void Unregister(TInteractable interactable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::CollisionInteractionRegistry_2::Unregister");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::InteractableRegistry_2<TInteractor, TInteractable>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, interactable);
    }
    // public override Oculus.Interaction.InteractableRegistry`2/InteractableSet<TInteractor,TInteractable> List(TInteractor interactor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Oculus.Interaction.InteractableRegistry`2
    // Base method: Oculus.Interaction.InteractableRegistry`2/InteractableSet<TInteractor,TInteractable> InteractableRegistry_2::List(TInteractor interactor)
    typename ::Oculus::Interaction::InteractableRegistry_2<TInteractor, TInteractable>::InteractableSet List(TInteractor interactor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::CollisionInteractionRegistry_2::List");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::InteractableRegistry_2<TInteractor, TInteractable>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<typename ::Oculus::Interaction::InteractableRegistry_2<TInteractor, TInteractable>::InteractableSet, false>(this, ___internal__method, interactor);
    }
  }; // Oculus.Interaction.CollisionInteractionRegistry`2
  // Could not write size check! Type: Oculus.Interaction.CollisionInteractionRegistry`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"