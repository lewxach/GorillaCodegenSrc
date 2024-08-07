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
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNamespaceManager
  class XmlNamespaceManager;
}
// Forward declaring namespace: MS::Internal::Xml::XPath
namespace MS::Internal::Xml::XPath {
  // Forward declaring type: Axis
  class Axis;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Asttree
  class Asttree;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Asttree);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Asttree*, "System.Xml.Schema", "Asttree");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Asttree
  // [TokenAttribute] Offset: FFFFFFFF
  class Asttree : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.ArrayList _fAxisArray
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::ArrayList* fAxisArray;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.String _xpathexpr
    // Size: 0x8
    // Offset: 0x18
    ::StringW xpathexpr;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _isField
    // Size: 0x1
    // Offset: 0x20
    bool isField;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isField and: nsmgr
    char __padding2[0x7] = {};
    // private System.Xml.XmlNamespaceManager _nsmgr
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::XmlNamespaceManager* nsmgr;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNamespaceManager*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.ArrayList _fAxisArray
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn__fAxisArray();
    // Get instance field reference: private System.String _xpathexpr
    [[deprecated("Use field access instead!")]] ::StringW& dyn__xpathexpr();
    // Get instance field reference: private System.Boolean _isField
    [[deprecated("Use field access instead!")]] bool& dyn__isField();
    // Get instance field reference: private System.Xml.XmlNamespaceManager _nsmgr
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNamespaceManager*& dyn__nsmgr();
    // System.Collections.ArrayList get_SubtreeArray()
    // Offset: 0x4E70A88
    ::System::Collections::ArrayList* get_SubtreeArray();
    // public System.Void .ctor(System.String xPath, System.Boolean isField, System.Xml.XmlNamespaceManager nsmgr)
    // Offset: 0x4E70A90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asttree* New_ctor(::StringW xPath, bool isField, ::System::Xml::XmlNamespaceManager* nsmgr) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Asttree::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asttree*, creationType>(xPath, isField, nsmgr)));
    }
    // static private System.Boolean IsNameTest(MS.Internal.Xml.XPath.Axis ast)
    // Offset: 0x4E712F0
    static bool IsNameTest(::MS::Internal::Xml::XPath::Axis* ast);
    // static System.Boolean IsAttribute(MS.Internal.Xml.XPath.Axis ast)
    // Offset: 0x4E6FBA0
    static bool IsAttribute(::MS::Internal::Xml::XPath::Axis* ast);
    // static private System.Boolean IsDescendantOrSelf(MS.Internal.Xml.XPath.Axis ast)
    // Offset: 0x4E71324
    static bool IsDescendantOrSelf(::MS::Internal::Xml::XPath::Axis* ast);
    // static System.Boolean IsSelf(MS.Internal.Xml.XPath.Axis ast)
    // Offset: 0x4E70A48
    static bool IsSelf(::MS::Internal::Xml::XPath::Axis* ast);
    // public System.Void CompileXPath(System.String xPath, System.Boolean isField, System.Xml.XmlNamespaceManager nsmgr)
    // Offset: 0x4E70AFC
    void CompileXPath(::StringW xPath, bool isField, ::System::Xml::XmlNamespaceManager* nsmgr);
    // private System.Void SetURN(MS.Internal.Xml.XPath.Axis axis, System.Xml.XmlNamespaceManager nsmgr)
    // Offset: 0x4E71364
    void SetURN(::MS::Internal::Xml::XPath::Axis* axis, ::System::Xml::XmlNamespaceManager* nsmgr);
  }; // System.Xml.Schema.Asttree
  #pragma pack(pop)
  static check_size<sizeof(Asttree), 40 + sizeof(::System::Xml::XmlNamespaceManager*)> __System_Xml_Schema_AsttreeSizeCheck;
  static_assert(sizeof(Asttree) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Asttree::get_SubtreeArray
// Il2CppName: get_SubtreeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (System::Xml::Schema::Asttree::*)()>(&System::Xml::Schema::Asttree::get_SubtreeArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Asttree*), "get_SubtreeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Asttree::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::Asttree::IsNameTest
// Il2CppName: IsNameTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::MS::Internal::Xml::XPath::Axis*)>(&System::Xml::Schema::Asttree::IsNameTest)> {
  static const MethodInfo* get() {
    static auto* ast = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Asttree*), "IsNameTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ast});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Asttree::IsAttribute
// Il2CppName: IsAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::MS::Internal::Xml::XPath::Axis*)>(&System::Xml::Schema::Asttree::IsAttribute)> {
  static const MethodInfo* get() {
    static auto* ast = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Asttree*), "IsAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ast});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Asttree::IsDescendantOrSelf
// Il2CppName: IsDescendantOrSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::MS::Internal::Xml::XPath::Axis*)>(&System::Xml::Schema::Asttree::IsDescendantOrSelf)> {
  static const MethodInfo* get() {
    static auto* ast = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Asttree*), "IsDescendantOrSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ast});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Asttree::IsSelf
// Il2CppName: IsSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::MS::Internal::Xml::XPath::Axis*)>(&System::Xml::Schema::Asttree::IsSelf)> {
  static const MethodInfo* get() {
    static auto* ast = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Asttree*), "IsSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ast});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Asttree::CompileXPath
// Il2CppName: CompileXPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::Asttree::*)(::StringW, bool, ::System::Xml::XmlNamespaceManager*)>(&System::Xml::Schema::Asttree::CompileXPath)> {
  static const MethodInfo* get() {
    static auto* xPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isField = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* nsmgr = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNamespaceManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Asttree*), "CompileXPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xPath, isField, nsmgr});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Asttree::SetURN
// Il2CppName: SetURN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::Asttree::*)(::MS::Internal::Xml::XPath::Axis*, ::System::Xml::XmlNamespaceManager*)>(&System::Xml::Schema::Asttree::SetURN)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "Axis")->byval_arg;
    static auto* nsmgr = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNamespaceManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Asttree*), "SetURN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis, nsmgr});
  }
};
