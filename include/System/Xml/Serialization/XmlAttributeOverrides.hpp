// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlAttributes
  class XmlAttributes;
  // Forward declaring type: TypeMember
  class TypeMember;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlAttributeOverrides
  class XmlAttributeOverrides;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlAttributeOverrides);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlAttributeOverrides*, "System.Xml.Serialization", "XmlAttributeOverrides");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlAttributeOverrides
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class XmlAttributeOverrides : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Hashtable overrides
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Hashtable* overrides;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Hashtable*
    constexpr operator ::System::Collections::Hashtable*() const noexcept {
      return overrides;
    }
    // Get instance field reference: private System.Collections.Hashtable overrides
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_overrides();
    // public System.Void .ctor()
    // Offset: 0x4E49AA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAttributeOverrides* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlAttributeOverrides::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAttributeOverrides*, creationType>()));
    }
    // public System.Xml.Serialization.XmlAttributes get_Item(System.Type type)
    // Offset: 0x4E49B0C
    ::System::Xml::Serialization::XmlAttributes* get_Item(::System::Type* type);
    // public System.Xml.Serialization.XmlAttributes get_Item(System.Type type, System.String member)
    // Offset: 0x4E49B6C
    ::System::Xml::Serialization::XmlAttributes* get_Item(::System::Type* type, ::StringW member);
    // private System.Xml.Serialization.TypeMember GetKey(System.Type type, System.String member)
    // Offset: 0x4E49C20
    ::System::Xml::Serialization::TypeMember* GetKey(::System::Type* type, ::StringW member);
    // System.Void AddKeyHash(System.Text.StringBuilder sb)
    // Offset: 0x4E49C8C
    void AddKeyHash(::System::Text::StringBuilder* sb);
  }; // System.Xml.Serialization.XmlAttributeOverrides
  #pragma pack(pop)
  static check_size<sizeof(XmlAttributeOverrides), 16 + sizeof(::System::Collections::Hashtable*)> __System_Xml_Serialization_XmlAttributeOverridesSizeCheck;
  static_assert(sizeof(XmlAttributeOverrides) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlAttributeOverrides::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::XmlAttributeOverrides::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlAttributes* (System::Xml::Serialization::XmlAttributeOverrides::*)(::System::Type*)>(&System::Xml::Serialization::XmlAttributeOverrides::get_Item)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlAttributeOverrides*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlAttributeOverrides::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlAttributes* (System::Xml::Serialization::XmlAttributeOverrides::*)(::System::Type*, ::StringW)>(&System::Xml::Serialization::XmlAttributeOverrides::get_Item)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlAttributeOverrides*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, member});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlAttributeOverrides::GetKey
// Il2CppName: GetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::TypeMember* (System::Xml::Serialization::XmlAttributeOverrides::*)(::System::Type*, ::StringW)>(&System::Xml::Serialization::XmlAttributeOverrides::GetKey)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlAttributeOverrides*), "GetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, member});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlAttributeOverrides::AddKeyHash
// Il2CppName: AddKeyHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlAttributeOverrides::*)(::System::Text::StringBuilder*)>(&System::Xml::Serialization::XmlAttributeOverrides::AddKeyHash)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlAttributeOverrides*), "AddKeyHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
