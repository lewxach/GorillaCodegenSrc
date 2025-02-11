// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlLinkedNode
#include "System/Xml/XmlLinkedNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlName
  class XmlName;
  // Forward declaring type: XmlAttributeCollection
  class XmlAttributeCollection;
  // Forward declaring type: XmlDocument
  class XmlDocument;
  // Forward declaring type: XmlAttribute
  class XmlAttribute;
  // Forward declaring type: XmlWriter
  class XmlWriter;
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: IXmlSchemaInfo
  class IXmlSchemaInfo;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlElement
  class XmlElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlElement*, "System.Xml", "XmlElement");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlElement
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlElement : public ::System::Xml::XmlLinkedNode {
    public:
    public:
    // private System.Xml.XmlName name
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::XmlName* name;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlName*) == 0x8);
    // private System.Xml.XmlAttributeCollection attributes
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::XmlAttributeCollection* attributes;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlAttributeCollection*) == 0x8);
    // private System.Xml.XmlLinkedNode lastChild
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::XmlLinkedNode* lastChild;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlLinkedNode*) == 0x8);
    public:
    // Get instance field reference: private System.Xml.XmlName name
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlName*& dyn_name();
    // Get instance field reference: private System.Xml.XmlAttributeCollection attributes
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlAttributeCollection*& dyn_attributes();
    // Get instance field reference: private System.Xml.XmlLinkedNode lastChild
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlLinkedNode*& dyn_lastChild();
    // System.Void .ctor(System.Xml.XmlName name, System.Boolean empty, System.Xml.XmlDocument doc)
    // Offset: 0x4E124D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlElement* New_ctor(::System::Xml::XmlName* name, bool empty, ::System::Xml::XmlDocument* doc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlElement*, creationType>(name, empty, doc)));
    }
    // protected internal System.Void .ctor(System.String prefix, System.String localName, System.String namespaceURI, System.Xml.XmlDocument doc)
    // Offset: 0x4E144E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlElement* New_ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlElement*, creationType>(prefix, localName, namespaceURI, doc)));
    }
    // System.Xml.XmlName get_XmlName()
    // Offset: 0x4E14528
    ::System::Xml::XmlName* get_XmlName();
    // System.Void set_XmlName(System.Xml.XmlName value)
    // Offset: 0x4E14530
    void set_XmlName(::System::Xml::XmlName* value);
    // public System.Boolean get_IsEmpty()
    // Offset: 0x4E14A78
    bool get_IsEmpty();
    // public System.Void set_IsEmpty(System.Boolean value)
    // Offset: 0x4E14A88
    void set_IsEmpty(bool value);
    // public System.Boolean get_HasAttributes()
    // Offset: 0x4E14F78
    bool get_HasAttributes();
    // public System.String GetAttribute(System.String name)
    // Offset: 0x4E14FA0
    ::StringW GetAttribute(::StringW name);
    // public System.Void SetAttribute(System.String name, System.String value)
    // Offset: 0x4E15020
    void SetAttribute(::StringW name, ::StringW value);
    // public System.Xml.XmlAttribute GetAttributeNode(System.String name)
    // Offset: 0x4E150C4
    ::System::Xml::XmlAttribute* GetAttributeNode(::StringW name);
    // public System.Xml.XmlAttribute SetAttributeNode(System.Xml.XmlAttribute newAttr)
    // Offset: 0x4E15128
    ::System::Xml::XmlAttribute* SetAttributeNode(::System::Xml::XmlAttribute* newAttr);
    // public System.String GetAttribute(System.String localName, System.String namespaceURI)
    // Offset: 0x4E15238
    ::StringW GetAttribute(::StringW localName, ::StringW namespaceURI);
    // public System.String SetAttribute(System.String localName, System.String namespaceURI, System.String value)
    // Offset: 0x4E152CC
    ::StringW SetAttribute(::StringW localName, ::StringW namespaceURI, ::StringW value);
    // public System.Xml.XmlAttribute GetAttributeNode(System.String localName, System.String namespaceURI)
    // Offset: 0x4E153D0
    ::System::Xml::XmlAttribute* GetAttributeNode(::StringW localName, ::StringW namespaceURI);
    // public System.Xml.XmlAttribute SetAttributeNode(System.String localName, System.String namespaceURI)
    // Offset: 0x4E1543C
    ::System::Xml::XmlAttribute* SetAttributeNode(::StringW localName, ::StringW namespaceURI);
    // public System.Boolean HasAttribute(System.String name)
    // Offset: 0x4E15518
    bool HasAttribute(::StringW name);
    // static private System.Void WriteElementTo(System.Xml.XmlWriter writer, System.Xml.XmlElement e)
    // Offset: 0x4E15650
    static void WriteElementTo(::System::Xml::XmlWriter* writer, ::System::Xml::XmlElement* e);
    // private System.Void WriteStartElement(System.Xml.XmlWriter w)
    // Offset: 0x4E15838
    void WriteStartElement(::System::Xml::XmlWriter* w);
    // public System.Void RemoveAllAttributes()
    // Offset: 0x4E159B8
    void RemoveAllAttributes();
    // System.Void RemoveAllChildren()
    // Offset: 0x4E14DF8
    void RemoveAllChildren();
    // public override System.Xml.XmlNode CloneNode(System.Boolean deep)
    // Offset: 0x4E14538
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::CloneNode(System.Boolean deep)
    ::System::Xml::XmlNode* CloneNode(bool deep);
    // public override System.String get_Name()
    // Offset: 0x4E14AF0
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Name()
    ::StringW get_Name();
    // public override System.String get_LocalName()
    // Offset: 0x4E14B0C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_LocalName()
    ::StringW get_LocalName();
    // public override System.String get_NamespaceURI()
    // Offset: 0x4E14B28
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_NamespaceURI()
    ::StringW get_NamespaceURI();
    // public override System.String get_Prefix()
    // Offset: 0x4E14B44
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Prefix()
    ::StringW get_Prefix();
    // public override System.Void set_Prefix(System.String value)
    // Offset: 0x4E14B60
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_Prefix(System.String value)
    void set_Prefix(::StringW value);
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x4E14C0C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNodeType XmlNode::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public override System.Xml.XmlNode get_ParentNode()
    // Offset: 0x4E14C14
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::get_ParentNode()
    ::System::Xml::XmlNode* get_ParentNode();
    // public override System.Xml.XmlDocument get_OwnerDocument()
    // Offset: 0x4E14C1C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlDocument XmlNode::get_OwnerDocument()
    ::System::Xml::XmlDocument* get_OwnerDocument();
    // override System.Boolean get_IsContainer()
    // Offset: 0x4E14C38
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::get_IsContainer()
    bool get_IsContainer();
    // override System.Xml.XmlNode AppendChildForLoad(System.Xml.XmlNode newChild, System.Xml.XmlDocument doc)
    // Offset: 0x4E14C40
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::AppendChildForLoad(System.Xml.XmlNode newChild, System.Xml.XmlDocument doc)
    ::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc);
    // override System.Xml.XmlLinkedNode get_LastNode()
    // Offset: 0x4E14E00
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlLinkedNode XmlNode::get_LastNode()
    ::System::Xml::XmlLinkedNode* get_LastNode();
    // override System.Void set_LastNode(System.Xml.XmlLinkedNode value)
    // Offset: 0x4E14E10
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_LastNode(System.Xml.XmlLinkedNode value)
    void set_LastNode(::System::Xml::XmlLinkedNode* value);
    // override System.Boolean IsValidChildType(System.Xml.XmlNodeType type)
    // Offset: 0x4E14E18
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::IsValidChildType(System.Xml.XmlNodeType type)
    bool IsValidChildType(::System::Xml::XmlNodeType type);
    // public override System.Xml.XmlAttributeCollection get_Attributes()
    // Offset: 0x4E14E3C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlAttributeCollection XmlNode::get_Attributes()
    ::System::Xml::XmlAttributeCollection* get_Attributes();
    // public override System.Void WriteTo(System.Xml.XmlWriter w)
    // Offset: 0x4E1553C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::WriteTo(System.Xml.XmlWriter w)
    void WriteTo(::System::Xml::XmlWriter* w);
    // public override System.Void WriteContentTo(System.Xml.XmlWriter w)
    // Offset: 0x4E15950
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::WriteContentTo(System.Xml.XmlWriter w)
    void WriteContentTo(::System::Xml::XmlWriter* w);
    // public override System.Void RemoveAll()
    // Offset: 0x4E159F0
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::RemoveAll()
    void RemoveAll();
    // public override System.Xml.Schema.IXmlSchemaInfo get_SchemaInfo()
    // Offset: 0x4E15A18
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.Schema.IXmlSchemaInfo XmlNode::get_SchemaInfo()
    ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();
    // public override System.Void set_InnerXml(System.String value)
    // Offset: 0x4E15A20
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_InnerXml(System.String value)
    void set_InnerXml(::StringW value);
    // public override System.String get_InnerText()
    // Offset: 0x4E15B14
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_InnerText()
    ::StringW get_InnerText();
    // public override System.Void set_InnerText(System.String value)
    // Offset: 0x4E15B1C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_InnerText(System.String value)
    void set_InnerText(::StringW value);
    // public override System.Xml.XmlNode get_NextSibling()
    // Offset: 0x4E15BD8
    // Implemented from: System.Xml.XmlLinkedNode
    // Base method: System.Xml.XmlNode XmlLinkedNode::get_NextSibling()
    ::System::Xml::XmlNode* get_NextSibling();
    // override System.Void SetParent(System.Xml.XmlNode node)
    // Offset: 0x4E15C14
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::SetParent(System.Xml.XmlNode node)
    void SetParent(::System::Xml::XmlNode* node);
  }; // System.Xml.XmlElement
  #pragma pack(pop)
  static check_size<sizeof(XmlElement), 48 + sizeof(::System::Xml::XmlLinkedNode*)> __System_Xml_XmlElementSizeCheck;
  static_assert(sizeof(XmlElement) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlElement::get_XmlName
// Il2CppName: get_XmlName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlName* (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_XmlName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_XmlName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::set_XmlName
// Il2CppName: set_XmlName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::System::Xml::XmlName*)>(&System::Xml::XmlElement::set_XmlName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "set_XmlName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_IsEmpty
// Il2CppName: get_IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::set_IsEmpty
// Il2CppName: set_IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(bool)>(&System::Xml::XmlElement::set_IsEmpty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "set_IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_HasAttributes
// Il2CppName: get_HasAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_HasAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_HasAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::GetAttribute
// Il2CppName: GetAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlElement::*)(::StringW)>(&System::Xml::XmlElement::GetAttribute)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "GetAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::SetAttribute
// Il2CppName: SetAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::StringW, ::StringW)>(&System::Xml::XmlElement::SetAttribute)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "SetAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::GetAttributeNode
// Il2CppName: GetAttributeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::XmlElement::*)(::StringW)>(&System::Xml::XmlElement::GetAttributeNode)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "GetAttributeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::SetAttributeNode
// Il2CppName: SetAttributeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::XmlElement::*)(::System::Xml::XmlAttribute*)>(&System::Xml::XmlElement::SetAttributeNode)> {
  static const MethodInfo* get() {
    static auto* newAttr = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "SetAttributeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newAttr});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::GetAttribute
// Il2CppName: GetAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlElement::*)(::StringW, ::StringW)>(&System::Xml::XmlElement::GetAttribute)> {
  static const MethodInfo* get() {
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* namespaceURI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "GetAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localName, namespaceURI});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::SetAttribute
// Il2CppName: SetAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlElement::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlElement::SetAttribute)> {
  static const MethodInfo* get() {
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* namespaceURI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "SetAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localName, namespaceURI, value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::GetAttributeNode
// Il2CppName: GetAttributeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::XmlElement::*)(::StringW, ::StringW)>(&System::Xml::XmlElement::GetAttributeNode)> {
  static const MethodInfo* get() {
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* namespaceURI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "GetAttributeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localName, namespaceURI});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::SetAttributeNode
// Il2CppName: SetAttributeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::XmlElement::*)(::StringW, ::StringW)>(&System::Xml::XmlElement::SetAttributeNode)> {
  static const MethodInfo* get() {
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* namespaceURI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "SetAttributeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localName, namespaceURI});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::HasAttribute
// Il2CppName: HasAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlElement::*)(::StringW)>(&System::Xml::XmlElement::HasAttribute)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "HasAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::WriteElementTo
// Il2CppName: WriteElementTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::XmlWriter*, ::System::Xml::XmlElement*)>(&System::Xml::XmlElement::WriteElementTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "WriteElementTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, e});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::WriteStartElement
// Il2CppName: WriteStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::System::Xml::XmlWriter*)>(&System::Xml::XmlElement::WriteStartElement)> {
  static const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "WriteStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::RemoveAllAttributes
// Il2CppName: RemoveAllAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::RemoveAllAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "RemoveAllAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::RemoveAllChildren
// Il2CppName: RemoveAllChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::RemoveAllChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "RemoveAllChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlElement::*)(bool)>(&System::Xml::XmlElement::CloneNode)> {
  static const MethodInfo* get() {
    static auto* deep = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deep});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_NamespaceURI
// Il2CppName: get_NamespaceURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_NamespaceURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_NamespaceURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_Prefix
// Il2CppName: get_Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_Prefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::set_Prefix
// Il2CppName: set_Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::StringW)>(&System::Xml::XmlElement::set_Prefix)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "set_Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_ParentNode
// Il2CppName: get_ParentNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_ParentNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_ParentNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_OwnerDocument
// Il2CppName: get_OwnerDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocument* (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_OwnerDocument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_OwnerDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_IsContainer
// Il2CppName: get_IsContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_IsContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_IsContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::AppendChildForLoad
// Il2CppName: AppendChildForLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlElement::*)(::System::Xml::XmlNode*, ::System::Xml::XmlDocument*)>(&System::Xml::XmlElement::AppendChildForLoad)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    static auto* doc = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlDocument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "AppendChildForLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild, doc});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_LastNode
// Il2CppName: get_LastNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlLinkedNode* (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_LastNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_LastNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::set_LastNode
// Il2CppName: set_LastNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::System::Xml::XmlLinkedNode*)>(&System::Xml::XmlElement::set_LastNode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlLinkedNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "set_LastNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::IsValidChildType
// Il2CppName: IsValidChildType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlElement::*)(::System::Xml::XmlNodeType)>(&System::Xml::XmlElement::IsValidChildType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "IsValidChildType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttributeCollection* (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::System::Xml::XmlWriter*)>(&System::Xml::XmlElement::WriteTo)> {
  static const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::WriteContentTo
// Il2CppName: WriteContentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::System::Xml::XmlWriter*)>(&System::Xml::XmlElement::WriteContentTo)> {
  static const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "WriteContentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::RemoveAll
// Il2CppName: RemoveAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::RemoveAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "RemoveAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_SchemaInfo
// Il2CppName: get_SchemaInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_SchemaInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_SchemaInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::set_InnerXml
// Il2CppName: set_InnerXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::StringW)>(&System::Xml::XmlElement::set_InnerXml)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "set_InnerXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_InnerText
// Il2CppName: get_InnerText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_InnerText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_InnerText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::set_InnerText
// Il2CppName: set_InnerText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::StringW)>(&System::Xml::XmlElement::set_InnerText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "set_InnerText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_NextSibling
// Il2CppName: get_NextSibling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_NextSibling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_NextSibling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::SetParent
// Il2CppName: SetParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::System::Xml::XmlNode*)>(&System::Xml::XmlElement::SetParent)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "SetParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
