// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading::Tasks::Sources
namespace System::Threading::Tasks::Sources {
  // Forward declaring type: IValueTaskSource
  class IValueTaskSource;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: ValueTaskAwaiter
  struct ValueTaskAwaiter;
  // Forward declaring type: ConfiguredValueTaskAwaitable
  struct ConfiguredValueTaskAwaitable;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: ValueTask
  struct ValueTask;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ValueTask, "System.Threading.Tasks", "ValueTask");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0xB
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.ValueTask
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  // [AsyncMethodBuilderAttribute] Offset: FFFFFFFF
  struct ValueTask/*, public ::System::ValueType, public ::System::IEquatable_1<::System::Threading::Tasks::ValueTask>*/ {
    public:
    // Nested type: ::System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask
    class ValueTaskSourceAsTask;
    public:
    // readonly System.Object _obj
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* obj;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // readonly System.Int16 _token
    // Size: 0x2
    // Offset: 0x8
    int16_t token;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // readonly System.Boolean _continueOnCapturedContext
    // Size: 0x1
    // Offset: 0xA
    bool continueOnCapturedContext;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: ValueTask
    constexpr ValueTask(::Il2CppObject* obj_ = {}, int16_t token_ = {}, bool continueOnCapturedContext_ = {}) noexcept : obj{obj_}, token{token_}, continueOnCapturedContext{continueOnCapturedContext_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::Threading::Tasks::ValueTask>
    operator ::System::IEquatable_1<::System::Threading::Tasks::ValueTask>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::Threading::Tasks::ValueTask>*>(this);
    }
    // Get static field: static private readonly System.Threading.Tasks.Task s_canceledTask
    static ::System::Threading::Tasks::Task* _get_s_canceledTask();
    // Set static field: static private readonly System.Threading.Tasks.Task s_canceledTask
    static void _set_s_canceledTask(::System::Threading::Tasks::Task* value);
    // Get instance field reference: readonly System.Object _obj
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__obj();
    // Get instance field reference: readonly System.Int16 _token
    [[deprecated("Use field access instead!")]] int16_t& dyn__token();
    // Get instance field reference: readonly System.Boolean _continueOnCapturedContext
    [[deprecated("Use field access instead!")]] bool& dyn__continueOnCapturedContext();
    // static System.Threading.Tasks.Task get_CompletedTask()
    // Offset: 0x46D17F8
    static ::System::Threading::Tasks::Task* get_CompletedTask();
    // public System.Void .ctor(System.Threading.Tasks.Task task)
    // Offset: 0x46D1880
    ValueTask(::System::Threading::Tasks::Task* task);
    // public System.Void .ctor(System.Threading.Tasks.Sources.IValueTaskSource source, System.Int16 token)
    // Offset: 0x46D18C4
    ValueTask(::System::Threading::Tasks::Sources::IValueTaskSource* source, int16_t token);
    // private System.Void .ctor(System.Object obj, System.Int16 token, System.Boolean continueOnCapturedContext)
    // Offset: 0x46D190C
    // ABORTED: conflicts with another method.  ValueTask(::Il2CppObject* obj, int16_t token, bool continueOnCapturedContext);
    // public System.Boolean Equals(System.Threading.Tasks.ValueTask other)
    // Offset: 0x46D19DC
    bool Equals(::System::Threading::Tasks::ValueTask other);
    // public System.Threading.Tasks.Task AsTask()
    // Offset: 0x46D1A00
    ::System::Threading::Tasks::Task* AsTask();
    // private System.Threading.Tasks.Task GetTaskForValueTaskSource(System.Threading.Tasks.Sources.IValueTaskSource t)
    // Offset: 0x46D1AB8
    ::System::Threading::Tasks::Task* GetTaskForValueTaskSource(::System::Threading::Tasks::Sources::IValueTaskSource* t);
    // public System.Boolean get_IsCompleted()
    // Offset: 0x46D1F7C
    bool get_IsCompleted();
    // public System.Boolean get_IsCompletedSuccessfully()
    // Offset: 0x46D2080
    bool get_IsCompletedSuccessfully();
    // System.Void ThrowIfCompletedUnsuccessfully()
    // Offset: 0x46D21B8
    void ThrowIfCompletedUnsuccessfully();
    // public System.Runtime.CompilerServices.ValueTaskAwaiter GetAwaiter()
    // Offset: 0x46D22BC
    ::System::Runtime::CompilerServices::ValueTaskAwaiter GetAwaiter();
    // public System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable ConfigureAwait(System.Boolean continueOnCapturedContext)
    // Offset: 0x46D22E8
    ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable ConfigureAwait(bool continueOnCapturedContext);
    // static private System.Void .cctor()
    // Offset: 0x46D2340
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0x46D193C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x46D1954
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // System.Threading.Tasks.ValueTask
  #pragma pack(pop)
  static check_size<sizeof(ValueTask), 10 + sizeof(bool)> __System_Threading_Tasks_ValueTaskSizeCheck;
  static_assert(sizeof(ValueTask) == 0xB);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::get_CompletedTask
// Il2CppName: get_CompletedTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)()>(&System::Threading::Tasks::ValueTask::get_CompletedTask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask), "get_CompletedTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::ValueTask
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::ValueTask
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::ValueTask
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::ValueTask::*)(::System::Threading::Tasks::ValueTask)>(&System::Threading::Tasks::ValueTask::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "ValueTask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::AsTask
// Il2CppName: AsTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Threading::Tasks::ValueTask::*)()>(&System::Threading::Tasks::ValueTask::AsTask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask), "AsTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::GetTaskForValueTaskSource
// Il2CppName: GetTaskForValueTaskSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Threading::Tasks::ValueTask::*)(::System::Threading::Tasks::Sources::IValueTaskSource*)>(&System::Threading::Tasks::ValueTask::GetTaskForValueTaskSource)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks.Sources", "IValueTaskSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask), "GetTaskForValueTaskSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::ValueTask::*)()>(&System::Threading::Tasks::ValueTask::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::get_IsCompletedSuccessfully
// Il2CppName: get_IsCompletedSuccessfully
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::ValueTask::*)()>(&System::Threading::Tasks::ValueTask::get_IsCompletedSuccessfully)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask), "get_IsCompletedSuccessfully", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::ThrowIfCompletedUnsuccessfully
// Il2CppName: ThrowIfCompletedUnsuccessfully
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ValueTask::*)()>(&System::Threading::Tasks::ValueTask::ThrowIfCompletedUnsuccessfully)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask), "ThrowIfCompletedUnsuccessfully", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::GetAwaiter
// Il2CppName: GetAwaiter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::ValueTaskAwaiter (System::Threading::Tasks::ValueTask::*)()>(&System::Threading::Tasks::ValueTask::GetAwaiter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask), "GetAwaiter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::ConfigureAwait
// Il2CppName: ConfigureAwait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable (System::Threading::Tasks::ValueTask::*)(bool)>(&System::Threading::Tasks::ValueTask::ConfigureAwait)> {
  static const MethodInfo* get() {
    static auto* continueOnCapturedContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask), "ConfigureAwait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{continueOnCapturedContext});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Tasks::ValueTask::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::Tasks::ValueTask::*)()>(&System::Threading::Tasks::ValueTask::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::ValueTask::*)(::Il2CppObject*)>(&System::Threading::Tasks::ValueTask::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};