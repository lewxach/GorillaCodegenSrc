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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRRig
  class VRRig;
  // Forward declaring type: VRRigReliableState
  class VRRigReliableState;
  // Forward declaring type: NetPlayer
  class NetPlayer;
  // Forward declaring type: VRRigSerializer
  class VRRigSerializer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Forward declaring namespace: Photon::Voice::PUN
namespace Photon::Voice::PUN {
  // Forward declaring type: PhotonVoiceView
  class PhotonVoiceView;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonView
  class PhotonView;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RigContainer
  class RigContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RigContainer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RigContainer*, "", "RigContainer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: RigContainer
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class RigContainer : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::RigContainer::$$c
    class $$c;
    // Nested type: ::GlobalNamespace::RigContainer::$QueueAutomute$d__49
    class $QueueAutomute$d__49;
    public:
    // private System.Boolean <Initialized>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool Initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Initialized and: vrrig
    char __padding0[0x7] = {};
    // private VRRig vrrig
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::VRRig* vrrig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    // private VRRigReliableState reliableState
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::VRRigReliableState* reliableState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRigReliableState*) == 0x8);
    // private UnityEngine.Transform speakerHead
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* speakerHead;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.AudioSource replacementVoiceSource
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AudioSource* replacementVoiceSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private Photon.Voice.PUN.PhotonVoiceView voiceView
    // Size: 0x8
    // Offset: 0x48
    ::Photon::Voice::PUN::PhotonVoiceView* voiceView;
    // Field size check
    static_assert(sizeof(::Photon::Voice::PUN::PhotonVoiceView*) == 0x8);
    // private System.Boolean enableVoice
    // Size: 0x1
    // Offset: 0x50
    bool enableVoice;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean forceMute
    // Size: 0x1
    // Offset: 0x51
    bool forceMute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean hasManualMute
    // Size: 0x1
    // Offset: 0x52
    bool hasManualMute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean bPlayerAutoMuted
    // Size: 0x1
    // Offset: 0x53
    bool bPlayerAutoMuted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Int32 playerChatQuality
    // Size: 0x4
    // Offset: 0x54
    int playerChatQuality;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private System.Collections.Generic.List`1<Photon.Realtime.Player> playersToCheckAutomute
    static ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>* _get_playersToCheckAutomute();
    // Set static field: static private System.Collections.Generic.List`1<Photon.Realtime.Player> playersToCheckAutomute
    static void _set_playersToCheckAutomute(::System::Collections::Generic::List_1<::Photon::Realtime::Player*>* value);
    // Get static field: static private System.Boolean automuteQueued
    static bool _get_automuteQueued();
    // Set static field: static private System.Boolean automuteQueued
    static void _set_automuteQueued(bool value);
    // Get static field: static private System.Collections.Generic.List`1<Photon.Realtime.Player> requestedAutomutePlayers
    static ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>* _get_requestedAutomutePlayers();
    // Set static field: static private System.Collections.Generic.List`1<Photon.Realtime.Player> requestedAutomutePlayers
    static void _set_requestedAutomutePlayers(::System::Collections::Generic::List_1<::Photon::Realtime::Player*>* value);
    // Get static field: static private System.Boolean waitingForAutomuteCallback
    static bool _get_waitingForAutomuteCallback();
    // Set static field: static private System.Boolean waitingForAutomuteCallback
    static void _set_waitingForAutomuteCallback(bool value);
    // Get static field: static private RigContainer staticTempRC
    static ::GlobalNamespace::RigContainer* _get_staticTempRC();
    // Set static field: static private RigContainer staticTempRC
    static void _set_staticTempRC(::GlobalNamespace::RigContainer* value);
    // Get instance field reference: private System.Boolean <Initialized>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Initialized$k__BackingField();
    // Get instance field reference: private VRRig vrrig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_vrrig();
    // Get instance field reference: private VRRigReliableState reliableState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRigReliableState*& dyn_reliableState();
    // Get instance field reference: private UnityEngine.Transform speakerHead
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_speakerHead();
    // Get instance field reference: private UnityEngine.AudioSource replacementVoiceSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_replacementVoiceSource();
    // Get instance field reference: private Photon.Voice.PUN.PhotonVoiceView voiceView
    [[deprecated("Use field access instead!")]] ::Photon::Voice::PUN::PhotonVoiceView*& dyn_voiceView();
    // Get instance field reference: private System.Boolean enableVoice
    [[deprecated("Use field access instead!")]] bool& dyn_enableVoice();
    // Get instance field reference: private System.Boolean forceMute
    [[deprecated("Use field access instead!")]] bool& dyn_forceMute();
    // Get instance field reference: public System.Boolean hasManualMute
    [[deprecated("Use field access instead!")]] bool& dyn_hasManualMute();
    // Get instance field reference: private System.Boolean bPlayerAutoMuted
    [[deprecated("Use field access instead!")]] bool& dyn_bPlayerAutoMuted();
    // Get instance field reference: public System.Int32 playerChatQuality
    [[deprecated("Use field access instead!")]] int& dyn_playerChatQuality();
    // public System.Boolean get_Initialized()
    // Offset: 0x26F9968
    bool get_Initialized();
    // private System.Void set_Initialized(System.Boolean value)
    // Offset: 0x26F9970
    void set_Initialized(bool value);
    // public VRRig get_Rig()
    // Offset: 0x26F997C
    ::GlobalNamespace::VRRig* get_Rig();
    // public VRRigReliableState get_ReliableState()
    // Offset: 0x26F9984
    ::GlobalNamespace::VRRigReliableState* get_ReliableState();
    // public UnityEngine.Transform get_SpeakerHead()
    // Offset: 0x26F998C
    ::UnityEngine::Transform* get_SpeakerHead();
    // public UnityEngine.AudioSource get_ReplacementVoiceSource()
    // Offset: 0x26F9994
    ::UnityEngine::AudioSource* get_ReplacementVoiceSource();
    // public Photon.Voice.PUN.PhotonVoiceView get_Voice()
    // Offset: 0x26F999C
    ::Photon::Voice::PUN::PhotonVoiceView* get_Voice();
    // public System.Void set_Voice(Photon.Voice.PUN.PhotonVoiceView value)
    // Offset: 0x26F99A4
    void set_Voice(::Photon::Voice::PUN::PhotonVoiceView* value);
    // public Photon.Pun.PhotonView get_photonView()
    // Offset: 0x26F9C34
    ::Photon::Pun::PhotonView* get_photonView();
    // public System.Boolean get_Muted()
    // Offset: 0x26F9C50
    bool get_Muted();
    // public System.Void set_Muted(System.Boolean value)
    // Offset: 0x26F9C60
    void set_Muted(bool value);
    // public Photon.Realtime.Player get_Creator()
    // Offset: 0x26F9C70
    ::Photon::Realtime::Player* get_Creator();
    // public System.Void set_Creator(Photon.Realtime.Player value)
    // Offset: 0x26F9C8C
    void set_Creator(::Photon::Realtime::Player* value);
    // public NetPlayer get_CreatorWrapped()
    // Offset: 0x26F9CCC
    ::GlobalNamespace::NetPlayer* get_CreatorWrapped();
    // public System.Void set_CreatorWrapped(NetPlayer value)
    // Offset: 0x26F9CE8
    void set_CreatorWrapped(::GlobalNamespace::NetPlayer* value);
    // public System.Boolean get_ForceMute()
    // Offset: 0x26F9D50
    bool get_ForceMute();
    // public System.Void set_ForceMute(System.Boolean value)
    // Offset: 0x26F97AC
    void set_ForceMute(bool value);
    // public System.Boolean GetIsPlayerAutoMuted()
    // Offset: 0x26F9D58
    bool GetIsPlayerAutoMuted();
    // public System.Void UpdateAutomuteLevel(System.String autoMuteLevel)
    // Offset: 0x26F9D60
    void UpdateAutomuteLevel(::StringW autoMuteLevel);
    // private System.Void Start()
    // Offset: 0x26F9E34
    void Start();
    // private System.Void OnMultiPlayerStarted()
    // Offset: 0x26F9FAC
    void OnMultiPlayerStarted();
    // private System.Void OnReturnedToSinglePlayer()
    // Offset: 0x26FA048
    void OnReturnedToSinglePlayer();
    // private System.Void OnDisable()
    // Offset: 0x26FA1B8
    void OnDisable();
    // System.Void InitializeNetwork(Photon.Pun.PhotonView photonView, Photon.Voice.PUN.PhotonVoiceView voiceView, VRRigSerializer vrRigSerializer)
    // Offset: 0x26FA32C
    void InitializeNetwork(::Photon::Pun::PhotonView* photonView, ::Photon::Voice::PUN::PhotonVoiceView* voiceView, ::GlobalNamespace::VRRigSerializer* vrRigSerializer);
    // private System.Void InitializeNetwork_Shared(Photon.Pun.PhotonView photonView, VRRigSerializer vrRigSerializer)
    // Offset: 0x26FA438
    void InitializeNetwork_Shared(::Photon::Pun::PhotonView* photonView, ::GlobalNamespace::VRRigSerializer* vrRigSerializer);
    // static private System.Collections.IEnumerator QueueAutomute(Photon.Realtime.Player player)
    // Offset: 0x26FA844
    static ::System::Collections::IEnumerator* QueueAutomute(::Photon::Realtime::Player* player);
    // static private System.Void RequestAutomuteSettings()
    // Offset: 0x26FA8D8
    static void RequestAutomuteSettings();
    // static private System.Void CancelAutomuteRequest()
    // Offset: 0x26FA0B8
    static void CancelAutomuteRequest();
    // static private System.Void ReceiveAutomuteSettings(Photon.Realtime.Player player, System.String score)
    // Offset: 0x26FAF94
    static void ReceiveAutomuteSettings(::Photon::Realtime::Player* player, ::StringW score);
    // private System.Void ProcessAutomute()
    // Offset: 0x26FB090
    void ProcessAutomute();
    // public System.Void RefreshVoiceChat()
    // Offset: 0x26F9A88
    void RefreshVoiceChat();
    // static public System.Void RefreshAllRigVoices()
    // Offset: 0x26FB100
    static void RefreshAllRigVoices();
    // public System.Void .ctor()
    // Offset: 0x26FB6B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RigContainer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RigContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RigContainer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x26FB6CC
    static void _cctor();
  }; // RigContainer
  #pragma pack(pop)
  static check_size<sizeof(RigContainer), 84 + sizeof(int)> __GlobalNamespace_RigContainerSizeCheck;
  static_assert(sizeof(RigContainer) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::get_Initialized
// Il2CppName: get_Initialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::get_Initialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "get_Initialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::set_Initialized
// Il2CppName: set_Initialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)(bool)>(&GlobalNamespace::RigContainer::set_Initialized)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "set_Initialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::get_Rig
// Il2CppName: get_Rig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRRig* (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::get_Rig)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "get_Rig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::get_ReliableState
// Il2CppName: get_ReliableState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRRigReliableState* (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::get_ReliableState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "get_ReliableState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::get_SpeakerHead
// Il2CppName: get_SpeakerHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::get_SpeakerHead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "get_SpeakerHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::get_ReplacementVoiceSource
// Il2CppName: get_ReplacementVoiceSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioSource* (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::get_ReplacementVoiceSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "get_ReplacementVoiceSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::get_Voice
// Il2CppName: get_Voice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::PUN::PhotonVoiceView* (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::get_Voice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "get_Voice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::set_Voice
// Il2CppName: set_Voice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)(::Photon::Voice::PUN::PhotonVoiceView*)>(&GlobalNamespace::RigContainer::set_Voice)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Photon.Voice.PUN", "PhotonVoiceView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "set_Voice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::get_photonView
// Il2CppName: get_photonView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Pun::PhotonView* (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::get_photonView)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "get_photonView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::get_Muted
// Il2CppName: get_Muted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::get_Muted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "get_Muted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::set_Muted
// Il2CppName: set_Muted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)(bool)>(&GlobalNamespace::RigContainer::set_Muted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "set_Muted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::get_Creator
// Il2CppName: get_Creator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Player* (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::get_Creator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "get_Creator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::set_Creator
// Il2CppName: set_Creator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)(::Photon::Realtime::Player*)>(&GlobalNamespace::RigContainer::set_Creator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "set_Creator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::get_CreatorWrapped
// Il2CppName: get_CreatorWrapped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NetPlayer* (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::get_CreatorWrapped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "get_CreatorWrapped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::set_CreatorWrapped
// Il2CppName: set_CreatorWrapped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)(::GlobalNamespace::NetPlayer*)>(&GlobalNamespace::RigContainer::set_CreatorWrapped)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "NetPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "set_CreatorWrapped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::get_ForceMute
// Il2CppName: get_ForceMute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::get_ForceMute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "get_ForceMute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::set_ForceMute
// Il2CppName: set_ForceMute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)(bool)>(&GlobalNamespace::RigContainer::set_ForceMute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "set_ForceMute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::GetIsPlayerAutoMuted
// Il2CppName: GetIsPlayerAutoMuted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::GetIsPlayerAutoMuted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "GetIsPlayerAutoMuted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::UpdateAutomuteLevel
// Il2CppName: UpdateAutomuteLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)(::StringW)>(&GlobalNamespace::RigContainer::UpdateAutomuteLevel)> {
  static const MethodInfo* get() {
    static auto* autoMuteLevel = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "UpdateAutomuteLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{autoMuteLevel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::OnMultiPlayerStarted
// Il2CppName: OnMultiPlayerStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::OnMultiPlayerStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "OnMultiPlayerStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::OnReturnedToSinglePlayer
// Il2CppName: OnReturnedToSinglePlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::OnReturnedToSinglePlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "OnReturnedToSinglePlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::InitializeNetwork
// Il2CppName: InitializeNetwork
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)(::Photon::Pun::PhotonView*, ::Photon::Voice::PUN::PhotonVoiceView*, ::GlobalNamespace::VRRigSerializer*)>(&GlobalNamespace::RigContainer::InitializeNetwork)> {
  static const MethodInfo* get() {
    static auto* photonView = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView")->byval_arg;
    static auto* voiceView = &::il2cpp_utils::GetClassFromName("Photon.Voice.PUN", "PhotonVoiceView")->byval_arg;
    static auto* vrRigSerializer = &::il2cpp_utils::GetClassFromName("", "VRRigSerializer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "InitializeNetwork", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{photonView, voiceView, vrRigSerializer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::InitializeNetwork_Shared
// Il2CppName: InitializeNetwork_Shared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)(::Photon::Pun::PhotonView*, ::GlobalNamespace::VRRigSerializer*)>(&GlobalNamespace::RigContainer::InitializeNetwork_Shared)> {
  static const MethodInfo* get() {
    static auto* photonView = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView")->byval_arg;
    static auto* vrRigSerializer = &::il2cpp_utils::GetClassFromName("", "VRRigSerializer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "InitializeNetwork_Shared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{photonView, vrRigSerializer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::QueueAutomute
// Il2CppName: QueueAutomute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::Photon::Realtime::Player*)>(&GlobalNamespace::RigContainer::QueueAutomute)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "QueueAutomute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::RequestAutomuteSettings
// Il2CppName: RequestAutomuteSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::RigContainer::RequestAutomuteSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "RequestAutomuteSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::CancelAutomuteRequest
// Il2CppName: CancelAutomuteRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::RigContainer::CancelAutomuteRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "CancelAutomuteRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::ReceiveAutomuteSettings
// Il2CppName: ReceiveAutomuteSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Player*, ::StringW)>(&GlobalNamespace::RigContainer::ReceiveAutomuteSettings)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* score = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "ReceiveAutomuteSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player, score});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::ProcessAutomute
// Il2CppName: ProcessAutomute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::ProcessAutomute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "ProcessAutomute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::RefreshVoiceChat
// Il2CppName: RefreshVoiceChat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RigContainer::*)()>(&GlobalNamespace::RigContainer::RefreshVoiceChat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "RefreshVoiceChat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::RefreshAllRigVoices
// Il2CppName: RefreshAllRigVoices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::RigContainer::RefreshAllRigVoices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), "RefreshAllRigVoices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RigContainer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::RigContainer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RigContainer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
