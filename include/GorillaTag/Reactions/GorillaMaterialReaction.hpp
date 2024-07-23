// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ITickSystemPost
#include "GlobalNamespace/ITickSystemPost.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRRig
  class VRRig;
}
// Forward declaring namespace: GorillaTag::Reactions
namespace GorillaTag::Reactions {
  // Skipping declaration: GameObjectStates because it is already included!
  // Skipping declaration: MomentInStateActiveOption because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: GorillaTag.Reactions
namespace GorillaTag::Reactions {
  // Forward declaring type: GorillaMaterialReaction
  class GorillaMaterialReaction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::Reactions::GorillaMaterialReaction);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::Reactions::GorillaMaterialReaction*, "GorillaTag.Reactions", "GorillaMaterialReaction");
// Type namespace: GorillaTag.Reactions
namespace GorillaTag::Reactions {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.Reactions.GorillaMaterialReaction
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaMaterialReaction : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::ITickSystemPost*/ {
    public:
    // Nested type: ::GorillaTag::Reactions::GorillaMaterialReaction::ReactionEntry
    struct ReactionEntry;
    // Nested type: ::GorillaTag::Reactions::GorillaMaterialReaction::GameObjectStates
    struct GameObjectStates;
    // Nested type: ::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption
    struct MomentInStateActiveOption;
    // Nested type: ::GorillaTag::Reactions::GorillaMaterialReaction::EMomentInState
    struct EMomentInState;
    // Nested type: ::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateAttribute
    class MomentInStateAttribute;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: GorillaTag.Reactions.GorillaMaterialReaction/ReactionEntry
    // [TokenAttribute] Offset: FFFFFFFF
    struct ReactionEntry/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Int32[] statusMaterialIndexes
      // Size: 0x8
      // Offset: 0x0
      ::ArrayW<int> statusMaterialIndexes;
      // Field size check
      static_assert(sizeof(::ArrayW<int>) == 0x8);
      // public GorillaTag.Reactions.GorillaMaterialReaction/GameObjectStates[] gameObjectStates
      // Size: 0x8
      // Offset: 0x8
      ::ArrayW<::GorillaTag::Reactions::GorillaMaterialReaction::GameObjectStates> gameObjectStates;
      // Field size check
      static_assert(sizeof(::ArrayW<::GorillaTag::Reactions::GorillaMaterialReaction::GameObjectStates>) == 0x8);
      public:
      // Creating value type constructor for type: ReactionEntry
      constexpr ReactionEntry(::ArrayW<int> statusMaterialIndexes_ = ::ArrayW<int>(static_cast<void*>(nullptr)), ::ArrayW<::GorillaTag::Reactions::GorillaMaterialReaction::GameObjectStates> gameObjectStates_ = ::ArrayW<::GorillaTag::Reactions::GorillaMaterialReaction::GameObjectStates>(static_cast<void*>(nullptr))) noexcept : statusMaterialIndexes{statusMaterialIndexes_}, gameObjectStates{gameObjectStates_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Int32[] statusMaterialIndexes
      [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_statusMaterialIndexes();
      // Get instance field reference: public GorillaTag.Reactions.GorillaMaterialReaction/GameObjectStates[] gameObjectStates
      [[deprecated("Use field access instead!")]] ::ArrayW<::GorillaTag::Reactions::GorillaMaterialReaction::GameObjectStates>& dyn_gameObjectStates();
    }; // GorillaTag.Reactions.GorillaMaterialReaction/ReactionEntry
    #pragma pack(pop)
    static check_size<sizeof(GorillaMaterialReaction::ReactionEntry), 8 + sizeof(::ArrayW<::GorillaTag::Reactions::GorillaMaterialReaction::GameObjectStates>)> __GorillaTag_Reactions_GorillaMaterialReaction_ReactionEntrySizeCheck;
    static_assert(sizeof(GorillaMaterialReaction::ReactionEntry) == 0x10);
    // Size: 0xE
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: GorillaTag.Reactions.GorillaMaterialReaction/GameObjectStates
    // [TokenAttribute] Offset: FFFFFFFF
    struct GameObjectStates/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.GameObject gameObject
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::GameObject* gameObject;
      // Field size check
      static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
      // public GorillaTag.Reactions.GorillaMaterialReaction/MomentInStateActiveOption onEnter
      // Size: 0x2
      // Offset: 0x8
      ::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption onEnter;
      // Field size check
      static_assert(sizeof(::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption) == 0x2);
      // public GorillaTag.Reactions.GorillaMaterialReaction/MomentInStateActiveOption onStay
      // Size: 0x2
      // Offset: 0xA
      ::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption onStay;
      // Field size check
      static_assert(sizeof(::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption) == 0x2);
      // public GorillaTag.Reactions.GorillaMaterialReaction/MomentInStateActiveOption onExit
      // Size: 0x2
      // Offset: 0xC
      ::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption onExit;
      // Field size check
      static_assert(sizeof(::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption) == 0x2);
      public:
      // Creating value type constructor for type: GameObjectStates
      constexpr GameObjectStates(::UnityEngine::GameObject* gameObject_ = {}, ::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption onEnter_ = {}, ::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption onStay_ = {}, ::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption onExit_ = {}) noexcept : gameObject{gameObject_}, onEnter{onEnter_}, onStay{onStay_}, onExit{onExit_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.GameObject gameObject
      [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_gameObject();
      // Get instance field reference: public GorillaTag.Reactions.GorillaMaterialReaction/MomentInStateActiveOption onEnter
      [[deprecated("Use field access instead!")]] ::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption& dyn_onEnter();
      // Get instance field reference: public GorillaTag.Reactions.GorillaMaterialReaction/MomentInStateActiveOption onStay
      [[deprecated("Use field access instead!")]] ::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption& dyn_onStay();
      // Get instance field reference: public GorillaTag.Reactions.GorillaMaterialReaction/MomentInStateActiveOption onExit
      [[deprecated("Use field access instead!")]] ::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption& dyn_onExit();
    }; // GorillaTag.Reactions.GorillaMaterialReaction/GameObjectStates
    #pragma pack(pop)
    static check_size<sizeof(GorillaMaterialReaction::GameObjectStates), 12 + sizeof(::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption)> __GorillaTag_Reactions_GorillaMaterialReaction_GameObjectStatesSizeCheck;
    static_assert(sizeof(GorillaMaterialReaction::GameObjectStates) == 0xE);
    // Size: 0x2
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: GorillaTag.Reactions.GorillaMaterialReaction/MomentInStateActiveOption
    // [TokenAttribute] Offset: FFFFFFFF
    struct MomentInStateActiveOption/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Boolean change
      // Size: 0x1
      // Offset: 0x0
      bool change;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // public System.Boolean activeState
      // Size: 0x1
      // Offset: 0x1
      bool activeState;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      public:
      // Creating value type constructor for type: MomentInStateActiveOption
      constexpr MomentInStateActiveOption(bool change_ = {}, bool activeState_ = {}) noexcept : change{change_}, activeState{activeState_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Boolean change
      [[deprecated("Use field access instead!")]] bool& dyn_change();
      // Get instance field reference: public System.Boolean activeState
      [[deprecated("Use field access instead!")]] bool& dyn_activeState();
    }; // GorillaTag.Reactions.GorillaMaterialReaction/MomentInStateActiveOption
    #pragma pack(pop)
    static check_size<sizeof(GorillaMaterialReaction::MomentInStateActiveOption), 1 + sizeof(bool)> __GorillaTag_Reactions_GorillaMaterialReaction_MomentInStateActiveOptionSizeCheck;
    static_assert(sizeof(GorillaMaterialReaction::MomentInStateActiveOption) == 0x2);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: GorillaTag.Reactions.GorillaMaterialReaction/EMomentInState
    // [TokenAttribute] Offset: FFFFFFFF
    struct EMomentInState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: EMomentInState
      constexpr EMomentInState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public GorillaTag.Reactions.GorillaMaterialReaction/EMomentInState OnEnter
      static constexpr const int OnEnter = 0;
      // Get static field: static public GorillaTag.Reactions.GorillaMaterialReaction/EMomentInState OnEnter
      static ::GorillaTag::Reactions::GorillaMaterialReaction::EMomentInState _get_OnEnter();
      // Set static field: static public GorillaTag.Reactions.GorillaMaterialReaction/EMomentInState OnEnter
      static void _set_OnEnter(::GorillaTag::Reactions::GorillaMaterialReaction::EMomentInState value);
      // static field const value: static public GorillaTag.Reactions.GorillaMaterialReaction/EMomentInState OnStay
      static constexpr const int OnStay = 1;
      // Get static field: static public GorillaTag.Reactions.GorillaMaterialReaction/EMomentInState OnStay
      static ::GorillaTag::Reactions::GorillaMaterialReaction::EMomentInState _get_OnStay();
      // Set static field: static public GorillaTag.Reactions.GorillaMaterialReaction/EMomentInState OnStay
      static void _set_OnStay(::GorillaTag::Reactions::GorillaMaterialReaction::EMomentInState value);
      // static field const value: static public GorillaTag.Reactions.GorillaMaterialReaction/EMomentInState OnExit
      static constexpr const int OnExit = 2;
      // Get static field: static public GorillaTag.Reactions.GorillaMaterialReaction/EMomentInState OnExit
      static ::GorillaTag::Reactions::GorillaMaterialReaction::EMomentInState _get_OnExit();
      // Set static field: static public GorillaTag.Reactions.GorillaMaterialReaction/EMomentInState OnExit
      static void _set_OnExit(::GorillaTag::Reactions::GorillaMaterialReaction::EMomentInState value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // GorillaTag.Reactions.GorillaMaterialReaction/EMomentInState
    #pragma pack(pop)
    static check_size<sizeof(GorillaMaterialReaction::EMomentInState), 0 + sizeof(int)> __GorillaTag_Reactions_GorillaMaterialReaction_EMomentInStateSizeCheck;
    static_assert(sizeof(GorillaMaterialReaction::EMomentInState) == 0x4);
    public:
    // private GorillaTag.Reactions.GorillaMaterialReaction/ReactionEntry[] _statusEffectReactions
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GorillaTag::Reactions::GorillaMaterialReaction::ReactionEntry> statusEffectReactions;
    // Field size check
    static_assert(sizeof(::ArrayW<::GorillaTag::Reactions::GorillaMaterialReaction::ReactionEntry>) == 0x8);
    // private System.Int32 _previousMatIndex
    // Size: 0x4
    // Offset: 0x28
    int previousMatIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private GorillaTag.Reactions.GorillaMaterialReaction/EMomentInState _currentMomentInState
    // Size: 0x4
    // Offset: 0x2C
    ::GorillaTag::Reactions::GorillaMaterialReaction::EMomentInState currentMomentInState;
    // Field size check
    static_assert(sizeof(::GorillaTag::Reactions::GorillaMaterialReaction::EMomentInState) == 0x4);
    // private System.Double _currentMatIndexStartTime
    // Size: 0x8
    // Offset: 0x30
    double currentMatIndexStartTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double _currentMomentDuration
    // Size: 0x8
    // Offset: 0x38
    double currentMomentDuration;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Int32 _reactionsRemaining
    // Size: 0x4
    // Offset: 0x40
    int reactionsRemaining;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _momentEnumCount
    // Size: 0x4
    // Offset: 0x44
    int momentEnumCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _matCount
    // Size: 0x4
    // Offset: 0x48
    int matCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: matCount and: mat_x_moment_x_activeBool_to_gObjs
    char __padding7[0x4] = {};
    // private UnityEngine.GameObject[][] _mat_x_moment_x_activeBool_to_gObjs
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::ArrayW<::UnityEngine::GameObject*>> mat_x_moment_x_activeBool_to_gObjs;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<::UnityEngine::GameObject*>>) == 0x8);
    // private VRRig _ownerVRRig
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::VRRig* ownerVRRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    // private System.Boolean <ITickSystemPost.PostTickRunning>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool PostTickRunning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ITickSystemPost
    operator ::GlobalNamespace::ITickSystemPost() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ITickSystemPost*>(this);
    }
    // Get instance field reference: private GorillaTag.Reactions.GorillaMaterialReaction/ReactionEntry[] _statusEffectReactions
    [[deprecated("Use field access instead!")]] ::ArrayW<::GorillaTag::Reactions::GorillaMaterialReaction::ReactionEntry>& dyn__statusEffectReactions();
    // Get instance field reference: private System.Int32 _previousMatIndex
    [[deprecated("Use field access instead!")]] int& dyn__previousMatIndex();
    // Get instance field reference: private GorillaTag.Reactions.GorillaMaterialReaction/EMomentInState _currentMomentInState
    [[deprecated("Use field access instead!")]] ::GorillaTag::Reactions::GorillaMaterialReaction::EMomentInState& dyn__currentMomentInState();
    // Get instance field reference: private System.Double _currentMatIndexStartTime
    [[deprecated("Use field access instead!")]] double& dyn__currentMatIndexStartTime();
    // Get instance field reference: private System.Double _currentMomentDuration
    [[deprecated("Use field access instead!")]] double& dyn__currentMomentDuration();
    // Get instance field reference: private System.Int32 _reactionsRemaining
    [[deprecated("Use field access instead!")]] int& dyn__reactionsRemaining();
    // Get instance field reference: private System.Int32 _momentEnumCount
    [[deprecated("Use field access instead!")]] int& dyn__momentEnumCount();
    // Get instance field reference: private System.Int32 _matCount
    [[deprecated("Use field access instead!")]] int& dyn__matCount();
    // Get instance field reference: private UnityEngine.GameObject[][] _mat_x_moment_x_activeBool_to_gObjs
    [[deprecated("Use field access instead!")]] ::ArrayW<::ArrayW<::UnityEngine::GameObject*>>& dyn__mat_x_moment_x_activeBool_to_gObjs();
    // Get instance field reference: private VRRig _ownerVRRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn__ownerVRRig();
    // Get instance field reference: private System.Boolean <ITickSystemPost.PostTickRunning>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ITickSystemPost_PostTickRunning$k__BackingField();
    // public System.Void PopulateRuntimeLookupArrays()
    // Offset: 0x28A4028
    void PopulateRuntimeLookupArrays();
    // protected System.Void Awake()
    // Offset: 0x28A4544
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x28A4B28
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x28A4D24
    void OnDisable();
    // private System.Boolean ITickSystemPost.get_PostTickRunning()
    // Offset: 0x28A4D90
    bool ITickSystemPost_get_PostTickRunning();
    // private System.Void ITickSystemPost.set_PostTickRunning(System.Boolean value)
    // Offset: 0x28A4D98
    void ITickSystemPost_set_PostTickRunning(bool value);
    // private System.Void ITickSystemPost.PostTick()
    // Offset: 0x28A4DA4
    void ITickSystemPost_PostTick();
    // private System.Void RemoveAndReportNulls()
    // Offset: 0x28A455C
    void RemoveAndReportNulls();
    // public System.Void .ctor()
    // Offset: 0x28A5094
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaMaterialReaction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::Reactions::GorillaMaterialReaction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaMaterialReaction*, creationType>()));
    }
  }; // GorillaTag.Reactions.GorillaMaterialReaction
  #pragma pack(pop)
  static check_size<sizeof(GorillaMaterialReaction), 96 + sizeof(bool)> __GorillaTag_Reactions_GorillaMaterialReactionSizeCheck;
  static_assert(sizeof(GorillaMaterialReaction) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::Reactions::GorillaMaterialReaction::EMomentInState, "GorillaTag.Reactions", "GorillaMaterialReaction/EMomentInState");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::Reactions::GorillaMaterialReaction::MomentInStateActiveOption, "GorillaTag.Reactions", "GorillaMaterialReaction/MomentInStateActiveOption");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::Reactions::GorillaMaterialReaction::GameObjectStates, "GorillaTag.Reactions", "GorillaMaterialReaction/GameObjectStates");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::Reactions::GorillaMaterialReaction::ReactionEntry, "GorillaTag.Reactions", "GorillaMaterialReaction/ReactionEntry");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::Reactions::GorillaMaterialReaction::PopulateRuntimeLookupArrays
