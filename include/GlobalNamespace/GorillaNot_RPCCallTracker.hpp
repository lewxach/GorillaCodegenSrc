// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaNot
#include "GlobalNamespace/GorillaNot.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaNot::RPCCallTracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaNot::RPCCallTracker*, "", "GorillaNot/RPCCallTracker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNot/RPCCallTracker
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaNot::RPCCallTracker : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 RPCCalls
    // Size: 0x4
    // Offset: 0x10
    int RPCCalls;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 RPCCallsMax
    // Size: 0x4
    // Offset: 0x14
    int RPCCallsMax;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 RPCCalls
    [[deprecated("Use field access instead!")]] int& dyn_RPCCalls();
    // Get instance field reference: public System.Int32 RPCCallsMax
    [[deprecated("Use field access instead!")]] int& dyn_RPCCallsMax();
    // public System.Void .ctor()
    // Offset: 0x2716290
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaNot::RPCCallTracker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaNot::RPCCallTracker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaNot::RPCCallTracker*, creationType>()));
    }
  }; // GorillaNot/RPCCallTracker
  #pragma pack(pop)
  static check_size<sizeof(GorillaNot::RPCCallTracker), 20 + sizeof(int)> __GlobalNamespace_GorillaNot_RPCCallTrackerSizeCheck;
  static_assert(sizeof(GorillaNot::RPCCallTracker) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaNot::RPCCallTracker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!