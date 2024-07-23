// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Requests.AudioStreamHandler
#include "Meta/WitAi/Requests/AudioStreamHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass24_0*, "Meta.WitAi.Requests", "AudioStreamHandler/<>c__DisplayClass24_0");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass24_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AudioStreamHandler::$$c__DisplayClass24_0 : public ::Il2CppObject {
    public:
    public:
    // public Meta.WitAi.Requests.AudioStreamHandler <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::Meta::WitAi::Requests::AudioStreamHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Requests::AudioStreamHandler*) == 0x8);
    // public System.Byte[] receiveData
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> receiveData;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Int32 dataLength
    // Size: 0x4
    // Offset: 0x20
    int dataLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public Meta.WitAi.Requests.AudioStreamHandler <>4__this
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Requests::AudioStreamHandler*& dyn_$$4__this();
    // Get instance field reference: public System.Byte[] receiveData
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_receiveData();
    // Get instance field reference: public System.Int32 dataLength
    [[deprecated("Use field access instead!")]] int& dyn_dataLength();
    // public System.Void .ctor()
    // Offset: 0x4440BD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioStreamHandler::$$c__DisplayClass24_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass24_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioStreamHandler::$$c__DisplayClass24_0*, creationType>()));
    }
    // System.Single[] <ReceiveData>b__0()
    // Offset: 0x4441AA0
    ::ArrayW<float> $ReceiveData$b__0();
  }; // Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass24_0
  #pragma pack(pop)
  static check_size<sizeof(AudioStreamHandler::$$c__DisplayClass24_0), 32 + sizeof(int)> __Meta_WitAi_Requests_AudioStreamHandler_$$c__DisplayClass24_0SizeCheck;
  static_assert(sizeof(AudioStreamHandler::$$c__DisplayClass24_0) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass24_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass24_0::$ReceiveData$b__0
// Il2CppName: <ReceiveData>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass24_0::*)()>(&Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass24_0::$ReceiveData$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass24_0*), "<ReceiveData>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};