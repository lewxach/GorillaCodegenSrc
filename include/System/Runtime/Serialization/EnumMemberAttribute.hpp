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
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: EnumMemberAttribute
  class EnumMemberAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::EnumMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::EnumMemberAttribute*, "System.Runtime.Serialization", "EnumMemberAttribute");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.EnumMemberAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class EnumMemberAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String value
    // Size: 0x8
    // Offset: 0x10
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean isValueSetExplicitly
    // Size: 0x1
    // Offset: 0x18
    bool isValueSetExplicitly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_value();
    // Get instance field reference: private System.Boolean isValueSetExplicitly
    [[deprecated("Use field access instead!")]] bool& dyn_isValueSetExplicitly();
    // public System.Void .ctor()
    // Offset: 0x4D06908
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumMemberAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::EnumMemberAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumMemberAttribute*, creationType>()));
    }
    // public System.String get_Value()
    // Offset: 0x4D06910
    ::StringW get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x4D06918
    void set_Value(::StringW value);
  }; // System.Runtime.Serialization.EnumMemberAttribute
  #pragma pack(pop)
  static check_size<sizeof(EnumMemberAttribute), 24 + sizeof(bool)> __System_Runtime_Serialization_EnumMemberAttributeSizeCheck;
  static_assert(sizeof(EnumMemberAttribute) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::EnumMemberAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::EnumMemberAttribute::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Serialization::EnumMemberAttribute::*)()>(&System::Runtime::Serialization::EnumMemberAttribute::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::EnumMemberAttribute*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::EnumMemberAttribute::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::EnumMemberAttribute::*)(::StringW)>(&System::Runtime::Serialization::EnumMemberAttribute::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::EnumMemberAttribute*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
