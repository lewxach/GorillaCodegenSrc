// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaNetworking.CosmeticsController
#include "GorillaNetworking/CosmeticsController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::CosmeticsController::$$c__DisplayClass184_0);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::CosmeticsController::$$c__DisplayClass184_0*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass184_0");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.CosmeticsController/<>c__DisplayClass184_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CosmeticsController::$$c__DisplayClass184_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String itemIdToUnlock
    // Size: 0x8
    // Offset: 0x10
    ::StringW itemIdToUnlock;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return itemIdToUnlock;
    }
    // Get instance field reference: public System.String itemIdToUnlock
    [[deprecated("Use field access instead!")]] ::StringW& dyn_itemIdToUnlock();
    // public System.Void .ctor()
    // Offset: 0x283983C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CosmeticsController::$$c__DisplayClass184_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::CosmeticsController::$$c__DisplayClass184_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CosmeticsController::$$c__DisplayClass184_0*, creationType>()));
    }
    // System.Boolean <UnlockItem>b__0(GorillaNetworking.CosmeticsController/CosmeticItem x)
    // Offset: 0x283FE40
    bool $UnlockItem$b__0(::GorillaNetworking::CosmeticsController::CosmeticItem x);
  }; // GorillaNetworking.CosmeticsController/<>c__DisplayClass184_0
  #pragma pack(pop)
  static check_size<sizeof(CosmeticsController::$$c__DisplayClass184_0), 16 + sizeof(::StringW)> __GorillaNetworking_CosmeticsController_$$c__DisplayClass184_0SizeCheck;
  static_assert(sizeof(CosmeticsController::$$c__DisplayClass184_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$$c__DisplayClass184_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$$c__DisplayClass184_0::$UnlockItem$b__0
// Il2CppName: <UnlockItem>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaNetworking::CosmeticsController::$$c__DisplayClass184_0::*)(::GorillaNetworking::CosmeticsController::CosmeticItem)>(&GorillaNetworking::CosmeticsController::$$c__DisplayClass184_0::$UnlockItem$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("GorillaNetworking", "CosmeticsController/CosmeticItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::CosmeticsController::$$c__DisplayClass184_0*), "<UnlockItem>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
