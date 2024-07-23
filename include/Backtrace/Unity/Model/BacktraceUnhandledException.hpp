// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: UnityEngine.LogType
#include "UnityEngine/LogType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Backtrace::Unity::Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceStackFrame
  class BacktraceStackFrame;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceUnhandledException
  class BacktraceUnhandledException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::BacktraceUnhandledException);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::BacktraceUnhandledException*, "Backtrace.Unity.Model", "BacktraceUnhandledException");
// Type namespace: Backtrace.Unity.Model
namespace Backtrace::Unity::Model {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.BacktraceUnhandledException
  // [TokenAttribute] Offset: FFFFFFFF
  class BacktraceUnhandledException : public ::System::Exception {
    public:
    public:
    // private System.Boolean _header
    // Size: 0x1
    // Offset: 0x8C
    bool header;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: header and: message
    char __padding0[0x3] = {};
    // private System.String _message
    // Size: 0x8
    // Offset: 0x90
    ::StringW message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <Classifier>k__BackingField
    // Size: 0x8
    // Offset: 0x98
    ::StringW Classifier;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String _stacktrace
    // Size: 0x8
    // Offset: 0xA0
    ::StringW stacktrace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.LogType <Type>k__BackingField
    // Size: 0x4
    // Offset: 0xA8
    ::UnityEngine::LogType Type;
    // Field size check
    static_assert(sizeof(::UnityEngine::LogType) == 0x4);
    // Padding between fields: Type and: StackFrames
    char __padding4[0x4] = {};
    // public readonly System.Collections.Generic.List`1<Backtrace.Unity.Model.BacktraceStackFrame> StackFrames
    // Size: 0x8
    // Offset: 0xB0
    ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* StackFrames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*) == 0x8);
    public:
    // Get static field: static private System.String[] _javaExtensions
    static ::ArrayW<::StringW> _get__javaExtensions();
    // Set static field: static private System.String[] _javaExtensions
    static void _set__javaExtensions(::ArrayW<::StringW> value);
    // Get instance field reference: private System.Boolean _header
    [[deprecated("Use field access instead!")]] bool& dyn__header();
    // Get instance field reference: private System.String _message
    [[deprecated("Use field access instead!")]] ::StringW& dyn__message();
    // Get instance field reference: private System.String <Classifier>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Classifier$k__BackingField();
    // Get instance field reference: private readonly System.String _stacktrace
    [[deprecated("Use field access instead!")]] ::StringW& dyn__stacktrace();
    // Get instance field reference: private UnityEngine.LogType <Type>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::LogType& dyn_$Type$k__BackingField();
    // Get instance field reference: public readonly System.Collections.Generic.List`1<Backtrace.Unity.Model.BacktraceStackFrame> StackFrames
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*& dyn_StackFrames();
    // public System.Boolean get_Header()
    // Offset: 0x2A64F80
    bool get_Header();
    // public System.String get_Classifier()
    // Offset: 0x2A64F90
    ::StringW get_Classifier();
    // public System.Void set_Classifier(System.String value)
    // Offset: 0x2A64F98
    void set_Classifier(::StringW value);
    // public UnityEngine.LogType get_Type()
    // Offset: 0x2A64FA8
    ::UnityEngine::LogType get_Type();
    // public System.Void set_Type(UnityEngine.LogType value)
    // Offset: 0x2A64FB0
    void set_Type(::UnityEngine::LogType value);
    // public System.Void .ctor(System.String message, System.String stacktrace)
    // Offset: 0x2A526B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BacktraceUnhandledException* New_ctor(::StringW message, ::StringW stacktrace) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::BacktraceUnhandledException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BacktraceUnhandledException*, creationType>(message, stacktrace)));
    }
    // private System.String GetStackTraceErrorMessage(System.String beginningOfTheFrame)
    // Offset: 0x2A64FB8
    ::StringW GetStackTraceErrorMessage(::StringW beginningOfTheFrame);
    // private System.Collections.Generic.List`1<Backtrace.Unity.Model.BacktraceStackFrame> ConvertStackFrames(System.Collections.Generic.IEnumerable`1<System.String> frames)
    // Offset: 0x2A65080
    ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* ConvertStackFrames(::System::Collections::Generic::IEnumerable_1<::StringW>* frames);
    // private Backtrace.Unity.Model.BacktraceStackFrame ConvertFrame(System.String frameString, System.Int32 methodNameEndIndex)
    // Offset: 0x2A6557C
    ::Backtrace::Unity::Model::BacktraceStackFrame* ConvertFrame(::StringW frameString, int methodNameEndIndex);
    // private Backtrace.Unity.Model.BacktraceStackFrame SetJITStackTraceInformation(System.String frameString)
    // Offset: 0x2A65B14
    ::Backtrace::Unity::Model::BacktraceStackFrame* SetJITStackTraceInformation(::StringW frameString);
    // private Backtrace.Unity.Model.BacktraceStackFrame SetNativeStackTraceInformation(System.String frameString)
    // Offset: 0x2A657C4
    ::Backtrace::Unity::Model::BacktraceStackFrame* SetNativeStackTraceInformation(::StringW frameString);
    // private Backtrace.Unity.Model.BacktraceStackFrame SetAndroidStackTraceInformation(System.String frameString, System.Int32 parameterStart, System.Int32 parameterEnd)
    // Offset: 0x2A66198
    ::Backtrace::Unity::Model::BacktraceStackFrame* SetAndroidStackTraceInformation(::StringW frameString, int parameterStart, int parameterEnd);
    // private Backtrace.Unity.Model.BacktraceStackFrame SetDefaultStackTraceInformation(System.String frameString, System.Int32 methodNameEndIndex)
    // Offset: 0x2A65DEC
    ::Backtrace::Unity::Model::BacktraceStackFrame* SetDefaultStackTraceInformation(::StringW frameString, int methodNameEndIndex);
    // private System.Void TrySetClassifier()
    // Offset: 0x2A653A4
    void TrySetClassifier();
    // static private System.Void .cctor()
    // Offset: 0x2A66310
    static void _cctor();
    // public override System.String get_Message()
    // Offset: 0x2A64F88
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::StringW get_Message();
    // public override System.String get_StackTrace()
    // Offset: 0x2A64FA0
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_StackTrace()
    ::StringW get_StackTrace();
  }; // Backtrace.Unity.Model.BacktraceUnhandledException
  #pragma pack(pop)
  static check_size<sizeof(BacktraceUnhandledException), 176 + sizeof(::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*)> __Backtrace_Unity_Model_BacktraceUnhandledExceptionSizeCheck;
  static_assert(sizeof(BacktraceUnhandledException) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::get_Header
// Il2CppName: get_Header
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::BacktraceUnhandledException::*)()>(&Backtrace::Unity::Model::BacktraceUnhandledException::get_Header)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "get_Header", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::get_Classifier
// Il2CppName: get_Classifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::BacktraceUnhandledException::*)()>(&Backtrace::Unity::Model::BacktraceUnhandledException::get_Classifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "get_Classifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::set_Classifier
// Il2CppName: set_Classifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW)>(&Backtrace::Unity::Model::BacktraceUnhandledException::set_Classifier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "set_Classifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LogType (Backtrace::Unity::Model::BacktraceUnhandledException::*)()>(&Backtrace::Unity::Model::BacktraceUnhandledException::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::set_Type
// Il2CppName: set_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::BacktraceUnhandledException::*)(::UnityEngine::LogType)>(&Backtrace::Unity::Model::BacktraceUnhandledException::set_Type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "set_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::GetStackTraceErrorMessage
// Il2CppName: GetStackTraceErrorMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW)>(&Backtrace::Unity::Model::BacktraceUnhandledException::GetStackTraceErrorMessage)> {
  static const MethodInfo* get() {
    static auto* beginningOfTheFrame = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "GetStackTraceErrorMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beginningOfTheFrame});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::ConvertStackFrames
// Il2CppName: ConvertStackFrames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* (Backtrace::Unity::Model::BacktraceUnhandledException::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&Backtrace::Unity::Model::BacktraceUnhandledException::ConvertStackFrames)> {
  static const MethodInfo* get() {
    static auto* frames = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "ConvertStackFrames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frames});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::ConvertFrame
// Il2CppName: ConvertFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Model::BacktraceStackFrame* (Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW, int)>(&Backtrace::Unity::Model::BacktraceUnhandledException::ConvertFrame)> {
  static const MethodInfo* get() {
    static auto* frameString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* methodNameEndIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "ConvertFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameString, methodNameEndIndex});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::SetJITStackTraceInformation
// Il2CppName: SetJITStackTraceInformation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Model::BacktraceStackFrame* (Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW)>(&Backtrace::Unity::Model::BacktraceUnhandledException::SetJITStackTraceInformation)> {
  static const MethodInfo* get() {
    static auto* frameString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "SetJITStackTraceInformation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameString});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::SetNativeStackTraceInformation
// Il2CppName: SetNativeStackTraceInformation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Model::BacktraceStackFrame* (Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW)>(&Backtrace::Unity::Model::BacktraceUnhandledException::SetNativeStackTraceInformation)> {
  static const MethodInfo* get() {
    static auto* frameString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "SetNativeStackTraceInformation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameString});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::SetAndroidStackTraceInformation
// Il2CppName: SetAndroidStackTraceInformation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Model::BacktraceStackFrame* (Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW, int, int)>(&Backtrace::Unity::Model::BacktraceUnhandledException::SetAndroidStackTraceInformation)> {
  static const MethodInfo* get() {
    static auto* frameString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parameterStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parameterEnd = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "SetAndroidStackTraceInformation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameString, parameterStart, parameterEnd});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::SetDefaultStackTraceInformation
// Il2CppName: SetDefaultStackTraceInformation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Model::BacktraceStackFrame* (Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW, int)>(&Backtrace::Unity::Model::BacktraceUnhandledException::SetDefaultStackTraceInformation)> {
  static const MethodInfo* get() {
    static auto* frameString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* methodNameEndIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "SetDefaultStackTraceInformation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameString, methodNameEndIndex});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::TrySetClassifier
// Il2CppName: TrySetClassifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::BacktraceUnhandledException::*)()>(&Backtrace::Unity::Model::BacktraceUnhandledException::TrySetClassifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "TrySetClassifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Backtrace::Unity::Model::BacktraceUnhandledException::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::BacktraceUnhandledException::*)()>(&Backtrace::Unity::Model::BacktraceUnhandledException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceUnhandledException::get_StackTrace
// Il2CppName: get_StackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::BacktraceUnhandledException::*)()>(&Backtrace::Unity::Model::BacktraceUnhandledException::get_StackTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceUnhandledException*), "get_StackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};