// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.IsoDateTimeConverter
#include "Newtonsoft/Json/Converters/IsoDateTimeConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: KID.Client
namespace KID::Client {
  // Forward declaring type: OpenAPIDateConverter
  class OpenAPIDateConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Client::OpenAPIDateConverter);
DEFINE_IL2CPP_ARG_TYPE(::KID::Client::OpenAPIDateConverter*, "KID.Client", "OpenAPIDateConverter");
// Type namespace: KID.Client
namespace KID::Client {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: KID.Client.OpenAPIDateConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class OpenAPIDateConverter : public ::Newtonsoft::Json::Converters::IsoDateTimeConverter {
    public:
    // public System.Void .ctor()
    // Offset: 0x4389008
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpenAPIDateConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Client::OpenAPIDateConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpenAPIDateConverter*, creationType>()));
    }
  }; // KID.Client.OpenAPIDateConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Client::OpenAPIDateConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!