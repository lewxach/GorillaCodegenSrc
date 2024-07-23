// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Sockets.IPProtectionLevel
#include "System/Net/Sockets/IPProtectionLevel.hpp"
// Including type: System.Net.Security.EncryptionPolicy
#include "System/Net/Security/EncryptionPolicy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: SettingsSectionInternal
  class SettingsSectionInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::SettingsSectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::SettingsSectionInternal*, "System.Net.Configuration", "SettingsSectionInternal");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.SettingsSectionInternal
  // [TokenAttribute] Offset: FFFFFFFF
  class SettingsSectionInternal : public ::Il2CppObject {
    public:
    public:
    // readonly System.Boolean HttpListenerUnescapeRequestUrl
    // Size: 0x1
    // Offset: 0x10
    bool HttpListenerUnescapeRequestUrl;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: HttpListenerUnescapeRequestUrl and: IPProtectionLevel
    char __padding0[0x3] = {};
    // readonly System.Net.Sockets.IPProtectionLevel IPProtectionLevel
    // Size: 0x4
    // Offset: 0x14
    ::System::Net::Sockets::IPProtectionLevel IPProtectionLevel;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::IPProtectionLevel) == 0x4);
    // private System.Boolean <UseNagleAlgorithm>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool UseNagleAlgorithm;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <Expect100Continue>k__BackingField
    // Size: 0x1
    // Offset: 0x19
    bool Expect100Continue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <CheckCertificateName>k__BackingField
    // Size: 0x1
    // Offset: 0x1A
    bool CheckCertificateName;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: CheckCertificateName and: DnsRefreshTimeout
    char __padding4[0x1] = {};
    // private System.Int32 <DnsRefreshTimeout>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int DnsRefreshTimeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <EnableDnsRoundRobin>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool EnableDnsRoundRobin;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <CheckCertificateRevocationList>k__BackingField
    // Size: 0x1
    // Offset: 0x21
    bool CheckCertificateRevocationList;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: CheckCertificateRevocationList and: EncryptionPolicy
    char __padding7[0x2] = {};
    // private System.Net.Security.EncryptionPolicy <EncryptionPolicy>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    ::System::Net::Security::EncryptionPolicy EncryptionPolicy;
    // Field size check
    static_assert(sizeof(::System::Net::Security::EncryptionPolicy) == 0x4);
    public:
    // Get static field: static private readonly System.Net.Configuration.SettingsSectionInternal instance
    static ::System::Net::Configuration::SettingsSectionInternal* _get_instance();
    // Set static field: static private readonly System.Net.Configuration.SettingsSectionInternal instance
    static void _set_instance(::System::Net::Configuration::SettingsSectionInternal* value);
    // Get instance field reference: readonly System.Boolean HttpListenerUnescapeRequestUrl
    [[deprecated("Use field access instead!")]] bool& dyn_HttpListenerUnescapeRequestUrl();
    // Get instance field reference: readonly System.Net.Sockets.IPProtectionLevel IPProtectionLevel
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::IPProtectionLevel& dyn_IPProtectionLevel();
    // Get instance field reference: private System.Boolean <UseNagleAlgorithm>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$UseNagleAlgorithm$k__BackingField();
    // Get instance field reference: private System.Boolean <Expect100Continue>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Expect100Continue$k__BackingField();
    // Get instance field reference: private System.Boolean <CheckCertificateName>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$CheckCertificateName$k__BackingField();
    // Get instance field reference: private System.Int32 <DnsRefreshTimeout>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$DnsRefreshTimeout$k__BackingField();
    // Get instance field reference: private System.Boolean <EnableDnsRoundRobin>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$EnableDnsRoundRobin$k__BackingField();
    // Get instance field reference: private System.Boolean <CheckCertificateRevocationList>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$CheckCertificateRevocationList$k__BackingField();
    // Get instance field reference: private System.Net.Security.EncryptionPolicy <EncryptionPolicy>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::Security::EncryptionPolicy& dyn_$EncryptionPolicy$k__BackingField();
    // static System.Net.Configuration.SettingsSectionInternal get_Section()
    // Offset: 0x4ECAAD4
    static ::System::Net::Configuration::SettingsSectionInternal* get_Section();
    // System.Boolean get_UseNagleAlgorithm()
    // Offset: 0x4ECAB2C
    bool get_UseNagleAlgorithm();
    // System.Void set_UseNagleAlgorithm(System.Boolean value)
    // Offset: 0x4ECAB34
    void set_UseNagleAlgorithm(bool value);
    // System.Boolean get_Expect100Continue()
    // Offset: 0x4ECAB40
    bool get_Expect100Continue();
    // System.Void set_Expect100Continue(System.Boolean value)
    // Offset: 0x4ECAB48
    void set_Expect100Continue(bool value);
    // System.Boolean get_CheckCertificateName()
    // Offset: 0x4ECAB54
    bool get_CheckCertificateName();
    // private System.Void set_CheckCertificateName(System.Boolean value)
    // Offset: 0x4ECAB5C
    void set_CheckCertificateName(bool value);
    // System.Int32 get_DnsRefreshTimeout()
    // Offset: 0x4ECAB68
    int get_DnsRefreshTimeout();
    // System.Void set_DnsRefreshTimeout(System.Int32 value)
    // Offset: 0x4ECAB70
    void set_DnsRefreshTimeout(int value);
    // System.Boolean get_EnableDnsRoundRobin()
    // Offset: 0x4ECAB78
    bool get_EnableDnsRoundRobin();
    // System.Void set_EnableDnsRoundRobin(System.Boolean value)
    // Offset: 0x4ECAB80
    void set_EnableDnsRoundRobin(bool value);
    // System.Boolean get_CheckCertificateRevocationList()
    // Offset: 0x4ECAB8C
    bool get_CheckCertificateRevocationList();
    // System.Void set_CheckCertificateRevocationList(System.Boolean value)
    // Offset: 0x4ECAB94
    void set_CheckCertificateRevocationList(bool value);
    // System.Net.Security.EncryptionPolicy get_EncryptionPolicy()
    // Offset: 0x4ECABA0
    ::System::Net::Security::EncryptionPolicy get_EncryptionPolicy();
    // private System.Void set_EncryptionPolicy(System.Net.Security.EncryptionPolicy value)
    // Offset: 0x4ECABA8
    void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value);
    // System.Boolean get_Ipv6Enabled()
    // Offset: 0x4ECABB0
    bool get_Ipv6Enabled();
    // public System.Void .ctor()
    // Offset: 0x4ECABB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsSectionInternal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::SettingsSectionInternal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsSectionInternal*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x4ECABD0
    static void _cctor();
  }; // System.Net.Configuration.SettingsSectionInternal
  #pragma pack(pop)
  static check_size<sizeof(SettingsSectionInternal), 36 + sizeof(::System::Net::Security::EncryptionPolicy)> __System_Net_Configuration_SettingsSectionInternalSizeCheck;
  static_assert(sizeof(SettingsSectionInternal) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::get_Section
// Il2CppName: get_Section
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::SettingsSectionInternal* (*)()>(&System::Net::Configuration::SettingsSectionInternal::get_Section)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "get_Section", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::get_UseNagleAlgorithm
// Il2CppName: get_UseNagleAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Configuration::SettingsSectionInternal::*)()>(&System::Net::Configuration::SettingsSectionInternal::get_UseNagleAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "get_UseNagleAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::set_UseNagleAlgorithm
// Il2CppName: set_UseNagleAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SettingsSectionInternal::*)(bool)>(&System::Net::Configuration::SettingsSectionInternal::set_UseNagleAlgorithm)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "set_UseNagleAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::get_Expect100Continue
// Il2CppName: get_Expect100Continue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Configuration::SettingsSectionInternal::*)()>(&System::Net::Configuration::SettingsSectionInternal::get_Expect100Continue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "get_Expect100Continue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::set_Expect100Continue
// Il2CppName: set_Expect100Continue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SettingsSectionInternal::*)(bool)>(&System::Net::Configuration::SettingsSectionInternal::set_Expect100Continue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "set_Expect100Continue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::get_CheckCertificateName
// Il2CppName: get_CheckCertificateName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Configuration::SettingsSectionInternal::*)()>(&System::Net::Configuration::SettingsSectionInternal::get_CheckCertificateName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "get_CheckCertificateName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::set_CheckCertificateName
// Il2CppName: set_CheckCertificateName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SettingsSectionInternal::*)(bool)>(&System::Net::Configuration::SettingsSectionInternal::set_CheckCertificateName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "set_CheckCertificateName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::get_DnsRefreshTimeout
// Il2CppName: get_DnsRefreshTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Configuration::SettingsSectionInternal::*)()>(&System::Net::Configuration::SettingsSectionInternal::get_DnsRefreshTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "get_DnsRefreshTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::set_DnsRefreshTimeout
// Il2CppName: set_DnsRefreshTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SettingsSectionInternal::*)(int)>(&System::Net::Configuration::SettingsSectionInternal::set_DnsRefreshTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "set_DnsRefreshTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::get_EnableDnsRoundRobin
// Il2CppName: get_EnableDnsRoundRobin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Configuration::SettingsSectionInternal::*)()>(&System::Net::Configuration::SettingsSectionInternal::get_EnableDnsRoundRobin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "get_EnableDnsRoundRobin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::set_EnableDnsRoundRobin
// Il2CppName: set_EnableDnsRoundRobin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SettingsSectionInternal::*)(bool)>(&System::Net::Configuration::SettingsSectionInternal::set_EnableDnsRoundRobin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "set_EnableDnsRoundRobin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::get_CheckCertificateRevocationList
// Il2CppName: get_CheckCertificateRevocationList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Configuration::SettingsSectionInternal::*)()>(&System::Net::Configuration::SettingsSectionInternal::get_CheckCertificateRevocationList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "get_CheckCertificateRevocationList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::set_CheckCertificateRevocationList
// Il2CppName: set_CheckCertificateRevocationList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SettingsSectionInternal::*)(bool)>(&System::Net::Configuration::SettingsSectionInternal::set_CheckCertificateRevocationList)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "set_CheckCertificateRevocationList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::get_EncryptionPolicy
// Il2CppName: get_EncryptionPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::EncryptionPolicy (System::Net::Configuration::SettingsSectionInternal::*)()>(&System::Net::Configuration::SettingsSectionInternal::get_EncryptionPolicy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "get_EncryptionPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::set_EncryptionPolicy
// Il2CppName: set_EncryptionPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SettingsSectionInternal::*)(::System::Net::Security::EncryptionPolicy)>(&System::Net::Configuration::SettingsSectionInternal::set_EncryptionPolicy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Security", "EncryptionPolicy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "set_EncryptionPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::get_Ipv6Enabled
// Il2CppName: get_Ipv6Enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Configuration::SettingsSectionInternal::*)()>(&System::Net::Configuration::SettingsSectionInternal::get_Ipv6Enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "get_Ipv6Enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Configuration::SettingsSectionInternal::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};