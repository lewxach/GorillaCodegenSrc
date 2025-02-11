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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: PhysicalAddress
  class PhysicalAddress;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::PhysicalAddress);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::PhysicalAddress*, "System.Net.NetworkInformation", "PhysicalAddress");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.PhysicalAddress
  // [TokenAttribute] Offset: FFFFFFFF
  class PhysicalAddress : public ::Il2CppObject {
    public:
    public:
    // private System.Byte[] address
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> address;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Boolean changed
    // Size: 0x1
    // Offset: 0x18
    bool changed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: changed and: hash
    char __padding1[0x3] = {};
    // private System.Int32 hash
    // Size: 0x4
    // Offset: 0x1C
    int hash;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static public readonly System.Net.NetworkInformation.PhysicalAddress None
    static ::System::Net::NetworkInformation::PhysicalAddress* _get_None();
    // Set static field: static public readonly System.Net.NetworkInformation.PhysicalAddress None
    static void _set_None(::System::Net::NetworkInformation::PhysicalAddress* value);
    // Get instance field reference: private System.Byte[] address
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_address();
    // Get instance field reference: private System.Boolean changed
    [[deprecated("Use field access instead!")]] bool& dyn_changed();
    // Get instance field reference: private System.Int32 hash
    [[deprecated("Use field access instead!")]] int& dyn_hash();
    // public System.Void .ctor(System.Byte[] address)
    // Offset: 0x4EC686C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhysicalAddress* New_ctor(::ArrayW<uint8_t> address) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::PhysicalAddress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhysicalAddress*, creationType>(address)));
    }
    // static private System.Void .cctor()
    // Offset: 0x4EC6BB8
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0x4EC68A4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object comparand)
    // Offset: 0x4EC69C0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object comparand)
    bool Equals(::Il2CppObject* comparand);
    // public override System.String ToString()
    // Offset: 0x4EC6AC0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.NetworkInformation.PhysicalAddress
  #pragma pack(pop)
  static check_size<sizeof(PhysicalAddress), 28 + sizeof(int)> __System_Net_NetworkInformation_PhysicalAddressSizeCheck;
  static_assert(sizeof(PhysicalAddress) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::PhysicalAddress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::PhysicalAddress::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::NetworkInformation::PhysicalAddress::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::PhysicalAddress*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::PhysicalAddress::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::NetworkInformation::PhysicalAddress::*)()>(&System::Net::NetworkInformation::PhysicalAddress::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::PhysicalAddress*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::PhysicalAddress::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkInformation::PhysicalAddress::*)(::Il2CppObject*)>(&System::Net::NetworkInformation::PhysicalAddress::Equals)> {
  static const MethodInfo* get() {
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::PhysicalAddress*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparand});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::PhysicalAddress::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::NetworkInformation::PhysicalAddress::*)()>(&System::Net::NetworkInformation::PhysicalAddress::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::PhysicalAddress*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
