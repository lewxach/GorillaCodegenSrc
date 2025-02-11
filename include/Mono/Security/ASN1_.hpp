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
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: Mono.Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::ASN1_);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::ASN1_*, "Mono.Security", "ASN1");
// Type namespace: Mono.Security
namespace Mono::Security {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.ASN1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class ASN1_ : public ::Il2CppObject {
    public:
    public:
    // private System.Byte m_nTag
    // Size: 0x1
    // Offset: 0x10
    uint8_t m_nTag;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: m_nTag and: m_aValue
    char __padding0[0x7] = {};
    // private System.Byte[] m_aValue
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> m_aValue;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Collections.ArrayList elist
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::ArrayList* elist;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    public:
    // Get instance field reference: private System.Byte m_nTag
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_nTag();
    // Get instance field reference: private System.Byte[] m_aValue
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_m_aValue();
    // Get instance field reference: private System.Collections.ArrayList elist
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_elist();
    // public System.Void .ctor(System.Byte tag)
    // Offset: 0x44AC400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ASN1_* New_ctor(uint8_t tag) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::ASN1_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ASN1_*, creationType>(tag)));
    }
    // public System.Void .ctor(System.Byte tag, System.Byte[] data)
    // Offset: 0x44AC434
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ASN1_* New_ctor(uint8_t tag, ::ArrayW<uint8_t> data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::ASN1_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ASN1_*, creationType>(tag, data)));
    }
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x44AC46C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ASN1_* New_ctor(::ArrayW<uint8_t> data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::ASN1_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ASN1_*, creationType>(data)));
    }
    // public System.Int32 get_Count()
    // Offset: 0x44AC710
    int get_Count();
    // public System.Byte[] get_Value()
    // Offset: 0x44AC72C
    ::ArrayW<uint8_t> get_Value();
    // public Mono.Security.ASN1 Add(Mono.Security.ASN1 asn1)
    // Offset: 0x44AC7BC
    ::Mono::Security::ASN1_* Add(::Mono::Security::ASN1_* asn1);
    // public System.Byte[] GetBytes()
    // Offset: 0x44AC854
    ::ArrayW<uint8_t> GetBytes();
    // protected System.Void Decode(System.Byte[] asn1, ref System.Int32 anPos, System.Int32 anLength)
    // Offset: 0x44AC5E8
    void Decode(::ArrayW<uint8_t> asn1, ByRef<int> anPos, int anLength);
    // protected System.Void DecodeTLV(System.Byte[] asn1, ref System.Int32 pos, out System.Byte tag, out System.Int32 length, out System.Byte[] content)
    // Offset: 0x44ACEE4
    void DecodeTLV(::ArrayW<uint8_t> asn1, ByRef<int> pos, ByRef<uint8_t> tag, ByRef<int> length, ByRef<::ArrayW<uint8_t>> content);
    // public override System.String ToString()
    // Offset: 0x44AD014
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Mono.Security.ASN1
  #pragma pack(pop)
  static check_size<sizeof(ASN1_), 32 + sizeof(::System::Collections::ArrayList*)> __Mono_Security_ASN1_SizeCheck;
  static_assert(sizeof(ASN1_) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::ASN1_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::ASN1_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::ASN1_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::ASN1_::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::ASN1_::*)()>(&Mono::Security::ASN1_::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1_*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1_::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::ASN1_::*)()>(&Mono::Security::ASN1_::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1_*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1_::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1_* (Mono::Security::ASN1_::*)(::Mono::Security::ASN1_*)>(&Mono::Security::ASN1_::Add)> {
  static const MethodInfo* get() {
    static auto* asn1 = &::il2cpp_utils::GetClassFromName("Mono.Security", "ASN1")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1_*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1_::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::ASN1_::*)()>(&Mono::Security::ASN1_::GetBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1_*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1_::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::ASN1_::*)(::ArrayW<uint8_t>, ByRef<int>, int)>(&Mono::Security::ASN1_::Decode)> {
  static const MethodInfo* get() {
    static auto* asn1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* anPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* anLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1_*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1, anPos, anLength});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1_::DecodeTLV
// Il2CppName: DecodeTLV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::ASN1_::*)(::ArrayW<uint8_t>, ByRef<int>, ByRef<uint8_t>, ByRef<int>, ByRef<::ArrayW<uint8_t>>)>(&Mono::Security::ASN1_::DecodeTLV)> {
  static const MethodInfo* get() {
    static auto* asn1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "Byte")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* content = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1_*), "DecodeTLV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1, pos, tag, length, content});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1_::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::ASN1_::*)()>(&Mono::Security::ASN1_::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1_*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
