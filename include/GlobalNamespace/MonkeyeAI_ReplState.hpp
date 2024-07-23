// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Photon.Pun.IPunObservable
#include "Photon/Pun/IPunObservable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonStream
  class PhotonStream;
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MonkeyeAI_ReplState
  class MonkeyeAI_ReplState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MonkeyeAI_ReplState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MonkeyeAI_ReplState*, "", "MonkeyeAI_ReplState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MonkeyeAI_ReplState
  // [TokenAttribute] Offset: FFFFFFFF
  class MonkeyeAI_ReplState : public ::UnityEngine::MonoBehaviour/*, public ::Photon::Pun::IPunObservable*/ {
    public:
    // Nested type: ::GlobalNamespace::MonkeyeAI_ReplState::EStates
    struct EStates;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MonkeyeAI_ReplState/EStates
    // [TokenAttribute] Offset: FFFFFFFF
    struct EStates/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: EStates
      constexpr EStates(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MonkeyeAI_ReplState/EStates Sleeping
      static constexpr const int Sleeping = 0;
      // Get static field: static public MonkeyeAI_ReplState/EStates Sleeping
      static ::GlobalNamespace::MonkeyeAI_ReplState::EStates _get_Sleeping();
      // Set static field: static public MonkeyeAI_ReplState/EStates Sleeping
      static void _set_Sleeping(::GlobalNamespace::MonkeyeAI_ReplState::EStates value);
      // static field const value: static public MonkeyeAI_ReplState/EStates Patrolling
      static constexpr const int Patrolling = 1;
      // Get static field: static public MonkeyeAI_ReplState/EStates Patrolling
      static ::GlobalNamespace::MonkeyeAI_ReplState::EStates _get_Patrolling();
      // Set static field: static public MonkeyeAI_ReplState/EStates Patrolling
      static void _set_Patrolling(::GlobalNamespace::MonkeyeAI_ReplState::EStates value);
      // static field const value: static public MonkeyeAI_ReplState/EStates Chasing
      static constexpr const int Chasing = 2;
      // Get static field: static public MonkeyeAI_ReplState/EStates Chasing
      static ::GlobalNamespace::MonkeyeAI_ReplState::EStates _get_Chasing();
      // Set static field: static public MonkeyeAI_ReplState/EStates Chasing
      static void _set_Chasing(::GlobalNamespace::MonkeyeAI_ReplState::EStates value);
      // static field const value: static public MonkeyeAI_ReplState/EStates ReturnToSleepPt
      static constexpr const int ReturnToSleepPt = 3;
      // Get static field: static public MonkeyeAI_ReplState/EStates ReturnToSleepPt
      static ::GlobalNamespace::MonkeyeAI_ReplState::EStates _get_ReturnToSleepPt();
      // Set static field: static public MonkeyeAI_ReplState/EStates ReturnToSleepPt
      static void _set_ReturnToSleepPt(::GlobalNamespace::MonkeyeAI_ReplState::EStates value);
      // static field const value: static public MonkeyeAI_ReplState/EStates GoToSleep
      static constexpr const int GoToSleep = 4;
      // Get static field: static public MonkeyeAI_ReplState/EStates GoToSleep
      static ::GlobalNamespace::MonkeyeAI_ReplState::EStates _get_GoToSleep();
      // Set static field: static public MonkeyeAI_ReplState/EStates GoToSleep
      static void _set_GoToSleep(::GlobalNamespace::MonkeyeAI_ReplState::EStates value);
      // static field const value: static public MonkeyeAI_ReplState/EStates BeginAttack
      static constexpr const int BeginAttack = 5;
      // Get static field: static public MonkeyeAI_ReplState/EStates BeginAttack
      static ::GlobalNamespace::MonkeyeAI_ReplState::EStates _get_BeginAttack();
      // Set static field: static public MonkeyeAI_ReplState/EStates BeginAttack
      static void _set_BeginAttack(::GlobalNamespace::MonkeyeAI_ReplState::EStates value);
      // static field const value: static public MonkeyeAI_ReplState/EStates OpenFloor
      static constexpr const int OpenFloor = 6;
      // Get static field: static public MonkeyeAI_ReplState/EStates OpenFloor
      static ::GlobalNamespace::MonkeyeAI_ReplState::EStates _get_OpenFloor();
      // Set static field: static public MonkeyeAI_ReplState/EStates OpenFloor
      static void _set_OpenFloor(::GlobalNamespace::MonkeyeAI_ReplState::EStates value);
      // static field const value: static public MonkeyeAI_ReplState/EStates DropPlayer
      static constexpr const int DropPlayer = 7;
      // Get static field: static public MonkeyeAI_ReplState/EStates DropPlayer
      static ::GlobalNamespace::MonkeyeAI_ReplState::EStates _get_DropPlayer();
      // Set static field: static public MonkeyeAI_ReplState/EStates DropPlayer
      static void _set_DropPlayer(::GlobalNamespace::MonkeyeAI_ReplState::EStates value);
      // static field const value: static public MonkeyeAI_ReplState/EStates CloseFloor
      static constexpr const int CloseFloor = 8;
      // Get static field: static public MonkeyeAI_ReplState/EStates CloseFloor
      static ::GlobalNamespace::MonkeyeAI_ReplState::EStates _get_CloseFloor();
      // Set static field: static public MonkeyeAI_ReplState/EStates CloseFloor
      static void _set_CloseFloor(::GlobalNamespace::MonkeyeAI_ReplState::EStates value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // MonkeyeAI_ReplState/EStates
    #pragma pack(pop)
    static check_size<sizeof(MonkeyeAI_ReplState::EStates), 0 + sizeof(int)> __GlobalNamespace_MonkeyeAI_ReplState_EStatesSizeCheck;
    static_assert(sizeof(MonkeyeAI_ReplState::EStates) == 0x4);
    public:
    // public MonkeyeAI_ReplState/EStates state
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::MonkeyeAI_ReplState::EStates state;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MonkeyeAI_ReplState::EStates) == 0x4);
    // Padding between fields: state and: userId
    char __padding0[0x4] = {};
    // public System.String userId
    // Size: 0x8
    // Offset: 0x28
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.Vector3 attackPos
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 attackPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single timer
    // Size: 0x4
    // Offset: 0x3C
    float timer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean floorEnabled
    // Size: 0x1
    // Offset: 0x40
    bool floorEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean portalEnabled
    // Size: 0x1
    // Offset: 0x41
    bool portalEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean freezePlayer
    // Size: 0x1
    // Offset: 0x42
    bool freezePlayer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: freezePlayer and: alpha
    char __padding6[0x1] = {};
    // public System.Single alpha
    // Size: 0x4
    // Offset: 0x44
    float alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunObservable
    operator ::Photon::Pun::IPunObservable() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunObservable*>(this);
    }
    // Get instance field reference: public MonkeyeAI_ReplState/EStates state
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MonkeyeAI_ReplState::EStates& dyn_state();
    // Get instance field reference: public System.String userId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userId();
    // Get instance field reference: public UnityEngine.Vector3 attackPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_attackPos();
    // Get instance field reference: public System.Single timer
    [[deprecated("Use field access instead!")]] float& dyn_timer();
    // Get instance field reference: public System.Boolean floorEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_floorEnabled();
    // Get instance field reference: public System.Boolean portalEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_portalEnabled();
    // Get instance field reference: public System.Boolean freezePlayer
    [[deprecated("Use field access instead!")]] bool& dyn_freezePlayer();
    // Get instance field reference: public System.Single alpha
    [[deprecated("Use field access instead!")]] float& dyn_alpha();
    // private System.Void Photon.Pun.IPunObservable.OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x269308C
    void Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);
    // public System.Void .ctor()
    // Offset: 0x2693454
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonkeyeAI_ReplState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MonkeyeAI_ReplState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonkeyeAI_ReplState*, creationType>()));
    }
  }; // MonkeyeAI_ReplState
  #pragma pack(pop)
  static check_size<sizeof(MonkeyeAI_ReplState), 68 + sizeof(float)> __GlobalNamespace_MonkeyeAI_ReplStateSizeCheck;
  static_assert(sizeof(MonkeyeAI_ReplState) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MonkeyeAI_ReplState::EStates, "", "MonkeyeAI_ReplState/EStates");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MonkeyeAI_ReplState::Photon_Pun_IPunObservable_OnPhotonSerializeView
// Il2CppName: Photon.Pun.IPunObservable.OnPhotonSerializeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonkeyeAI_ReplState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::MonkeyeAI_ReplState::Photon_Pun_IPunObservable_OnPhotonSerializeView)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonkeyeAI_ReplState*), "Photon.Pun.IPunObservable.OnPhotonSerializeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonkeyeAI_ReplState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!