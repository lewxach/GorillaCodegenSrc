// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Backtrace.Unity.Services.BacktraceApi
#include "Backtrace/Unity/Services/BacktraceApi.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Backtrace::Unity::Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceResult
  class BacktraceResult;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Stopwatch
  class Stopwatch;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Services::BacktraceApi::$Send$d__27);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Services::BacktraceApi::$Send$d__27*, "Backtrace.Unity.Services", "BacktraceApi/<Send>d__27");
// Type namespace: Backtrace.Unity.Services
namespace Backtrace::Unity::Services {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Services.BacktraceApi/<Send>d__27
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BacktraceApi::$Send$d__27 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public Backtrace.Unity.Services.BacktraceApi <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Backtrace::Unity::Services::BacktraceApi* $$4__this;
    // Field size check
    static_assert(sizeof(::Backtrace::Unity::Services::BacktraceApi*) == 0x8);
    // public System.String json
    // Size: 0x8
    // Offset: 0x28
    ::StringW json;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.IEnumerable`1<System.String> attachments
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::IEnumerable_1<::StringW>* attachments;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<::StringW>*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,System.String> attributes
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* attributes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    // public System.Action`1<Backtrace.Unity.Model.BacktraceResult> callback
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* callback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*) == 0x8);
    // private System.Diagnostics.Stopwatch <stopWatch>5__2
    // Size: 0x8
    // Offset: 0x48
    ::System::Diagnostics::Stopwatch* $stopWatch$5__2;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Stopwatch*) == 0x8);
    // private UnityEngine.Networking.UnityWebRequest <request>5__3
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Networking::UnityWebRequest* $request$5__3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public Backtrace.Unity.Services.BacktraceApi <>4__this
    [[deprecated("Use field access instead!")]] ::Backtrace::Unity::Services::BacktraceApi*& dyn_$$4__this();
    // Get instance field reference: public System.String json
    [[deprecated("Use field access instead!")]] ::StringW& dyn_json();
    // Get instance field reference: public System.Collections.Generic.IEnumerable`1<System.String> attachments
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerable_1<::StringW>*& dyn_attachments();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.String> attributes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn_attributes();
    // Get instance field reference: public System.Action`1<Backtrace.Unity.Model.BacktraceResult> callback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& dyn_callback();
    // Get instance field reference: private System.Diagnostics.Stopwatch <stopWatch>5__2
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Stopwatch*& dyn_$stopWatch$5__2();
    // Get instance field reference: private UnityEngine.Networking.UnityWebRequest <request>5__3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::UnityWebRequest*& dyn_$request$5__3();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2A5871C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BacktraceApi::$Send$d__27* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Services::BacktraceApi::$Send$d__27::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BacktraceApi::$Send$d__27*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2A58B6C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2A58B98
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x2A592E0
    void $$m__Finally1();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x2A59390
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2A59398
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2A593D0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Backtrace.Unity.Services.BacktraceApi/<Send>d__27
  #pragma pack(pop)
  static check_size<sizeof(BacktraceApi::$Send$d__27), 80 + sizeof(::UnityEngine::Networking::UnityWebRequest*)> __Backtrace_Unity_Services_BacktraceApi_$Send$d__27SizeCheck;
  static_assert(sizeof(BacktraceApi::$Send$d__27) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceApi::$Send$d__27::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceApi::$Send$d__27::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Services::BacktraceApi::$Send$d__27::*)()>(&Backtrace::Unity::Services::BacktraceApi::$Send$d__27::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::BacktraceApi::$Send$d__27*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceApi::$Send$d__27::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Services::BacktraceApi::$Send$d__27::*)()>(&Backtrace::Unity::Services::BacktraceApi::$Send$d__27::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::BacktraceApi::$Send$d__27*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceApi::$Send$d__27::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Services::BacktraceApi::$Send$d__27::*)()>(&Backtrace::Unity::Services::BacktraceApi::$Send$d__27::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::BacktraceApi::$Send$d__27*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceApi::$Send$d__27::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Backtrace::Unity::Services::BacktraceApi::$Send$d__27::*)()>(&Backtrace::Unity::Services::BacktraceApi::$Send$d__27::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::BacktraceApi::$Send$d__27*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceApi::$Send$d__27::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Services::BacktraceApi::$Send$d__27::*)()>(&Backtrace::Unity::Services::BacktraceApi::$Send$d__27::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::BacktraceApi::$Send$d__27*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceApi::$Send$d__27::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Backtrace::Unity::Services::BacktraceApi::$Send$d__27::*)()>(&Backtrace::Unity::Services::BacktraceApi::$Send$d__27::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::BacktraceApi::$Send$d__27*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};