// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: KID::Model
namespace KID::Model {
  // Skipping declaration: StatusEnum because it is already included!
}
// Completed forward declares
// Type namespace: KID.Model
namespace KID::Model {
  // Forward declaring type: AwaitChallengeResponse
  class AwaitChallengeResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Model::AwaitChallengeResponse);
DEFINE_IL2CPP_ARG_TYPE(::KID::Model::AwaitChallengeResponse*, "KID.Model", "AwaitChallengeResponse");
// Type namespace: KID.Model
namespace KID::Model {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: KID.Model.AwaitChallengeResponse
  // [TokenAttribute] Offset: FFFFFFFF
  // [DataContractAttribute] Offset: FFFFFFFF
  class AwaitChallengeResponse : public ::Il2CppObject {
    public:
    // Nested type: ::KID::Model::AwaitChallengeResponse::StatusEnum
    struct StatusEnum;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: KID.Model.AwaitChallengeResponse/StatusEnum
    // [TokenAttribute] Offset: FFFFFFFF
    // [JsonConverterAttribute] Offset: FFFFFFFF
    struct StatusEnum/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: StatusEnum
      constexpr StatusEnum(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public KID.Model.AwaitChallengeResponse/StatusEnum PASS
      static constexpr const int PASS = 1;
      // Get static field: static public KID.Model.AwaitChallengeResponse/StatusEnum PASS
      static ::KID::Model::AwaitChallengeResponse::StatusEnum _get_PASS();
      // Set static field: static public KID.Model.AwaitChallengeResponse/StatusEnum PASS
      static void _set_PASS(::KID::Model::AwaitChallengeResponse::StatusEnum value);
      // static field const value: static public KID.Model.AwaitChallengeResponse/StatusEnum FAIL
      static constexpr const int FAIL = 2;
      // Get static field: static public KID.Model.AwaitChallengeResponse/StatusEnum FAIL
      static ::KID::Model::AwaitChallengeResponse::StatusEnum _get_FAIL();
      // Set static field: static public KID.Model.AwaitChallengeResponse/StatusEnum FAIL
      static void _set_FAIL(::KID::Model::AwaitChallengeResponse::StatusEnum value);
      // static field const value: static public KID.Model.AwaitChallengeResponse/StatusEnum POLLTIMEOUT
      static constexpr const int POLLTIMEOUT = 3;
      // Get static field: static public KID.Model.AwaitChallengeResponse/StatusEnum POLLTIMEOUT
      static ::KID::Model::AwaitChallengeResponse::StatusEnum _get_POLLTIMEOUT();
      // Set static field: static public KID.Model.AwaitChallengeResponse/StatusEnum POLLTIMEOUT
      static void _set_POLLTIMEOUT(::KID::Model::AwaitChallengeResponse::StatusEnum value);
      // static field const value: static public KID.Model.AwaitChallengeResponse/StatusEnum INPROGRESS
      static constexpr const int INPROGRESS = 4;
      // Get static field: static public KID.Model.AwaitChallengeResponse/StatusEnum INPROGRESS
      static ::KID::Model::AwaitChallengeResponse::StatusEnum _get_INPROGRESS();
      // Set static field: static public KID.Model.AwaitChallengeResponse/StatusEnum INPROGRESS
      static void _set_INPROGRESS(::KID::Model::AwaitChallengeResponse::StatusEnum value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // KID.Model.AwaitChallengeResponse/StatusEnum
    #pragma pack(pop)
    static check_size<sizeof(AwaitChallengeResponse::StatusEnum), 0 + sizeof(int)> __KID_Model_AwaitChallengeResponse_StatusEnumSizeCheck;
    static_assert(sizeof(AwaitChallengeResponse::StatusEnum) == 0x4);
    public:
    // private KID.Model.AwaitChallengeResponse/StatusEnum <Status>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::KID::Model::AwaitChallengeResponse::StatusEnum Status;
    // Field size check
    static_assert(sizeof(::KID::Model::AwaitChallengeResponse::StatusEnum) == 0x4);
    // private System.Guid <SessionId>k__BackingField
    // Size: 0x10
    // Offset: 0x14
    ::System::Guid SessionId;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    public:
    // Get instance field reference: private KID.Model.AwaitChallengeResponse/StatusEnum <Status>k__BackingField
    [[deprecated("Use field access instead!")]] ::KID::Model::AwaitChallengeResponse::StatusEnum& dyn_$Status$k__BackingField();
    // Get instance field reference: private System.Guid <SessionId>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_$SessionId$k__BackingField();
    // public KID.Model.AwaitChallengeResponse/StatusEnum get_Status()
    // Offset: 0x437F00C
    ::KID::Model::AwaitChallengeResponse::StatusEnum get_Status();
    // public System.Void set_Status(KID.Model.AwaitChallengeResponse/StatusEnum value)
    // Offset: 0x437F014
    void set_Status(::KID::Model::AwaitChallengeResponse::StatusEnum value);
    // protected System.Void .ctor()
    // Offset: 0x437F01C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AwaitChallengeResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Model::AwaitChallengeResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AwaitChallengeResponse*, creationType>()));
    }
    // public System.Void .ctor(KID.Model.AwaitChallengeResponse/StatusEnum status, System.Guid sessionId)
    // Offset: 0x437F024
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AwaitChallengeResponse* New_ctor(::KID::Model::AwaitChallengeResponse::StatusEnum status, ::System::Guid sessionId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Model::AwaitChallengeResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AwaitChallengeResponse*, creationType>(status, sessionId)));
    }
    // public System.Guid get_SessionId()
    // Offset: 0x437F064
    ::System::Guid get_SessionId();
    // public System.Void set_SessionId(System.Guid value)
    // Offset: 0x437F074
    void set_SessionId(::System::Guid value);
    // public System.String ToJson()
    // Offset: 0x437F244
    ::StringW ToJson();
    // public override System.String ToString()
    // Offset: 0x437F080
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // KID.Model.AwaitChallengeResponse
  #pragma pack(pop)
  static check_size<sizeof(AwaitChallengeResponse), 20 + sizeof(::System::Guid)> __KID_Model_AwaitChallengeResponseSizeCheck;
  static_assert(sizeof(AwaitChallengeResponse) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::KID::Model::AwaitChallengeResponse::StatusEnum, "KID.Model", "AwaitChallengeResponse/StatusEnum");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Model::AwaitChallengeResponse::get_Status
// Il2CppName: get_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Model::AwaitChallengeResponse::StatusEnum (KID::Model::AwaitChallengeResponse::*)()>(&KID::Model::AwaitChallengeResponse::get_Status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::AwaitChallengeResponse*), "get_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::AwaitChallengeResponse::set_Status
// Il2CppName: set_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Model::AwaitChallengeResponse::*)(::KID::Model::AwaitChallengeResponse::StatusEnum)>(&KID::Model::AwaitChallengeResponse::set_Status)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Model", "AwaitChallengeResponse/StatusEnum")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Model::AwaitChallengeResponse*), "set_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Model::AwaitChallengeResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Model::AwaitChallengeResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Model::AwaitChallengeResponse::get_SessionId
// Il2CppName: get_SessionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (KID::Model::AwaitChallengeResponse::*)()>(&KID::Model::AwaitChallengeResponse::get_SessionId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::AwaitChallengeResponse*), "get_SessionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::AwaitChallengeResponse::set_SessionId
// Il2CppName: set_SessionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Model::AwaitChallengeResponse::*)(::System::Guid)>(&KID::Model::AwaitChallengeResponse::set_SessionId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Model::AwaitChallengeResponse*), "set_SessionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Model::AwaitChallengeResponse::ToJson
// Il2CppName: ToJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Model::AwaitChallengeResponse::*)()>(&KID::Model::AwaitChallengeResponse::ToJson)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::AwaitChallengeResponse*), "ToJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::AwaitChallengeResponse::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Model::AwaitChallengeResponse::*)()>(&KID::Model::AwaitChallengeResponse::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::AwaitChallengeResponse*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};