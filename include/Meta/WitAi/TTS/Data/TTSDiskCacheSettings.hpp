// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.TTS.Data.TTSDiskCacheLocation
#include "Meta/WitAi/TTS/Data/TTSDiskCacheLocation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Meta.WitAi.TTS.Data
namespace Meta::WitAi::TTS::Data {
  // Forward declaring type: TTSDiskCacheSettings
  class TTSDiskCacheSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, "Meta.WitAi.TTS.Data", "TTSDiskCacheSettings");
// Type namespace: Meta.WitAi.TTS.Data
namespace Meta::WitAi::TTS::Data {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.TTS.Data.TTSDiskCacheSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class TTSDiskCacheSettings : public ::Il2CppObject {
    public:
    public:
    // public Meta.WitAi.TTS.Data.TTSDiskCacheLocation DiskCacheLocation
    // Size: 0x4
    // Offset: 0x10
    ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation DiskCacheLocation;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Data::TTSDiskCacheLocation) == 0x4);
    // public System.Boolean StreamFromDisk
    // Size: 0x1
    // Offset: 0x14
    bool StreamFromDisk;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: StreamFromDisk and: StreamBufferLength
    char __padding1[0x3] = {};
    // public System.Single StreamBufferLength
    // Size: 0x4
    // Offset: 0x18
    float StreamBufferLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public Meta.WitAi.TTS.Data.TTSDiskCacheLocation DiskCacheLocation
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation& dyn_DiskCacheLocation();
    // Get instance field reference: public System.Boolean StreamFromDisk
    [[deprecated("Use field access instead!")]] bool& dyn_StreamFromDisk();
    // Get instance field reference: public System.Single StreamBufferLength
    [[deprecated("Use field access instead!")]] float& dyn_StreamBufferLength();
    // public System.Void .ctor()
    // Offset: 0x4458E08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSDiskCacheSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::TTS::Data::TTSDiskCacheSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSDiskCacheSettings*, creationType>()));
    }
  }; // Meta.WitAi.TTS.Data.TTSDiskCacheSettings
  #pragma pack(pop)
  static check_size<sizeof(TTSDiskCacheSettings), 24 + sizeof(float)> __Meta_WitAi_TTS_Data_TTSDiskCacheSettingsSizeCheck;
  static_assert(sizeof(TTSDiskCacheSettings) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::TTS::Data::TTSDiskCacheSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!