// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Dynamic.DynamicMetaObjectBinder
#include "System/Dynamic/DynamicMetaObjectBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Dynamic
namespace System::Dynamic {
  // Forward declaring type: DynamicMetaObject
  class DynamicMetaObject;
}
// Completed forward declares
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Forward declaring type: GetIndexBinder
  class GetIndexBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Dynamic::GetIndexBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::GetIndexBinder*, "System.Dynamic", "GetIndexBinder");
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Dynamic.GetIndexBinder
  // [TokenAttribute] Offset: FFFFFFFF
  class GetIndexBinder : public ::System::Dynamic::DynamicMetaObjectBinder {
    public:
    // public System.Dynamic.DynamicMetaObject FallbackGetIndex(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject[] indexes)
    // Offset: 0x4BE815C
    ::System::Dynamic::DynamicMetaObject* FallbackGetIndex(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> indexes);
    // public System.Dynamic.DynamicMetaObject FallbackGetIndex(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject[] indexes, System.Dynamic.DynamicMetaObject errorSuggestion)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Dynamic::DynamicMetaObject* FallbackGetIndex(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> indexes, ::System::Dynamic::DynamicMetaObject* errorSuggestion);
    // public override System.Dynamic.DynamicMetaObject Bind(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject[] args)
    // Offset: 0x4BE80A4
    // Implemented from: System.Dynamic.DynamicMetaObjectBinder
    // Base method: System.Dynamic.DynamicMetaObject DynamicMetaObjectBinder::Bind(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject[] args)
    ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args);
  }; // System.Dynamic.GetIndexBinder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Dynamic::GetIndexBinder::FallbackGetIndex
// Il2CppName: FallbackGetIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (System::Dynamic::GetIndexBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&System::Dynamic::GetIndexBinder::FallbackGetIndex)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    static auto* indexes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::GetIndexBinder*), "FallbackGetIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, indexes});
  }
};
// Writing MetadataGetter for method: System::Dynamic::GetIndexBinder::FallbackGetIndex
// Il2CppName: FallbackGetIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (System::Dynamic::GetIndexBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>, ::System::Dynamic::DynamicMetaObject*)>(&System::Dynamic::GetIndexBinder::FallbackGetIndex)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    static auto* indexes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject"), 1)->byval_arg;
    static auto* errorSuggestion = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::GetIndexBinder*), "FallbackGetIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, indexes, errorSuggestion});
  }
};
// Writing MetadataGetter for method: System::Dynamic::GetIndexBinder::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (System::Dynamic::GetIndexBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&System::Dynamic::GetIndexBinder::Bind)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::GetIndexBinder*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, args});
  }
};
