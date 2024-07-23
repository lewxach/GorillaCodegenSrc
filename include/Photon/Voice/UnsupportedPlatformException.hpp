// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: UnsupportedPlatformException
  class UnsupportedPlatformException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::UnsupportedPlatformException);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::UnsupportedPlatformException*, "Photon.Voice", "UnsupportedPlatformException");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.UnsupportedPlatformException
  // [TokenAttribute] Offset: FFFFFFFF
  class UnsupportedPlatformException : public ::System::Exception {
    public:
    // public System.Void .ctor(System.String subject, System.String platform)
    // Offset: 0x4A6FE4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnsupportedPlatformException* New_ctor(::StringW subject, ::StringW platform) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::UnsupportedPlatformException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnsupportedPlatformException*, creationType>(subject, platform)));
    }
  }; // Photon.Voice.UnsupportedPlatformException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::UnsupportedPlatformException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!