// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.LazyThreadSafetyMode
#include "System/Threading/LazyThreadSafetyMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: LazyHelper
  class LazyHelper;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Lazy`1<T>
  template<typename T>
  class Lazy_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Lazy_1, "System", "Lazy`1");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Lazy`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: FFFFFFFF
  template<typename T>
  class Lazy_1 : public ::Il2CppObject {
    public:
    public:
    // private System.LazyHelper _state
    // Size: 0x8
    // Offset: 0x0
    ::System::LazyHelper* state;
    // Field size check
    static_assert(sizeof(::System::LazyHelper*) == 0x8);
    // private System.Func`1<T> _factory
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_1<T>* factory;
    // Field size check
    static_assert(sizeof(::System::Func_1<T>*) == 0x8);
    // private T _value
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T value;
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.LazyHelper _state
    [[deprecated("Use field access instead!")]] ::System::LazyHelper*& dyn__state() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::dyn__state");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_state"))->offset;
      return *reinterpret_cast<::System::LazyHelper**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Func`1<T> _factory
    [[deprecated("Use field access instead!")]] ::System::Func_1<T>*& dyn__factory() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::dyn__factory");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_factory"))->offset;
      return *reinterpret_cast<::System::Func_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T _value
    [[deprecated("Use field access instead!")]] T& dyn__value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::dyn__value");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_value"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // static private T CreateViaDefaultConstructor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static T CreateViaDefaultConstructor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::CreateViaDefaultConstructor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lazy_1<T>*>::get(), "CreateViaDefaultConstructor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor(System.Func`1<T> valueFactory)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lazy_1<T>* New_ctor(::System::Func_1<T>* valueFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lazy_1<T>*, creationType>(valueFactory)));
    }
    // public System.Void .ctor(System.Func`1<T> valueFactory, System.Boolean isThreadSafe)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lazy_1<T>* New_ctor(::System::Func_1<T>* valueFactory, bool isThreadSafe) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lazy_1<T>*, creationType>(valueFactory, isThreadSafe)));
    }
    // private System.Void .ctor(System.Func`1<T> valueFactory, System.Threading.LazyThreadSafetyMode mode, System.Boolean useDefaultConstructor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lazy_1<T>* New_ctor(::System::Func_1<T>* valueFactory, ::System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lazy_1<T>*, creationType>(valueFactory, mode, useDefaultConstructor)));
    }
    // private System.Void ViaConstructor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ViaConstructor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::ViaConstructor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ViaConstructor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void ViaFactory(System.Threading.LazyThreadSafetyMode mode)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ViaFactory(::System::Threading::LazyThreadSafetyMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::ViaFactory");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ViaFactory", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(mode)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, mode);
    }
    // private System.Void ExecutionAndPublication(System.LazyHelper executionAndPublication, System.Boolean useDefaultConstructor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ExecutionAndPublication(::System::LazyHelper* executionAndPublication, bool useDefaultConstructor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::ExecutionAndPublication");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ExecutionAndPublication", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(executionAndPublication), ::il2cpp_utils::ExtractType(useDefaultConstructor)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, executionAndPublication, useDefaultConstructor);
    }
    // private System.Void PublicationOnly(System.LazyHelper publicationOnly, T possibleValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PublicationOnly(::System::LazyHelper* publicationOnly, T possibleValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::PublicationOnly");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "PublicationOnly", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(publicationOnly), ::il2cpp_utils::ExtractType(possibleValue)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, publicationOnly, possibleValue);
    }
    // private System.Void PublicationOnlyViaConstructor(System.LazyHelper initializer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PublicationOnlyViaConstructor(::System::LazyHelper* initializer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::PublicationOnlyViaConstructor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "PublicationOnlyViaConstructor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(initializer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, initializer);
    }
    // private System.Void PublicationOnlyViaFactory(System.LazyHelper initializer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PublicationOnlyViaFactory(::System::LazyHelper* initializer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::PublicationOnlyViaFactory");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "PublicationOnlyViaFactory", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(initializer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, initializer);
    }
    // private System.Void PublicationOnlyWaitForOtherThreadToPublish()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PublicationOnlyWaitForOtherThreadToPublish() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::PublicationOnlyWaitForOtherThreadToPublish");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "PublicationOnlyWaitForOtherThreadToPublish", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private T CreateValue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T CreateValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::CreateValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Boolean get_IsValueCreated()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsValueCreated() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::get_IsValueCreated");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsValueCreated", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public T get_Value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::get_Value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lazy_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lazy_1<T>*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1::ToString");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Il2CppObject*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
  }; // System.Lazy`1
  // Could not write size check! Type: System.Lazy`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
