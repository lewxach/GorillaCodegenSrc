// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetSyncSession
  class NetSyncSession;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetSyncSetSessionPropertyResult
  class NetSyncSetSessionPropertyResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncSetSessionPropertyResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*, "Oculus.Platform.Models", "NetSyncSetSessionPropertyResult");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.NetSyncSetSessionPropertyResult
  // [TokenAttribute] Offset: FFFFFFFF
  class NetSyncSetSessionPropertyResult : public ::Il2CppObject {
    public:
    public:
    // public readonly Oculus.Platform.Models.NetSyncSession Session
    // Size: 0x8
    // Offset: 0x10
    ::Oculus::Platform::Models::NetSyncSession* Session;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::NetSyncSession*) == 0x8);
    public:
    // Creating conversion operator: operator ::Oculus::Platform::Models::NetSyncSession*
    constexpr operator ::Oculus::Platform::Models::NetSyncSession*() const noexcept {
      return Session;
    }
    // Get instance field reference: public readonly Oculus.Platform.Models.NetSyncSession Session
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::NetSyncSession*& dyn_Session();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x4889368
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSyncSetSessionPropertyResult* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::NetSyncSetSessionPropertyResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSyncSetSessionPropertyResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.NetSyncSetSessionPropertyResult
  #pragma pack(pop)
  static check_size<sizeof(NetSyncSetSessionPropertyResult), 16 + sizeof(::Oculus::Platform::Models::NetSyncSession*)> __Oculus_Platform_Models_NetSyncSetSessionPropertyResultSizeCheck;
  static_assert(sizeof(NetSyncSetSessionPropertyResult) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::NetSyncSetSessionPropertyResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
