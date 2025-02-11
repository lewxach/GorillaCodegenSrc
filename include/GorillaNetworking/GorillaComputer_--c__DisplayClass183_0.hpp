// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaNetworking.GorillaComputer
#include "GorillaNetworking/GorillaComputer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::GorillaComputer::$$c__DisplayClass183_0);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::GorillaComputer::$$c__DisplayClass183_0*, "GorillaNetworking", "GorillaComputer/<>c__DisplayClass183_0");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.GorillaComputer/<>c__DisplayClass183_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GorillaComputer::$$c__DisplayClass183_0 : public ::Il2CppObject {
    public:
    public:
    // public GorillaNetworking.GorillaComputer/ComputerState state
    // Size: 0x4
    // Offset: 0x10
    ::GorillaNetworking::GorillaComputer::ComputerState state;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::GorillaComputer::ComputerState) == 0x4);
    public:
    // Creating conversion operator: operator ::GorillaNetworking::GorillaComputer::ComputerState
    constexpr operator ::GorillaNetworking::GorillaComputer::ComputerState() const noexcept {
      return state;
    }
    // Get instance field reference: public GorillaNetworking.GorillaComputer/ComputerState state
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::GorillaComputer::ComputerState& dyn_state();
    // public System.Void .ctor()
    // Offset: 0x2850E90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaComputer::$$c__DisplayClass183_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::GorillaComputer::$$c__DisplayClass183_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaComputer::$$c__DisplayClass183_0*, creationType>()));
    }
    // System.Boolean <GetStateIndex>b__0(GorillaNetworking.GorillaComputer/StateOrderItem s)
    // Offset: 0x28526CC
    bool $GetStateIndex$b__0(::GorillaNetworking::GorillaComputer::StateOrderItem* s);
  }; // GorillaNetworking.GorillaComputer/<>c__DisplayClass183_0
  #pragma pack(pop)
  static check_size<sizeof(GorillaComputer::$$c__DisplayClass183_0), 16 + sizeof(::GorillaNetworking::GorillaComputer::ComputerState)> __GorillaNetworking_GorillaComputer_$$c__DisplayClass183_0SizeCheck;
  static_assert(sizeof(GorillaComputer::$$c__DisplayClass183_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::GorillaComputer::$$c__DisplayClass183_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaNetworking::GorillaComputer::$$c__DisplayClass183_0::$GetStateIndex$b__0
// Il2CppName: <GetStateIndex>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaNetworking::GorillaComputer::$$c__DisplayClass183_0::*)(::GorillaNetworking::GorillaComputer::StateOrderItem*)>(&GorillaNetworking::GorillaComputer::$$c__DisplayClass183_0::$GetStateIndex$b__0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("GorillaNetworking", "GorillaComputer/StateOrderItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaComputer::$$c__DisplayClass183_0*), "<GetStateIndex>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
