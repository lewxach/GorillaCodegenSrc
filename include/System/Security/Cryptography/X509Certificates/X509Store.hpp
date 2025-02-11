// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Security.Cryptography.X509Certificates.StoreLocation
#include "System/Security/Cryptography/X509Certificates/StoreLocation.hpp"
// Including type: System.Security.Cryptography.X509Certificates.OpenFlags
#include "System/Security/Cryptography/X509Certificates/OpenFlags.hpp"
// Including type: System.Security.Cryptography.X509Certificates.StoreName
#include "System/Security/Cryptography/X509Certificates/StoreName.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2Collection
  class X509Certificate2Collection;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Store
  class X509Store;
  // Forward declaring type: X509Stores
  class X509Stores;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Store
  class X509Store;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Store);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Store*, "System.Security.Cryptography.X509Certificates", "X509Store");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Store
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Store : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.String _name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Security.Cryptography.X509Certificates.StoreLocation _location
    // Size: 0x4
    // Offset: 0x18
    ::System::Security::Cryptography::X509Certificates::StoreLocation location;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::StoreLocation) == 0x4);
    // Padding between fields: location and: list
    char __padding1[0x4] = {};
    // private System.Security.Cryptography.X509Certificates.X509Certificate2Collection list
    // Size: 0x8
    // Offset: 0x20
    ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* list;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.OpenFlags _flags
    // Size: 0x4
    // Offset: 0x28
    ::System::Security::Cryptography::X509Certificates::OpenFlags flags;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::OpenFlags) == 0x4);
    // Padding between fields: flags and: store
    char __padding3[0x4] = {};
    // private Mono.Security.X509.X509Store store
    // Size: 0x8
    // Offset: 0x30
    ::Mono::Security::X509::X509Store* store;
    // Field size check
    static_assert(sizeof(::Mono::Security::X509::X509Store*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.StoreLocation _location
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::StoreLocation& dyn__location();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Certificate2Collection list
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& dyn_list();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.OpenFlags _flags
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::OpenFlags& dyn__flags();
    // Get instance field reference: private Mono.Security.X509.X509Store store
    [[deprecated("Use field access instead!")]] ::Mono::Security::X509::X509Store*& dyn_store();
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.StoreName storeName, System.Security.Cryptography.X509Certificates.StoreLocation storeLocation)
    // Offset: 0x4FA1C9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Store* New_ctor(::System::Security::Cryptography::X509Certificates::StoreName storeName, ::System::Security::Cryptography::X509Certificates::StoreLocation storeLocation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Store::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Store*, creationType>(storeName, storeLocation)));
    }
    // public System.Security.Cryptography.X509Certificates.X509Certificate2Collection get_Certificates()
    // Offset: 0x4FA1DD4
    ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_Certificates();
    // private Mono.Security.X509.X509Stores get_Factory()
    // Offset: 0x4FA1E5C
    ::Mono::Security::X509::X509Stores* get_Factory();
    // Mono.Security.X509.X509Store get_Store()
    // Offset: 0x4FA1E78
    ::Mono::Security::X509::X509Store* get_Store();
    // public System.Void Close()
    // Offset: 0x4FA1E80
    void Close();
    // public System.Void Dispose()
    // Offset: 0x4FA1EB4
    void Dispose();
    // public System.Void Open(System.Security.Cryptography.X509Certificates.OpenFlags flags)
    // Offset: 0x4FA1EB8
    void Open(::System::Security::Cryptography::X509Certificates::OpenFlags flags);
  }; // System.Security.Cryptography.X509Certificates.X509Store
  #pragma pack(pop)
  static check_size<sizeof(X509Store), 48 + sizeof(::Mono::Security::X509::X509Store*)> __System_Security_Cryptography_X509Certificates_X509StoreSizeCheck;
  static_assert(sizeof(X509Store) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Store::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Store::get_Certificates
// Il2CppName: get_Certificates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* (System::Security::Cryptography::X509Certificates::X509Store::*)()>(&System::Security::Cryptography::X509Certificates::X509Store::get_Certificates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Store*), "get_Certificates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Store::get_Factory
// Il2CppName: get_Factory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Stores* (System::Security::Cryptography::X509Certificates::X509Store::*)()>(&System::Security::Cryptography::X509Certificates::X509Store::get_Factory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Store*), "get_Factory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Store::get_Store
// Il2CppName: get_Store
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Store* (System::Security::Cryptography::X509Certificates::X509Store::*)()>(&System::Security::Cryptography::X509Certificates::X509Store::get_Store)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Store*), "get_Store", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Store::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Store::*)()>(&System::Security::Cryptography::X509Certificates::X509Store::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Store*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Store::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Store::*)()>(&System::Security::Cryptography::X509Certificates::X509Store::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Store*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Store::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Store::*)(::System::Security::Cryptography::X509Certificates::OpenFlags)>(&System::Security::Cryptography::X509Certificates::X509Store::Open)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "OpenFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Store*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};
