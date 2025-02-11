// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodCallMessage
#include "System/Runtime/Remoting/Messaging/IMethodCallMessage.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Remoting.Messaging.IInternalMessage
#include "System/Runtime/Remoting/Messaging/IInternalMessage.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
  // Forward declaring type: CADMethodCallMessage
  class CADMethodCallMessage;
  // Skipping declaration: IMethodMessage because it is already included!
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: Identity
  class Identity;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: MethodCall
  class MethodCall;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MethodCall);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MethodCall*, "System.Runtime.Remoting.Messaging", "MethodCall");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.MethodCall
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  // [CLSCompliantAttribute] Offset: FFFFFFFF
  class MethodCall : public ::Il2CppObject/*, public ::System::Runtime::Remoting::Messaging::IMethodCallMessage, public ::System::Runtime::Serialization::ISerializable, public ::System::Runtime::Remoting::Messaging::IInternalMessage*/ {
    public:
    public:
    // private System.String _uri
    // Size: 0x8
    // Offset: 0x10
    ::StringW uri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _typeName
    // Size: 0x8
    // Offset: 0x18
    ::StringW typeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _methodName
    // Size: 0x8
    // Offset: 0x20
    ::StringW methodName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Object[] _args
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Il2CppObject*> args;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Type[] _methodSignature
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::System::Type*> methodSignature;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // private System.Reflection.MethodBase _methodBase
    // Size: 0x8
    // Offset: 0x38
    ::System::Reflection::MethodBase* methodBase;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodBase*) == 0x8);
    // private System.Runtime.Remoting.Messaging.LogicalCallContext _callContext
    // Size: 0x8
    // Offset: 0x40
    ::System::Runtime::Remoting::Messaging::LogicalCallContext* callContext;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::LogicalCallContext*) == 0x8);
    // private System.Runtime.Remoting.Identity _targetIdentity
    // Size: 0x8
    // Offset: 0x48
    ::System::Runtime::Remoting::Identity* targetIdentity;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Identity*) == 0x8);
    // private System.Type[] _genericArguments
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::System::Type*> genericArguments;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // protected System.Collections.IDictionary ExternalProperties
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::IDictionary* ExternalProperties;
    // Field size check
    static_assert(sizeof(::System::Collections::IDictionary*) == 0x8);
    // protected System.Collections.IDictionary InternalProperties
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::IDictionary* InternalProperties;
    // Field size check
    static_assert(sizeof(::System::Collections::IDictionary*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage
    operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Messaging::IInternalMessage
    operator ::System::Runtime::Remoting::Messaging::IInternalMessage() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Messaging::IInternalMessage*>(this);
    }
    // Get instance field reference: private System.String _uri
    [[deprecated("Use field access instead!")]] ::StringW& dyn__uri();
    // Get instance field reference: private System.String _typeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__typeName();
    // Get instance field reference: private System.String _methodName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__methodName();
    // Get instance field reference: private System.Object[] _args
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn__args();
    // Get instance field reference: private System.Type[] _methodSignature
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn__methodSignature();
    // Get instance field reference: private System.Reflection.MethodBase _methodBase
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodBase*& dyn__methodBase();
    // Get instance field reference: private System.Runtime.Remoting.Messaging.LogicalCallContext _callContext
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::LogicalCallContext*& dyn__callContext();
    // Get instance field reference: private System.Runtime.Remoting.Identity _targetIdentity
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Identity*& dyn__targetIdentity();
    // Get instance field reference: private System.Type[] _genericArguments
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn__genericArguments();
    // Get instance field reference: protected System.Collections.IDictionary ExternalProperties
    [[deprecated("Use field access instead!")]] ::System::Collections::IDictionary*& dyn_ExternalProperties();
    // Get instance field reference: protected System.Collections.IDictionary InternalProperties
    [[deprecated("Use field access instead!")]] ::System::Collections::IDictionary*& dyn_InternalProperties();
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4547DE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodCall* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::MethodCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodCall*, creationType>(info, context)));
    }
    // System.Void .ctor(System.Runtime.Remoting.Messaging.CADMethodCallMessage msg)
    // Offset: 0x454A524
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodCall* New_ctor(::System::Runtime::Remoting::Messaging::CADMethodCallMessage* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::MethodCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodCall*, creationType>(msg)));
    }
    // System.Void CopyFrom(System.Runtime.Remoting.Messaging.IMethodMessage call)
    // Offset: 0x4536728
    void CopyFrom(::System::Runtime::Remoting::Messaging::IMethodMessage* call);
    // System.Void InitMethodProperty(System.String key, System.Object value)
    // Offset: 0x4548418
    void InitMethodProperty(::StringW key, ::Il2CppObject* value);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x45489F4
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.Int32 get_ArgCount()
    // Offset: 0x454A678
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0x454A694
    ::ArrayW<::Il2CppObject*> get_Args();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x454A69C
    ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0x454A70C
    ::System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0x454ACDC
    ::StringW get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0x454AD24
    ::Il2CppObject* get_MethodSignature();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x4548EB0
    ::System::Collections::IDictionary* get_Properties();
    // System.Void InitDictionary()
    // Offset: 0x454AE6C
    void InitDictionary();
    // public System.String get_TypeName()
    // Offset: 0x454AF78
    ::StringW get_TypeName();
    // public System.String get_Uri()
    // Offset: 0x454AFD4
    ::StringW get_Uri();
    // public System.Void set_Uri(System.String value)
    // Offset: 0x454AFDC
    void set_Uri(::StringW value);
    // private System.String System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri()
    // Offset: 0x454AFE4
    ::StringW System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String value)
    // Offset: 0x454AFEC
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::StringW value);
    // public System.Object GetArg(System.Int32 argNum)
    // Offset: 0x454AFF4
    ::Il2CppObject* GetArg(int argNum);
    // public System.Void Init()
    // Offset: 0x454B024
    void Init();
    // public System.Void ResolveMethod()
    // Offset: 0x454A73C
    void ResolveMethod();
    // private System.Type CastTo(System.String clientType, System.Type serverType)
    // Offset: 0x454B028
    ::System::Type* CastTo(::StringW clientType, ::System::Type* serverType);
    // static private System.String GetTypeNameFromAssemblyQualifiedName(System.String aqname)
    // Offset: 0x454B214
    static ::StringW GetTypeNameFromAssemblyQualifiedName(::StringW aqname);
    // private System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
    // Offset: 0x454B2BC
    ::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(System.Runtime.Remoting.Identity value)
    // Offset: 0x454B2C4
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value);
    // private System.Type[] get_GenericArguments()
    // Offset: 0x454B1C0
    ::ArrayW<::System::Type*> get_GenericArguments();
    // System.Void .ctor()
    // Offset: 0x4547DDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodCall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::MethodCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodCall*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.MethodCall
  #pragma pack(pop)
  static check_size<sizeof(MethodCall), 96 + sizeof(::System::Collections::IDictionary*)> __System_Runtime_Remoting_Messaging_MethodCallSizeCheck;
  static_assert(sizeof(MethodCall) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)(::System::Runtime::Remoting::Messaging::IMethodMessage*)>(&System::Runtime::Remoting::Messaging::MethodCall::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* call = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMethodMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{call});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::InitMethodProperty
