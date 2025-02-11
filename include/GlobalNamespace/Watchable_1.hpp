// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Watchable`1<T>
  template<typename T>
  class Watchable_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::Watchable_1, "", "Watchable`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: Watchable`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class Watchable_1 : public ::Il2CppObject {
    public:
    public:
    // private T _value
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T value;
    // private System.Collections.Generic.List`1<System.Action`1<T>> callbacks
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::System::Action_1<T>*>* callbacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Action_1<T>*>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private T _value
    [[deprecated("Use field access instead!")]] T& dyn__value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Watchable_1::dyn__value");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_value"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<System.Action`1<T>> callbacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Action_1<T>*>*& dyn_callbacks() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Watchable_1::dyn_callbacks");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "callbacks"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<::System::Action_1<T>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T get_value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Watchable_1::get_value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void set_value(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_value(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Watchable_1::set_value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Watchable_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Watchable_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Watchable_1<T>*, creationType>()));
    }
    // public System.Void .ctor(T initial)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Watchable_1<T>* New_ctor(T initial) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Watchable_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Watchable_1<T>*, creationType>(initial)));
    }
    // public System.Void AddCallback(System.Action`1<T> callback, System.Boolean shouldCallbackNow)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddCallback(::System::Action_1<T>* callback, bool shouldCallbackNow) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Watchable_1::AddCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddCallback", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(shouldCallbackNow)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, callback, shouldCallbackNow);
    }
    // public System.Void RemoveCallback(System.Action`1<T> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveCallback(::System::Action_1<T>* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Watchable_1::RemoveCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveCallback", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(callback)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, callback);
    }
  }; // Watchable`1
  // Could not write size check! Type: Watchable`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
