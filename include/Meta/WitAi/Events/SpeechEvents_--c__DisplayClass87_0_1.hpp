// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Events.SpeechEvents
#include "Meta/WitAi/Events/SpeechEvents.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent`1<T0>
  template<typename T0>
  class UnityEvent_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::WitAi::Events::SpeechEvents::$$c__DisplayClass87_0_1, "Meta.WitAi.Events", "SpeechEvents/<>c__DisplayClass87_0`1");
// Type namespace: Meta.WitAi.Events
namespace Meta::WitAi::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass87_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class SpeechEvents::$$c__DisplayClass87_0_1 : public ::Il2CppObject {
    public:
    public:
    // public Meta.WitAi.Events.SpeechEvents <>4__this
    // Size: 0x8
    // Offset: 0x0
    ::Meta::WitAi::Events::SpeechEvents* $$4__this;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Events::SpeechEvents*) == 0x8);
    // public System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<T>> getEvent
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<::Meta::WitAi::Events::SpeechEvents*, ::UnityEngine::Events::UnityEvent_1<T>*>* getEvent;
    // Field size check
    static_assert(sizeof(::System::Func_2<::Meta::WitAi::Events::SpeechEvents*, ::UnityEngine::Events::UnityEvent_1<T>*>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public Meta.WitAi.Events.SpeechEvents <>4__this
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Events::SpeechEvents*& dyn_$$4__this() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Events::SpeechEvents::$$c__DisplayClass87_0_1::dyn_$$4__this");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
      return *reinterpret_cast<::Meta::WitAi::Events::SpeechEvents**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<T>> getEvent
    [[deprecated("Use field access instead!")]] ::System::Func_2<::Meta::WitAi::Events::SpeechEvents*, ::UnityEngine::Events::UnityEvent_1<T>*>*& dyn_getEvent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Events::SpeechEvents::$$c__DisplayClass87_0_1::dyn_getEvent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "getEvent"))->offset;
      return *reinterpret_cast<::System::Func_2<::Meta::WitAi::Events::SpeechEvents*, ::UnityEngine::Events::UnityEvent_1<T>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpeechEvents::$$c__DisplayClass87_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Events::SpeechEvents::$$c__DisplayClass87_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpeechEvents::$$c__DisplayClass87_0_1<T>*, creationType>()));
    }
    // System.Void <SetEvent>b__0(T param)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $SetEvent$b__0(T param) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Events::SpeechEvents::$$c__DisplayClass87_0_1::<SetEvent>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<SetEvent>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, param);
    }
  }; // Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass87_0`1
  // Could not write size check! Type: Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass87_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
