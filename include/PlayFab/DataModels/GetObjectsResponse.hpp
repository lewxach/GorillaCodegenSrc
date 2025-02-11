// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::DataModels
namespace PlayFab::DataModels {
  // Forward declaring type: EntityKey
  class EntityKey;
  // Forward declaring type: ObjectResult
  class ObjectResult;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: PlayFab.DataModels
namespace PlayFab::DataModels {
  // Forward declaring type: GetObjectsResponse
  class GetObjectsResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::DataModels::GetObjectsResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::DataModels::GetObjectsResponse*, "PlayFab.DataModels", "GetObjectsResponse");
// Type namespace: PlayFab.DataModels
namespace PlayFab::DataModels {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.DataModels.GetObjectsResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class GetObjectsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public PlayFab.DataModels.EntityKey Entity
    // Size: 0x8
    // Offset: 0x20
    ::PlayFab::DataModels::EntityKey* Entity;
    // Field size check
    static_assert(sizeof(::PlayFab::DataModels::EntityKey*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,PlayFab.DataModels.ObjectResult> Objects
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::DataModels::ObjectResult*>* Objects;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::DataModels::ObjectResult*>*) == 0x8);
    // public System.Int32 ProfileVersion
    // Size: 0x4
    // Offset: 0x30
    int ProfileVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public PlayFab.DataModels.EntityKey Entity
    [[deprecated("Use field access instead!")]] ::PlayFab::DataModels::EntityKey*& dyn_Entity();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,PlayFab.DataModels.ObjectResult> Objects
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::DataModels::ObjectResult*>*& dyn_Objects();
    // Get instance field reference: public System.Int32 ProfileVersion
    [[deprecated("Use field access instead!")]] int& dyn_ProfileVersion();
    // public System.Void .ctor()
    // Offset: 0x4B63398
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetObjectsResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::DataModels::GetObjectsResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetObjectsResponse*, creationType>()));
    }
  }; // PlayFab.DataModels.GetObjectsResponse
  #pragma pack(pop)
  static check_size<sizeof(GetObjectsResponse), 48 + sizeof(int)> __PlayFab_DataModels_GetObjectsResponseSizeCheck;
  static_assert(sizeof(GetObjectsResponse) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::DataModels::GetObjectsResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
