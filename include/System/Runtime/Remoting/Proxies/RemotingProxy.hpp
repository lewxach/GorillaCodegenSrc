// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Proxies.RealProxy
#include "System/Runtime/Remoting/Proxies/RealProxy.hpp"
// Including type: System.Runtime.Remoting.IRemotingTypeInfo
#include "System/Runtime/Remoting/IRemotingTypeInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
  // Forward declaring type: ConstructionCall
  class ConstructionCall;
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMethodMessage
  class IMethodMessage;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: Identity
  class Identity;
  // Forward declaring type: ClientIdentity
  class ClientIdentity;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: RemotingProxy
  class RemotingProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Proxies::RemotingProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Proxies::RemotingProxy*, "System.Runtime.Remoting.Proxies", "RemotingProxy");
// Type namespace: System.Runtime.Remoting.Proxies
namespace System::Runtime::Remoting::Proxies {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Proxies.RemotingProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class RemotingProxy : public ::System::Runtime::Remoting::Proxies::RealProxy/*, public ::System::Runtime::Remoting::IRemotingTypeInfo*/ {
    public:
    public:
    // private System.Runtime.Remoting.Messaging.IMessageSink _sink
    // Size: 0x8
    // Offset: 0x50
    ::System::Runtime::Remoting::Messaging::IMessageSink* sink;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    // private System.Boolean _hasEnvoySink
    // Size: 0x1
    // Offset: 0x58
    bool hasEnvoySink;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasEnvoySink and: ctorCall
    char __padding1[0x7] = {};
    // private System.Runtime.Remoting.Messaging.ConstructionCall _ctorCall
    // Size: 0x8
    // Offset: 0x60
    ::System::Runtime::Remoting::Messaging::ConstructionCall* ctorCall;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::ConstructionCall*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::IRemotingTypeInfo
    operator ::System::Runtime::Remoting::IRemotingTypeInfo() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::IRemotingTypeInfo*>(this);
    }
    // Get static field: static private System.Reflection.MethodInfo _cache_GetTypeMethod
    static ::System::Reflection::MethodInfo* _get__cache_GetTypeMethod();
    // Set static field: static private System.Reflection.MethodInfo _cache_GetTypeMethod
    static void _set__cache_GetTypeMethod(::System::Reflection::MethodInfo* value);
    // Get static field: static private System.Reflection.MethodInfo _cache_GetHashCodeMethod
    static ::System::Reflection::MethodInfo* _get__cache_GetHashCodeMethod();
    // Set static field: static private System.Reflection.MethodInfo _cache_GetHashCodeMethod
    static void _set__cache_GetHashCodeMethod(::System::Reflection::MethodInfo* value);
    // Get instance field reference: private System.Runtime.Remoting.Messaging.IMessageSink _sink
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::IMessageSink*& dyn__sink();
    // Get instance field reference: private System.Boolean _hasEnvoySink
    [[deprecated("Use field access instead!")]] bool& dyn__hasEnvoySink();
    // Get instance field reference: private System.Runtime.Remoting.Messaging.ConstructionCall _ctorCall
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::ConstructionCall*& dyn__ctorCall();
    // System.Void .ctor(System.Type type, System.String activationUrl, System.Object[] activationAttributes)
    // Offset: 0x45328BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemotingProxy* New_ctor(::System::Type* type, ::StringW activationUrl, ::ArrayW<::Il2CppObject*> activationAttributes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Proxies::RemotingProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemotingProxy*, creationType>(type, activationUrl, activationAttributes)));
    }
    // System.Void AttachIdentity(System.Runtime.Remoting.Identity identity)
    // Offset: 0x4536490
    void AttachIdentity(::System::Runtime::Remoting::Identity* identity);
    // System.Runtime.Remoting.Messaging.IMessage ActivateRemoteObject(System.Runtime.Remoting.Messaging.IMethodMessage request)
    // Offset: 0x4533EF4
    ::System::Runtime::Remoting::Messaging::IMessage* ActivateRemoteObject(::System::Runtime::Remoting::Messaging::IMethodMessage* request);
    // public System.String get_TypeName()
    // Offset: 0x4536D28
    ::StringW get_TypeName();
    // public System.Boolean CanCastTo(System.Type fromType, System.Object o)
    // Offset: 0x4536E60
    bool CanCastTo(::System::Type* fromType, ::Il2CppObject* o);
    // static private System.Void .cctor()
    // Offset: 0x4537198
    static void _cctor();
    // System.Void .ctor(System.Type type, System.Runtime.Remoting.ClientIdentity identity)
    // Offset: 0x4535084
    // Implemented from: System.Runtime.Remoting.Proxies.RealProxy
    // Base method: System.Void RealProxy::.ctor(System.Type type, System.Runtime.Remoting.ClientIdentity identity)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemotingProxy* New_ctor(::System::Type* type, ::System::Runtime::Remoting::ClientIdentity* identity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Proxies::RemotingProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemotingProxy*, creationType>(type, identity)));
    }
    // public override System.Runtime.Remoting.Messaging.IMessage Invoke(System.Runtime.Remoting.Messaging.IMessage request)
    // Offset: 0x4535ADC
    // Implemented from: System.Runtime.Remoting.Proxies.RealProxy
    // Base method: System.Runtime.Remoting.Messaging.IMessage RealProxy::Invoke(System.Runtime.Remoting.Messaging.IMessage request)
    ::System::Runtime::Remoting::Messaging::IMessage* Invoke(::System::Runtime::Remoting::Messaging::IMessage* request);
    // protected override System.Void Finalize()
    // Offset: 0x453707C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Runtime.Remoting.Proxies.RemotingProxy
  #pragma pack(pop)
  static check_size<sizeof(RemotingProxy), 96 + sizeof(::System::Runtime::Remoting::Messaging::ConstructionCall*)> __System_Runtime_Remoting_Proxies_RemotingProxySizeCheck;
  static_assert(sizeof(RemotingProxy) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RemotingProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RemotingProxy::AttachIdentity
// Il2CppName: AttachIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Runtime::Remoting::Identity*)>(&System::Runtime::Remoting::Proxies::RemotingProxy::AttachIdentity)> {
  static const MethodInfo* get() {
    static auto* identity = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "Identity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RemotingProxy*), "AttachIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{identity});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RemotingProxy::ActivateRemoteObject
// Il2CppName: ActivateRemoteObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Runtime::Remoting::Messaging::IMethodMessage*)>(&System::Runtime::Remoting::Proxies::RemotingProxy::ActivateRemoteObject)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMethodMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RemotingProxy*), "ActivateRemoteObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RemotingProxy::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Proxies::RemotingProxy::*)()>(&System::Runtime::Remoting::Proxies::RemotingProxy::get_TypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RemotingProxy*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RemotingProxy::CanCastTo
// Il2CppName: CanCastTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Type*, ::Il2CppObject*)>(&System::Runtime::Remoting::Proxies::RemotingProxy::CanCastTo)> {
  static const MethodInfo* get() {
    static auto* fromType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RemotingProxy*), "CanCastTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromType, o});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RemotingProxy::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::Proxies::RemotingProxy::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RemotingProxy*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RemotingProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RemotingProxy::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Proxies::RemotingProxy::Invoke)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RemotingProxy*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::RemotingProxy::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Proxies::RemotingProxy::*)()>(&System::Runtime::Remoting::Proxies::RemotingProxy::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::RemotingProxy*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};