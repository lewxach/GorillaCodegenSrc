// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Requests.VoiceServiceRequestOptions
#include "Meta/WitAi/Requests/VoiceServiceRequestOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Requests::VoiceServiceRequestOptions::QueryParam);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Requests::VoiceServiceRequestOptions::QueryParam*, "Meta.WitAi.Requests", "VoiceServiceRequestOptions/QueryParam");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceServiceRequestOptions::QueryParam : public ::Il2CppObject {
    public:
    public:
    // public System.String key
    // Size: 0x8
    // Offset: 0x10
    ::StringW key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String value
    // Size: 0x8
    // Offset: 0x18
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String key
    [[deprecated("Use field access instead!")]] ::StringW& dyn_key();
    // Get instance field reference: public System.String value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_value();
    // public System.Void .ctor()
    // Offset: 0x442B5E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceServiceRequestOptions::QueryParam* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::VoiceServiceRequestOptions::QueryParam::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceServiceRequestOptions::QueryParam*, creationType>()));
    }
  }; // Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam
  #pragma pack(pop)
  static check_size<sizeof(VoiceServiceRequestOptions::QueryParam), 24 + sizeof(::StringW)> __Meta_WitAi_Requests_VoiceServiceRequestOptions_QueryParamSizeCheck;
  static_assert(sizeof(VoiceServiceRequestOptions::QueryParam) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequestOptions::QueryParam::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!