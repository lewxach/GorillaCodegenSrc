// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: PlayFab.PlayFabExceptionCode
#include "PlayFab/PlayFabExceptionCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PlayFabException
  class PlayFabException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::PlayFabException);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::PlayFabException*, "PlayFab", "PlayFabException");
// Type namespace: PlayFab
namespace PlayFab {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.PlayFabException
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayFabException : public ::System::Exception {
    public:
    public:
    // public readonly PlayFab.PlayFabExceptionCode Code
    // Size: 0x4
    // Offset: 0x8C
    ::PlayFab::PlayFabExceptionCode Code;
    // Field size check
    static_assert(sizeof(::PlayFab::PlayFabExceptionCode) == 0x4);
    public:
    // Creating conversion operator: operator ::PlayFab::PlayFabExceptionCode
    constexpr operator ::PlayFab::PlayFabExceptionCode() const noexcept {
      return Code;
    }
    // Get instance field reference: public readonly PlayFab.PlayFabExceptionCode Code
    [[deprecated("Use field access instead!")]] ::PlayFab::PlayFabExceptionCode& dyn_Code();
    // public System.Void .ctor(PlayFab.PlayFabExceptionCode code, System.String message)
    // Offset: 0x4ADECFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabException* New_ctor(::PlayFab::PlayFabExceptionCode code, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::PlayFabException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabException*, creationType>(code, message)));
    }
  }; // PlayFab.PlayFabException
  #pragma pack(pop)
  static check_size<sizeof(PlayFabException), 140 + sizeof(::PlayFab::PlayFabExceptionCode)> __PlayFab_PlayFabExceptionSizeCheck;
  static_assert(sizeof(PlayFabException) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::PlayFabException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
