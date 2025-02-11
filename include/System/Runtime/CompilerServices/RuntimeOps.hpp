// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Dynamic
namespace System::Dynamic {
  // Forward declaring type: ExpandoObject
  class ExpandoObject;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: RuntimeOps
  class RuntimeOps;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::RuntimeOps);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::RuntimeOps*, "System.Runtime.CompilerServices", "RuntimeOps");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.RuntimeOps
  // [TokenAttribute] Offset: FFFFFFFF
  // [EditorBrowsableAttribute] Offset: FFFFFFFF
  // [DebuggerStepThroughAttribute] Offset: FFFFFFFF
  class RuntimeOps : public ::Il2CppObject {
    public:
    // static public System.Boolean ExpandoTryGetValue(System.Dynamic.ExpandoObject expando, System.Object indexClass, System.Int32 index, System.String name, System.Boolean ignoreCase, out System.Object value)
    // Offset: 0x4BE0130
    static bool ExpandoTryGetValue(::System::Dynamic::ExpandoObject* expando, ::Il2CppObject* indexClass, int index, ::StringW name, bool ignoreCase, ByRef<::Il2CppObject*> value);
    // static public System.Object ExpandoTrySetValue(System.Dynamic.ExpandoObject expando, System.Object indexClass, System.Int32 index, System.Object value, System.String name, System.Boolean ignoreCase)
    // Offset: 0x4BE0284
    static ::Il2CppObject* ExpandoTrySetValue(::System::Dynamic::ExpandoObject* expando, ::Il2CppObject* indexClass, int index, ::Il2CppObject* value, ::StringW name, bool ignoreCase);
    // static public System.Boolean ExpandoTryDeleteValue(System.Dynamic.ExpandoObject expando, System.Object indexClass, System.Int32 index, System.String name, System.Boolean ignoreCase)
    // Offset: 0x4BE0644
    static bool ExpandoTryDeleteValue(::System::Dynamic::ExpandoObject* expando, ::Il2CppObject* indexClass, int index, ::StringW name, bool ignoreCase);
    // static public System.Boolean ExpandoCheckVersion(System.Dynamic.ExpandoObject expando, System.Object version)
    // Offset: 0x4BE09EC
    static bool ExpandoCheckVersion(::System::Dynamic::ExpandoObject* expando, ::Il2CppObject* version);
    // static public System.Void ExpandoPromoteClass(System.Dynamic.ExpandoObject expando, System.Object oldClass, System.Object newClass)
    // Offset: 0x4BE0A30
    static void ExpandoPromoteClass(::System::Dynamic::ExpandoObject* expando, ::Il2CppObject* oldClass, ::Il2CppObject* newClass);
  }; // System.Runtime.CompilerServices.RuntimeOps
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeOps::ExpandoTryGetValue
// Il2CppName: ExpandoTryGetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Dynamic::ExpandoObject*, ::Il2CppObject*, int, ::StringW, bool, ByRef<::Il2CppObject*>)>(&System::Runtime::CompilerServices::RuntimeOps::ExpandoTryGetValue)> {
  static const MethodInfo* get() {
    static auto* expando = &::il2cpp_utils::GetClassFromName("System.Dynamic", "ExpandoObject")->byval_arg;
    static auto* indexClass = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeOps*), "ExpandoTryGetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expando, indexClass, index, name, ignoreCase, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeOps::ExpandoTrySetValue
// Il2CppName: ExpandoTrySetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Dynamic::ExpandoObject*, ::Il2CppObject*, int, ::Il2CppObject*, ::StringW, bool)>(&System::Runtime::CompilerServices::RuntimeOps::ExpandoTrySetValue)> {
  static const MethodInfo* get() {
    static auto* expando = &::il2cpp_utils::GetClassFromName("System.Dynamic", "ExpandoObject")->byval_arg;
    static auto* indexClass = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeOps*), "ExpandoTrySetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expando, indexClass, index, value, name, ignoreCase});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeOps::ExpandoTryDeleteValue
// Il2CppName: ExpandoTryDeleteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Dynamic::ExpandoObject*, ::Il2CppObject*, int, ::StringW, bool)>(&System::Runtime::CompilerServices::RuntimeOps::ExpandoTryDeleteValue)> {
  static const MethodInfo* get() {
    static auto* expando = &::il2cpp_utils::GetClassFromName("System.Dynamic", "ExpandoObject")->byval_arg;
    static auto* indexClass = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeOps*), "ExpandoTryDeleteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expando, indexClass, index, name, ignoreCase});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeOps::ExpandoCheckVersion
// Il2CppName: ExpandoCheckVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Dynamic::ExpandoObject*, ::Il2CppObject*)>(&System::Runtime::CompilerServices::RuntimeOps::ExpandoCheckVersion)> {
  static const MethodInfo* get() {
    static auto* expando = &::il2cpp_utils::GetClassFromName("System.Dynamic", "ExpandoObject")->byval_arg;
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeOps*), "ExpandoCheckVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expando, version});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeOps::ExpandoPromoteClass
// Il2CppName: ExpandoPromoteClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Dynamic::ExpandoObject*, ::Il2CppObject*, ::Il2CppObject*)>(&System::Runtime::CompilerServices::RuntimeOps::ExpandoPromoteClass)> {
  static const MethodInfo* get() {
    static auto* expando = &::il2cpp_utils::GetClassFromName("System.Dynamic", "ExpandoObject")->byval_arg;
    static auto* oldClass = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* newClass = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeOps*), "ExpandoPromoteClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expando, oldClass, newClass});
  }
};
