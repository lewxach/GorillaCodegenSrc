// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.Public.IPlayFabLogger
#include "PlayFab/Public/IPlayFabLogger.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::Public
namespace PlayFab::Public {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogType
  struct LogType;
}
// Completed forward declares
// Type namespace: PlayFab.Public
namespace PlayFab::Public {
  // Forward declaring type: PlayFabLoggerBase
  class PlayFabLoggerBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::Public::PlayFabLoggerBase);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::Public::PlayFabLoggerBase*, "PlayFab.Public", "PlayFabLoggerBase");
// Type namespace: PlayFab.Public
namespace PlayFab::Public {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.Public.PlayFabLoggerBase
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayFabLoggerBase : public ::Il2CppObject/*, public ::PlayFab::Public::IPlayFabLogger*/ {
    public:
    // Nested type: ::PlayFab::Public::PlayFabLoggerBase::$RegisterLogger$d__23
    class $RegisterLogger$d__23;
    public:
    // private readonly System.Collections.Generic.Queue`1<System.String> LogMessageQueue
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Queue_1<::StringW>* LogMessageQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::StringW>*) == 0x8);
    // private System.Threading.Thread _writeLogThread
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::Thread* writeLogThread;
    // Field size check
    static_assert(sizeof(::System::Threading::Thread*) == 0x8);
    // private readonly System.Object _threadLock
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* threadLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.DateTime _threadKillTime
    // Size: 0x8
    // Offset: 0x28
    ::System::DateTime threadKillTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.Boolean _isApplicationPlaying
    // Size: 0x1
    // Offset: 0x30
    bool isApplicationPlaying;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isApplicationPlaying and: pendingLogsCount
    char __padding4[0x3] = {};
    // private System.Int32 _pendingLogsCount
    // Size: 0x4
    // Offset: 0x34
    int pendingLogsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Net.IPAddress <ip>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::System::Net::IPAddress* ip;
    // Field size check
    static_assert(sizeof(::System::Net::IPAddress*) == 0x8);
    // private System.Int32 <port>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: port and: url
    char __padding7[0x4] = {};
    // private System.String <url>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::StringW url;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::PlayFab::Public::IPlayFabLogger
    operator ::PlayFab::Public::IPlayFabLogger() noexcept {
      return *reinterpret_cast<::PlayFab::Public::IPlayFabLogger*>(this);
    }
    // Get static field: static private readonly System.Text.StringBuilder Sb
    static ::System::Text::StringBuilder* _get_Sb();
    // Set static field: static private readonly System.Text.StringBuilder Sb
    static void _set_Sb(::System::Text::StringBuilder* value);
    // static field const value: static private System.Int32 LOG_CACHE_INTERVAL_MS
    static constexpr const int LOG_CACHE_INTERVAL_MS = 10000;
    // Get static field: static private System.Int32 LOG_CACHE_INTERVAL_MS
    static int _get_LOG_CACHE_INTERVAL_MS();
    // Set static field: static private System.Int32 LOG_CACHE_INTERVAL_MS
    static void _set_LOG_CACHE_INTERVAL_MS(int value);
    // Get static field: static private readonly System.TimeSpan _threadKillTimeout
    static ::System::TimeSpan _get__threadKillTimeout();
    // Set static field: static private readonly System.TimeSpan _threadKillTimeout
    static void _set__threadKillTimeout(::System::TimeSpan value);
    // Get instance field reference: private readonly System.Collections.Generic.Queue`1<System.String> LogMessageQueue
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::StringW>*& dyn_LogMessageQueue();
    // Get instance field reference: private System.Threading.Thread _writeLogThread
    [[deprecated("Use field access instead!")]] ::System::Threading::Thread*& dyn__writeLogThread();
    // Get instance field reference: private readonly System.Object _threadLock
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__threadLock();
    // Get instance field reference: private System.DateTime _threadKillTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn__threadKillTime();
    // Get instance field reference: private System.Boolean _isApplicationPlaying
    [[deprecated("Use field access instead!")]] bool& dyn__isApplicationPlaying();
    // Get instance field reference: private System.Int32 _pendingLogsCount
    [[deprecated("Use field access instead!")]] int& dyn__pendingLogsCount();
    // Get instance field reference: private System.Net.IPAddress <ip>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::IPAddress*& dyn_$ip$k__BackingField();
    // Get instance field reference: private System.Int32 <port>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$port$k__BackingField();
    // Get instance field reference: private System.String <url>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$url$k__BackingField();
    // public System.Net.IPAddress get_ip()
    // Offset: 0x4B6208C
    ::System::Net::IPAddress* get_ip();
    // public System.Void set_ip(System.Net.IPAddress value)
    // Offset: 0x4B62094
    void set_ip(::System::Net::IPAddress* value);
    // public System.Int32 get_port()
    // Offset: 0x4B6209C
    int get_port();
    // public System.Void set_port(System.Int32 value)
    // Offset: 0x4B620A4
    void set_port(int value);
    // public System.String get_url()
    // Offset: 0x4B620AC
    ::StringW get_url();
    // public System.Void set_url(System.String value)
    // Offset: 0x4B620B4
    void set_url(::StringW value);
    // protected System.Void .ctor()
    // Offset: 0x4B620BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabLoggerBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Public::PlayFabLoggerBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabLoggerBase*, creationType>()));
    }
    // public System.Void OnEnable()
    // Offset: 0x4B62310
    void OnEnable();
    // private System.Collections.IEnumerator RegisterLogger()
    // Offset: 0x4B62378
    ::System::Collections::IEnumerator* RegisterLogger();
    // public System.Void OnDisable()
    // Offset: 0x4B6240C
    void OnDisable();
    // public System.Void OnDestroy()
    // Offset: 0x4B624EC
    void OnDestroy();
    // protected System.Void BeginUploadLog()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void BeginUploadLog();
    // protected System.Void UploadLog(System.String message)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UploadLog(::StringW message);
    // protected System.Void EndUploadLog()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void EndUploadLog();
    // private System.Void HandleUnityLog(System.String message, System.String stacktrace, UnityEngine.LogType type)
    // Offset: 0x4B624F4
    void HandleUnityLog(::StringW message, ::StringW stacktrace, ::UnityEngine::LogType type);
    // private System.Void ActivateThreadWorker()
    // Offset: 0x4B6293C
    void ActivateThreadWorker();
    // private System.Void WriteLogThreadWorker()
    // Offset: 0x4B62AB8
    void WriteLogThreadWorker();
    // static private System.Void .cctor()
    // Offset: 0x4B63088
    static void _cctor();
  }; // PlayFab.Public.PlayFabLoggerBase
  #pragma pack(pop)
  static check_size<sizeof(PlayFabLoggerBase), 72 + sizeof(::StringW)> __PlayFab_Public_PlayFabLoggerBaseSizeCheck;
  static_assert(sizeof(PlayFabLoggerBase) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::get_ip
// Il2CppName: get_ip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress* (PlayFab::Public::PlayFabLoggerBase::*)()>(&PlayFab::Public::PlayFabLoggerBase::get_ip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "get_ip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::set_ip
// Il2CppName: set_ip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLoggerBase::*)(::System::Net::IPAddress*)>(&PlayFab::Public::PlayFabLoggerBase::set_ip)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "set_ip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::get_port
// Il2CppName: get_port
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PlayFab::Public::PlayFabLoggerBase::*)()>(&PlayFab::Public::PlayFabLoggerBase::get_port)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "get_port", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::set_port
// Il2CppName: set_port
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLoggerBase::*)(int)>(&PlayFab::Public::PlayFabLoggerBase::set_port)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "set_port", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::get_url
// Il2CppName: get_url
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PlayFab::Public::PlayFabLoggerBase::*)()>(&PlayFab::Public::PlayFabLoggerBase::get_url)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "get_url", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::set_url
// Il2CppName: set_url
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLoggerBase::*)(::StringW)>(&PlayFab::Public::PlayFabLoggerBase::set_url)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "set_url", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLoggerBase::*)()>(&PlayFab::Public::PlayFabLoggerBase::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::RegisterLogger
// Il2CppName: RegisterLogger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (PlayFab::Public::PlayFabLoggerBase::*)()>(&PlayFab::Public::PlayFabLoggerBase::RegisterLogger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "RegisterLogger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLoggerBase::*)()>(&PlayFab::Public::PlayFabLoggerBase::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLoggerBase::*)()>(&PlayFab::Public::PlayFabLoggerBase::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::BeginUploadLog
// Il2CppName: BeginUploadLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLoggerBase::*)()>(&PlayFab::Public::PlayFabLoggerBase::BeginUploadLog)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "BeginUploadLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::UploadLog
// Il2CppName: UploadLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLoggerBase::*)(::StringW)>(&PlayFab::Public::PlayFabLoggerBase::UploadLog)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "UploadLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::EndUploadLog
// Il2CppName: EndUploadLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLoggerBase::*)()>(&PlayFab::Public::PlayFabLoggerBase::EndUploadLog)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "EndUploadLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::HandleUnityLog
// Il2CppName: HandleUnityLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLoggerBase::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&PlayFab::Public::PlayFabLoggerBase::HandleUnityLog)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* stacktrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "HandleUnityLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, stacktrace, type});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::ActivateThreadWorker
// Il2CppName: ActivateThreadWorker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLoggerBase::*)()>(&PlayFab::Public::PlayFabLoggerBase::ActivateThreadWorker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "ActivateThreadWorker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::WriteLogThreadWorker
// Il2CppName: WriteLogThreadWorker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLoggerBase::*)()>(&PlayFab::Public::PlayFabLoggerBase::WriteLogThreadWorker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), "WriteLogThreadWorker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLoggerBase::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PlayFab::Public::PlayFabLoggerBase::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLoggerBase*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};