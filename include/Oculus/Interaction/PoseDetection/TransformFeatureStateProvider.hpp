// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.PoseDetection.ITransformFeatureStateProvider
#include "Oculus/Interaction/PoseDetection/ITransformFeatureStateProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: TransformJointData
  class TransformJointData;
  // Forward declaring type: TransformFeatureStateCollection
  class TransformFeatureStateCollection;
  // Forward declaring type: TransformConfig
  class TransformConfig;
  // Forward declaring type: TransformFeature
  struct TransformFeature;
  // Forward declaring type: FeatureStateActiveMode
  struct FeatureStateActiveMode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IHand
  class IHand;
  // Forward declaring type: IHmd
  class IHmd;
  // Forward declaring type: ITrackingToWorldTransformer
  class ITrackingToWorldTransformer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: TransformFeatureStateProvider
  class TransformFeatureStateProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*, "Oculus.Interaction.PoseDetection", "TransformFeatureStateProvider");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.TransformFeatureStateProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class TransformFeatureStateProvider : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*/ {
    public:
    // Nested type: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::$$c
    class $$c;
    public:
    // private UnityEngine.Object _hand
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* hand;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.IHand <Hand>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::Input::IHand* Hand;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IHand*) == 0x8);
    // private UnityEngine.Object _hmd
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Object* hmd;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.IHmd <Hmd>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Interaction::Input::IHmd* Hmd;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IHmd*) == 0x8);
    // private UnityEngine.Object _trackingToWorldTransformer
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Object* trackingToWorldTransformer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.ITrackingToWorldTransformer <TrackingToWorldTransformer>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::Oculus::Interaction::Input::ITrackingToWorldTransformer* TrackingToWorldTransformer;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::ITrackingToWorldTransformer*) == 0x8);
    // private System.Boolean _disableProactiveEvaluation
    // Size: 0x1
    // Offset: 0x50
    bool disableProactiveEvaluation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disableProactiveEvaluation and: jointData
    char __padding6[0x7] = {};
    // private Oculus.Interaction.PoseDetection.TransformJointData _jointData
    // Size: 0x8
    // Offset: 0x58
    ::Oculus::Interaction::PoseDetection::TransformJointData* jointData;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformJointData*) == 0x8);
    // private Oculus.Interaction.PoseDetection.TransformFeatureStateCollection _transformFeatureStateCollection
    // Size: 0x8
    // Offset: 0x60
    ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection* transformFeatureStateCollection;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*) == 0x8);
    // private System.Func`1<System.Single> _timeProvider
    // Size: 0x8
    // Offset: 0x68
    ::System::Func_1<float>* timeProvider;
    // Field size check
    static_assert(sizeof(::System::Func_1<float>*) == 0x8);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x70
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider
    operator ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(this);
    }
    // Get instance field reference: private UnityEngine.Object _hand
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__hand();
    // Get instance field reference: private Oculus.Interaction.Input.IHand <Hand>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IHand*& dyn_$Hand$k__BackingField();
    // Get instance field reference: private UnityEngine.Object _hmd
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__hmd();
    // Get instance field reference: private Oculus.Interaction.Input.IHmd <Hmd>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IHmd*& dyn_$Hmd$k__BackingField();
    // Get instance field reference: private UnityEngine.Object _trackingToWorldTransformer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__trackingToWorldTransformer();
    // Get instance field reference: private Oculus.Interaction.Input.ITrackingToWorldTransformer <TrackingToWorldTransformer>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& dyn_$TrackingToWorldTransformer$k__BackingField();
    // Get instance field reference: private System.Boolean _disableProactiveEvaluation
    [[deprecated("Use field access instead!")]] bool& dyn__disableProactiveEvaluation();
    // Get instance field reference: private Oculus.Interaction.PoseDetection.TransformJointData _jointData
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::TransformJointData*& dyn__jointData();
    // Get instance field reference: private Oculus.Interaction.PoseDetection.TransformFeatureStateCollection _transformFeatureStateCollection
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*& dyn__transformFeatureStateCollection();
    // Get instance field reference: private System.Func`1<System.Single> _timeProvider
    [[deprecated("Use field access instead!")]] ::System::Func_1<float>*& dyn__timeProvider();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // public Oculus.Interaction.Input.IHand get_Hand()
    // Offset: 0x47F4754
    ::Oculus::Interaction::Input::IHand* get_Hand();
    // private System.Void set_Hand(Oculus.Interaction.Input.IHand value)
    // Offset: 0x47F475C
    void set_Hand(::Oculus::Interaction::Input::IHand* value);
    // public Oculus.Interaction.Input.IHmd get_Hmd()
    // Offset: 0x47F4764
    ::Oculus::Interaction::Input::IHmd* get_Hmd();
    // private System.Void set_Hmd(Oculus.Interaction.Input.IHmd value)
    // Offset: 0x47F476C
    void set_Hmd(::Oculus::Interaction::Input::IHmd* value);
    // public Oculus.Interaction.Input.ITrackingToWorldTransformer get_TrackingToWorldTransformer()
    // Offset: 0x47F4774
    ::Oculus::Interaction::Input::ITrackingToWorldTransformer* get_TrackingToWorldTransformer();
    // private System.Void set_TrackingToWorldTransformer(Oculus.Interaction.Input.ITrackingToWorldTransformer value)
    // Offset: 0x47F477C
    void set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer* value);
    // protected System.Void Awake()
    // Offset: 0x47F4784
    void Awake();
    // public System.Void RegisterConfig(Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F4934
    void RegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig* transformConfig);
    // public System.Void UnRegisterConfig(Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F49C8
    void UnRegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig* transformConfig);
    // protected System.Void Start()
    // Offset: 0x47F49E0
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47F4A18
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x47F4B18
    void OnDisable();
    // private System.Void HandDataAvailable()
    // Offset: 0x47F4C18
    void HandDataAvailable();
    // private System.Void UpdateJointData()
    // Offset: 0x47F4C30
    void UpdateJointData();
    // private System.Void UpdateStateForHand()
    // Offset: 0x47F4F20
    void UpdateStateForHand();
    // public System.Boolean IsHandDataValid()
    // Offset: 0x47F4FDC
    bool IsHandDataValid();
    // public System.Boolean IsStateActive(Oculus.Interaction.PoseDetection.TransformConfig config, Oculus.Interaction.PoseDetection.TransformFeature feature, Oculus.Interaction.PoseDetection.FeatureStateActiveMode mode, System.String stateId)
    // Offset: 0x47F4FF8
    bool IsStateActive(::Oculus::Interaction::PoseDetection::TransformConfig* config, ::Oculus::Interaction::PoseDetection::TransformFeature feature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode mode, ::StringW stateId);
    // private System.String GetCurrentFeatureState(Oculus.Interaction.PoseDetection.TransformConfig config, Oculus.Interaction.PoseDetection.TransformFeature feature)
    // Offset: 0x47F5050
    ::StringW GetCurrentFeatureState(::Oculus::Interaction::PoseDetection::TransformConfig* config, ::Oculus::Interaction::PoseDetection::TransformFeature feature);
    // public System.Boolean GetCurrentState(Oculus.Interaction.PoseDetection.TransformConfig config, Oculus.Interaction.PoseDetection.TransformFeature transformFeature, out System.String currentState)
    // Offset: 0x47F50C0
    bool GetCurrentState(::Oculus::Interaction::PoseDetection::TransformConfig* config, ::Oculus::Interaction::PoseDetection::TransformFeature transformFeature, ByRef<::StringW> currentState);
    // public System.Nullable`1<System.Single> GetFeatureValue(Oculus.Interaction.PoseDetection.TransformConfig config, Oculus.Interaction.PoseDetection.TransformFeature transformFeature)
    // Offset: 0x47F511C
    ::System::Nullable_1<float> GetFeatureValue(::Oculus::Interaction::PoseDetection::TransformConfig* config, ::Oculus::Interaction::PoseDetection::TransformFeature transformFeature);
    // public System.Void GetFeatureVectorAndWristPos(Oculus.Interaction.PoseDetection.TransformConfig config, Oculus.Interaction.PoseDetection.TransformFeature transformFeature, System.Boolean isHandVector, ref System.Nullable`1<UnityEngine.Vector3> featureVec, ref System.Nullable`1<UnityEngine.Vector3> wristPos)
    // Offset: 0x47F51AC
    void GetFeatureVectorAndWristPos(::Oculus::Interaction::PoseDetection::TransformConfig* config, ::Oculus::Interaction::PoseDetection::TransformFeature transformFeature, bool isHandVector, ByRef<::System::Nullable_1<::UnityEngine::Vector3>> featureVec, ByRef<::System::Nullable_1<::UnityEngine::Vector3>> wristPos);
    // public System.Void InjectAllTransformFeatureStateProvider(Oculus.Interaction.Input.IHand hand, Oculus.Interaction.Input.IHmd hmd, System.Boolean disableProactiveEvaluation)
    // Offset: 0x47F534C
    void InjectAllTransformFeatureStateProvider(::Oculus::Interaction::Input::IHand* hand, ::Oculus::Interaction::Input::IHmd* hmd, bool disableProactiveEvaluation);
    // public System.Void InjectHand(Oculus.Interaction.Input.IHand hand)
    // Offset: 0x47F5380
    void InjectHand(::Oculus::Interaction::Input::IHand* hand);
    // public System.Void InjectHmd(Oculus.Interaction.Input.IHmd hand)
    // Offset: 0x47F5450
    void InjectHmd(::Oculus::Interaction::Input::IHmd* hand);
    // public System.Void InjectDisableProactiveEvaluation(System.Boolean disabled)
    // Offset: 0x47F5520
    void InjectDisableProactiveEvaluation(bool disabled);
    // public System.Void InjectOptionalTimeProvider(System.Func`1<System.Single> timeProvider)
    // Offset: 0x47F552C
    void InjectOptionalTimeProvider(::System::Func_1<float>* timeProvider);
    // public System.Void .ctor()
    // Offset: 0x47F5534
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformFeatureStateProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformFeatureStateProvider*, creationType>()));
    }
    // private System.Single <RegisterConfig>b__21_0()
    // Offset: 0x47F55A0
    float $RegisterConfig$b__21_0();
  }; // Oculus.Interaction.PoseDetection.TransformFeatureStateProvider
  #pragma pack(pop)
  static check_size<sizeof(TransformFeatureStateProvider), 112 + sizeof(bool)> __Oculus_Interaction_PoseDetection_TransformFeatureStateProviderSizeCheck;
  static_assert(sizeof(TransformFeatureStateProvider) == 0x71);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::get_Hand
