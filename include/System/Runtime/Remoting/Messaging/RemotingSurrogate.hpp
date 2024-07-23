// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.ISerializationSurrogate
#include "System/Runtime/Serialization/ISerializationSurrogate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: RemotingSurrogate
  class RemotingSurrogate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::RemotingSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::RemotingSurrogate*, "System.Runtime.Remoting.Messaging", "RemotingSurrogate");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.RemotingSurrogate
  // [TokenAttribute] Offset: FFFFFFFF
  class RemotingSurrogate : public ::Il2CppObject/*, public ::System::Runtime::Serialization::ISerializationSurrogate*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializationSurrogate
    operator ::System::Runtime::Serialization::ISerializationSurrogate() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializationSurrogate*>(this);
    }
    // public System.Void GetObjectData(System.Object obj, System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext sc)
    // Offset: 0x454E830
    void GetObjectData(::Il2CppObject* obj, ::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);
    // public System.Object SetObjectData(System.Object obj, System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext sc, System.Runtime.Serialization.ISurrogateSelector selector)
    // Offset: 0x454E940
    ::Il2CppObject* SetObjectData(::Il2CppObject* obj, ::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc, ::System::Runtime::Serialization::ISurrogateSelector* selector);
    // public System.Void .ctor()
    // Offset: 0x454E978
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemotingSurrogate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::RemotingSurrogate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemotingSurrogate*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.RemotingSurrogate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::RemotingSurrogate::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::RemotingSurrogate::*)(::Il2CppObject*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Remoting::Messaging::RemotingSurrogate::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* si = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* sc = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::RemotingSurrogate*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, si, sc});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::RemotingSurrogate::SetObjectData
// Il2CppName: SetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::RemotingSurrogate::*)(::Il2CppObject*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISurrogateSelector*)>(&System::Runtime::Remoting::Messaging::RemotingSurrogate::SetObjectData)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* si = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* sc = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* selector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::RemotingSurrogate*), "SetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, si, sc, selector});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::RemotingSurrogate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!