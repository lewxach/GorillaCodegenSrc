// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseClass
  class WitResponseClass;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Json
namespace Meta::WitAi::Json {
  // Forward declaring type: IJsonSerializer
  class IJsonSerializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Json::IJsonSerializer);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Json::IJsonSerializer*, "Meta.WitAi.Json", "IJsonSerializer");
// Type namespace: Meta.WitAi.Json
namespace Meta::WitAi::Json {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Json.IJsonSerializer
  // [TokenAttribute] Offset: FFFFFFFF
  class IJsonSerializer {
    public:
    // public System.Boolean SerializeObject(Meta.WitAi.Json.WitResponseClass jsonObject)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool SerializeObject(::Meta::WitAi::Json::WitResponseClass* jsonObject);
  }; // Meta.WitAi.Json.IJsonSerializer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Json::IJsonSerializer::SerializeObject
// Il2CppName: SerializeObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Json::IJsonSerializer::*)(::Meta::WitAi::Json::WitResponseClass*)>(&Meta::WitAi::Json::IJsonSerializer::SerializeObject)> {
  static const MethodInfo* get() {
    static auto* jsonObject = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Json", "WitResponseClass")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::IJsonSerializer*), "SerializeObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jsonObject});
  }
};