// Il2CppName: PopulateRuntimeLookupArrays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&GorillaTag::Reactions::GorillaMaterialReaction::PopulateRuntimeLookupArrays)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Reactions::GorillaMaterialReaction*), "PopulateRuntimeLookupArrays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Reactions::GorillaMaterialReaction::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&GorillaTag::Reactions::GorillaMaterialReaction::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Reactions::GorillaMaterialReaction*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Reactions::GorillaMaterialReaction::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&GorillaTag::Reactions::GorillaMaterialReaction::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Reactions::GorillaMaterialReaction*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Reactions::GorillaMaterialReaction::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&GorillaTag::Reactions::GorillaMaterialReaction::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Reactions::GorillaMaterialReaction*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Reactions::GorillaMaterialReaction::ITickSystemPost_get_PostTickRunning
// Il2CppName: ITickSystemPost.get_PostTickRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&GorillaTag::Reactions::GorillaMaterialReaction::ITickSystemPost_get_PostTickRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Reactions::GorillaMaterialReaction*), "ITickSystemPost.get_PostTickRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Reactions::GorillaMaterialReaction::ITickSystemPost_set_PostTickRunning
// Il2CppName: ITickSystemPost.set_PostTickRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Reactions::GorillaMaterialReaction::*)(bool)>(&GorillaTag::Reactions::GorillaMaterialReaction::ITickSystemPost_set_PostTickRunning)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Reactions::GorillaMaterialReaction*), "ITickSystemPost.set_PostTickRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GorillaTag::Reactions::GorillaMaterialReaction::ITickSystemPost_PostTick
// Il2CppName: ITickSystemPost.PostTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&GorillaTag::Reactions::GorillaMaterialReaction::ITickSystemPost_PostTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Reactions::GorillaMaterialReaction*), "ITickSystemPost.PostTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Reactions::GorillaMaterialReaction::RemoveAndReportNulls
// Il2CppName: RemoveAndReportNulls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&GorillaTag::Reactions::GorillaMaterialReaction::RemoveAndReportNulls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Reactions::GorillaMaterialReaction*), "RemoveAndReportNulls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Reactions::GorillaMaterialReaction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!