// Il2CppName: get_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::IHand* (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::get_Hand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "get_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::set_Hand
// Il2CppName: set_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::set_Hand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "set_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::get_Hmd
// Il2CppName: get_Hmd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::IHmd* (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::get_Hmd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "get_Hmd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::set_Hmd
// Il2CppName: set_Hmd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::Input::IHmd*)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::set_Hmd)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHmd")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "set_Hmd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::get_TrackingToWorldTransformer
// Il2CppName: get_TrackingToWorldTransformer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::ITrackingToWorldTransformer* (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::get_TrackingToWorldTransformer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "get_TrackingToWorldTransformer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::set_TrackingToWorldTransformer
// Il2CppName: set_TrackingToWorldTransformer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::Input::ITrackingToWorldTransformer*)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::set_TrackingToWorldTransformer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "ITrackingToWorldTransformer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "set_TrackingToWorldTransformer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::RegisterConfig
// Il2CppName: RegisterConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::RegisterConfig)> {
  static const MethodInfo* get() {
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "RegisterConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::UnRegisterConfig
// Il2CppName: UnRegisterConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::UnRegisterConfig)> {
  static const MethodInfo* get() {
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "UnRegisterConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::HandDataAvailable
// Il2CppName: HandDataAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::HandDataAvailable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "HandDataAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::UpdateJointData
// Il2CppName: UpdateJointData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::UpdateJointData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "UpdateJointData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::UpdateStateForHand
// Il2CppName: UpdateStateForHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::UpdateStateForHand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "UpdateStateForHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::IsHandDataValid
// Il2CppName: IsHandDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::IsHandDataValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "IsHandDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::IsStateActive
// Il2CppName: IsStateActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode, ::StringW)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::IsStateActive)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->byval_arg;
    static auto* feature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeature")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "FeatureStateActiveMode")->byval_arg;
    static auto* stateId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "IsStateActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config, feature, mode, stateId});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetCurrentFeatureState
// Il2CppName: GetCurrentFeatureState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetCurrentFeatureState)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->byval_arg;
    static auto* feature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeature")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "GetCurrentFeatureState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config, feature});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetCurrentState
