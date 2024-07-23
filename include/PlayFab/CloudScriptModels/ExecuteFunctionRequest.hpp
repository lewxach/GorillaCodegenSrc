// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: EntityKey
  class EntityKey;
}
// Completed forward declares
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: ExecuteFunctionRequest
  class ExecuteFunctionRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::CloudScriptModels::ExecuteFunctionRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::CloudScriptModels::ExecuteFunctionRequest*, "PlayFab.CloudScriptModels", "ExecuteFunctionRequest");
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.CloudScriptModels.ExecuteFunctionRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ExecuteFunctionRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public PlayFab.CloudScriptModels.EntityKey Entity
    // Size: 0x8
    // Offset: 0x18
    ::PlayFab::CloudScriptModels::EntityKey* Entity;
    // Field size check
    static_assert(sizeof(::PlayFab::CloudScriptModels::EntityKey*) == 0x8);
    // public System.String FunctionName
    // Size: 0x8
    // Offset: 0x20
    ::StringW FunctionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Object FunctionParameter
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* FunctionParameter;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Nullable`1<System.Boolean> GeneratePlayStreamEvent
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::System::Nullable_1<bool> GeneratePlayStreamEvent;
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public PlayFab.CloudScriptModels.EntityKey Entity
    [[deprecated("Use field access instead!")]] ::PlayFab::CloudScriptModels::EntityKey*& dyn_Entity();
    // Get instance field reference: public System.String FunctionName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FunctionName();
    // Get instance field reference: public System.Object FunctionParameter
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_FunctionParameter();
    // Get instance field reference: public System.Nullable`1<System.Boolean> GeneratePlayStreamEvent
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_GeneratePlayStreamEvent();
    // public System.Void .ctor()
    // Offset: 0x4B63410
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExecuteFunctionRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::CloudScriptModels::ExecuteFunctionRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExecuteFunctionRequest*, creationType>()));
    }
  }; // PlayFab.CloudScriptModels.ExecuteFunctionRequest
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::CloudScriptModels::ExecuteFunctionRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!