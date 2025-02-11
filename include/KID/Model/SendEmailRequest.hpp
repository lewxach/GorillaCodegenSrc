// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: KID.Model
namespace KID::Model {
  // Forward declaring type: SendEmailRequest
  class SendEmailRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Model::SendEmailRequest);
DEFINE_IL2CPP_ARG_TYPE(::KID::Model::SendEmailRequest*, "KID.Model", "SendEmailRequest");
// Type namespace: KID.Model
namespace KID::Model {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: KID.Model.SendEmailRequest
  // [TokenAttribute] Offset: FFFFFFFF
  // [DataContractAttribute] Offset: FFFFFFFF
  class SendEmailRequest : public ::Il2CppObject {
    public:
    public:
    // private System.Guid <ChallengeId>k__BackingField
    // Size: 0x10
    // Offset: 0x10
    ::System::Guid ChallengeId;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // private System.String <Email>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW Email;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <Locale>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW Locale;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Guid <ChallengeId>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_$ChallengeId$k__BackingField();
    // Get instance field reference: private System.String <Email>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Email$k__BackingField();
    // Get instance field reference: private System.String <Locale>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Locale$k__BackingField();
    // protected System.Void .ctor()
    // Offset: 0x4380F10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SendEmailRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Model::SendEmailRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SendEmailRequest*, creationType>()));
    }
    // public System.Void .ctor(System.Guid challengeId, System.String email, System.String locale)
    // Offset: 0x4380F18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SendEmailRequest* New_ctor(::System::Guid challengeId, ::StringW email, ::StringW locale) {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Model::SendEmailRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SendEmailRequest*, creationType>(challengeId, email, locale)));
    }
    // public System.Guid get_ChallengeId()
    // Offset: 0x4380FBC
    ::System::Guid get_ChallengeId();
    // public System.Void set_ChallengeId(System.Guid value)
    // Offset: 0x4380FC8
    void set_ChallengeId(::System::Guid value);
    // public System.String get_Email()
    // Offset: 0x4380FD0
    ::StringW get_Email();
    // public System.Void set_Email(System.String value)
    // Offset: 0x4380FD8
    void set_Email(::StringW value);
    // public System.String get_Locale()
    // Offset: 0x4380FE0
    ::StringW get_Locale();
    // public System.Void set_Locale(System.String value)
    // Offset: 0x4380FE8
    void set_Locale(::StringW value);
    // public System.String ToJson()
    // Offset: 0x43811C4
    ::StringW ToJson();
    // public override System.String ToString()
    // Offset: 0x4380FF0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // KID.Model.SendEmailRequest
  #pragma pack(pop)
  static check_size<sizeof(SendEmailRequest), 40 + sizeof(::StringW)> __KID_Model_SendEmailRequestSizeCheck;
  static_assert(sizeof(SendEmailRequest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Model::SendEmailRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Model::SendEmailRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Model::SendEmailRequest::get_ChallengeId
// Il2CppName: get_ChallengeId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (KID::Model::SendEmailRequest::*)()>(&KID::Model::SendEmailRequest::get_ChallengeId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SendEmailRequest*), "get_ChallengeId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::SendEmailRequest::set_ChallengeId
// Il2CppName: set_ChallengeId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Model::SendEmailRequest::*)(::System::Guid)>(&KID::Model::SendEmailRequest::set_ChallengeId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SendEmailRequest*), "set_ChallengeId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Model::SendEmailRequest::get_Email
// Il2CppName: get_Email
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Model::SendEmailRequest::*)()>(&KID::Model::SendEmailRequest::get_Email)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SendEmailRequest*), "get_Email", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::SendEmailRequest::set_Email
// Il2CppName: set_Email
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Model::SendEmailRequest::*)(::StringW)>(&KID::Model::SendEmailRequest::set_Email)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SendEmailRequest*), "set_Email", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Model::SendEmailRequest::get_Locale
// Il2CppName: get_Locale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Model::SendEmailRequest::*)()>(&KID::Model::SendEmailRequest::get_Locale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SendEmailRequest*), "get_Locale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::SendEmailRequest::set_Locale
// Il2CppName: set_Locale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Model::SendEmailRequest::*)(::StringW)>(&KID::Model::SendEmailRequest::set_Locale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SendEmailRequest*), "set_Locale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Model::SendEmailRequest::ToJson
// Il2CppName: ToJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Model::SendEmailRequest::*)()>(&KID::Model::SendEmailRequest::ToJson)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SendEmailRequest*), "ToJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::SendEmailRequest::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Model::SendEmailRequest::*)()>(&KID::Model::SendEmailRequest::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SendEmailRequest*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
