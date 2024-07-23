// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Requests.AudioStreamHandler
#include "Meta/WitAi/Requests/AudioStreamHandler.hpp"
// Including type: Meta.WitAi.Requests.AudioStreamDecodeType
#include "Meta/WitAi/Requests/AudioStreamDecodeType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass36_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass36_0*, "Meta.WitAi.Requests", "AudioStreamHandler/<>c__DisplayClass36_0");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass36_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AudioStreamHandler::$$c__DisplayClass36_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Byte[] rawData
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> rawData;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public Meta.WitAi.Requests.AudioStreamDecodeType decodeType
    // Size: 0x4
    // Offset: 0x18
    ::Meta::WitAi::Requests::AudioStreamDecodeType decodeType;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Requests::AudioStreamDecodeType) == 0x4);
    // Padding between fields: decodeType and: onComplete
    char __padding1[0x4] = {};
    // public System.Action`2<UnityEngine.AudioClip,System.String> onComplete
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_2<::UnityEngine::AudioClip*, ::StringW>* onComplete;
    // Field size check
    static_assert(sizeof(::System::Action_2<::UnityEngine::AudioClip*, ::StringW>*) == 0x8);
    // public System.String clipName
    // Size: 0x8
    // Offset: 0x28
    ::StringW clipName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 channels
    // Size: 0x4
    // Offset: 0x30
    int channels;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 sampleRate
    // Size: 0x4
    // Offset: 0x34
    int sampleRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Byte[] rawData
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_rawData();
    // Get instance field reference: public Meta.WitAi.Requests.AudioStreamDecodeType decodeType
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Requests::AudioStreamDecodeType& dyn_decodeType();
    // Get instance field reference: public System.Action`2<UnityEngine.AudioClip,System.String> onComplete
    [[deprecated("Use field access instead!")]] ::System::Action_2<::UnityEngine::AudioClip*, ::StringW>*& dyn_onComplete();
    // Get instance field reference: public System.String clipName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_clipName();
    // Get instance field reference: public System.Int32 channels
    [[deprecated("Use field access instead!")]] int& dyn_channels();
    // Get instance field reference: public System.Int32 sampleRate
    [[deprecated("Use field access instead!")]] int& dyn_sampleRate();
    // public System.Void .ctor()
    // Offset: 0x4441940
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioStreamHandler::$$c__DisplayClass36_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass36_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioStreamHandler::$$c__DisplayClass36_0*, creationType>()));
    }
    // System.Single[] <GetClipFromRawDataAsync>b__0()
    // Offset: 0x4441AE0
    ::ArrayW<float> $GetClipFromRawDataAsync$b__0();
    // System.Void <GetClipFromRawDataAsync>b__1(System.Single[] samples, System.String error)
    // Offset: 0x4441AF0
    void $GetClipFromRawDataAsync$b__1(::ArrayW<float> samples, ::StringW error);
  }; // Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass36_0
  #pragma pack(pop)
  static check_size<sizeof(AudioStreamHandler::$$c__DisplayClass36_0), 52 + sizeof(int)> __Meta_WitAi_Requests_AudioStreamHandler_$$c__DisplayClass36_0SizeCheck;
  static_assert(sizeof(AudioStreamHandler::$$c__DisplayClass36_0) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass36_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass36_0::$GetClipFromRawDataAsync$b__0
// Il2CppName: <GetClipFromRawDataAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass36_0::*)()>(&Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass36_0::$GetClipFromRawDataAsync$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass36_0*), "<GetClipFromRawDataAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass36_0::$GetClipFromRawDataAsync$b__1
// Il2CppName: <GetClipFromRawDataAsync>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass36_0::*)(::ArrayW<float>, ::StringW)>(&Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass36_0::$GetClipFromRawDataAsync$b__1)> {
  static const MethodInfo* get() {
    static auto* samples = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass36_0*), "<GetClipFromRawDataAsync>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{samples, error});
  }
};