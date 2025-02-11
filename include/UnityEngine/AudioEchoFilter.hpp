// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioEchoFilter
  class AudioEchoFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AudioEchoFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioEchoFilter*, "UnityEngine", "AudioEchoFilter");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioEchoFilter
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class AudioEchoFilter : public ::UnityEngine::Behaviour {
    public:
    // public System.Single get_delay()
    // Offset: 0x5475320
    float get_delay();
    // public System.Void set_delay(System.Single value)
    // Offset: 0x547535C
    void set_delay(float value);
    // public System.Single get_decayRatio()
    // Offset: 0x54753A8
    float get_decayRatio();
    // public System.Void set_decayRatio(System.Single value)
    // Offset: 0x54753E4
    void set_decayRatio(float value);
    // public System.Single get_dryMix()
    // Offset: 0x5475430
    float get_dryMix();
    // public System.Void set_dryMix(System.Single value)
    // Offset: 0x547546C
    void set_dryMix(float value);
    // public System.Single get_wetMix()
    // Offset: 0x54754B8
    float get_wetMix();
    // public System.Void set_wetMix(System.Single value)
    // Offset: 0x54754F4
    void set_wetMix(float value);
    // public System.Void .ctor()
    // Offset: 0x5475540
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioEchoFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AudioEchoFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioEchoFilter*, creationType>()));
    }
  }; // UnityEngine.AudioEchoFilter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AudioEchoFilter::get_delay
// Il2CppName: get_delay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AudioEchoFilter::*)()>(&UnityEngine::AudioEchoFilter::get_delay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioEchoFilter*), "get_delay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioEchoFilter::set_delay
// Il2CppName: set_delay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioEchoFilter::*)(float)>(&UnityEngine::AudioEchoFilter::set_delay)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioEchoFilter*), "set_delay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioEchoFilter::get_decayRatio
// Il2CppName: get_decayRatio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AudioEchoFilter::*)()>(&UnityEngine::AudioEchoFilter::get_decayRatio)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioEchoFilter*), "get_decayRatio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioEchoFilter::set_decayRatio
// Il2CppName: set_decayRatio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioEchoFilter::*)(float)>(&UnityEngine::AudioEchoFilter::set_decayRatio)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioEchoFilter*), "set_decayRatio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioEchoFilter::get_dryMix
// Il2CppName: get_dryMix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AudioEchoFilter::*)()>(&UnityEngine::AudioEchoFilter::get_dryMix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioEchoFilter*), "get_dryMix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioEchoFilter::set_dryMix
// Il2CppName: set_dryMix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioEchoFilter::*)(float)>(&UnityEngine::AudioEchoFilter::set_dryMix)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioEchoFilter*), "set_dryMix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioEchoFilter::get_wetMix
// Il2CppName: get_wetMix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AudioEchoFilter::*)()>(&UnityEngine::AudioEchoFilter::get_wetMix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioEchoFilter*), "get_wetMix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioEchoFilter::set_wetMix
// Il2CppName: set_wetMix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioEchoFilter::*)(float)>(&UnityEngine::AudioEchoFilter::set_wetMix)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioEchoFilter*), "set_wetMix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioEchoFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
