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
  // Forward declaring type: SettingsDescriptionAttribute
  class SettingsDescriptionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::SettingsDescriptionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::SettingsDescriptionAttribute*, "System.Configuration", "SettingsDescriptionAttribute");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.SettingsDescriptionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class SettingsDescriptionAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor(System.String description)
    // Offset: 0x4F5C898
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsDescriptionAttribute* New_ctor(::StringW description) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::SettingsDescriptionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsDescriptionAttribute*, creationType>(description)));
    }
    // public System.String get_Description()
    // Offset: 0x4F5C89C
    ::StringW get_Description();
  }; // System.Configuration.SettingsDescriptionAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::SettingsDescriptionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Configuration::SettingsDescriptionAttribute::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Configuration::SettingsDescriptionAttribute::*)()>(&System::Configuration::SettingsDescriptionAttribute::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingsDescriptionAttribute*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};