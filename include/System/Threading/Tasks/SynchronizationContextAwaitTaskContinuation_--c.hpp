// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation
#include "System/Threading/Tasks/SynchronizationContextAwaitTaskContinuation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c*, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation/<>c");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SynchronizationContextAwaitTaskContinuation::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c <>9
    static ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c* _get_$$9();
    // Set static field: static public readonly System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c <>9
    static void _set_$$9(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x46DC5FC
    static void _cctor();
    // System.Void <.cctor>b__7_0(System.Object state)
    // Offset: 0x46DC66C
    void $_cctor$b__7_0(::Il2CppObject* state);
    // public System.Void .ctor()
    // Offset: 0x46DC664
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SynchronizationContextAwaitTaskContinuation::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SynchronizationContextAwaitTaskContinuation::$$c*, creationType>()));
    }
  }; // System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c::$_cctor$b__7_0
// Il2CppName: <.cctor>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c::*)(::Il2CppObject*)>(&System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c::$_cctor$b__7_0)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c*), "<.cctor>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!