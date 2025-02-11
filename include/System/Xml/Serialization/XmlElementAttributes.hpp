// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.CollectionBase
#include "System/Collections/CollectionBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlElementAttribute
  class XmlElementAttribute;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlElementAttributes
  class XmlElementAttributes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlElementAttributes);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlElementAttributes*, "System.Xml.Serialization", "XmlElementAttributes");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlElementAttributes
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class XmlElementAttributes : public ::System::Collections::CollectionBase {
    public:
    // public System.Xml.Serialization.XmlElementAttribute get_Item(System.Int32 index)
    // Offset: 0x4E4D914
    ::System::Xml::Serialization::XmlElementAttribute* get_Item(int index);
    // public System.Int32 Add(System.Xml.Serialization.XmlElementAttribute attribute)
    // Offset: 0x4E4AD74
    int Add(::System::Xml::Serialization::XmlElementAttribute* attribute);
    // System.Void AddKeyHash(System.Text.StringBuilder sb)
    // Offset: 0x4E4AE94
    void AddKeyHash(::System::Text::StringBuilder* sb);
    // System.Int32 get_Order()
    // Offset: 0x4E4BF50
    int get_Order();
    // public System.Void .ctor()
    // Offset: 0x4E4A528
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlElementAttributes* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlElementAttributes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlElementAttributes*, creationType>()));
    }
  }; // System.Xml.Serialization.XmlElementAttributes
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttributes::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlElementAttribute* (System::Xml::Serialization::XmlElementAttributes::*)(int)>(&System::Xml::Serialization::XmlElementAttributes::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlElementAttributes*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttributes::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Serialization::XmlElementAttributes::*)(::System::Xml::Serialization::XmlElementAttribute*)>(&System::Xml::Serialization::XmlElementAttributes::Add)> {
  static const MethodInfo* get() {
    static auto* attribute = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlElementAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlElementAttributes*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attribute});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttributes::AddKeyHash
// Il2CppName: AddKeyHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlElementAttributes::*)(::System::Text::StringBuilder*)>(&System::Xml::Serialization::XmlElementAttributes::AddKeyHash)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlElementAttributes*), "AddKeyHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttributes::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Serialization::XmlElementAttributes::*)()>(&System::Xml::Serialization::XmlElementAttributes::get_Order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlElementAttributes*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttributes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
