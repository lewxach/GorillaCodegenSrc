// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.VLogLevel
#include "Meta/WitAi/VLogLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Forward declaring type: VLog
  class VLog;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::VLog);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::VLog*, "Meta.WitAi", "VLog");
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.VLog
  // [TokenAttribute] Offset: FFFFFFFF
  class VLog : public ::Il2CppObject {
    public:
    // Get static field: static private System.Boolean <SuppressLogs>k__BackingField
    static bool _get_$SuppressLogs$k__BackingField();
    // Set static field: static private System.Boolean <SuppressLogs>k__BackingField
    static void _set_$SuppressLogs$k__BackingField(bool value);
    // Get static field: static private System.Action`3<System.Text.StringBuilder,System.String,Meta.WitAi.VLogLevel> OnPreLog
    static ::System::Action_3<::System::Text::StringBuilder*, ::StringW, ::Meta::WitAi::VLogLevel>* _get_OnPreLog();
    // Set static field: static private System.Action`3<System.Text.StringBuilder,System.String,Meta.WitAi.VLogLevel> OnPreLog
    static void _set_OnPreLog(::System::Action_3<::System::Text::StringBuilder*, ::StringW, ::Meta::WitAi::VLogLevel>* value);
    // static public System.Boolean get_SuppressLogs()
    // Offset: 0x443FCBC
    static bool get_SuppressLogs();
    // static public System.Void set_SuppressLogs(System.Boolean value)
    // Offset: 0x443FD04
    static void set_SuppressLogs(bool value);
    // static public System.Void add_OnPreLog(System.Action`3<System.Text.StringBuilder,System.String,Meta.WitAi.VLogLevel> value)
    // Offset: 0x443FD54
    static void add_OnPreLog(::System::Action_3<::System::Text::StringBuilder*, ::StringW, ::Meta::WitAi::VLogLevel>* value);
    // static public System.Void remove_OnPreLog(System.Action`3<System.Text.StringBuilder,System.String,Meta.WitAi.VLogLevel> value)
    // Offset: 0x443FE24
    static void remove_OnPreLog(::System::Action_3<::System::Text::StringBuilder*, ::StringW, ::Meta::WitAi::VLogLevel>* value);
    // static public System.Void I(System.Object log)
    // Offset: 0x443FEF4
    static void I(::Il2CppObject* log);
    // static public System.Void I(System.String logCategory, System.Object log)
    // Offset: 0x44401DC
    static void I(::StringW logCategory, ::Il2CppObject* log);
    // static public System.Void D(System.Object log)
    // Offset: 0x443E0E8
    static void D(::Il2CppObject* log);
    // static public System.Void D(System.String logCategory, System.Object log)
    // Offset: 0x44401F0
    static void D(::StringW logCategory, ::Il2CppObject* log);
    // static public System.Void W(System.Object log)
    // Offset: 0x4440204
    static void W(::Il2CppObject* log);
    // static public System.Void W(System.String logCategory, System.Object log)
    // Offset: 0x4440214
    static void W(::StringW logCategory, ::Il2CppObject* log);
    // static public System.Void E(System.Object log)
    // Offset: 0x443ECD8
    static void E(::Il2CppObject* log);
    // static public System.Void E(System.String logCategory, System.Object log)
    // Offset: 0x443DAE0
    static void E(::StringW logCategory, ::Il2CppObject* log);
    // static private System.Void Log(Meta.WitAi.VLogLevel logType, System.String logCategory, System.Object log)
    // Offset: 0x443FF04
    static void Log(::Meta::WitAi::VLogLevel logType, ::StringW logCategory, ::Il2CppObject* log);
    // static private System.String GetCallingCategory()
    // Offset: 0x4440228
    static ::StringW GetCallingCategory();
    // static private System.Void WrapWithCallingLink(System.Text.StringBuilder builder, System.Int32 startIndex)
    // Offset: 0x4440300
    static void WrapWithCallingLink(::System::Text::StringBuilder* builder, int startIndex);
    // static private System.Void WrapWithLogColor(System.Text.StringBuilder builder, System.Int32 startIndex, Meta.WitAi.VLogLevel logType)
    // Offset: 0x44402FC
    static void WrapWithLogColor(::System::Text::StringBuilder* builder, int startIndex, ::Meta::WitAi::VLogLevel logType);
  }; // Meta.WitAi.VLog
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::VLog::get_SuppressLogs
// Il2CppName: get_SuppressLogs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Meta::WitAi::VLog::get_SuppressLogs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "get_SuppressLogs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::set_SuppressLogs
// Il2CppName: set_SuppressLogs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Meta::WitAi::VLog::set_SuppressLogs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "set_SuppressLogs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::add_OnPreLog
// Il2CppName: add_OnPreLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_3<::System::Text::StringBuilder*, ::StringW, ::Meta::WitAi::VLogLevel>*)>(&Meta::WitAi::VLog::add_OnPreLog)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder"), ::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("Meta.WitAi", "VLogLevel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "add_OnPreLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::remove_OnPreLog
// Il2CppName: remove_OnPreLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_3<::System::Text::StringBuilder*, ::StringW, ::Meta::WitAi::VLogLevel>*)>(&Meta::WitAi::VLog::remove_OnPreLog)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder"), ::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("Meta.WitAi", "VLogLevel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "remove_OnPreLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::I
// Il2CppName: I
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&Meta::WitAi::VLog::I)> {
  static const MethodInfo* get() {
    static auto* log = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "I", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{log});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::I
// Il2CppName: I
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Il2CppObject*)>(&Meta::WitAi::VLog::I)> {
  static const MethodInfo* get() {
    static auto* logCategory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* log = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "I", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logCategory, log});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::D
