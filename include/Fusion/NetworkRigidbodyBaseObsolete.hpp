// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkTransformObsolete
#include "Fusion/NetworkTransformObsolete.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Nullable`1 because it is already included!
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkRigidbodyBaseObsolete
  class NetworkRigidbodyBaseObsolete;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkRigidbodyBaseObsolete);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkRigidbodyBaseObsolete*, "Fusion", "NetworkRigidbodyBaseObsolete");
// Type namespace: Fusion
namespace Fusion {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.NetworkRigidbodyBaseObsolete
  // [TokenAttribute] Offset: FFFFFFFF
  // [OrderAfterAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  class NetworkRigidbodyBaseObsolete : public ::Fusion::NetworkTransformObsolete {
    public:
    // Nested type: ::Fusion::NetworkRigidbodyBaseObsolete::Implementation
    class Implementation;
    // Nested type: ::Fusion::NetworkRigidbodyBaseObsolete::ClientSidePhysicsPrediction
    class ClientSidePhysicsPrediction;
    // Nested type: ::Fusion::NetworkRigidbodyBaseObsolete::ServerPhysicsOnly
    class ServerPhysicsOnly;
    // Nested type: ::Fusion::NetworkRigidbodyBaseObsolete::SharedMode
    class SharedMode;
    public:
    // Fusion.NetworkRigidbodyBaseObsolete/Implementation Impl
    // Size: 0x8
    // Offset: 0x168
    ::Fusion::NetworkRigidbodyBaseObsolete::Implementation* Impl;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkRigidbodyBaseObsolete::Implementation*) == 0x8);
    // protected System.Boolean SyncDragAndMass
    // Size: 0x1
    // Offset: 0x170
    bool SyncDragAndMass;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static protected System.Int32 VELOCITY_OFFSET
    static constexpr const int VELOCITY_OFFSET = 25;
    // Get static field: static protected System.Int32 VELOCITY_OFFSET
    static int _get_VELOCITY_OFFSET();
    // Set static field: static protected System.Int32 VELOCITY_OFFSET
    static void _set_VELOCITY_OFFSET(int value);
    // static field const value: static protected System.Int32 ANGVELOC_OFFSET
    static constexpr const int ANGVELOC_OFFSET = 28;
    // Get static field: static protected System.Int32 ANGVELOC_OFFSET
    static int _get_ANGVELOC_OFFSET();
    // Set static field: static protected System.Int32 ANGVELOC_OFFSET
    static void _set_ANGVELOC_OFFSET(int value);
    // static field const value: static protected System.Int32 BITFLAGS_OFFSET
    static constexpr const int BITFLAGS_OFFSET = 31;
    // Get static field: static protected System.Int32 BITFLAGS_OFFSET
    static int _get_BITFLAGS_OFFSET();
    // Set static field: static protected System.Int32 BITFLAGS_OFFSET
    static void _set_BITFLAGS_OFFSET(int value);
    // static field const value: static protected System.Int32 VEL_DRAG_OFFSET
    static constexpr const int VEL_DRAG_OFFSET = 32;
    // Get static field: static protected System.Int32 VEL_DRAG_OFFSET
    static int _get_VEL_DRAG_OFFSET();
    // Set static field: static protected System.Int32 VEL_DRAG_OFFSET
    static void _set_VEL_DRAG_OFFSET(int value);
    // static field const value: static protected System.Int32 ANG_DRAG_OFFSET
    static constexpr const int ANG_DRAG_OFFSET = 33;
    // Get static field: static protected System.Int32 ANG_DRAG_OFFSET
    static int _get_ANG_DRAG_OFFSET();
    // Set static field: static protected System.Int32 ANG_DRAG_OFFSET
    static void _set_ANG_DRAG_OFFSET(int value);
    // static field const value: static protected System.Int32 RBD_MASS_OFFSET
    static constexpr const int RBD_MASS_OFFSET = 34;
    // Get static field: static protected System.Int32 RBD_MASS_OFFSET
    static int _get_RBD_MASS_OFFSET();
    // Set static field: static protected System.Int32 RBD_MASS_OFFSET
    static void _set_RBD_MASS_OFFSET(int value);
    // static field const value: static protected System.Int32 BASICS_WORD_CNT
    static constexpr const int BASICS_WORD_CNT = 32;
    // Get static field: static protected System.Int32 BASICS_WORD_CNT
    static int _get_BASICS_WORD_CNT();
    // Set static field: static protected System.Int32 BASICS_WORD_CNT
    static void _set_BASICS_WORD_CNT(int value);
    // static field const value: static protected System.Int32 EXTRAS_WORD_CNT
    static constexpr const int EXTRAS_WORD_CNT = 35;
    // Get static field: static protected System.Int32 EXTRAS_WORD_CNT
    static int _get_EXTRAS_WORD_CNT();
    // Set static field: static protected System.Int32 EXTRAS_WORD_CNT
    static void _set_EXTRAS_WORD_CNT(int value);
    // static field const value: static protected System.Int32 FLAG_ISKINEMATIC
    static constexpr const int FLAG_ISKINEMATIC = 1;
    // Get static field: static protected System.Int32 FLAG_ISKINEMATIC
    static int _get_FLAG_ISKINEMATIC();
    // Set static field: static protected System.Int32 FLAG_ISKINEMATIC
    static void _set_FLAG_ISKINEMATIC(int value);
    // static field const value: static protected System.Int32 FLAG_USE_GRAVITY
    static constexpr const int FLAG_USE_GRAVITY = 2;
    // Get static field: static protected System.Int32 FLAG_USE_GRAVITY
    static int _get_FLAG_USE_GRAVITY();
    // Set static field: static protected System.Int32 FLAG_USE_GRAVITY
    static void _set_FLAG_USE_GRAVITY(int value);
    // static field const value: static protected System.Int32 FLAG_SLEEPING
    static constexpr const int FLAG_SLEEPING = 4;
    // Get static field: static protected System.Int32 FLAG_SLEEPING
    static int _get_FLAG_SLEEPING();
    // Set static field: static protected System.Int32 FLAG_SLEEPING
    static void _set_FLAG_SLEEPING(int value);
    // static field const value: static protected System.Int32 FLAG_SIMULATE
    static constexpr const int FLAG_SIMULATE = 8;
    // Get static field: static protected System.Int32 FLAG_SIMULATE
    static int _get_FLAG_SIMULATE();
    // Set static field: static protected System.Int32 FLAG_SIMULATE
    static void _set_FLAG_SIMULATE(int value);
    // static field const value: static protected System.Int32 CONSTRAINTS_SHIFT
    static constexpr const int CONSTRAINTS_SHIFT = 4;
    // Get static field: static protected System.Int32 CONSTRAINTS_SHIFT
    static int _get_CONSTRAINTS_SHIFT();
    // Set static field: static protected System.Int32 CONSTRAINTS_SHIFT
    static void _set_CONSTRAINTS_SHIFT(int value);
    // Get instance field reference: Fusion.NetworkRigidbodyBaseObsolete/Implementation Impl
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkRigidbodyBaseObsolete::Implementation*& dyn_Impl();
    // Get instance field reference: protected System.Boolean SyncDragAndMass
    [[deprecated("Use field access instead!")]] bool& dyn_SyncDragAndMass();
    // System.Void SetIsKinematic(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetIsKinematic(bool value);
    // private System.Void InitImpl()
    // Offset: 0x2B2AA24
    void InitImpl();
    // System.Void Copy2BuffersFlags()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Copy2BuffersFlags();
    // private System.Void Fusion.IBeforeCopyPreviousState.BeforeCopyPreviousState()
    // Offset: 0x2B2ABE8
    void Fusion_IBeforeCopyPreviousState_BeforeCopyPreviousState();
    // public override System.Nullable`1<System.Int32> get_DynamicWordCount()
    // Offset: 0x2B2A8DC
    // Implemented from: Fusion.NetworkBehaviour
    // Base method: System.Nullable`1<System.Int32> NetworkBehaviour::get_DynamicWordCount()
    ::System::Nullable_1<int> get_DynamicWordCount();
    // override System.Boolean get_IsValidInterpolationTarget()
    // Offset: 0x2B2A94C
    // Implemented from: Fusion.NetworkTransformAnchor
    // Base method: System.Boolean NetworkTransformAnchor::get_IsValidInterpolationTarget()
    bool get_IsValidInterpolationTarget();
    // public override System.Void CopyBackingFieldsToState(System.Boolean firstTime)
    // Offset: 0x2B2AB28
    // Implemented from: Fusion.NetworkTransformObsolete
    // Base method: System.Void NetworkTransformObsolete::CopyBackingFieldsToState(System.Boolean firstTime)
    void CopyBackingFieldsToState(bool firstTime);
    // public override System.Void Spawned()
    // Offset: 0x2B2AB50
    // Implemented from: Fusion.NetworkTransformObsolete
    // Base method: System.Void NetworkTransformObsolete::Spawned()
    void Spawned();
    // public override System.Void RemotePrefabCreated()
    // Offset: 0x2B2AB78
    // Implemented from: Fusion.NetworkTransformAnchor
    // Base method: System.Void NetworkTransformAnchor::RemotePrefabCreated()
    void RemotePrefabCreated();
    // public override System.Void BeforeAllTicks(System.Boolean resimulation, System.Int32 tickCount)
    // Offset: 0x2B2ABA0
    // Implemented from: Fusion.NetworkTransformAnchor
    // Base method: System.Void NetworkTransformAnchor::BeforeAllTicks(System.Boolean resimulation, System.Int32 tickCount)
    void BeforeAllTicks(bool resimulation, int tickCount);
    // public override System.Void AfterAllTicks(System.Boolean resimulation, System.Int32 tickCount)
    // Offset: 0x2B2ABC4
    // Implemented from: Fusion.NetworkTransformAnchor
    // Base method: System.Void NetworkTransformAnchor::AfterAllTicks(System.Boolean resimulation, System.Int32 tickCount)
    void AfterAllTicks(bool resimulation, int tickCount);
    // public override System.Void Render()
    // Offset: 0x2B2AC08
    // Implemented from: Fusion.NetworkTransformObsolete
    // Base method: System.Void NetworkTransformObsolete::Render()
    void Render();
    // protected System.Void .ctor()
    // Offset: 0x2B2AC94
    // Implemented from: Fusion.NetworkTransformObsolete
    // Base method: System.Void NetworkTransformObsolete::.ctor()
    // Base method: System.Void NetworkTransformAnchor::.ctor()
    // Base method: System.Void NetworkAreaOfInterestBehaviour::.ctor()
    // Base method: System.Void NetworkBehaviour::.ctor()
    // Base method: System.Void SimulationBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkRigidbodyBaseObsolete* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkRigidbodyBaseObsolete::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkRigidbodyBaseObsolete*, creationType>()));
    }
  }; // Fusion.NetworkRigidbodyBaseObsolete
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::SetIsKinematic
// Il2CppName: SetIsKinematic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::*)(bool)>(&Fusion::NetworkRigidbodyBaseObsolete::SetIsKinematic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete*), "SetIsKinematic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::InitImpl
// Il2CppName: InitImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::*)()>(&Fusion::NetworkRigidbodyBaseObsolete::InitImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete*), "InitImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::Copy2BuffersFlags
// Il2CppName: Copy2BuffersFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::*)()>(&Fusion::NetworkRigidbodyBaseObsolete::Copy2BuffersFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete*), "Copy2BuffersFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::Fusion_IBeforeCopyPreviousState_BeforeCopyPreviousState
// Il2CppName: Fusion.IBeforeCopyPreviousState.BeforeCopyPreviousState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::*)()>(&Fusion::NetworkRigidbodyBaseObsolete::Fusion_IBeforeCopyPreviousState_BeforeCopyPreviousState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete*), "Fusion.IBeforeCopyPreviousState.BeforeCopyPreviousState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::get_DynamicWordCount
// Il2CppName: get_DynamicWordCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int> (Fusion::NetworkRigidbodyBaseObsolete::*)()>(&Fusion::NetworkRigidbodyBaseObsolete::get_DynamicWordCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete*), "get_DynamicWordCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::get_IsValidInterpolationTarget
// Il2CppName: get_IsValidInterpolationTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkRigidbodyBaseObsolete::*)()>(&Fusion::NetworkRigidbodyBaseObsolete::get_IsValidInterpolationTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete*), "get_IsValidInterpolationTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::CopyBackingFieldsToState
// Il2CppName: CopyBackingFieldsToState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::*)(bool)>(&Fusion::NetworkRigidbodyBaseObsolete::CopyBackingFieldsToState)> {
  static const MethodInfo* get() {
    static auto* firstTime = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete*), "CopyBackingFieldsToState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstTime});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::Spawned
// Il2CppName: Spawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::*)()>(&Fusion::NetworkRigidbodyBaseObsolete::Spawned)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete*), "Spawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::RemotePrefabCreated
// Il2CppName: RemotePrefabCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::*)()>(&Fusion::NetworkRigidbodyBaseObsolete::RemotePrefabCreated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete*), "RemotePrefabCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::BeforeAllTicks
// Il2CppName: BeforeAllTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::*)(bool, int)>(&Fusion::NetworkRigidbodyBaseObsolete::BeforeAllTicks)> {
  static const MethodInfo* get() {
    static auto* resimulation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* tickCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete*), "BeforeAllTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resimulation, tickCount});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::AfterAllTicks
// Il2CppName: AfterAllTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::*)(bool, int)>(&Fusion::NetworkRigidbodyBaseObsolete::AfterAllTicks)> {
  static const MethodInfo* get() {
    static auto* resimulation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* tickCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete*), "AfterAllTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resimulation, tickCount});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::*)()>(&Fusion::NetworkRigidbodyBaseObsolete::Render)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
