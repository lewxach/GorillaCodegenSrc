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
// Type namespace: VYaml.Annotations
namespace VYaml::Annotations {
  // Forward declaring type: YamlMemberAttribute
  class YamlMemberAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VYaml::Annotations::YamlMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Annotations::YamlMemberAttribute*, "VYaml.Annotations", "YamlMemberAttribute");
// Type namespace: VYaml.Annotations
namespace VYaml::Annotations {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VYaml.Annotations.YamlMemberAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  class YamlMemberAttribute : public ::System::Attribute {
    public:
    public:
    // private readonly System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 <Order>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int Order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private System.Int32 <Order>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Order$k__BackingField();
    // public System.String get_Name()
    // Offset: 0x574A0C0
    ::StringW get_Name();
    // public System.Int32 get_Order()
    // Offset: 0x574A0C8
    int get_Order();
    // public System.Void set_Order(System.Int32 value)
    // Offset: 0x574A0D0
    void set_Order(int value);
    // public System.Void .ctor(System.String name)
    // Offset: 0x574A0D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static YamlMemberAttribute* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Annotations::YamlMemberAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<YamlMemberAttribute*, creationType>(name)));
    }
  }; // VYaml.Annotations.YamlMemberAttribute
  #pragma pack(pop)
  static check_size<sizeof(YamlMemberAttribute), 24 + sizeof(int)> __VYaml_Annotations_YamlMemberAttributeSizeCheck;
  static_assert(sizeof(YamlMemberAttribute) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VYaml::Annotations::YamlMemberAttribute::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VYaml::Annotations::YamlMemberAttribute::*)()>(&VYaml::Annotations::YamlMemberAttribute::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Annotations::YamlMemberAttribute*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VYaml::Annotations::YamlMemberAttribute::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VYaml::Annotations::YamlMemberAttribute::*)()>(&VYaml::Annotations::YamlMemberAttribute::get_Order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Annotations::YamlMemberAttribute*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VYaml::Annotations::YamlMemberAttribute::set_Order
// Il2CppName: set_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VYaml::Annotations::YamlMemberAttribute::*)(int)>(&VYaml::Annotations::YamlMemberAttribute::set_Order)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Annotations::YamlMemberAttribute*), "set_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VYaml::Annotations::YamlMemberAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!