// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Meta.WitAi.Data.ValueReferences
namespace Meta::WitAi::Data::ValueReferences {
  // Forward declaring type: IStringReference
  class IStringReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Data::ValueReferences::IStringReference);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Data::ValueReferences::IStringReference*, "Meta.WitAi.Data.ValueReferences", "IStringReference");
// Type namespace: Meta.WitAi.Data.ValueReferences
namespace Meta::WitAi::Data::ValueReferences {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Data.ValueReferences.IStringReference
  // [TokenAttribute] Offset: FFFFFFFF
  class IStringReference {
    public:
    // public System.String get_Value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Value(::StringW value);
  }; // Meta.WitAi.Data.ValueReferences.IStringReference
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Data::ValueReferences::IStringReference::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Data::ValueReferences::IStringReference::*)()>(&Meta::WitAi::Data::ValueReferences::IStringReference::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::ValueReferences::IStringReference*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::ValueReferences::IStringReference::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Data::ValueReferences::IStringReference::*)(::StringW)>(&Meta::WitAi::Data::ValueReferences::IStringReference::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::ValueReferences::IStringReference*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};