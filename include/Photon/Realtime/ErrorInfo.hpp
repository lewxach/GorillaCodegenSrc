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
// Begin forward declares
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: EventData
  class EventData;
}
// Completed forward declares
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: ErrorInfo
  class ErrorInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Realtime::ErrorInfo);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::ErrorInfo*, "Photon.Realtime", "ErrorInfo");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.ErrorInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class ErrorInfo : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String Info
    // Size: 0x8
    // Offset: 0x10
    ::StringW Info;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Info;
    }
    // Get instance field reference: public readonly System.String Info
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Info();
    // public System.Void .ctor(ExitGames.Client.Photon.EventData eventData)
    // Offset: 0x4A1F4BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ErrorInfo* New_ctor(::ExitGames::Client::Photon::EventData* eventData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Realtime::ErrorInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ErrorInfo*, creationType>(eventData)));
    }
    // public override System.String ToString()
    // Offset: 0x4A202D0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Photon.Realtime.ErrorInfo
  #pragma pack(pop)
  static check_size<sizeof(ErrorInfo), 16 + sizeof(::StringW)> __Photon_Realtime_ErrorInfoSizeCheck;
  static_assert(sizeof(ErrorInfo) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::ErrorInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Realtime::ErrorInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Realtime::ErrorInfo::*)()>(&Photon::Realtime::ErrorInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::ErrorInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
