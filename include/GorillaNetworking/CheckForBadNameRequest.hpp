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
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Forward declaring type: CheckForBadNameRequest
  class CheckForBadNameRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::CheckForBadNameRequest);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::CheckForBadNameRequest*, "GorillaNetworking", "CheckForBadNameRequest");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.CheckForBadNameRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class CheckForBadNameRequest : public ::Il2CppObject {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean forRoom
    // Size: 0x1
    // Offset: 0x18
    bool forRoom;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.Boolean forRoom
    [[deprecated("Use field access instead!")]] bool& dyn_forRoom();
    // public System.Void .ctor()
    // Offset: 0x284F524
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CheckForBadNameRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::CheckForBadNameRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CheckForBadNameRequest*, creationType>()));
    }
  }; // GorillaNetworking.CheckForBadNameRequest
  #pragma pack(pop)
  static check_size<sizeof(CheckForBadNameRequest), 24 + sizeof(bool)> __GorillaNetworking_CheckForBadNameRequestSizeCheck;
  static_assert(sizeof(CheckForBadNameRequest) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::CheckForBadNameRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
