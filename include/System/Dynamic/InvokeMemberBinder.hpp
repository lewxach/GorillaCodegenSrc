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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: InvokeMemberBinder
  class InvokeMemberBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Dynamic::InvokeMemberBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::InvokeMemberBinder*, "System.Dynamic", "InvokeMemberBinder");
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Dynamic.InvokeMemberBinder
  // [TokenAttribute] Offset: FFFFFFFF
  class InvokeMemberBinder : public ::System::Dynamic::DynamicMetaObjectBinder {
    public:
    public:
    // private readonly System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Boolean <IgnoreCase>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool IgnoreCase;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppObject*>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppObject*>*() const noexcept = delete;
    // Get instance field reference: private readonly System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private readonly System.Boolean <IgnoreCase>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IgnoreCase$k__BackingField();
    // public System.String get_Name()
    // Offset: 0x4BE8414
    ::StringW get_Name();
    // public System.Boolean get_IgnoreCase()
    // Offset: 0x4BE841C
    bool get_IgnoreCase();
    // public System.Dynamic.DynamicMetaObject FallbackInvokeMember(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject[] args)
    // Offset: 0x4BE6E60
    ::System::Dynamic::DynamicMetaObject* FallbackInvokeMember(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args);
    // public System.Dynamic.DynamicMetaObject FallbackInvokeMember(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject[] args, System.Dynamic.DynamicMetaObject errorSuggestion)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Dynamic::DynamicMetaObject* FallbackInvokeMember(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args, ::System::Dynamic::DynamicMetaObject* errorSuggestion);
    // public System.Dynamic.DynamicMetaObject FallbackInvoke(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject[] args, System.Dynamic.DynamicMetaObject errorSuggestion)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Dynamic::DynamicMetaObject* FallbackInvoke(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args, ::System::Dynamic::DynamicMetaObject* errorSuggestion);
    // public override System.Dynamic.DynamicMetaObject Bind(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject[] args)
    // Offset: 0x4BE8424
    // Implemented from: System.Dynamic.DynamicMetaObjectBinder
    // Base method: System.Dynamic.DynamicMetaObject DynamicMetaObjectBinder::Bind(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject[] args)
    ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args);
  }; // System.Dynamic.InvokeMemberBinder
  #pragma pack(pop)
  static check_size<sizeof(InvokeMemberBinder), 32 + sizeof(bool)> __System_Dynamic_InvokeMemberBinderSizeCheck;
  static_assert(sizeof(InvokeMemberBinder) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Dynamic::InvokeMemberBinder::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Dynamic::InvokeMemberBinder::*)()>(&System::Dynamic::InvokeMemberBinder::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::InvokeMemberBinder*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::InvokeMemberBinder::get_IgnoreCase
// Il2CppName: get_IgnoreCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Dynamic::InvokeMemberBinder::*)()>(&System::Dynamic::InvokeMemberBinder::get_IgnoreCase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::InvokeMemberBinder*), "get_IgnoreCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::InvokeMemberBinder::FallbackInvokeMember
// Il2CppName: FallbackInvokeMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (System::Dynamic::InvokeMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&System::Dynamic::InvokeMemberBinder::FallbackInvokeMember)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::InvokeMemberBinder*), "FallbackInvokeMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, args});
  }
};
// Writing MetadataGetter for method: System::Dynamic::InvokeMemberBinder::FallbackInvokeMember
// Il2CppName: FallbackInvokeMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (System::Dynamic::InvokeMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>, ::System::Dynamic::DynamicMetaObject*)>(&System::Dynamic::InvokeMemberBinder::FallbackInvokeMember)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject"), 1)->byval_arg;
    static auto* errorSuggestion = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::InvokeMemberBinder*), "FallbackInvokeMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, args, errorSuggestion});
  }
};
// Writing MetadataGetter for method: System::Dynamic::InvokeMemberBinder::FallbackInvoke
// Il2CppName: FallbackInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (System::Dynamic::InvokeMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>, ::System::Dynamic::DynamicMetaObject*)>(&System::Dynamic::InvokeMemberBinder::FallbackInvoke)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject"), 1)->byval_arg;
    static auto* errorSuggestion = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::InvokeMemberBinder*), "FallbackInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, args, errorSuggestion});
  }
};
// Writing MetadataGetter for method: System::Dynamic::InvokeMemberBinder::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (System::Dynamic::InvokeMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&System::Dynamic::InvokeMemberBinder::Bind)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::InvokeMemberBinder*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, args});
  }
};