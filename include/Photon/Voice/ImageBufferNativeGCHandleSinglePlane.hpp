// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.ImageBufferNative
#include "Photon/Voice/ImageBufferNative.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: ImageBufferNativePool`1<T>
  template<typename T>
  class ImageBufferNativePool_1;
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: ImageBufferNativeGCHandleSinglePlane
  class ImageBufferNativeGCHandleSinglePlane;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::ImageBufferNativeGCHandleSinglePlane);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*, "Photon.Voice", "ImageBufferNativeGCHandleSinglePlane");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.ImageBufferNativeGCHandleSinglePlane
  // [TokenAttribute] Offset: FFFFFFFF
  class ImageBufferNativeGCHandleSinglePlane : public ::Photon::Voice::ImageBufferNative/*, public ::System::IDisposable*/ {
    public:
    // Writing base type padding for base size: 0x5C to desired offset: 0x60
    char ___base_padding[0x4] = {};
    public:
    // private Photon.Voice.ImageBufferNativePool`1<Photon.Voice.ImageBufferNativeGCHandleSinglePlane> pool
    // Size: 0x8
    // Offset: 0x60
    ::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>* pool;
    // Field size check
    static_assert(sizeof(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*) == 0x8);
    // private System.Runtime.InteropServices.GCHandle planeHandle
    // Size: 0x8
    // Offset: 0x68
    ::System::Runtime::InteropServices::GCHandle planeHandle;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::GCHandle) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private Photon.Voice.ImageBufferNativePool`1<Photon.Voice.ImageBufferNativeGCHandleSinglePlane> pool
    [[deprecated("Use field access instead!")]] ::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*& dyn_pool();
    // Get instance field reference: private System.Runtime.InteropServices.GCHandle planeHandle
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::GCHandle& dyn_planeHandle();
    // public System.Void .ctor(Photon.Voice.ImageBufferNativePool`1<Photon.Voice.ImageBufferNativeGCHandleSinglePlane> pool, Photon.Voice.ImageBufferInfo info)
    // Offset: 0x4A70864
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImageBufferNativeGCHandleSinglePlane* New_ctor(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>* pool, ::Photon::Voice::ImageBufferInfo info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ImageBufferNativeGCHandleSinglePlane::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImageBufferNativeGCHandleSinglePlane*, creationType>(pool, info)));
    }
    // public System.Void PinPlane(System.Byte[] plane)
    // Offset: 0x4A70998
    void PinPlane(::ArrayW<uint8_t> plane);
    // public override System.Void Release()
    // Offset: 0x4A709D0
    // Implemented from: Photon.Voice.ImageBufferNative
    // Base method: System.Void ImageBufferNative::Release()
    void Release();
    // public override System.Void Dispose()
    // Offset: 0x4A70A08
    // Implemented from: Photon.Voice.ImageBufferNative
    // Base method: System.Void ImageBufferNative::Dispose()
    void Dispose();
  }; // Photon.Voice.ImageBufferNativeGCHandleSinglePlane
  #pragma pack(pop)
  static check_size<sizeof(ImageBufferNativeGCHandleSinglePlane), 104 + sizeof(::System::Runtime::InteropServices::GCHandle)> __Photon_Voice_ImageBufferNativeGCHandleSinglePlaneSizeCheck;
  static_assert(sizeof(ImageBufferNativeGCHandleSinglePlane) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::ImageBufferNativeGCHandleSinglePlane::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::ImageBufferNativeGCHandleSinglePlane::PinPlane
// Il2CppName: PinPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::ImageBufferNativeGCHandleSinglePlane::*)(::ArrayW<uint8_t>)>(&Photon::Voice::ImageBufferNativeGCHandleSinglePlane::PinPlane)> {
  static const MethodInfo* get() {
    static auto* plane = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::ImageBufferNativeGCHandleSinglePlane*), "PinPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{plane});
  }
};
// Writing MetadataGetter for method: Photon::Voice::ImageBufferNativeGCHandleSinglePlane::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::ImageBufferNativeGCHandleSinglePlane::*)()>(&Photon::Voice::ImageBufferNativeGCHandleSinglePlane::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::ImageBufferNativeGCHandleSinglePlane*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::ImageBufferNativeGCHandleSinglePlane::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::ImageBufferNativeGCHandleSinglePlane::*)()>(&Photon::Voice::ImageBufferNativeGCHandleSinglePlane::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::ImageBufferNativeGCHandleSinglePlane*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};