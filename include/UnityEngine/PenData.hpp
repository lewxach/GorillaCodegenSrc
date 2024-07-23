// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.PenStatus
#include "UnityEngine/PenStatus.hpp"
// Including type: UnityEngine.PenEventType
#include "UnityEngine/PenEventType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PenData
  struct PenData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PenData, "UnityEngine", "PenData");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PenData
  // [TokenAttribute] Offset: FFFFFFFF
  struct PenData/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector2 position
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Vector2 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 tilt
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Vector2 tilt;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.PenStatus penStatus
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::PenStatus penStatus;
    // Field size check
    static_assert(sizeof(::UnityEngine::PenStatus) == 0x4);
    // public System.Single twist
    // Size: 0x4
    // Offset: 0x14
    float twist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single pressure
    // Size: 0x4
    // Offset: 0x18
    float pressure;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.PenEventType contactType
    // Size: 0x4
    // Offset: 0x1C
    ::UnityEngine::PenEventType contactType;
    // Field size check
    static_assert(sizeof(::UnityEngine::PenEventType) == 0x4);
    // public UnityEngine.Vector2 deltaPos
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Vector2 deltaPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Creating value type constructor for type: PenData
    constexpr PenData(::UnityEngine::Vector2 position_ = {}, ::UnityEngine::Vector2 tilt_ = {}, ::UnityEngine::PenStatus penStatus_ = {}, float twist_ = {}, float pressure_ = {}, ::UnityEngine::PenEventType contactType_ = {}, ::UnityEngine::Vector2 deltaPos_ = {}) noexcept : position{position_}, tilt{tilt_}, penStatus{penStatus_}, twist{twist_}, pressure{pressure_}, contactType{contactType_}, deltaPos{deltaPos_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector2 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_position();
    // Get instance field reference: public UnityEngine.Vector2 tilt
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_tilt();
    // Get instance field reference: public UnityEngine.PenStatus penStatus
    [[deprecated("Use field access instead!")]] ::UnityEngine::PenStatus& dyn_penStatus();
    // Get instance field reference: public System.Single twist
    [[deprecated("Use field access instead!")]] float& dyn_twist();
    // Get instance field reference: public System.Single pressure
    [[deprecated("Use field access instead!")]] float& dyn_pressure();
    // Get instance field reference: public UnityEngine.PenEventType contactType
    [[deprecated("Use field access instead!")]] ::UnityEngine::PenEventType& dyn_contactType();
    // Get instance field reference: public UnityEngine.Vector2 deltaPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_deltaPos();
  }; // UnityEngine.PenData
  #pragma pack(pop)
  static check_size<sizeof(PenData), 32 + sizeof(::UnityEngine::Vector2)> __UnityEngine_PenDataSizeCheck;
  static_assert(sizeof(PenData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"