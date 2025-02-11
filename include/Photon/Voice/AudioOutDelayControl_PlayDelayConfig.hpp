// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.AudioOutDelayControl
#include "Photon/Voice/AudioOutDelayControl.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::AudioOutDelayControl::PlayDelayConfig);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::AudioOutDelayControl::PlayDelayConfig*, "Photon.Voice", "AudioOutDelayControl/PlayDelayConfig");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.AudioOutDelayControl/PlayDelayConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioOutDelayControl::PlayDelayConfig : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 <Low>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int Low;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <High>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int High;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <Max>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int Max;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <SpeedUpPerc>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int SpeedUpPerc;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 <Low>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Low$k__BackingField();
    // Get instance field reference: private System.Int32 <High>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$High$k__BackingField();
    // Get instance field reference: private System.Int32 <Max>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Max$k__BackingField();
    // Get instance field reference: private System.Int32 <SpeedUpPerc>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$SpeedUpPerc$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0x4A624BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioOutDelayControl::PlayDelayConfig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioOutDelayControl::PlayDelayConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioOutDelayControl::PlayDelayConfig*, creationType>()));
    }
    // public System.Int32 get_Low()
    // Offset: 0x4A624E0
    int get_Low();
    // public System.Void set_Low(System.Int32 value)
    // Offset: 0x4A624E8
    void set_Low(int value);
    // public System.Int32 get_High()
    // Offset: 0x4A624F0
    int get_High();
    // public System.Void set_High(System.Int32 value)
    // Offset: 0x4A624F8
    void set_High(int value);
    // public System.Int32 get_Max()
    // Offset: 0x4A62500
    int get_Max();
    // public System.Void set_Max(System.Int32 value)
    // Offset: 0x4A62508
    void set_Max(int value);
    // public System.Int32 get_SpeedUpPerc()
    // Offset: 0x4A62510
    int get_SpeedUpPerc();
    // public System.Void set_SpeedUpPerc(System.Int32 value)
    // Offset: 0x4A62518
    void set_SpeedUpPerc(int value);
    // public Photon.Voice.AudioOutDelayControl/PlayDelayConfig Clone()
    // Offset: 0x4A62520
    ::Photon::Voice::AudioOutDelayControl::PlayDelayConfig* Clone();
  }; // Photon.Voice.AudioOutDelayControl/PlayDelayConfig
  #pragma pack(pop)
  static check_size<sizeof(AudioOutDelayControl::PlayDelayConfig), 28 + sizeof(int)> __Photon_Voice_AudioOutDelayControl_PlayDelayConfigSizeCheck;
  static_assert(sizeof(AudioOutDelayControl::PlayDelayConfig) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::AudioOutDelayControl::PlayDelayConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::AudioOutDelayControl::PlayDelayConfig::get_Low
// Il2CppName: get_Low
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::AudioOutDelayControl::PlayDelayConfig::*)()>(&Photon::Voice::AudioOutDelayControl::PlayDelayConfig::get_Low)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioOutDelayControl::PlayDelayConfig*), "get_Low", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioOutDelayControl::PlayDelayConfig::set_Low
// Il2CppName: set_Low
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::AudioOutDelayControl::PlayDelayConfig::*)(int)>(&Photon::Voice::AudioOutDelayControl::PlayDelayConfig::set_Low)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioOutDelayControl::PlayDelayConfig*), "set_Low", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioOutDelayControl::PlayDelayConfig::get_High
// Il2CppName: get_High
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::AudioOutDelayControl::PlayDelayConfig::*)()>(&Photon::Voice::AudioOutDelayControl::PlayDelayConfig::get_High)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioOutDelayControl::PlayDelayConfig*), "get_High", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioOutDelayControl::PlayDelayConfig::set_High
// Il2CppName: set_High
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::AudioOutDelayControl::PlayDelayConfig::*)(int)>(&Photon::Voice::AudioOutDelayControl::PlayDelayConfig::set_High)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioOutDelayControl::PlayDelayConfig*), "set_High", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioOutDelayControl::PlayDelayConfig::get_Max
// Il2CppName: get_Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::AudioOutDelayControl::PlayDelayConfig::*)()>(&Photon::Voice::AudioOutDelayControl::PlayDelayConfig::get_Max)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioOutDelayControl::PlayDelayConfig*), "get_Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioOutDelayControl::PlayDelayConfig::set_Max
// Il2CppName: set_Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::AudioOutDelayControl::PlayDelayConfig::*)(int)>(&Photon::Voice::AudioOutDelayControl::PlayDelayConfig::set_Max)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioOutDelayControl::PlayDelayConfig*), "set_Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioOutDelayControl::PlayDelayConfig::get_SpeedUpPerc
// Il2CppName: get_SpeedUpPerc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::AudioOutDelayControl::PlayDelayConfig::*)()>(&Photon::Voice::AudioOutDelayControl::PlayDelayConfig::get_SpeedUpPerc)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioOutDelayControl::PlayDelayConfig*), "get_SpeedUpPerc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioOutDelayControl::PlayDelayConfig::set_SpeedUpPerc
// Il2CppName: set_SpeedUpPerc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::AudioOutDelayControl::PlayDelayConfig::*)(int)>(&Photon::Voice::AudioOutDelayControl::PlayDelayConfig::set_SpeedUpPerc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioOutDelayControl::PlayDelayConfig*), "set_SpeedUpPerc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioOutDelayControl::PlayDelayConfig::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::AudioOutDelayControl::PlayDelayConfig* (Photon::Voice::AudioOutDelayControl::PlayDelayConfig::*)()>(&Photon::Voice::AudioOutDelayControl::PlayDelayConfig::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioOutDelayControl::PlayDelayConfig*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
