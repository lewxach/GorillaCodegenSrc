// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.NamingStrategy
#include "Newtonsoft/Json/Serialization/NamingStrategy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: KebabCaseNamingStrategy
  class KebabCaseNamingStrategy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*, "Newtonsoft.Json.Serialization", "KebabCaseNamingStrategy");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x13
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.KebabCaseNamingStrategy
  // [TokenAttribute] Offset: FFFFFFFF
  class KebabCaseNamingStrategy : public ::Newtonsoft::Json::Serialization::NamingStrategy {
    public:
    // public System.Void .ctor(System.Boolean processDictionaryKeys, System.Boolean overrideSpecifiedNames)
    // Offset: 0x473A414
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KebabCaseNamingStrategy* New_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KebabCaseNamingStrategy*, creationType>(processDictionaryKeys, overrideSpecifiedNames)));
    }
    // public System.Void .ctor(System.Boolean processDictionaryKeys, System.Boolean overrideSpecifiedNames, System.Boolean processExtensionDataNames)
    // Offset: 0x473A454
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KebabCaseNamingStrategy* New_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KebabCaseNamingStrategy*, creationType>(processDictionaryKeys, overrideSpecifiedNames, processExtensionDataNames)));
    }
    // public System.Void .ctor()
    // Offset: 0x473A4A0
    // Implemented from: Newtonsoft.Json.Serialization.NamingStrategy
    // Base method: System.Void NamingStrategy::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KebabCaseNamingStrategy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KebabCaseNamingStrategy*, creationType>()));
    }
    // protected override System.String ResolvePropertyName(System.String name)
    // Offset: 0x473A4A8
    // Implemented from: Newtonsoft.Json.Serialization.NamingStrategy
    // Base method: System.String NamingStrategy::ResolvePropertyName(System.String name)
    ::StringW ResolvePropertyName(::StringW name);
  }; // Newtonsoft.Json.Serialization.KebabCaseNamingStrategy
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::ResolvePropertyName
// Il2CppName: ResolvePropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::*)(::StringW)>(&Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::ResolvePropertyName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*), "ResolvePropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
