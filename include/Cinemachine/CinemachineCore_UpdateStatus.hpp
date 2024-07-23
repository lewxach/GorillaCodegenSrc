// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineCore
#include "Cinemachine/CinemachineCore.hpp"
// Including type: Cinemachine.UpdateTracker/UpdateClock
#include "Cinemachine/UpdateTracker_UpdateClock.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineCore::UpdateStatus);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineCore::UpdateStatus*, "Cinemachine", "CinemachineCore/UpdateStatus");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineCore/UpdateStatus
  // [TokenAttribute] Offset: FFFFFFFF
  class CinemachineCore::UpdateStatus : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 lastUpdateFrame
    // Size: 0x4
    // Offset: 0x10
    int lastUpdateFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lastUpdateFixedFrame
    // Size: 0x4
    // Offset: 0x14
    int lastUpdateFixedFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Cinemachine.UpdateTracker/UpdateClock lastUpdateMode
    // Size: 0x4
    // Offset: 0x18
    ::Cinemachine::UpdateTracker::UpdateClock lastUpdateMode;
    // Field size check
    static_assert(sizeof(::Cinemachine::UpdateTracker::UpdateClock) == 0x4);
    // public System.Single lastUpdateDeltaTime
    // Size: 0x4
    // Offset: 0x1C
    float lastUpdateDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Int32 lastUpdateFrame
    [[deprecated("Use field access instead!")]] int& dyn_lastUpdateFrame();
    // Get instance field reference: public System.Int32 lastUpdateFixedFrame
    [[deprecated("Use field access instead!")]] int& dyn_lastUpdateFixedFrame();
    // Get instance field reference: public Cinemachine.UpdateTracker/UpdateClock lastUpdateMode
    [[deprecated("Use field access instead!")]] ::Cinemachine::UpdateTracker::UpdateClock& dyn_lastUpdateMode();
    // Get instance field reference: public System.Single lastUpdateDeltaTime
    [[deprecated("Use field access instead!")]] float& dyn_lastUpdateDeltaTime();
    // public System.Void .ctor()
    // Offset: 0x2AAD020
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineCore::UpdateStatus* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineCore::UpdateStatus::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineCore::UpdateStatus*, creationType>()));
    }
  }; // Cinemachine.CinemachineCore/UpdateStatus
  #pragma pack(pop)
  static check_size<sizeof(CinemachineCore::UpdateStatus), 28 + sizeof(float)> __Cinemachine_CinemachineCore_UpdateStatusSizeCheck;
  static_assert(sizeof(CinemachineCore::UpdateStatus) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineCore::UpdateStatus::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!