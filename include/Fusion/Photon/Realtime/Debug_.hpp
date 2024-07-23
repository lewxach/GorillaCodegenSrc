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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: Debug_
  class Debug_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Photon::Realtime::Debug_);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::Debug_*, "Fusion.Photon.Realtime", "Debug_");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.Debug_
  // [TokenAttribute] Offset: FFFFFFFF
  class Debug_ : public ::Il2CppObject {
    public:
    // static public System.Void Log(System.String msg)
    // Offset: 0x2ADF3B4
    static void Log(::StringW msg);
    // static public System.Void LogWarning(System.String msg)
    // Offset: 0x2ADF3BC
    static void LogWarning(::StringW msg);
    // static public System.Void LogError(System.String msg)
    // Offset: 0x2ADF3C4
    static void LogError(::StringW msg);
    // static public System.Void LogException(System.Exception ex)
    // Offset: 0x2ADF3CC
    static void LogException(::System::Exception* ex);
  }; // Fusion.Photon.Realtime.Debug_
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Debug_::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Fusion::Photon::Realtime::Debug_::Log)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Debug_*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Debug_::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Fusion::Photon::Realtime::Debug_::LogWarning)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Debug_*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Debug_::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Fusion::Photon::Realtime::Debug_::LogError)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Debug_*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Debug_::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*)>(&Fusion::Photon::Realtime::Debug_::LogException)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Debug_*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};