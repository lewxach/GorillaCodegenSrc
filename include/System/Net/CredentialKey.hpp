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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: CredentialKey
  class CredentialKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::CredentialKey);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CredentialKey*, "System.Net", "CredentialKey");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CredentialKey
  // [TokenAttribute] Offset: FFFFFFFF
  class CredentialKey : public ::Il2CppObject {
    public:
    public:
    // System.Uri UriPrefix
    // Size: 0x8
    // Offset: 0x10
    ::System::Uri* UriPrefix;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // System.Int32 UriPrefixLength
    // Size: 0x4
    // Offset: 0x18
    int UriPrefixLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: UriPrefixLength and: AuthenticationType
    char __padding1[0x4] = {};
    // System.String AuthenticationType
    // Size: 0x8
    // Offset: 0x20
    ::StringW AuthenticationType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 m_HashCode
    // Size: 0x4
    // Offset: 0x28
    int m_HashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_ComputedHashCode
    // Size: 0x1
    // Offset: 0x2C
    bool m_ComputedHashCode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: System.Uri UriPrefix
    [[deprecated("Use field access instead!")]] ::System::Uri*& dyn_UriPrefix();
    // Get instance field reference: System.Int32 UriPrefixLength
    [[deprecated("Use field access instead!")]] int& dyn_UriPrefixLength();
    // Get instance field reference: System.String AuthenticationType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AuthenticationType();
    // Get instance field reference: private System.Int32 m_HashCode
    [[deprecated("Use field access instead!")]] int& dyn_m_HashCode();
    // Get instance field reference: private System.Boolean m_ComputedHashCode
    [[deprecated("Use field access instead!")]] bool& dyn_m_ComputedHashCode();
    // System.Void .ctor(System.Uri uriPrefix, System.String authenticationType)
    // Offset: 0x4FD1C8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CredentialKey* New_ctor(::System::Uri* uriPrefix, ::StringW authenticationType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::CredentialKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CredentialKey*, creationType>(uriPrefix, authenticationType)));
    }
    // System.Boolean Match(System.Uri uri, System.String authenticationType)
    // Offset: 0x4FD1D08
    bool Match(::System::Uri* uri, ::StringW authenticationType);
    // System.Boolean IsPrefix(System.Uri uri, System.Uri prefixUri)
    // Offset: 0x4FD1DB4
    bool IsPrefix(::System::Uri* uri, ::System::Uri* prefixUri);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4FD1EF0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object comparand)
    // Offset: 0x4FD1F70
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object comparand)
    bool Equals(::Il2CppObject* comparand);
    // public override System.String ToString()
    // Offset: 0x4FD2024
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.CredentialKey
  #pragma pack(pop)
  static check_size<sizeof(CredentialKey), 44 + sizeof(bool)> __System_Net_CredentialKeySizeCheck;
  static_assert(sizeof(CredentialKey) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::CredentialKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::CredentialKey::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CredentialKey::*)(::System::Uri*, ::StringW)>(&System::Net::CredentialKey::Match)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* authenticationType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialKey*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, authenticationType});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialKey::IsPrefix
// Il2CppName: IsPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CredentialKey::*)(::System::Uri*, ::System::Uri*)>(&System::Net::CredentialKey::IsPrefix)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* prefixUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialKey*), "IsPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, prefixUri});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialKey::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::CredentialKey::*)()>(&System::Net::CredentialKey::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialKey*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialKey::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CredentialKey::*)(::Il2CppObject*)>(&System::Net::CredentialKey::Equals)> {
  static const MethodInfo* get() {
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialKey*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparand});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialKey::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::CredentialKey::*)()>(&System::Net::CredentialKey::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialKey*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
