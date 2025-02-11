// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SR
  class SR__;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SR__);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SR__*, "", "SR");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SR
  // [TokenAttribute] Offset: FFFFFFFF
  class SR__ : public ::Il2CppObject {
    public:
    // static System.String GetString(System.String name)
    // Offset: 0x4C043BC
    static ::StringW GetString(::StringW name);
    // static System.String Format(System.String resourceFormat, System.Object p1)
    // Offset: 0x4C043C0
    static ::StringW Format(::StringW resourceFormat, ::Il2CppObject* p1);
    // static System.String Format(System.String resourceFormat, System.Object p1, System.Object p2)
    // Offset: 0x4C04430
    static ::StringW Format(::StringW resourceFormat, ::Il2CppObject* p1, ::Il2CppObject* p2);
    // static System.String Format(System.String resourceFormat, System.Object p1, System.Object p2, System.Object p3)
    // Offset: 0x4C044A8
    static ::StringW Format(::StringW resourceFormat, ::Il2CppObject* p1, ::Il2CppObject* p2, ::Il2CppObject* p3);
  }; // SR
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SR__::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&GlobalNamespace::SR__::GetString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SR__*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SR__::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::Il2CppObject*)>(&GlobalNamespace::SR__::Format)> {
  static const MethodInfo* get() {
    static auto* resourceFormat = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SR__*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourceFormat, p1});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SR__::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::Il2CppObject*, ::Il2CppObject*)>(&GlobalNamespace::SR__::Format)> {
  static const MethodInfo* get() {
    static auto* resourceFormat = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SR__*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourceFormat, p1, p2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SR__::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*)>(&GlobalNamespace::SR__::Format)> {
  static const MethodInfo* get() {
    static auto* resourceFormat = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* p3 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SR__*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourceFormat, p1, p2, p3});
  }
};
