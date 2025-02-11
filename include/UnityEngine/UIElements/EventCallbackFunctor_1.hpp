// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.EventCallbackFunctorBase
#include "UnityEngine/UIElements/EventCallbackFunctorBase.hpp"
// Including type: UnityEngine.UIElements.PropagationPhase
#include "UnityEngine/UIElements/PropagationPhase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: EventBase`1<T>
  template<typename T>
  class EventBase_1;
  // Forward declaring type: EventCallback`1<TEventType>
  template<typename TEventType>
  class EventCallback_1;
  // Forward declaring type: EventBase
  class EventBase;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: EventCallbackFunctor`1<TEventType>
  template<typename TEventType>
  class EventCallbackFunctor_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::EventCallbackFunctor_1, "UnityEngine.UIElements", "EventCallbackFunctor`1");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.EventCallbackFunctor`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TEventType>
  class EventCallbackFunctor_1 : public ::UnityEngine::UIElements::EventCallbackFunctorBase {
    public:
    public:
    // private readonly UnityEngine.UIElements.EventCallback`1<TEventType> m_Callback
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::EventCallback_1<TEventType>* m_Callback;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::EventCallback_1<TEventType>*) == 0x8);
    // private readonly System.Int64 m_EventTypeId
    // Size: 0x8
    // Offset: 0x0
    int64_t m_EventTypeId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly UnityEngine.UIElements.EventCallback`1<TEventType> m_Callback
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::EventCallback_1<TEventType>*& dyn_m_Callback() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::EventCallbackFunctor_1::dyn_m_Callback");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Callback"))->offset;
      return *reinterpret_cast<::UnityEngine::UIElements::EventCallback_1<TEventType>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Int64 m_EventTypeId
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_EventTypeId() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::EventCallbackFunctor_1::dyn_m_EventTypeId");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_EventTypeId"))->offset;
      return *reinterpret_cast<int64_t*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(UnityEngine.UIElements.EventCallback`1<TEventType> callback, UnityEngine.UIElements.CallbackPhase phase, UnityEngine.UIElements.InvokePolicy invokePolicy)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventCallbackFunctor_1<TEventType>* New_ctor(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::CallbackPhase phase, ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::EventCallbackFunctor_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventCallbackFunctor_1<TEventType>*, creationType>(callback, phase, invokePolicy)));
    }
    // public override System.Void Invoke(UnityEngine.UIElements.EventBase evt, UnityEngine.UIElements.PropagationPhase propagationPhase)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.EventCallbackFunctorBase
    // Base method: System.Void EventCallbackFunctorBase::Invoke(UnityEngine.UIElements.EventBase evt, UnityEngine.UIElements.PropagationPhase propagationPhase)
    void Invoke(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::PropagationPhase propagationPhase) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::EventCallbackFunctor_1::Invoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::EventCallbackFunctorBase*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, evt, propagationPhase);
    }
    // public override System.Boolean IsEquivalentTo(System.Int64 eventTypeId, System.Delegate callback, UnityEngine.UIElements.CallbackPhase phase)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.EventCallbackFunctorBase
    // Base method: System.Boolean EventCallbackFunctorBase::IsEquivalentTo(System.Int64 eventTypeId, System.Delegate callback, UnityEngine.UIElements.CallbackPhase phase)
    bool IsEquivalentTo(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::CallbackPhase phase) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::EventCallbackFunctor_1::IsEquivalentTo");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::EventCallbackFunctorBase*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, eventTypeId, callback, phase);
    }
  }; // UnityEngine.UIElements.EventCallbackFunctor`1
  // Could not write size check! Type: UnityEngine.UIElements.EventCallbackFunctor`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
