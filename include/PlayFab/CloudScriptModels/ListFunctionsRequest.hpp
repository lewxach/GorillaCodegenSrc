// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: ListFunctionsRequest
  class ListFunctionsRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::CloudScriptModels::ListFunctionsRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::CloudScriptModels::ListFunctionsRequest*, "PlayFab.CloudScriptModels", "ListFunctionsRequest");
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.CloudScriptModels.ListFunctionsRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ListFunctionsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    // public System.Void .ctor()
    // Offset: 0x4B63440
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListFunctionsRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::CloudScriptModels::ListFunctionsRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListFunctionsRequest*, creationType>()));
    }
  }; // PlayFab.CloudScriptModels.ListFunctionsRequest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::CloudScriptModels::ListFunctionsRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
