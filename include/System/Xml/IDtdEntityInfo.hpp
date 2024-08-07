// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: IDtdEntityInfo
  class IDtdEntityInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::IDtdEntityInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdEntityInfo*, "System.Xml", "IDtdEntityInfo");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.IDtdEntityInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class IDtdEntityInfo {
    public:
    // public System.String get_Name()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Name();
    // public System.Boolean get_IsExternal()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsExternal();
    // public System.Boolean get_IsDeclaredInExternal()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsDeclaredInExternal();
    // public System.Boolean get_IsUnparsedEntity()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsUnparsedEntity();
    // public System.Boolean get_IsParameterEntity()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsParameterEntity();
    // public System.String get_BaseUriString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_BaseUriString();
    // public System.String get_DeclaredUriString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_DeclaredUriString();
    // public System.String get_SystemId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_SystemId();
    // public System.String get_PublicId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_PublicId();
    // public System.String get_Text()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Text();
    // public System.Int32 get_LineNumber()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_LineNumber();
    // public System.Int32 get_LinePosition()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_LinePosition();
  }; // System.Xml.IDtdEntityInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::IDtdEntityInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::IDtdEntityInfo::*)()>(&System::Xml::IDtdEntityInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdEntityInfo*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IDtdEntityInfo::get_IsExternal
// Il2CppName: get_IsExternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::IDtdEntityInfo::*)()>(&System::Xml::IDtdEntityInfo::get_IsExternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdEntityInfo*), "get_IsExternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IDtdEntityInfo::get_IsDeclaredInExternal
// Il2CppName: get_IsDeclaredInExternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::IDtdEntityInfo::*)()>(&System::Xml::IDtdEntityInfo::get_IsDeclaredInExternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdEntityInfo*), "get_IsDeclaredInExternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IDtdEntityInfo::get_IsUnparsedEntity
// Il2CppName: get_IsUnparsedEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::IDtdEntityInfo::*)()>(&System::Xml::IDtdEntityInfo::get_IsUnparsedEntity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdEntityInfo*), "get_IsUnparsedEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IDtdEntityInfo::get_IsParameterEntity
// Il2CppName: get_IsParameterEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::IDtdEntityInfo::*)()>(&System::Xml::IDtdEntityInfo::get_IsParameterEntity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdEntityInfo*), "get_IsParameterEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IDtdEntityInfo::get_BaseUriString
// Il2CppName: get_BaseUriString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::IDtdEntityInfo::*)()>(&System::Xml::IDtdEntityInfo::get_BaseUriString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdEntityInfo*), "get_BaseUriString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IDtdEntityInfo::get_DeclaredUriString
// Il2CppName: get_DeclaredUriString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::IDtdEntityInfo::*)()>(&System::Xml::IDtdEntityInfo::get_DeclaredUriString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdEntityInfo*), "get_DeclaredUriString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IDtdEntityInfo::get_SystemId
// Il2CppName: get_SystemId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::IDtdEntityInfo::*)()>(&System::Xml::IDtdEntityInfo::get_SystemId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdEntityInfo*), "get_SystemId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IDtdEntityInfo::get_PublicId
// Il2CppName: get_PublicId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::IDtdEntityInfo::*)()>(&System::Xml::IDtdEntityInfo::get_PublicId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdEntityInfo*), "get_PublicId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IDtdEntityInfo::get_Text
// Il2CppName: get_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::IDtdEntityInfo::*)()>(&System::Xml::IDtdEntityInfo::get_Text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdEntityInfo*), "get_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IDtdEntityInfo::get_LineNumber
// Il2CppName: get_LineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::IDtdEntityInfo::*)()>(&System::Xml::IDtdEntityInfo::get_LineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdEntityInfo*), "get_LineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IDtdEntityInfo::get_LinePosition
// Il2CppName: get_LinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::IDtdEntityInfo::*)()>(&System::Xml::IDtdEntityInfo::get_LinePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdEntityInfo*), "get_LinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
