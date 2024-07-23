// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.LagCompensation.QueryType
#include "Fusion/LagCompensation/QueryType.hpp"
// Including type: Fusion.HitOptions
#include "Fusion/HitOptions.hpp"
// Including type: UnityEngine.QueryTriggerInteraction
#include "UnityEngine/QueryTriggerInteraction.hpp"
// Including type: Fusion.PlayerRef
#include "Fusion/PlayerRef.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: Fusion.LagCompensation.RaycastQuery
#include "Fusion/LagCompensation/RaycastQuery.hpp"
// Including type: Fusion.LagCompensation.SphereOverlapQuery
#include "Fusion/LagCompensation/SphereOverlapQuery.hpp"
// Including type: Fusion.LagCompensation.BoxOverlapQuery
#include "Fusion/LagCompensation/BoxOverlapQuery.hpp"
// Including type: Fusion.LagCompensation.PositionRotationQuery
#include "Fusion/LagCompensation/PositionRotationQuery.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::LagCompensation
namespace Fusion::LagCompensation {
  // Forward declaring type: PreProcessingDelegate
  class PreProcessingDelegate;
}
// Completed forward declares
// Type namespace: Fusion.LagCompensation
namespace Fusion::LagCompensation {
  // Forward declaring type: Query
  struct Query;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::LagCompensation::Query, "Fusion.LagCompensation", "Query");
