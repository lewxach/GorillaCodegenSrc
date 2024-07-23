// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.EVRTrackedCameraFrameType
#include "OVR/OpenVR/EVRTrackedCameraFrameType.hpp"
// Including type: OVR.OpenVR.TrackedDevicePose_t
#include "OVR/OpenVR/TrackedDevicePose_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CameraVideoStreamFrameHeader_t, "OVR.OpenVR", "CameraVideoStreamFrameHeader_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x62
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.CameraVideoStreamFrameHeader_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct CameraVideoStreamFrameHeader_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVR.OpenVR.EVRTrackedCameraFrameType eFrameType
    // Size: 0x4
    // Offset: 0x0
    ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::EVRTrackedCameraFrameType) == 0x4);
    // public System.UInt32 nWidth
    // Size: 0x4
    // Offset: 0x4
    uint nWidth;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 nHeight
    // Size: 0x4
    // Offset: 0x8
    uint nHeight;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 nBytesPerPixel
    // Size: 0x4
    // Offset: 0xC
    uint nBytesPerPixel;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 nFrameSequence
    // Size: 0x4
    // Offset: 0x10
    uint nFrameSequence;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public OVR.OpenVR.TrackedDevicePose_t standingTrackedDevicePose
    // Size: 0x4E
    // Offset: 0x14
    ::OVR::OpenVR::TrackedDevicePose_t standingTrackedDevicePose;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::TrackedDevicePose_t) == 0x4E);
    public:
    // Creating value type constructor for type: CameraVideoStreamFrameHeader_t
    constexpr CameraVideoStreamFrameHeader_t(::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType_ = {}, uint nWidth_ = {}, uint nHeight_ = {}, uint nBytesPerPixel_ = {}, uint nFrameSequence_ = {}, ::OVR::OpenVR::TrackedDevicePose_t standingTrackedDevicePose_ = {}) noexcept : eFrameType{eFrameType_}, nWidth{nWidth_}, nHeight{nHeight_}, nBytesPerPixel{nBytesPerPixel_}, nFrameSequence{nFrameSequence_}, standingTrackedDevicePose{standingTrackedDevicePose_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public OVR.OpenVR.EVRTrackedCameraFrameType eFrameType
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::EVRTrackedCameraFrameType& dyn_eFrameType();
    // Get instance field reference: public System.UInt32 nWidth
    [[deprecated("Use field access instead!")]] uint& dyn_nWidth();
    // Get instance field reference: public System.UInt32 nHeight
    [[deprecated("Use field access instead!")]] uint& dyn_nHeight();
    // Get instance field reference: public System.UInt32 nBytesPerPixel
    [[deprecated("Use field access instead!")]] uint& dyn_nBytesPerPixel();
    // Get instance field reference: public System.UInt32 nFrameSequence
    [[deprecated("Use field access instead!")]] uint& dyn_nFrameSequence();
    // Get instance field reference: public OVR.OpenVR.TrackedDevicePose_t standingTrackedDevicePose
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::TrackedDevicePose_t& dyn_standingTrackedDevicePose();
  }; // OVR.OpenVR.CameraVideoStreamFrameHeader_t
  #pragma pack(pop)
  static check_size<sizeof(CameraVideoStreamFrameHeader_t), 20 + sizeof(::OVR::OpenVR::TrackedDevicePose_t)> __OVR_OpenVR_CameraVideoStreamFrameHeader_tSizeCheck;
  static_assert(sizeof(CameraVideoStreamFrameHeader_t) == 0x62);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"