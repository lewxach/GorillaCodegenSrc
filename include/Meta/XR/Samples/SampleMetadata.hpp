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
// Type namespace: Meta.XR.Samples
namespace Meta::XR::Samples {
  // Forward declaring type: SampleMetadata
  class SampleMetadata;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::XR::Samples::SampleMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::Samples::SampleMetadata*, "Meta.XR.Samples", "SampleMetadata");
// Type namespace: Meta.XR.Samples
namespace Meta::XR::Samples {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Meta.XR.Samples.SampleMetadata
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class SampleMetadata : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _timestampOpen
    // Size: 0x4
    // Offset: 0x20
    float timestampOpen;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single _timestampOpen
    [[deprecated("Use field access instead!")]] float& dyn__timestampOpen();
    // public System.Void Awake()
    // Offset: 0x498FD94
    void Awake();
    // public System.Void Start()
    // Offset: 0x498FDB0
    void Start();
    // public System.Void OnDestroy()
    // Offset: 0x4990108
    void OnDestroy();
    // private System.Void SendEvent(System.Int32 eventType)
    // Offset: 0x498FE24
    void SendEvent(int eventType);
    // public System.Void .ctor()
    // Offset: 0x4990114
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SampleMetadata* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::XR::Samples::SampleMetadata::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SampleMetadata*, creationType>()));
    }
  }; // Meta.XR.Samples.SampleMetadata
  #pragma pack(pop)
  static check_size<sizeof(SampleMetadata), 32 + sizeof(float)> __Meta_XR_Samples_SampleMetadataSizeCheck;
  static_assert(sizeof(SampleMetadata) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::XR::Samples::SampleMetadata::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::XR::Samples::SampleMetadata::*)()>(&Meta::XR::Samples::SampleMetadata::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::XR::Samples::SampleMetadata*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::XR::Samples::SampleMetadata::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::XR::Samples::SampleMetadata::*)()>(&Meta::XR::Samples::SampleMetadata::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::XR::Samples::SampleMetadata*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::XR::Samples::SampleMetadata::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::XR::Samples::SampleMetadata::*)()>(&Meta::XR::Samples::SampleMetadata::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::XR::Samples::SampleMetadata*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::XR::Samples::SampleMetadata::SendEvent
// Il2CppName: SendEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::XR::Samples::SampleMetadata::*)(int)>(&Meta::XR::Samples::SampleMetadata::SendEvent)> {
  static const MethodInfo* get() {
    static auto* eventType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::XR::Samples::SampleMetadata*), "SendEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventType});
  }
};
// Writing MetadataGetter for method: Meta::XR::Samples::SampleMetadata::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
