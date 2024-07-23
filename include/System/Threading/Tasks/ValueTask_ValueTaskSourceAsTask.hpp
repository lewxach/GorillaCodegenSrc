// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.ValueTask
#include "System/Threading/Tasks/ValueTask.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.Tasks.VoidTaskResult
#include "System/Threading/Tasks/VoidTaskResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
}
// Forward declaring namespace: System::Threading::Tasks::Sources
namespace System::Threading::Tasks::Sources {
  // Forward declaring type: IValueTaskSource
  class IValueTaskSource;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask*, "System.Threading.Tasks", "ValueTask/ValueTaskSourceAsTask");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask
  // [TokenAttribute] Offset: FFFFFFFF
  class ValueTask::ValueTaskSourceAsTask : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> {
    public:
    // Nested type: ::System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::$$c
    class $$c;
    public:
    // private System.Threading.Tasks.Sources.IValueTaskSource _source
    // Size: 0x8
    // Offset: 0x58
    ::System::Threading::Tasks::Sources::IValueTaskSource* source;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Sources::IValueTaskSource*) == 0x8);
    // private readonly System.Int16 _token
    // Size: 0x2
    // Offset: 0x60
    int16_t token;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    public:
    // Get static field: static private readonly System.Action`1<System.Object> s_completionAction
    static ::System::Action_1<::Il2CppObject*>* _get_s_completionAction();
    // Set static field: static private readonly System.Action`1<System.Object> s_completionAction
    static void _set_s_completionAction(::System::Action_1<::Il2CppObject*>* value);
    // Get instance field reference: private System.Threading.Tasks.Sources.IValueTaskSource _source
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Sources::IValueTaskSource*& dyn__source();
    // Get instance field reference: private readonly System.Int16 _token
    [[deprecated("Use field access instead!")]] int16_t& dyn__token();
    // public System.Void .ctor(System.Threading.Tasks.Sources.IValueTaskSource source, System.Int16 token)
    // Offset: 0x46D1E50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueTask::ValueTaskSourceAsTask* New_ctor(::System::Threading::Tasks::Sources::IValueTaskSource* source, int16_t token) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueTask::ValueTaskSourceAsTask*, creationType>(source, token)));
    }
    // static private System.Void .cctor()
    // Offset: 0x46D242C
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Void Task::.cctor()
    static void _cctor();
  }; // System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};