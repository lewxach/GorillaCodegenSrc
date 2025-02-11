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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: HttpTransferUpdate
  class HttpTransferUpdate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::HttpTransferUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::HttpTransferUpdate*, "Oculus.Platform.Models", "HttpTransferUpdate");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.HttpTransferUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpTransferUpdate : public ::Il2CppObject {
    public:
    public:
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x10
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.Byte[] Payload
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> Payload;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public readonly System.Boolean IsCompleted
    // Size: 0x1
    // Offset: 0x20
    bool IsCompleted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.UInt64 ID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ID();
    // Get instance field reference: public readonly System.Byte[] Payload
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Payload();
    // Get instance field reference: public readonly System.Boolean IsCompleted
    [[deprecated("Use field access instead!")]] bool& dyn_IsCompleted();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x4887A0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpTransferUpdate* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::HttpTransferUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpTransferUpdate*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.HttpTransferUpdate
  #pragma pack(pop)
  static check_size<sizeof(HttpTransferUpdate), 32 + sizeof(bool)> __Oculus_Platform_Models_HttpTransferUpdateSizeCheck;
  static_assert(sizeof(HttpTransferUpdate) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::HttpTransferUpdate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