// Il2CppName: D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&Meta::WitAi::VLog::D)> {
  static const MethodInfo* get() {
    static auto* log = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{log});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::D
// Il2CppName: D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Il2CppObject*)>(&Meta::WitAi::VLog::D)> {
  static const MethodInfo* get() {
    static auto* logCategory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* log = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logCategory, log});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::W
// Il2CppName: W
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&Meta::WitAi::VLog::W)> {
  static const MethodInfo* get() {
    static auto* log = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "W", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{log});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::W
// Il2CppName: W
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Il2CppObject*)>(&Meta::WitAi::VLog::W)> {
  static const MethodInfo* get() {
    static auto* logCategory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* log = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "W", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logCategory, log});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::E
// Il2CppName: E
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&Meta::WitAi::VLog::E)> {
  static const MethodInfo* get() {
    static auto* log = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "E", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{log});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::E
// Il2CppName: E
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Il2CppObject*)>(&Meta::WitAi::VLog::E)> {
  static const MethodInfo* get() {
    static auto* logCategory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* log = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "E", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logCategory, log});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Meta::WitAi::VLogLevel, ::StringW, ::Il2CppObject*)>(&Meta::WitAi::VLog::Log)> {
  static const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("Meta.WitAi", "VLogLevel")->byval_arg;
    static auto* logCategory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* log = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, logCategory, log});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::GetCallingCategory
// Il2CppName: GetCallingCategory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Meta::WitAi::VLog::GetCallingCategory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "GetCallingCategory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::WrapWithCallingLink
// Il2CppName: WrapWithCallingLink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, int)>(&Meta::WitAi::VLog::WrapWithCallingLink)> {
  static const MethodInfo* get() {
    static auto* builder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "WrapWithCallingLink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{builder, startIndex});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::VLog::WrapWithLogColor
// Il2CppName: WrapWithLogColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, int, ::Meta::WitAi::VLogLevel)>(&Meta::WitAi::VLog::WrapWithLogColor)> {
  static const MethodInfo* get() {
    static auto* builder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* logType = &::il2cpp_utils::GetClassFromName("Meta.WitAi", "VLogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::VLog*), "WrapWithLogColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{builder, startIndex, logType});
  }
};