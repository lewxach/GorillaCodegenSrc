// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Networking.UnityWebRequest/Result
#include "UnityEngine/Networking/UnityWebRequest_Result.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Skipping declaration: UnityWebRequest because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Forward declaring type: UnityWebRequestResult
  class UnityWebRequestResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, "UnityEngine.ResourceManagement.Util", "UnityWebRequestResult");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Util.UnityWebRequestResult
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityWebRequestResult : public ::Il2CppObject {
    public:
    public:
    // private System.String <Error>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Error;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Int64 <ResponseCode>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    int64_t ResponseCode;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private readonly UnityEngine.Networking.UnityWebRequest/Result <Result>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::Networking::UnityWebRequest::Result Result;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest::Result) == 0x4);
    // Padding between fields: Result and: Method
    char __padding2[0x4] = {};
    // private readonly System.String <Method>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW Method;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String <Url>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::StringW Url;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String <Error>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Error$k__BackingField();
    // Get instance field reference: private readonly System.Int64 <ResponseCode>k__BackingField
    [[deprecated("Use field access instead!")]] int64_t& dyn_$ResponseCode$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.Networking.UnityWebRequest/Result <Result>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::UnityWebRequest::Result& dyn_$Result$k__BackingField();
    // Get instance field reference: private readonly System.String <Method>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Method$k__BackingField();
    // Get instance field reference: private readonly System.String <Url>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Url$k__BackingField();
    // public System.Void .ctor(UnityEngine.Networking.UnityWebRequest request)
    // Offset: 0x5331AB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityWebRequestResult* New_ctor(::UnityEngine::Networking::UnityWebRequest* request) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::UnityWebRequestResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityWebRequestResult*, creationType>(request)));
    }
    // public System.String get_Error()
    // Offset: 0x5331D60
    ::StringW get_Error();
    // public System.Void set_Error(System.String value)
    // Offset: 0x5331D68
    void set_Error(::StringW value);
    // public System.Int64 get_ResponseCode()
    // Offset: 0x5331D70
    int64_t get_ResponseCode();
    // public UnityEngine.Networking.UnityWebRequest/Result get_Result()
    // Offset: 0x5331D78
    ::UnityEngine::Networking::UnityWebRequest::Result get_Result();
    // public System.String get_Method()
    // Offset: 0x5331D80
    ::StringW get_Method();
    // public System.String get_Url()
    // Offset: 0x5331D88
    ::StringW get_Url();
    // public System.Boolean ShouldRetryDownloadError()
    // Offset: 0x5331D90
    bool ShouldRetryDownloadError();
    // public override System.String ToString()
    // Offset: 0x5331BE0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.ResourceManagement.Util.UnityWebRequestResult
  #pragma pack(pop)
  static check_size<sizeof(UnityWebRequestResult), 48 + sizeof(::StringW)> __UnityEngine_ResourceManagement_Util_UnityWebRequestResultSizeCheck;
  static_assert(sizeof(UnityWebRequestResult) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::UnityWebRequestResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::UnityWebRequestResult::get_Error
// Il2CppName: get_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Util::UnityWebRequestResult::*)()>(&UnityEngine::ResourceManagement::Util::UnityWebRequestResult::get_Error)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::UnityWebRequestResult*), "get_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::UnityWebRequestResult::set_Error
// Il2CppName: set_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::UnityWebRequestResult::*)(::StringW)>(&UnityEngine::ResourceManagement::Util::UnityWebRequestResult::set_Error)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::UnityWebRequestResult*), "set_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::UnityWebRequestResult::get_ResponseCode
// Il2CppName: get_ResponseCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::ResourceManagement::Util::UnityWebRequestResult::*)()>(&UnityEngine::ResourceManagement::Util::UnityWebRequestResult::get_ResponseCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::UnityWebRequestResult*), "get_ResponseCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::UnityWebRequestResult::get_Result
// Il2CppName: get_Result
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest::Result (UnityEngine::ResourceManagement::Util::UnityWebRequestResult::*)()>(&UnityEngine::ResourceManagement::Util::UnityWebRequestResult::get_Result)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::UnityWebRequestResult*), "get_Result", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::UnityWebRequestResult::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Util::UnityWebRequestResult::*)()>(&UnityEngine::ResourceManagement::Util::UnityWebRequestResult::get_Method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::UnityWebRequestResult*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::UnityWebRequestResult::get_Url
// Il2CppName: get_Url
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Util::UnityWebRequestResult::*)()>(&UnityEngine::ResourceManagement::Util::UnityWebRequestResult::get_Url)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::UnityWebRequestResult*), "get_Url", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::UnityWebRequestResult::ShouldRetryDownloadError
// Il2CppName: ShouldRetryDownloadError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::Util::UnityWebRequestResult::*)()>(&UnityEngine::ResourceManagement::Util::UnityWebRequestResult::ShouldRetryDownloadError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::UnityWebRequestResult*), "ShouldRetryDownloadError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::UnityWebRequestResult::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Util::UnityWebRequestResult::*)()>(&UnityEngine::ResourceManagement::Util::UnityWebRequestResult::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::UnityWebRequestResult*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
