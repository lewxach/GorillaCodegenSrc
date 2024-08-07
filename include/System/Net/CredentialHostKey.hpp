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
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: CredentialHostKey
  class CredentialHostKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::CredentialHostKey);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CredentialHostKey*, "System.Net", "CredentialHostKey");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CredentialHostKey
  // [TokenAttribute] Offset: FFFFFFFF
  class CredentialHostKey : public ::Il2CppObject {
    public:
    public:
    // System.String Host
    // Size: 0x8
    // Offset: 0x10
    ::StringW Host;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String AuthenticationType
    // Size: 0x8
    // Offset: 0x18
    ::StringW AuthenticationType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Int32 Port
    // Size: 0x4
    // Offset: 0x20
    int Port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_HashCode
    // Size: 0x4
    // Offset: 0x24
    int m_HashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_ComputedHashCode
    // Size: 0x1
    // Offset: 0x28
    bool m_ComputedHashCode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: System.String Host
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Host();
    // Get instance field reference: System.String AuthenticationType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AuthenticationType();
    // Get instance field reference: System.Int32 Port
    [[deprecated("Use field access instead!")]] int& dyn_Port();
    // Get instance field reference: private System.Int32 m_HashCode
    [[deprecated("Use field access instead!")]] int& dyn_m_HashCode();
    // Get instance field reference: private System.Boolean m_ComputedHashCode
    [[deprecated("Use field access instead!")]] bool& dyn_m_ComputedHashCode();
    // System.Void .ctor(System.String host, System.Int32 port, System.String authenticationType)
    // Offset: 0x4FD16A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CredentialHostKey* New_ctor(::StringW host, int port, ::StringW authenticationType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::CredentialHostKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CredentialHostKey*, creationType>(host, port, authenticationType)));
    }
    // System.Boolean Match(System.String host, System.Int32 port, System.String authenticationType)
    // Offset: 0x4FD16F4
    bool Match(::StringW host, int port, ::StringW authenticationType);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4FD1760
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object comparand)
    // Offset: 0x4FD17F8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object comparand)
    bool Equals(::Il2CppObject* comparand);
    // public override System.String ToString()
    // Offset: 0x4FD18B8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.CredentialHostKey
  #pragma pack(pop)
  static check_size<sizeof(CredentialHostKey), 40 + sizeof(bool)> __System_Net_CredentialHostKeySizeCheck;
  static_assert(sizeof(CredentialHostKey) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::CredentialHostKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::CredentialHostKey::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CredentialHostKey::*)(::StringW, int, ::StringW)>(&System::Net::CredentialHostKey::Match)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* authenticationType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialHostKey*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, port, authenticationType});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialHostKey::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::CredentialHostKey::*)()>(&System::Net::CredentialHostKey::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialHostKey*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialHostKey::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CredentialHostKey::*)(::Il2CppObject*)>(&System::Net::CredentialHostKey::Equals)> {
  static const MethodInfo* get() {
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialHostKey*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparand});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialHostKey::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::CredentialHostKey::*)()>(&System::Net::CredentialHostKey::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialHostKey*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
