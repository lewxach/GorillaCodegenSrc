// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPun
#include "Photon/Pun/MonoBehaviourPun.hpp"
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
  // Forward declaring type: PhotonStreamQueue
  class PhotonStreamQueue;
  // Forward declaring type: PhotonStream
  class PhotonStream;
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonAnimatorView
  class PhotonAnimatorView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::PhotonAnimatorView);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonAnimatorView*, "Photon.Pun", "PhotonAnimatorView");
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.PhotonAnimatorView
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class PhotonAnimatorView : public ::Photon::Pun::MonoBehaviourPun/*, public ::Photon::Pun::IPunObservable*/ {
    public:
    // Nested type: ::Photon::Pun::PhotonAnimatorView::ParameterType
    struct ParameterType;
    // Nested type: ::Photon::Pun::PhotonAnimatorView::SynchronizeType
    struct SynchronizeType;
    // Nested type: ::Photon::Pun::PhotonAnimatorView::SynchronizedParameter
    class SynchronizedParameter;
    // Nested type: ::Photon::Pun::PhotonAnimatorView::SynchronizedLayer
    class SynchronizedLayer;
    // Nested type: ::Photon::Pun::PhotonAnimatorView::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // Nested type: ::Photon::Pun::PhotonAnimatorView::$$c__DisplayClass19_0
    class $$c__DisplayClass19_0;
    // Nested type: ::Photon::Pun::PhotonAnimatorView::$$c__DisplayClass22_0
    class $$c__DisplayClass22_0;
    // Nested type: ::Photon::Pun::PhotonAnimatorView::$$c__DisplayClass23_0
    class $$c__DisplayClass23_0;
    // Nested type: ::Photon::Pun::PhotonAnimatorView::$$c__DisplayClass24_0
    class $$c__DisplayClass24_0;
    // Nested type: ::Photon::Pun::PhotonAnimatorView::$$c__DisplayClass25_0
    class $$c__DisplayClass25_0;
    public:
    // private System.Boolean TriggerUsageWarningDone
    // Size: 0x1
    // Offset: 0x28
    bool TriggerUsageWarningDone;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: TriggerUsageWarningDone and: m_Animator
    char __padding0[0x7] = {};
    // private UnityEngine.Animator m_Animator
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Animator* m_Animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // private Photon.Pun.PhotonStreamQueue m_StreamQueue
    // Size: 0x8
    // Offset: 0x38
    ::Photon::Pun::PhotonStreamQueue* m_StreamQueue;
    // Field size check
    static_assert(sizeof(::Photon::Pun::PhotonStreamQueue*) == 0x8);
    // private System.Boolean ShowLayerWeightsInspector
    // Size: 0x1
    // Offset: 0x40
    bool ShowLayerWeightsInspector;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean ShowParameterInspector
    // Size: 0x1
    // Offset: 0x41
    bool ShowParameterInspector;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ShowParameterInspector and: m_SynchronizeParameters
    char __padding4[0x6] = {};
    // private System.Collections.Generic.List`1<Photon.Pun.PhotonAnimatorView/SynchronizedParameter> m_SynchronizeParameters
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView::SynchronizedParameter*>* m_SynchronizeParameters;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView::SynchronizedParameter*>*) == 0x8);
    // private System.Collections.Generic.List`1<Photon.Pun.PhotonAnimatorView/SynchronizedLayer> m_SynchronizeLayers
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView::SynchronizedLayer*>* m_SynchronizeLayers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView::SynchronizedLayer*>*) == 0x8);
    // private UnityEngine.Vector3 m_ReceiverPosition
    // Size: 0xC
    // Offset: 0x58
    ::UnityEngine::Vector3 m_ReceiverPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single m_LastDeserializeTime
    // Size: 0x4
    // Offset: 0x64
    float m_LastDeserializeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_WasSynchronizeTypeChanged
    // Size: 0x1
    // Offset: 0x68
    bool m_WasSynchronizeTypeChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_WasSynchronizeTypeChanged and: m_raisedDiscreteTriggersCache
    char __padding9[0x7] = {};
    // private System.Collections.Generic.List`1<System.String> m_raisedDiscreteTriggersCache
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::List_1<::StringW>* m_raisedDiscreteTriggersCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunObservable
    operator ::Photon::Pun::IPunObservable() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunObservable*>(this);
    }
    // Get instance field reference: private System.Boolean TriggerUsageWarningDone
    [[deprecated("Use field access instead!")]] bool& dyn_TriggerUsageWarningDone();
    // Get instance field reference: private UnityEngine.Animator m_Animator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn_m_Animator();
    // Get instance field reference: private Photon.Pun.PhotonStreamQueue m_StreamQueue
    [[deprecated("Use field access instead!")]] ::Photon::Pun::PhotonStreamQueue*& dyn_m_StreamQueue();
    // Get instance field reference: private System.Boolean ShowLayerWeightsInspector
    [[deprecated("Use field access instead!")]] bool& dyn_ShowLayerWeightsInspector();
    // Get instance field reference: private System.Boolean ShowParameterInspector
    [[deprecated("Use field access instead!")]] bool& dyn_ShowParameterInspector();
    // Get instance field reference: private System.Collections.Generic.List`1<Photon.Pun.PhotonAnimatorView/SynchronizedParameter> m_SynchronizeParameters
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView::SynchronizedParameter*>*& dyn_m_SynchronizeParameters();
    // Get instance field reference: private System.Collections.Generic.List`1<Photon.Pun.PhotonAnimatorView/SynchronizedLayer> m_SynchronizeLayers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView::SynchronizedLayer*>*& dyn_m_SynchronizeLayers();
    // Get instance field reference: private UnityEngine.Vector3 m_ReceiverPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_ReceiverPosition();
    // Get instance field reference: private System.Single m_LastDeserializeTime
    [[deprecated("Use field access instead!")]] float& dyn_m_LastDeserializeTime();
    // Get instance field reference: private System.Boolean m_WasSynchronizeTypeChanged
    [[deprecated("Use field access instead!")]] bool& dyn_m_WasSynchronizeTypeChanged();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> m_raisedDiscreteTriggersCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_m_raisedDiscreteTriggersCache();
    // private System.Void Awake()
    // Offset: 0x4A59410
    void Awake();
    // private System.Void Update()
    // Offset: 0x4A59468
    void Update();
    // public System.Void CacheDiscreteTriggers()
    // Offset: 0x4A598CC
    void CacheDiscreteTriggers();
    // public System.Boolean DoesLayerSynchronizeTypeExist(System.Int32 layerIndex)
    // Offset: 0x4A59D1C
    bool DoesLayerSynchronizeTypeExist(int layerIndex);
    // public System.Boolean DoesParameterSynchronizeTypeExist(System.String name)
    // Offset: 0x4A59E08
    bool DoesParameterSynchronizeTypeExist(::StringW name);
    // public System.Collections.Generic.List`1<Photon.Pun.PhotonAnimatorView/SynchronizedLayer> GetSynchronizedLayers()
    // Offset: 0x4A59F00
    ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView::SynchronizedLayer*>* GetSynchronizedLayers();
    // public System.Collections.Generic.List`1<Photon.Pun.PhotonAnimatorView/SynchronizedParameter> GetSynchronizedParameters()
    // Offset: 0x4A59F08
    ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView::SynchronizedParameter*>* GetSynchronizedParameters();
    // public Photon.Pun.PhotonAnimatorView/SynchronizeType GetLayerSynchronizeType(System.Int32 layerIndex)
    // Offset: 0x4A59F10
    ::Photon::Pun::PhotonAnimatorView::SynchronizeType GetLayerSynchronizeType(int layerIndex);
    // public Photon.Pun.PhotonAnimatorView/SynchronizeType GetParameterSynchronizeType(System.String name)
    // Offset: 0x4A5A034
    ::Photon::Pun::PhotonAnimatorView::SynchronizeType GetParameterSynchronizeType(::StringW name);
    // public System.Void SetLayerSynchronized(System.Int32 layerIndex, Photon.Pun.PhotonAnimatorView/SynchronizeType synchronizeType)
    // Offset: 0x4A5A164
    void SetLayerSynchronized(int layerIndex, ::Photon::Pun::PhotonAnimatorView::SynchronizeType synchronizeType);
    // public System.Void SetParameterSynchronized(System.String name, Photon.Pun.PhotonAnimatorView/ParameterType type, Photon.Pun.PhotonAnimatorView/SynchronizeType synchronizeType)
    // Offset: 0x4A5A394
    void SetParameterSynchronized(::StringW name, ::Photon::Pun::PhotonAnimatorView::ParameterType type, ::Photon::Pun::PhotonAnimatorView::SynchronizeType synchronizeType);
    // private System.Void SerializeDataContinuously()
    // Offset: 0x4A595A0
    void SerializeDataContinuously();
    // private System.Void DeserializeDataContinuously()
    // Offset: 0x4A59A24
    void DeserializeDataContinuously();
    // private System.Void SerializeDataDiscretly(Photon.Pun.PhotonStream stream)
    // Offset: 0x4A5A5F8
    void SerializeDataDiscretly(::Photon::Pun::PhotonStream* stream);
    // private System.Void DeserializeDataDiscretly(Photon.Pun.PhotonStream stream)
    // Offset: 0x4A5A92C
    void DeserializeDataDiscretly(::Photon::Pun::PhotonStream* stream);
    // private System.Void SerializeSynchronizationTypeState(Photon.Pun.PhotonStream stream)
    // Offset: 0x4A5ACE0
    void SerializeSynchronizationTypeState(::Photon::Pun::PhotonStream* stream);
    // private System.Void DeserializeSynchronizationTypeState(Photon.Pun.PhotonStream stream)
    // Offset: 0x4A5AE70
    void DeserializeSynchronizationTypeState(::Photon::Pun::PhotonStream* stream);
    // public System.Void OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x4A5AFFC
    void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);
    // public System.Void .ctor()
    // Offset: 0x4A5B138
    // Implemented from: Photon.Pun.MonoBehaviourPun
    // Base method: System.Void MonoBehaviourPun::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhotonAnimatorView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::PhotonAnimatorView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhotonAnimatorView*, creationType>()));
    }
  }; // Photon.Pun.PhotonAnimatorView
  #pragma pack(pop)
  static check_size<sizeof(PhotonAnimatorView), 112 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __Photon_Pun_PhotonAnimatorViewSizeCheck;
  static_assert(sizeof(PhotonAnimatorView) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonAnimatorView::*)()>(&Photon::Pun::PhotonAnimatorView::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonAnimatorView::*)()>(&Photon::Pun::PhotonAnimatorView::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::CacheDiscreteTriggers
// Il2CppName: CacheDiscreteTriggers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonAnimatorView::*)()>(&Photon::Pun::PhotonAnimatorView::CacheDiscreteTriggers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "CacheDiscreteTriggers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::DoesLayerSynchronizeTypeExist
// Il2CppName: DoesLayerSynchronizeTypeExist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Pun::PhotonAnimatorView::*)(int)>(&Photon::Pun::PhotonAnimatorView::DoesLayerSynchronizeTypeExist)> {
  static const MethodInfo* get() {
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "DoesLayerSynchronizeTypeExist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerIndex});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::DoesParameterSynchronizeTypeExist
// Il2CppName: DoesParameterSynchronizeTypeExist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Pun::PhotonAnimatorView::*)(::StringW)>(&Photon::Pun::PhotonAnimatorView::DoesParameterSynchronizeTypeExist)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "DoesParameterSynchronizeTypeExist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::GetSynchronizedLayers
// Il2CppName: GetSynchronizedLayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView::SynchronizedLayer*>* (Photon::Pun::PhotonAnimatorView::*)()>(&Photon::Pun::PhotonAnimatorView::GetSynchronizedLayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "GetSynchronizedLayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::GetSynchronizedParameters
// Il2CppName: GetSynchronizedParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView::SynchronizedParameter*>* (Photon::Pun::PhotonAnimatorView::*)()>(&Photon::Pun::PhotonAnimatorView::GetSynchronizedParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "GetSynchronizedParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::GetLayerSynchronizeType
// Il2CppName: GetLayerSynchronizeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Pun::PhotonAnimatorView::SynchronizeType (Photon::Pun::PhotonAnimatorView::*)(int)>(&Photon::Pun::PhotonAnimatorView::GetLayerSynchronizeType)> {
  static const MethodInfo* get() {
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "GetLayerSynchronizeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerIndex});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::GetParameterSynchronizeType
// Il2CppName: GetParameterSynchronizeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Pun::PhotonAnimatorView::SynchronizeType (Photon::Pun::PhotonAnimatorView::*)(::StringW)>(&Photon::Pun::PhotonAnimatorView::GetParameterSynchronizeType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "GetParameterSynchronizeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::SetLayerSynchronized
// Il2CppName: SetLayerSynchronized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonAnimatorView::*)(int, ::Photon::Pun::PhotonAnimatorView::SynchronizeType)>(&Photon::Pun::PhotonAnimatorView::SetLayerSynchronized)> {
  static const MethodInfo* get() {
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* synchronizeType = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonAnimatorView/SynchronizeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "SetLayerSynchronized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerIndex, synchronizeType});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::SetParameterSynchronized
// Il2CppName: SetParameterSynchronized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonAnimatorView::*)(::StringW, ::Photon::Pun::PhotonAnimatorView::ParameterType, ::Photon::Pun::PhotonAnimatorView::SynchronizeType)>(&Photon::Pun::PhotonAnimatorView::SetParameterSynchronized)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonAnimatorView/ParameterType")->byval_arg;
    static auto* synchronizeType = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonAnimatorView/SynchronizeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "SetParameterSynchronized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, type, synchronizeType});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::SerializeDataContinuously
// Il2CppName: SerializeDataContinuously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonAnimatorView::*)()>(&Photon::Pun::PhotonAnimatorView::SerializeDataContinuously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "SerializeDataContinuously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::DeserializeDataContinuously
// Il2CppName: DeserializeDataContinuously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonAnimatorView::*)()>(&Photon::Pun::PhotonAnimatorView::DeserializeDataContinuously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "DeserializeDataContinuously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::SerializeDataDiscretly
// Il2CppName: SerializeDataDiscretly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*)>(&Photon::Pun::PhotonAnimatorView::SerializeDataDiscretly)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "SerializeDataDiscretly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::DeserializeDataDiscretly
// Il2CppName: DeserializeDataDiscretly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*)>(&Photon::Pun::PhotonAnimatorView::DeserializeDataDiscretly)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "DeserializeDataDiscretly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::SerializeSynchronizationTypeState
// Il2CppName: SerializeSynchronizationTypeState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*)>(&Photon::Pun::PhotonAnimatorView::SerializeSynchronizationTypeState)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "SerializeSynchronizationTypeState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::DeserializeSynchronizationTypeState
// Il2CppName: DeserializeSynchronizationTypeState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*)>(&Photon::Pun::PhotonAnimatorView::DeserializeSynchronizationTypeState)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "DeserializeSynchronizationTypeState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::OnPhotonSerializeView
// Il2CppName: OnPhotonSerializeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&Photon::Pun::PhotonAnimatorView::OnPhotonSerializeView)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView*), "OnPhotonSerializeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, info});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!