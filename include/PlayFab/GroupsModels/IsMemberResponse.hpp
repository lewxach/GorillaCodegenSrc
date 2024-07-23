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
// Completed includes
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: IsMemberResponse
  class IsMemberResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::GroupsModels::IsMemberResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::GroupsModels::IsMemberResponse*, "PlayFab.GroupsModels", "IsMemberResponse");
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.GroupsModels.IsMemberResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class IsMemberResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Boolean IsMember
    // Size: 0x1
    // Offset: 0x20
    bool IsMember;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return IsMember;
    }
    // Get instance field reference: public System.Boolean IsMember
    [[deprecated("Use field access instead!")]] bool& dyn_IsMember();
    // public System.Void .ctor()
    // Offset: 0x4B612F4
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IsMemberResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::GroupsModels::IsMemberResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IsMemberResponse*, creationType>()));
    }
  }; // PlayFab.GroupsModels.IsMemberResponse
  #pragma pack(pop)
  static check_size<sizeof(IsMemberResponse), 32 + sizeof(bool)> __PlayFab_GroupsModels_IsMemberResponseSizeCheck;
  static_assert(sizeof(IsMemberResponse) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::GroupsModels::IsMemberResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!