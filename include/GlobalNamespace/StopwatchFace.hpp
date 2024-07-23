// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Vector3Int
  struct Vector3Int;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StopwatchCosmetic
  class StopwatchCosmetic;
  // Forward declaring type: LerpTask`1<T>
  template<typename T>
  class LerpTask_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StopwatchFace
  class StopwatchFace;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StopwatchFace);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StopwatchFace*, "", "StopwatchFace");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: StopwatchFace
  // [TokenAttribute] Offset: FFFFFFFF
  class StopwatchFace : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Transform _hand
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* hand;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.UI.Text _text
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Text* text;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private StopwatchCosmetic _cosmetic
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::StopwatchCosmetic* cosmetic;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StopwatchCosmetic*) == 0x8);
    // private UnityEngine.AudioClip _audioClick
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AudioClip* audioClick;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioClip _audioReset
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AudioClip* audioReset;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioClip _audioTick
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AudioClip* audioTick;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private System.Int32 _millisElapsed
    // Size: 0x4
    // Offset: 0x50
    int millisElapsed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _watchActive
    // Size: 0x1
    // Offset: 0x54
    bool watchActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: watchActive and: lerpToZero
    char __padding7[0x3] = {};
    // private LerpTask`1<System.Int32> _lerpToZero
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::LerpTask_1<int>* lerpToZero;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LerpTask_1<int>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Transform _hand
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__hand();
    // Get instance field reference: private UnityEngine.UI.Text _text
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn__text();
    // Get instance field reference: private StopwatchCosmetic _cosmetic
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StopwatchCosmetic*& dyn__cosmetic();
    // Get instance field reference: private UnityEngine.AudioClip _audioClick
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__audioClick();
    // Get instance field reference: private UnityEngine.AudioClip _audioReset
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__audioReset();
    // Get instance field reference: private UnityEngine.AudioClip _audioTick
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__audioTick();
    // Get instance field reference: private System.Int32 _millisElapsed
    [[deprecated("Use field access instead!")]] int& dyn__millisElapsed();
    // Get instance field reference: private System.Boolean _watchActive
    [[deprecated("Use field access instead!")]] bool& dyn__watchActive();
    // Get instance field reference: private LerpTask`1<System.Int32> _lerpToZero
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LerpTask_1<int>*& dyn__lerpToZero();
    // public System.Boolean get_watchActive()
    // Offset: 0x27301E4
    bool get_watchActive();
    // public System.Int32 get_millisElapsed()
    // Offset: 0x27301EC
    int get_millisElapsed();
    // public UnityEngine.Vector3Int get_digitsMmSsMs()
    // Offset: 0x27301F4
    ::UnityEngine::Vector3Int get_digitsMmSsMs();
    // public System.Void SetMillisElapsed(System.Int32 millis, System.Boolean updateFace)
    // Offset: 0x27303AC
    void SetMillisElapsed(int millis, bool updateFace);
    // private System.Void Awake()
    // Offset: 0x2730620
    void Awake();
    // private System.Void OnLerpToZero(System.Int32 a, System.Int32 b, System.Single t)
    // Offset: 0x2730764
    void OnLerpToZero(int a, int b, float t);
    // private System.Void OnLerpEnd()
    // Offset: 0x273081C
    void OnLerpEnd();
    // private System.Void OnEnable()
    // Offset: 0x2730920
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x2730928
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x2730930
    void Update();
    // static private UnityEngine.Vector3Int ParseDigits(System.TimeSpan time)
    // Offset: 0x273025C
    static ::UnityEngine::Vector3Int ParseDigits(::System::TimeSpan time);
    // private System.Void UpdateText()
    // Offset: 0x27303D4
    void UpdateText();
    // private System.Void UpdateHand()
    // Offset: 0x27305B8
    void UpdateHand();
    // public System.Void WatchToggle()
    // Offset: 0x2730A3C
    void WatchToggle();
    // public System.Void WatchStart()
    // Offset: 0x2730A80
    void WatchStart();
    // public System.Void WatchStop()
    // Offset: 0x2730AA8
    void WatchStop();
    // public System.Void WatchReset()
    // Offset: 0x2730ACC
    void WatchReset();
    // public System.Void WatchReset(System.Boolean doLerp)
    // Offset: 0x2730824
    void WatchReset(bool doLerp);
    // public System.Void .ctor()
    // Offset: 0x2730AD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StopwatchFace* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StopwatchFace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StopwatchFace*, creationType>()));
    }
  }; // StopwatchFace
  #pragma pack(pop)
  static check_size<sizeof(StopwatchFace), 88 + sizeof(::GlobalNamespace::LerpTask_1<int>*)> __GlobalNamespace_StopwatchFaceSizeCheck;
  static_assert(sizeof(StopwatchFace) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::get_watchActive
// Il2CppName: get_watchActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::StopwatchFace::*)()>(&GlobalNamespace::StopwatchFace::get_watchActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "get_watchActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::get_millisElapsed
// Il2CppName: get_millisElapsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::StopwatchFace::*)()>(&GlobalNamespace::StopwatchFace::get_millisElapsed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "get_millisElapsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::get_digitsMmSsMs
// Il2CppName: get_digitsMmSsMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (GlobalNamespace::StopwatchFace::*)()>(&GlobalNamespace::StopwatchFace::get_digitsMmSsMs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "get_digitsMmSsMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::SetMillisElapsed
// Il2CppName: SetMillisElapsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StopwatchFace::*)(int, bool)>(&GlobalNamespace::StopwatchFace::SetMillisElapsed)> {
  static const MethodInfo* get() {
    static auto* millis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* updateFace = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "SetMillisElapsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millis, updateFace});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StopwatchFace::*)()>(&GlobalNamespace::StopwatchFace::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::OnLerpToZero
// Il2CppName: OnLerpToZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StopwatchFace::*)(int, int, float)>(&GlobalNamespace::StopwatchFace::OnLerpToZero)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "OnLerpToZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::OnLerpEnd
// Il2CppName: OnLerpEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StopwatchFace::*)()>(&GlobalNamespace::StopwatchFace::OnLerpEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "OnLerpEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StopwatchFace::*)()>(&GlobalNamespace::StopwatchFace::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StopwatchFace::*)()>(&GlobalNamespace::StopwatchFace::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StopwatchFace::*)()>(&GlobalNamespace::StopwatchFace::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::ParseDigits
// Il2CppName: ParseDigits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (*)(::System::TimeSpan)>(&GlobalNamespace::StopwatchFace::ParseDigits)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "ParseDigits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::UpdateText
// Il2CppName: UpdateText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StopwatchFace::*)()>(&GlobalNamespace::StopwatchFace::UpdateText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "UpdateText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::UpdateHand
// Il2CppName: UpdateHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StopwatchFace::*)()>(&GlobalNamespace::StopwatchFace::UpdateHand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "UpdateHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::WatchToggle
// Il2CppName: WatchToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StopwatchFace::*)()>(&GlobalNamespace::StopwatchFace::WatchToggle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "WatchToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::WatchStart
// Il2CppName: WatchStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StopwatchFace::*)()>(&GlobalNamespace::StopwatchFace::WatchStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "WatchStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::WatchStop
// Il2CppName: WatchStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StopwatchFace::*)()>(&GlobalNamespace::StopwatchFace::WatchStop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "WatchStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::WatchReset
// Il2CppName: WatchReset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StopwatchFace::*)()>(&GlobalNamespace::StopwatchFace::WatchReset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "WatchReset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::WatchReset
// Il2CppName: WatchReset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StopwatchFace::*)(bool)>(&GlobalNamespace::StopwatchFace::WatchReset)> {
  static const MethodInfo* get() {
    static auto* doLerp = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StopwatchFace*), "WatchReset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{doLerp});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StopwatchFace::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!