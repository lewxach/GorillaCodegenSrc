// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPun
#include "Photon/Pun/MonoBehaviourPun.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GorillaTagScripts
namespace GorillaTagScripts {
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Forward declaring type: GorillaTimer
  class GorillaTimer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTagScripts::GorillaTimer);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTagScripts::GorillaTimer*, "GorillaTagScripts", "GorillaTimer");
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTagScripts.GorillaTimer
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaTimer : public ::Photon::Pun::MonoBehaviourPun {
    public:
    // Nested type: ::GorillaTagScripts::GorillaTimer::$DelayedReStartTimer$d__11
    class $DelayedReStartTimer$d__11;
    public:
    // private System.Single timerDuration
    // Size: 0x4
    // Offset: 0x28
    float timerDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean useRandomDuration
    // Size: 0x1
    // Offset: 0x2C
    bool useRandomDuration;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useRandomDuration and: randTimeMin
    char __padding1[0x3] = {};
    // private System.Single randTimeMin
    // Size: 0x4
    // Offset: 0x30
    float randTimeMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single randTimeMax
    // Size: 0x4
    // Offset: 0x34
    float randTimeMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single passedTime
    // Size: 0x4
    // Offset: 0x38
    float passedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean startTimer
    // Size: 0x1
    // Offset: 0x3C
    bool startTimer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean resetTimer
    // Size: 0x1
    // Offset: 0x3D
    bool resetTimer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: resetTimer and: onTimerStarted
    char __padding6[0x2] = {};
    // public UnityEngine.Events.UnityAction`1<GorillaTagScripts.GorillaTimer> onTimerStarted
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Events::UnityAction_1<::GorillaTagScripts::GorillaTimer*>* onTimerStarted;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityAction_1<::GorillaTagScripts::GorillaTimer*>*) == 0x8);
    // public UnityEngine.Events.UnityAction`1<GorillaTagScripts.GorillaTimer> onTimerStopped
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Events::UnityAction_1<::GorillaTagScripts::GorillaTimer*>* onTimerStopped;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityAction_1<::GorillaTagScripts::GorillaTimer*>*) == 0x8);
    public:
    // Get instance field reference: private System.Single timerDuration
    [[deprecated("Use field access instead!")]] float& dyn_timerDuration();
    // Get instance field reference: private System.Boolean useRandomDuration
    [[deprecated("Use field access instead!")]] bool& dyn_useRandomDuration();
    // Get instance field reference: private System.Single randTimeMin
    [[deprecated("Use field access instead!")]] float& dyn_randTimeMin();
    // Get instance field reference: private System.Single randTimeMax
    [[deprecated("Use field access instead!")]] float& dyn_randTimeMax();
    // Get instance field reference: private System.Single passedTime
    [[deprecated("Use field access instead!")]] float& dyn_passedTime();
    // Get instance field reference: private System.Boolean startTimer
    [[deprecated("Use field access instead!")]] bool& dyn_startTimer();
    // Get instance field reference: private System.Boolean resetTimer
    [[deprecated("Use field access instead!")]] bool& dyn_resetTimer();
    // Get instance field reference: public UnityEngine.Events.UnityAction`1<GorillaTagScripts.GorillaTimer> onTimerStarted
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityAction_1<::GorillaTagScripts::GorillaTimer*>*& dyn_onTimerStarted();
    // Get instance field reference: public UnityEngine.Events.UnityAction`1<GorillaTagScripts.GorillaTimer> onTimerStopped
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityAction_1<::GorillaTagScripts::GorillaTimer*>*& dyn_onTimerStopped();
    // private System.Void Awake()
    // Offset: 0x280D514
    void Awake();
    // public System.Void StartTimer()
    // Offset: 0x280D524
    void StartTimer();
    // public System.Collections.IEnumerator DelayedReStartTimer(System.Single delayTime)
    // Offset: 0x280D54C
    ::System::Collections::IEnumerator* DelayedReStartTimer(float delayTime);
    // private System.Void StopTimer()
    // Offset: 0x280D5F0
    void StopTimer();
    // private System.Void ResetTimer()
    // Offset: 0x280D51C
    void ResetTimer();
    // public System.Void RestartTimer()
    // Offset: 0x28068AC
    void RestartTimer();
    // private System.Void SetTimerDuration(System.Single timer)
    // Offset: 0x280D614
    void SetTimerDuration(float timer);
    // public System.Void InvokeUpdate()
    // Offset: 0x280D61C
    void InvokeUpdate();
    // public System.Single GetPassedTime()
    // Offset: 0x280D680
    float GetPassedTime();
    // public System.Void SetPassedTime(System.Single time)
    // Offset: 0x280D688
    void SetPassedTime(float time);
    // public System.Single GetRemainingTime()
    // Offset: 0x280D690
    float GetRemainingTime();
    // public System.Void OnEnable()
    // Offset: 0x280D6A0
    void OnEnable();
    // public System.Void OnDisable()
    // Offset: 0x280D848
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x280D99C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaTimer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTagScripts::GorillaTimer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaTimer*, creationType>()));
    }
  }; // GorillaTagScripts.GorillaTimer
  #pragma pack(pop)
  static check_size<sizeof(GorillaTimer), 72 + sizeof(::UnityEngine::Events::UnityAction_1<::GorillaTagScripts::GorillaTimer*>*)> __GorillaTagScripts_GorillaTimerSizeCheck;
  static_assert(sizeof(GorillaTimer) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTagScripts::GorillaTimer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::GorillaTimer::*)()>(&GorillaTagScripts::GorillaTimer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::GorillaTimer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::GorillaTimer::StartTimer
// Il2CppName: StartTimer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::GorillaTimer::*)()>(&GorillaTagScripts::GorillaTimer::StartTimer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::GorillaTimer*), "StartTimer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::GorillaTimer::DelayedReStartTimer
// Il2CppName: DelayedReStartTimer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GorillaTagScripts::GorillaTimer::*)(float)>(&GorillaTagScripts::GorillaTimer::DelayedReStartTimer)> {
  static const MethodInfo* get() {
    static auto* delayTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::GorillaTimer*), "DelayedReStartTimer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delayTime});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::GorillaTimer::StopTimer
// Il2CppName: StopTimer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::GorillaTimer::*)()>(&GorillaTagScripts::GorillaTimer::StopTimer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::GorillaTimer*), "StopTimer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::GorillaTimer::ResetTimer
// Il2CppName: ResetTimer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::GorillaTimer::*)()>(&GorillaTagScripts::GorillaTimer::ResetTimer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::GorillaTimer*), "ResetTimer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::GorillaTimer::RestartTimer
// Il2CppName: RestartTimer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::GorillaTimer::*)()>(&GorillaTagScripts::GorillaTimer::RestartTimer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::GorillaTimer*), "RestartTimer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::GorillaTimer::SetTimerDuration
// Il2CppName: SetTimerDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::GorillaTimer::*)(float)>(&GorillaTagScripts::GorillaTimer::SetTimerDuration)> {
  static const MethodInfo* get() {
    static auto* timer = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::GorillaTimer*), "SetTimerDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timer});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::GorillaTimer::InvokeUpdate
// Il2CppName: InvokeUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::GorillaTimer::*)()>(&GorillaTagScripts::GorillaTimer::InvokeUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::GorillaTimer*), "InvokeUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::GorillaTimer::GetPassedTime
// Il2CppName: GetPassedTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GorillaTagScripts::GorillaTimer::*)()>(&GorillaTagScripts::GorillaTimer::GetPassedTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::GorillaTimer*), "GetPassedTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::GorillaTimer::SetPassedTime
// Il2CppName: SetPassedTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::GorillaTimer::*)(float)>(&GorillaTagScripts::GorillaTimer::SetPassedTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::GorillaTimer*), "SetPassedTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::GorillaTimer::GetRemainingTime
// Il2CppName: GetRemainingTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GorillaTagScripts::GorillaTimer::*)()>(&GorillaTagScripts::GorillaTimer::GetRemainingTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::GorillaTimer*), "GetRemainingTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::GorillaTimer::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::GorillaTimer::*)()>(&GorillaTagScripts::GorillaTimer::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::GorillaTimer*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::GorillaTimer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::GorillaTimer::*)()>(&GorillaTagScripts::GorillaTimer::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::GorillaTimer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::GorillaTimer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
