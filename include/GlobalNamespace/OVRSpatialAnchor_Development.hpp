// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSpatialAnchor
#include "GlobalNamespace/OVRSpatialAnchor.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSpatialAnchor::Development);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor::Development*, "", "OVRSpatialAnchor/Development");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRSpatialAnchor/Development
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRSpatialAnchor::Development : public ::Il2CppObject {
    public:
    // static public System.Void Log(System.String message)
    // Offset: 0x492EE8C
    static void Log(::StringW message);
    // static public System.Void LogWarning(System.String message)
    // Offset: 0x492EF18
    static void LogWarning(::StringW message);
    // static public System.Void LogError(System.String message)
    // Offset: 0x492EFA4
    static void LogError(::StringW message);
    // static public System.Void LogRequest(System.UInt64 requestId, System.String message)
    // Offset: 0x492F030
    static void LogRequest(uint64_t requestId, ::StringW message);
    // static public System.Void LogRequestResult(System.UInt64 requestId, System.Boolean result, System.String successMessage, System.String failureMessage)
    // Offset: 0x492F034
    static void LogRequestResult(uint64_t requestId, bool result, ::StringW successMessage, ::StringW failureMessage);
  }; // OVRSpatialAnchor/Development
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSpatialAnchor::Development::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::OVRSpatialAnchor::Development::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpatialAnchor::Development*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpatialAnchor::Development::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::OVRSpatialAnchor::Development::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpatialAnchor::Development*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpatialAnchor::Development::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::OVRSpatialAnchor::Development::LogError)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpatialAnchor::Development*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpatialAnchor::Development::LogRequest
// Il2CppName: LogRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::StringW)>(&GlobalNamespace::OVRSpatialAnchor::Development::LogRequest)> {
  static const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpatialAnchor::Development*), "LogRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId, message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpatialAnchor::Development::LogRequestResult
// Il2CppName: LogRequestResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool, ::StringW, ::StringW)>(&GlobalNamespace::OVRSpatialAnchor::Development::LogRequestResult)> {
  static const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* successMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* failureMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpatialAnchor::Development*), "LogRequestResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId, result, successMessage, failureMessage});
  }
};