// Il2CppName: InitMethodProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)(::StringW, ::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::MethodCall::InitMethodProperty)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "InitMethodProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Remoting::Messaging::MethodCall::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_ArgCount
// Il2CppName: get_ArgCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_ArgCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_ArgCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_Args
// Il2CppName: get_Args
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_Args)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_Args", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_LogicalCallContext
// Il2CppName: get_LogicalCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_LogicalCallContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_LogicalCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_MethodBase
// Il2CppName: get_MethodBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_MethodBase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_MethodBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_MethodName
// Il2CppName: get_MethodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_MethodName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_MethodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_MethodSignature
// Il2CppName: get_MethodSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_MethodSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_MethodSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::InitDictionary
// Il2CppName: InitDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::InitDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "InitDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_TypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_Uri
// Il2CppName: get_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_Uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::set_Uri
// Il2CppName: set_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)(::StringW)>(&System::Runtime::Remoting::Messaging::MethodCall::set_Uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "set_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)(::StringW)>(&System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::GetArg
// Il2CppName: GetArg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MethodCall::*)(int)>(&System::Runtime::Remoting::Messaging::MethodCall::GetArg)> {
  static const MethodInfo* get() {
    static auto* argNum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "GetArg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argNum});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::ResolveMethod
// Il2CppName: ResolveMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::ResolveMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "ResolveMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::CastTo
// Il2CppName: CastTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Runtime::Remoting::Messaging::MethodCall::*)(::StringW, ::System::Type*)>(&System::Runtime::Remoting::Messaging::MethodCall::CastTo)> {
  static const MethodInfo* get() {
    static auto* clientType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* serverType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "CastTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clientType, serverType});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::GetTypeNameFromAssemblyQualifiedName
// Il2CppName: GetTypeNameFromAssemblyQualifiedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Runtime::Remoting::Messaging::MethodCall::GetTypeNameFromAssemblyQualifiedName)> {
  static const MethodInfo* get() {
    static auto* aqname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "GetTypeNameFromAssemblyQualifiedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aqname});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Identity* (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)(::System::Runtime::Remoting::Identity*)>(&System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "Identity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_GenericArguments
// Il2CppName: get_GenericArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_GenericArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_GenericArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
