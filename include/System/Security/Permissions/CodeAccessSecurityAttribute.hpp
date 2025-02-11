// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Permissions.SecurityAttribute
#include "System/Security/Permissions/SecurityAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Permissions
namespace System::Security::Permissions {
  // Forward declaring type: CodeAccessSecurityAttribute
  class CodeAccessSecurityAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Permissions::CodeAccessSecurityAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Permissions::CodeAccessSecurityAttribute*, "System.Security.Permissions", "CodeAccessSecurityAttribute");
// Type namespace: System.Security.Permissions
namespace System::Security::Permissions {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Permissions.CodeAccessSecurityAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class CodeAccessSecurityAttribute : public ::System::Security::Permissions::SecurityAttribute {
    public:
    // protected System.Void .ctor(System.Security.Permissions.SecurityAction action)
    // Offset: 0x44EBB94
    // Implemented from: System.Security.Permissions.SecurityAttribute
    // Base method: System.Void SecurityAttribute::.ctor(System.Security.Permissions.SecurityAction action)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CodeAccessSecurityAttribute* New_ctor(::System::Security::Permissions::SecurityAction action) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Permissions::CodeAccessSecurityAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CodeAccessSecurityAttribute*, creationType>(action)));
    }
  }; // System.Security.Permissions.CodeAccessSecurityAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Permissions::CodeAccessSecurityAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