// Il2CppName: GetCurrentState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature, ByRef<::StringW>)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetCurrentState)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->byval_arg;
    static auto* transformFeature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeature")->byval_arg;
    static auto* currentState = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "GetCurrentState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config, transformFeature, currentState});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetFeatureValue
// Il2CppName: GetFeatureValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<float> (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetFeatureValue)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->byval_arg;
    static auto* transformFeature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeature")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "GetFeatureValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config, transformFeature});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetFeatureVectorAndWristPos
// Il2CppName: GetFeatureVectorAndWristPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature, bool, ByRef<::System::Nullable_1<::UnityEngine::Vector3>>, ByRef<::System::Nullable_1<::UnityEngine::Vector3>>)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetFeatureVectorAndWristPos)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->byval_arg;
    static auto* transformFeature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeature")->byval_arg;
    static auto* isHandVector = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* featureVec = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->this_arg;
    static auto* wristPos = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "GetFeatureVectorAndWristPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config, transformFeature, isHandVector, featureVec, wristPos});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectAllTransformFeatureStateProvider
// Il2CppName: InjectAllTransformFeatureStateProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::Input::IHmd*, bool)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectAllTransformFeatureStateProvider)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    static auto* hmd = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHmd")->byval_arg;
    static auto* disableProactiveEvaluation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "InjectAllTransformFeatureStateProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, hmd, disableProactiveEvaluation});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectHand
// Il2CppName: InjectHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "InjectHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectHmd
// Il2CppName: InjectHmd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::Input::IHmd*)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectHmd)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHmd")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "InjectHmd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectDisableProactiveEvaluation
// Il2CppName: InjectDisableProactiveEvaluation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(bool)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectDisableProactiveEvaluation)> {
  static const MethodInfo* get() {
    static auto* disabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "InjectDisableProactiveEvaluation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disabled});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectOptionalTimeProvider
// Il2CppName: InjectOptionalTimeProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::System::Func_1<float>*)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectOptionalTimeProvider)> {
  static const MethodInfo* get() {
    static auto* timeProvider = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "InjectOptionalTimeProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeProvider});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::$RegisterConfig$b__21_0
// Il2CppName: <RegisterConfig>b__21_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::$RegisterConfig$b__21_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*), "<RegisterConfig>b__21_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
