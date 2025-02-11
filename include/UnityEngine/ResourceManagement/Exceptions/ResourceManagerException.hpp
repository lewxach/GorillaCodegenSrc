// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Exceptions
namespace UnityEngine::ResourceManagement::Exceptions {
  // Forward declaring type: ResourceManagerException
  class ResourceManagerException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*, "UnityEngine.ResourceManagement.Exceptions", "ResourceManagerException");
// Type namespace: UnityEngine.ResourceManagement.Exceptions
namespace UnityEngine::ResourceManagement::Exceptions {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
  // [TokenAttribute] Offset: FFFFFFFF
  class ResourceManagerException : public ::System::Exception {
    public:
    // public System.Void .ctor()
    // Offset: 0x532AC84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManagerException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManagerException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x532ACDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManagerException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManagerException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x532AD44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManagerException* New_ctor(::StringW message, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManagerException*, creationType>(message, innerException)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo message, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x532ADB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManagerException* New_ctor(::System::Runtime::Serialization::SerializationInfo* message, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManagerException*, creationType>(message, context)));
    }
    // public override System.String ToString()
    // Offset: 0x532AE34
    // Implemented from: System.Exception
    // Base method: System.String Exception::ToString()
    ::StringW ToString();
  }; // UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::*)()>(&UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
