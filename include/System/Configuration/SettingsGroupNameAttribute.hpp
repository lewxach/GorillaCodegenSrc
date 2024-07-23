// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Configuration
namespace System::Configuration {
  // Forward declaring type: SettingsGroupNameAttribute
  class SettingsGroupNameAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::SettingsGroupNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::SettingsGroupNameAttribute*, "System.Configuration", "SettingsGroupNameAttribute");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.SettingsGroupNameAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class SettingsGroupNameAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor(System.String groupName)
    // Offset: 0x4F5C910
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsGroupNameAttribute* New_ctor(::StringW groupName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::SettingsGroupNameAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsGroupNameAttribute*, creationType>(groupName)));
    }
    // public System.String get_GroupName()
    // Offset: 0x4F5C914
    ::StringW get_GroupName();
  }; // System.Configuration.SettingsGroupNameAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::SettingsGroupNameAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Configuration::SettingsGroupNameAttribute::get_GroupName
// Il2CppName: get_GroupName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Configuration::SettingsGroupNameAttribute::*)()>(&System::Configuration::SettingsGroupNameAttribute::get_GroupName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingsGroupNameAttribute*), "get_GroupName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};