// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Base64Stream
#include "System/Net/Base64Stream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Base64Stream::ReadStateInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Base64Stream::ReadStateInfo*, "System.Net", "Base64Stream/ReadStateInfo");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Base64Stream/ReadStateInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class Base64Stream::ReadStateInfo : public ::Il2CppObject {
    public:
    public:
    // private System.Byte <Val>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    uint8_t Val;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte <Pos>k__BackingField
    // Size: 0x1
    // Offset: 0x11
    uint8_t Pos;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Get instance field reference: private System.Byte <Val>k__BackingField
    [[deprecated("Use field access instead!")]] uint8_t& dyn_$Val$k__BackingField();
    // Get instance field reference: private System.Byte <Pos>k__BackingField
    [[deprecated("Use field access instead!")]] uint8_t& dyn_$Pos$k__BackingField();
    // System.Byte get_Val()
    // Offset: 0x4FABF20
    uint8_t get_Val();
    // System.Void set_Val(System.Byte value)
    // Offset: 0x4FABF28
    void set_Val(uint8_t value);
    // System.Byte get_Pos()
    // Offset: 0x4FABF30
    uint8_t get_Pos();
    // System.Void set_Pos(System.Byte value)
    // Offset: 0x4FABF38
    void set_Pos(uint8_t value);
    // public System.Void .ctor()
    // Offset: 0x4FA9DA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Base64Stream::ReadStateInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Base64Stream::ReadStateInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Base64Stream::ReadStateInfo*, creationType>()));
    }
  }; // System.Net.Base64Stream/ReadStateInfo
  #pragma pack(pop)
  static check_size<sizeof(Base64Stream::ReadStateInfo), 17 + sizeof(uint8_t)> __System_Net_Base64Stream_ReadStateInfoSizeCheck;
  static_assert(sizeof(Base64Stream::ReadStateInfo) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Base64Stream::ReadStateInfo::get_Val
// Il2CppName: get_Val
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Net::Base64Stream::ReadStateInfo::*)()>(&System::Net::Base64Stream::ReadStateInfo::get_Val)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Base64Stream::ReadStateInfo*), "get_Val", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Base64Stream::ReadStateInfo::set_Val
// Il2CppName: set_Val
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Base64Stream::ReadStateInfo::*)(uint8_t)>(&System::Net::Base64Stream::ReadStateInfo::set_Val)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Base64Stream::ReadStateInfo*), "set_Val", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Base64Stream::ReadStateInfo::get_Pos
// Il2CppName: get_Pos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Net::Base64Stream::ReadStateInfo::*)()>(&System::Net::Base64Stream::ReadStateInfo::get_Pos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Base64Stream::ReadStateInfo*), "get_Pos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Base64Stream::ReadStateInfo::set_Pos
// Il2CppName: set_Pos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Base64Stream::ReadStateInfo::*)(uint8_t)>(&System::Net::Base64Stream::ReadStateInfo::set_Pos)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Base64Stream::ReadStateInfo*), "set_Pos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Base64Stream::ReadStateInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
