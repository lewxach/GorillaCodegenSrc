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
// Type namespace: KID.Model
namespace KID::Model {
  // Forward declaring type: IssueAuthTokenResponse
  class IssueAuthTokenResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Model::IssueAuthTokenResponse);
DEFINE_IL2CPP_ARG_TYPE(::KID::Model::IssueAuthTokenResponse*, "KID.Model", "IssueAuthTokenResponse");
// Type namespace: KID.Model
namespace KID::Model {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: KID.Model.IssueAuthTokenResponse
  // [TokenAttribute] Offset: FFFFFFFF
  // [DataContractAttribute] Offset: FFFFFFFF
  class IssueAuthTokenResponse : public ::Il2CppObject {
    public:
    public:
    // private System.String <AccessToken>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW AccessToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <RefreshToken>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW RefreshToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String <AccessToken>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$AccessToken$k__BackingField();
    // Get instance field reference: private System.String <RefreshToken>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$RefreshToken$k__BackingField();
    // public System.Void .ctor(System.String accessToken, System.String refreshToken)
    // Offset: 0x43807FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IssueAuthTokenResponse* New_ctor(::StringW accessToken, ::StringW refreshToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Model::IssueAuthTokenResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IssueAuthTokenResponse*, creationType>(accessToken, refreshToken)));
    }
    // public System.String get_AccessToken()
    // Offset: 0x4380840
    ::StringW get_AccessToken();
    // public System.Void set_AccessToken(System.String value)
    // Offset: 0x4380848
    void set_AccessToken(::StringW value);
    // public System.String get_RefreshToken()
    // Offset: 0x4380850
    ::StringW get_RefreshToken();
    // public System.Void set_RefreshToken(System.String value)
    // Offset: 0x4380858
    void set_RefreshToken(::StringW value);
    // public System.String ToJson()
    // Offset: 0x43809B4
    ::StringW ToJson();
    // public override System.String ToString()
    // Offset: 0x4380860
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // KID.Model.IssueAuthTokenResponse
  #pragma pack(pop)
  static check_size<sizeof(IssueAuthTokenResponse), 24 + sizeof(::StringW)> __KID_Model_IssueAuthTokenResponseSizeCheck;
  static_assert(sizeof(IssueAuthTokenResponse) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Model::IssueAuthTokenResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Model::IssueAuthTokenResponse::get_AccessToken
// Il2CppName: get_AccessToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Model::IssueAuthTokenResponse::*)()>(&KID::Model::IssueAuthTokenResponse::get_AccessToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::IssueAuthTokenResponse*), "get_AccessToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::IssueAuthTokenResponse::set_AccessToken
// Il2CppName: set_AccessToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Model::IssueAuthTokenResponse::*)(::StringW)>(&KID::Model::IssueAuthTokenResponse::set_AccessToken)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Model::IssueAuthTokenResponse*), "set_AccessToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Model::IssueAuthTokenResponse::get_RefreshToken
// Il2CppName: get_RefreshToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Model::IssueAuthTokenResponse::*)()>(&KID::Model::IssueAuthTokenResponse::get_RefreshToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::IssueAuthTokenResponse*), "get_RefreshToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::IssueAuthTokenResponse::set_RefreshToken
// Il2CppName: set_RefreshToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Model::IssueAuthTokenResponse::*)(::StringW)>(&KID::Model::IssueAuthTokenResponse::set_RefreshToken)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Model::IssueAuthTokenResponse*), "set_RefreshToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Model::IssueAuthTokenResponse::ToJson
// Il2CppName: ToJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Model::IssueAuthTokenResponse::*)()>(&KID::Model::IssueAuthTokenResponse::ToJson)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::IssueAuthTokenResponse*), "ToJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::IssueAuthTokenResponse::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Model::IssueAuthTokenResponse::*)()>(&KID::Model::IssueAuthTokenResponse::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::IssueAuthTokenResponse*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
