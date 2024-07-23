// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Permissions.CodeAccessSecurityAttribute
#include "System/Security/Permissions/CodeAccessSecurityAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: IPermission
  class IPermission;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: DnsPermissionAttribute
  class DnsPermissionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::DnsPermissionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::DnsPermissionAttribute*, "System.Net", "DnsPermissionAttribute");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.DnsPermissionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class DnsPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute {
    public:
    // public System.Void .ctor(System.Security.Permissions.SecurityAction action)
    // Offset: 0x4F56DF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DnsPermissionAttribute* New_ctor(::System::Security::Permissions::SecurityAction action) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::DnsPermissionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DnsPermissionAttribute*, creationType>(action)));
    }
    // public override System.Security.IPermission CreatePermission()
    // Offset: 0x4F56DF8
    // Implemented from: System.Security.Permissions.SecurityAttribute
    // Base method: System.Security.IPermission SecurityAttribute::CreatePermission()
    ::System::Security::IPermission* CreatePermission();
  }; // System.Net.DnsPermissionAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::DnsPermissionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::DnsPermissionAttribute::CreatePermission
// Il2CppName: CreatePermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::IPermission* (System::Net::DnsPermissionAttribute::*)()>(&System::Net::DnsPermissionAttribute::CreatePermission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DnsPermissionAttribute*), "CreatePermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};