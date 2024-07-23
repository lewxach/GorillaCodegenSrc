// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.IEncoderDirect`1
#include "Photon/Voice/IEncoderDirect_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: ImageBufferNative
  class ImageBufferNative;
  // Forward declaring type: ImageFormat
  struct ImageFormat;
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: IEncoderDirectImage
  class IEncoderDirectImage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::IEncoderDirectImage);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::IEncoderDirectImage*, "Photon.Voice", "IEncoderDirectImage");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.IEncoderDirectImage
  // [TokenAttribute] Offset: FFFFFFFF
  class IEncoderDirectImage/*, public ::Photon::Voice::IEncoderDirect_1<::Photon::Voice::ImageBufferNative*>*/ {
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::IEncoderDirect_1<::Photon::Voice::ImageBufferNative*>
    operator ::Photon::Voice::IEncoderDirect_1<::Photon::Voice::ImageBufferNative*>() noexcept {
      return *reinterpret_cast<::Photon::Voice::IEncoderDirect_1<::Photon::Voice::ImageBufferNative*>*>(this);
    }
    // public Photon.Voice.ImageFormat get_ImageFormat()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Photon::Voice::ImageFormat get_ImageFormat();
  }; // Photon.Voice.IEncoderDirectImage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::IEncoderDirectImage::get_ImageFormat
// Il2CppName: get_ImageFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::ImageFormat (Photon::Voice::IEncoderDirectImage::*)()>(&Photon::Voice::IEncoderDirectImage::get_ImageFormat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::IEncoderDirectImage*), "get_ImageFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};