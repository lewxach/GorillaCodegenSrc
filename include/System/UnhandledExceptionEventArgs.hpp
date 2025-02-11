// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: UnhandledExceptionEventArgs
  class UnhandledExceptionEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::UnhandledExceptionEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::UnhandledExceptionEventArgs*, "System", "UnhandledExceptionEventArgs");
// Type namespace: System
namespace System {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.UnhandledExceptionEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class UnhandledExceptionEventArgs : public ::System::EventArgs {
    public:
    public:
    // private System.Object _exception
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* exception;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean _isTerminating
    // Size: 0x1
    // Offset: 0x18
    bool isTerminating;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Object _exception
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__exception();
    // Get instance field reference: private System.Boolean _isTerminating
    [[deprecated("Use field access instead!")]] bool& dyn__isTerminating();
    // public System.Void .ctor(System.Object exception, System.Boolean isTerminating)
    // Offset: 0x467AC14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnhandledExceptionEventArgs* New_ctor(::Il2CppObject* exception, bool isTerminating) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::UnhandledExceptionEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnhandledExceptionEventArgs*, creationType>(exception, isTerminating)));
    }
    // public System.Object get_ExceptionObject()
    // Offset: 0x467AC98
    ::Il2CppObject* get_ExceptionObject();
    // public System.Boolean get_IsTerminating()
    // Offset: 0x467ACA0
    bool get_IsTerminating();
  }; // System.UnhandledExceptionEventArgs
  #pragma pack(pop)
  static check_size<sizeof(UnhandledExceptionEventArgs), 24 + sizeof(bool)> __System_UnhandledExceptionEventArgsSizeCheck;
  static_assert(sizeof(UnhandledExceptionEventArgs) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::UnhandledExceptionEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::UnhandledExceptionEventArgs::get_ExceptionObject
// Il2CppName: get_ExceptionObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::UnhandledExceptionEventArgs::*)()>(&System::UnhandledExceptionEventArgs::get_ExceptionObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UnhandledExceptionEventArgs*), "get_ExceptionObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UnhandledExceptionEventArgs::get_IsTerminating
// Il2CppName: get_IsTerminating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::UnhandledExceptionEventArgs::*)()>(&System::UnhandledExceptionEventArgs::get_IsTerminating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UnhandledExceptionEventArgs*), "get_IsTerminating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
