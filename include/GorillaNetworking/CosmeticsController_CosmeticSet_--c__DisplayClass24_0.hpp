// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaNetworking.CosmeticsController/CosmeticSet
#include "GorillaNetworking/CosmeticsController_CosmeticSet.hpp"
// Including type: GorillaNetworking.CosmeticsController/CosmeticItem
#include "GorillaNetworking/CosmeticsController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::CosmeticsController::CosmeticSet::$$c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::CosmeticsController::CosmeticSet::$$c__DisplayClass24_0*, "GorillaNetworking", "CosmeticsController/CosmeticSet/<>c__DisplayClass24_0");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Size: 0x89
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.CosmeticsController/CosmeticSet/<>c__DisplayClass24_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CosmeticsController::CosmeticSet::$$c__DisplayClass24_0 : public ::Il2CppObject {
    public:
    public:
    // public GorillaNetworking.CosmeticsController/CosmeticItem item
    // Size: 0x79
    // Offset: 0x10
    ::GorillaNetworking::CosmeticsController::CosmeticItem item;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::CosmeticsController::CosmeticItem) == 0x79);
    public:
    // Creating conversion operator: operator ::GorillaNetworking::CosmeticsController::CosmeticItem
    constexpr operator ::GorillaNetworking::CosmeticsController::CosmeticItem() const noexcept {
      return item;
    }
    // Get instance field reference: public GorillaNetworking.CosmeticsController/CosmeticItem item
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::CosmeticsController::CosmeticItem& dyn_item();
    // public System.Void .ctor()
    // Offset: 0x283F578
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CosmeticsController::CosmeticSet::$$c__DisplayClass24_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::CosmeticsController::CosmeticSet::$$c__DisplayClass24_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CosmeticsController::CosmeticSet::$$c__DisplayClass24_0*, creationType>()));
    }
    // System.Boolean <LoadFromPlayerPreferences>b__0(GorillaNetworking.CosmeticsController/CosmeticItem x)
    // Offset: 0x283F8BC
    bool $LoadFromPlayerPreferences$b__0(::GorillaNetworking::CosmeticsController::CosmeticItem x);
  }; // GorillaNetworking.CosmeticsController/CosmeticSet/<>c__DisplayClass24_0
  #pragma pack(pop)
  static check_size<sizeof(CosmeticsController::CosmeticSet::$$c__DisplayClass24_0), 16 + sizeof(::GorillaNetworking::CosmeticsController::CosmeticItem)> __GorillaNetworking_CosmeticsController_CosmeticSet_$$c__DisplayClass24_0SizeCheck;
  static_assert(sizeof(CosmeticsController::CosmeticSet::$$c__DisplayClass24_0) == 0x89);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::CosmeticSet::$$c__DisplayClass24_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::CosmeticSet::$$c__DisplayClass24_0::$LoadFromPlayerPreferences$b__0
// Il2CppName: <LoadFromPlayerPreferences>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaNetworking::CosmeticsController::CosmeticSet::$$c__DisplayClass24_0::*)(::GorillaNetworking::CosmeticsController::CosmeticItem)>(&GorillaNetworking::CosmeticsController::CosmeticSet::$$c__DisplayClass24_0::$LoadFromPlayerPreferences$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("GorillaNetworking", "CosmeticsController/CosmeticItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::CosmeticsController::CosmeticSet::$$c__DisplayClass24_0*), "<LoadFromPlayerPreferences>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};