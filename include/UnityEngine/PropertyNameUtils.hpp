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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PropertyName
  struct PropertyName;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PropertyNameUtils
  class PropertyNameUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::PropertyNameUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PropertyNameUtils*, "UnityEngine", "PropertyNameUtils");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.PropertyNameUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class PropertyNameUtils : public ::Il2CppObject {
    public:
    // static public UnityEngine.PropertyName PropertyNameFromString(System.String name)
    // Offset: 0x54C00C8
    static ::UnityEngine::PropertyName PropertyNameFromString(::StringW name);
    // static private System.Void PropertyNameFromString_Injected(System.String name, out UnityEngine.PropertyName ret)
    // Offset: 0x54C0114
    static void PropertyNameFromString_Injected(::StringW name, ByRef<::UnityEngine::PropertyName> ret);
  }; // UnityEngine.PropertyNameUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::PropertyNameUtils::PropertyNameFromString
// Il2CppName: PropertyNameFromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PropertyName (*)(::StringW)>(&UnityEngine::PropertyNameUtils::PropertyNameFromString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PropertyNameUtils*), "PropertyNameFromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::PropertyNameUtils::PropertyNameFromString_Injected
// Il2CppName: PropertyNameFromString_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::UnityEngine::PropertyName>)>(&UnityEngine::PropertyNameUtils::PropertyNameFromString_Injected)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "PropertyName")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PropertyNameUtils*), "PropertyNameFromString_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, ret});
  }
};