// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.Exceptions.OperationException
#include "UnityEngine/ResourceManagement/Exceptions/OperationException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Exceptions
namespace UnityEngine::ResourceManagement::Exceptions {
  // Forward declaring type: ProviderException
  class ProviderException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::ProviderException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::ProviderException*, "UnityEngine.ResourceManagement.Exceptions", "ProviderException");
// Type namespace: UnityEngine.ResourceManagement.Exceptions
namespace UnityEngine::ResourceManagement::Exceptions {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Exceptions.ProviderException
  // [TokenAttribute] Offset: FFFFFFFF
  class ProviderException : public ::UnityEngine::ResourceManagement::Exceptions::OperationException {
    public:
    // Writing base type padding for base size: 0x8C to desired offset: 0x90
    char ___base_padding[0x4] = {};
    public:
    // private readonly UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation <Location>k__BackingField
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* Location;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*
    constexpr operator ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*() const noexcept {
      return Location;
    }
    // Get instance field reference: private readonly UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation <Location>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& dyn_$Location$k__BackingField();
    // public System.Void .ctor(System.String message, UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, System.Exception innerException)
    // Offset: 0x532B19C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProviderException* New_ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Exceptions::ProviderException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProviderException*, creationType>(message, location, innerException)));
    }
    // public UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation get_Location()
    // Offset: 0x532B1CC
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location();
  }; // UnityEngine.ResourceManagement.Exceptions.ProviderException
  #pragma pack(pop)
  static check_size<sizeof(ProviderException), 144 + sizeof(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)> __UnityEngine_ResourceManagement_Exceptions_ProviderExceptionSizeCheck;
  static_assert(sizeof(ProviderException) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::ProviderException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::ProviderException::get_Location
// Il2CppName: get_Location
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (UnityEngine::ResourceManagement::Exceptions::ProviderException::*)()>(&UnityEngine::ResourceManagement::Exceptions::ProviderException::get_Location)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Exceptions::ProviderException*), "get_Location", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
