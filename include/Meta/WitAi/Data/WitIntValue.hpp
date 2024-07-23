// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Data.WitValue
#include "Meta/WitAi/Data/WitValue.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Data
namespace Meta::WitAi::Data {
  // Forward declaring type: WitIntValue
  class WitIntValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Data::WitIntValue);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Data::WitIntValue*, "Meta.WitAi.Data", "WitIntValue");
// Type namespace: Meta.WitAi.Data
namespace Meta::WitAi::Data {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Data.WitIntValue
  // [TokenAttribute] Offset: FFFFFFFF
  class WitIntValue : public ::Meta::WitAi::Data::WitValue {
    public:
    // public System.Int32 GetIntValue(Meta.WitAi.Json.WitResponseNode response)
    // Offset: 0x4465D40
    int GetIntValue(::Meta::WitAi::Json::WitResponseNode* response);
    // public override System.Object GetValue(Meta.WitAi.Json.WitResponseNode response)
    // Offset: 0x4465CD4
    // Implemented from: Meta.WitAi.Data.WitValue
    // Base method: System.Object WitValue::GetValue(Meta.WitAi.Json.WitResponseNode response)
    ::Il2CppObject* GetValue(::Meta::WitAi::Json::WitResponseNode* response);
    // public override System.Boolean Equals(Meta.WitAi.Json.WitResponseNode response, System.Object value)
    // Offset: 0x4465D68
    // Implemented from: Meta.WitAi.Data.WitValue
    // Base method: System.Boolean WitValue::Equals(Meta.WitAi.Json.WitResponseNode response, System.Object value)
    bool Equals(::Meta::WitAi::Json::WitResponseNode* response, ::Il2CppObject* value);
    // public System.Void .ctor()
    // Offset: 0x4465E3C
    // Implemented from: Meta.WitAi.Data.WitValue
    // Base method: System.Void WitValue::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitIntValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::WitIntValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitIntValue*, creationType>()));
    }
  }; // Meta.WitAi.Data.WitIntValue
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Data::WitIntValue::GetIntValue
// Il2CppName: GetIntValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Meta::WitAi::Data::WitIntValue::*)(::Meta::WitAi::Json::WitResponseNode*)>(&Meta::WitAi::Data::WitIntValue::GetIntValue)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Json", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::WitIntValue*), "GetIntValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::WitIntValue::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Meta::WitAi::Data::WitIntValue::*)(::Meta::WitAi::Json::WitResponseNode*)>(&Meta::WitAi::Data::WitIntValue::GetValue)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Json", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::WitIntValue*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::WitIntValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Data::WitIntValue::*)(::Meta::WitAi::Json::WitResponseNode*, ::Il2CppObject*)>(&Meta::WitAi::Data::WitIntValue::Equals)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Json", "WitResponseNode")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::WitIntValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response, value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::WitIntValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!