// Type namespace: Fusion.LagCompensation
namespace Fusion::LagCompensation {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.LagCompensation.Query
  // [TokenAttribute] Offset: FFFFFFFF
  struct Query/*, public ::System::ValueType*/ {
    public:
    public:
    // public Fusion.LagCompensation.QueryType Type
    // Size: 0x4
    // Offset: 0x0
    ::Fusion::LagCompensation::QueryType Type;
    // Field size check
    static_assert(sizeof(::Fusion::LagCompensation::QueryType) == 0x4);
    // public Fusion.HitOptions Options
    // Size: 0x4
    // Offset: 0x4
    ::Fusion::HitOptions Options;
    // Field size check
    static_assert(sizeof(::Fusion::HitOptions) == 0x4);
    // public UnityEngine.QueryTriggerInteraction TriggerInteraction
    // Size: 0x4
    // Offset: 0x8
    ::UnityEngine::QueryTriggerInteraction TriggerInteraction;
    // Field size check
    static_assert(sizeof(::UnityEngine::QueryTriggerInteraction) == 0x4);
    // public System.Int32 LayerMask
    // Size: 0x4
    // Offset: 0xC
    int LayerMask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Fusion.PlayerRef Player
    // Size: 0x4
    // Offset: 0x10
    ::Fusion::PlayerRef Player;
    // Field size check
    static_assert(sizeof(::Fusion::PlayerRef) == 0x4);
    // public System.Int32 Tick
    // Size: 0x4
    // Offset: 0x14
    int Tick;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Nullable`1<System.Int32> TickTo
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<int> TickTo;
    // public System.Nullable`1<System.Single> Alpha
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::System::Nullable_1<float> Alpha;
    // public Fusion.LagCompensation.PreProcessingDelegate PreProcessingDelegate
    // Size: 0x8
    // Offset: 0x28
    ::Fusion::LagCompensation::PreProcessingDelegate* PreProcessingDelegate;
    // Field size check
    static_assert(sizeof(::Fusion::LagCompensation::PreProcessingDelegate*) == 0x8);
    // public System.Object UserArgs
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* UserArgs;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public Fusion.LagCompensation.RaycastQuery Raycast
    // Size: 0x1D
    // Offset: 0x38
    ::Fusion::LagCompensation::RaycastQuery Raycast;
    // Field size check
    static_assert(sizeof(::Fusion::LagCompensation::RaycastQuery) == 0x1D);
    // public Fusion.LagCompensation.SphereOverlapQuery SphereOverlap
    // Size: 0x10
    // Offset: 0x58
    ::Fusion::LagCompensation::SphereOverlapQuery SphereOverlap;
    // Field size check
    static_assert(sizeof(::Fusion::LagCompensation::SphereOverlapQuery) == 0x10);
    // public Fusion.LagCompensation.BoxOverlapQuery BoxOverlap
    // Size: 0x34
    // Offset: 0x68
    ::Fusion::LagCompensation::BoxOverlapQuery BoxOverlap;
    // Field size check
    static_assert(sizeof(::Fusion::LagCompensation::BoxOverlapQuery) == 0x34);
    // public Fusion.LagCompensation.PositionRotationQuery PositionRotation
    // Size: 0x8
    // Offset: 0xA0
    ::Fusion::LagCompensation::PositionRotationQuery PositionRotation;
    // Field size check
    static_assert(sizeof(::Fusion::LagCompensation::PositionRotationQuery) == 0x8);
    public:
    // Creating value type constructor for type: Query
    constexpr Query(::Fusion::LagCompensation::QueryType Type_ = {}, ::Fusion::HitOptions Options_ = {}, ::UnityEngine::QueryTriggerInteraction TriggerInteraction_ = {}, int LayerMask_ = {}, ::Fusion::PlayerRef Player_ = {}, int Tick_ = {}, ::System::Nullable_1<int> TickTo_ = {}, ::System::Nullable_1<float> Alpha_ = {}, ::Fusion::LagCompensation::PreProcessingDelegate* PreProcessingDelegate_ = {}, ::Il2CppObject* UserArgs_ = {}, ::Fusion::LagCompensation::RaycastQuery Raycast_ = {}, ::Fusion::LagCompensation::SphereOverlapQuery SphereOverlap_ = {}, ::Fusion::LagCompensation::BoxOverlapQuery BoxOverlap_ = {}, ::Fusion::LagCompensation::PositionRotationQuery PositionRotation_ = {}) noexcept : Type{Type_}, Options{Options_}, TriggerInteraction{TriggerInteraction_}, LayerMask{LayerMask_}, Player{Player_}, Tick{Tick_}, TickTo{TickTo_}, Alpha{Alpha_}, PreProcessingDelegate{PreProcessingDelegate_}, UserArgs{UserArgs_}, Raycast{Raycast_}, SphereOverlap{SphereOverlap_}, BoxOverlap{BoxOverlap_}, PositionRotation{PositionRotation_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Fusion.LagCompensation.QueryType Type
    [[deprecated("Use field access instead!")]] ::Fusion::LagCompensation::QueryType& dyn_Type();
    // Get instance field reference: public Fusion.HitOptions Options
    [[deprecated("Use field access instead!")]] ::Fusion::HitOptions& dyn_Options();
    // Get instance field reference: public UnityEngine.QueryTriggerInteraction TriggerInteraction
    [[deprecated("Use field access instead!")]] ::UnityEngine::QueryTriggerInteraction& dyn_TriggerInteraction();
    // Get instance field reference: public System.Int32 LayerMask
    [[deprecated("Use field access instead!")]] int& dyn_LayerMask();
    // Get instance field reference: public Fusion.PlayerRef Player
    [[deprecated("Use field access instead!")]] ::Fusion::PlayerRef& dyn_Player();
    // Get instance field reference: public System.Int32 Tick
    [[deprecated("Use field access instead!")]] int& dyn_Tick();
    // Get instance field reference: public System.Nullable`1<System.Int32> TickTo
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_TickTo();
    // Get instance field reference: public System.Nullable`1<System.Single> Alpha
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<float>& dyn_Alpha();
    // Get instance field reference: public Fusion.LagCompensation.PreProcessingDelegate PreProcessingDelegate
    [[deprecated("Use field access instead!")]] ::Fusion::LagCompensation::PreProcessingDelegate*& dyn_PreProcessingDelegate();
    // Get instance field reference: public System.Object UserArgs
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_UserArgs();
    // Get instance field reference: public Fusion.LagCompensation.RaycastQuery Raycast
    [[deprecated("Use field access instead!")]] ::Fusion::LagCompensation::RaycastQuery& dyn_Raycast();
    // Get instance field reference: public Fusion.LagCompensation.SphereOverlapQuery SphereOverlap
    [[deprecated("Use field access instead!")]] ::Fusion::LagCompensation::SphereOverlapQuery& dyn_SphereOverlap();
    // Get instance field reference: public Fusion.LagCompensation.BoxOverlapQuery BoxOverlap
    [[deprecated("Use field access instead!")]] ::Fusion::LagCompensation::BoxOverlapQuery& dyn_BoxOverlap();
    // Get instance field reference: public Fusion.LagCompensation.PositionRotationQuery PositionRotation
    [[deprecated("Use field access instead!")]] ::Fusion::LagCompensation::PositionRotationQuery& dyn_PositionRotation();
  }; // Fusion.LagCompensation.Query
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"