// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.TTS.TTSService
#include "Meta/WitAi/TTS/TTSService.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::TTS::Data
namespace Meta::WitAi::TTS::Data {
  // Forward declaring type: TTSVoiceSettings
  class TTSVoiceSettings;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::TTS::TTSService::$$c__DisplayClass85_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::TTS::TTSService::$$c__DisplayClass85_0*, "Meta.WitAi.TTS", "TTSService/<>c__DisplayClass85_0");
// Type namespace: Meta.WitAi.TTS
namespace Meta::WitAi::TTS {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.TTS.TTSService/<>c__DisplayClass85_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TTSService::$$c__DisplayClass85_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String presetVoiceId
    // Size: 0x8
    // Offset: 0x10
    ::StringW presetVoiceId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return presetVoiceId;
    }
    // Get instance field reference: public System.String presetVoiceId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_presetVoiceId();
    // public System.Void .ctor()
    // Offset: 0x445731C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSService::$$c__DisplayClass85_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::TTS::TTSService::$$c__DisplayClass85_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSService::$$c__DisplayClass85_0*, creationType>()));
    }
    // System.Boolean <GetPresetVoiceSettings>b__0(Meta.WitAi.TTS.Data.TTSVoiceSettings v)
    // Offset: 0x445808C
    bool $GetPresetVoiceSettings$b__0(::Meta::WitAi::TTS::Data::TTSVoiceSettings* v);
  }; // Meta.WitAi.TTS.TTSService/<>c__DisplayClass85_0
  #pragma pack(pop)
  static check_size<sizeof(TTSService::$$c__DisplayClass85_0), 16 + sizeof(::StringW)> __Meta_WitAi_TTS_TTSService_$$c__DisplayClass85_0SizeCheck;
  static_assert(sizeof(TTSService::$$c__DisplayClass85_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::TTS::TTSService::$$c__DisplayClass85_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::TTS::TTSService::$$c__DisplayClass85_0::$GetPresetVoiceSettings$b__0
// Il2CppName: <GetPresetVoiceSettings>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::TTS::TTSService::$$c__DisplayClass85_0::*)(::Meta::WitAi::TTS::Data::TTSVoiceSettings*)>(&Meta::WitAi::TTS::TTSService::$$c__DisplayClass85_0::$GetPresetVoiceSettings$b__0)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Data", "TTSVoiceSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::TTSService::$$c__DisplayClass85_0*), "<GetPresetVoiceSettings>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
