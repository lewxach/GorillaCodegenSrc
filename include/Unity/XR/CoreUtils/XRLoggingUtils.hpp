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
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Unity.XR.CoreUtils
namespace Unity::XR::CoreUtils {
  // Forward declaring type: XRLoggingUtils
  class XRLoggingUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::CoreUtils::XRLoggingUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::XRLoggingUtils*, "Unity.XR.CoreUtils", "XRLoggingUtils");
// Type namespace: Unity.XR.CoreUtils
namespace Unity::XR::CoreUtils {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.CoreUtils.XRLoggingUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class XRLoggingUtils : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Boolean k_DontLogAnything
    static bool _get_k_DontLogAnything();
    // Set static field: static private readonly System.Boolean k_DontLogAnything
    static void _set_k_DontLogAnything(bool value);
    // static private System.Void .cctor()
    // Offset: 0x53D05B4
    static void _cctor();
    // static public System.Void LogWarning(System.String message, UnityEngine.Object context)
    // Offset: 0x53D0644
    static void LogWarning(::StringW message, ::UnityEngine::Object* context);
    // static public System.Void LogError(System.String message, UnityEngine.Object context)
    // Offset: 0x53D06F0
    static void LogError(::StringW message, ::UnityEngine::Object* context);
  }; // Unity.XR.CoreUtils.XRLoggingUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::CoreUtils::XRLoggingUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::XR::CoreUtils::XRLoggingUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::CoreUtils::XRLoggingUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::CoreUtils::XRLoggingUtils::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Object*)>(&Unity::XR::CoreUtils::XRLoggingUtils::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::CoreUtils::XRLoggingUtils*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, context});
  }
};
// Writing MetadataGetter for method: Unity::XR::CoreUtils::XRLoggingUtils::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Object*)>(&Unity::XR::CoreUtils::XRLoggingUtils::LogError)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::CoreUtils::XRLoggingUtils*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, context});
  }
};
