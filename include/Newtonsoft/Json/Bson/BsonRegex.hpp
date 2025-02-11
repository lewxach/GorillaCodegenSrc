// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Bson.BsonToken
#include "Newtonsoft/Json/Bson/BsonToken.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonString
  class BsonString;
  // Forward declaring type: BsonType
  struct BsonType;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonRegex
  class BsonRegex;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonRegex);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonRegex*, "Newtonsoft.Json.Bson", "BsonRegex");
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Bson.BsonRegex
  // [TokenAttribute] Offset: FFFFFFFF
  class BsonRegex : public ::Newtonsoft::Json::Bson::BsonToken {
    public:
    public:
    // private Newtonsoft.Json.Bson.BsonString <Pattern>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Newtonsoft::Json::Bson::BsonString* Pattern;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Bson::BsonString*) == 0x8);
    // private Newtonsoft.Json.Bson.BsonString <Options>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Newtonsoft::Json::Bson::BsonString* Options;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Bson::BsonString*) == 0x8);
    public:
    // Deleting conversion operator: operator ::Newtonsoft::Json::Bson::BsonToken*
    constexpr operator ::Newtonsoft::Json::Bson::BsonToken*() const noexcept = delete;
    // Get instance field reference: private Newtonsoft.Json.Bson.BsonString <Pattern>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Bson::BsonString*& dyn_$Pattern$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.Bson.BsonString <Options>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Bson::BsonString*& dyn_$Options$k__BackingField();
    // public System.Void set_Pattern(Newtonsoft.Json.Bson.BsonString value)
    // Offset: 0x4767840
    void set_Pattern(::Newtonsoft::Json::Bson::BsonString* value);
    // public System.Void set_Options(Newtonsoft.Json.Bson.BsonString value)
    // Offset: 0x4767848
    void set_Options(::Newtonsoft::Json::Bson::BsonString* value);
    // public System.Void .ctor(System.String pattern, System.String options)
    // Offset: 0x4767850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BsonRegex* New_ctor(::StringW pattern, ::StringW options) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Bson::BsonRegex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BsonRegex*, creationType>(pattern, options)));
    }
    // public override Newtonsoft.Json.Bson.BsonType get_Type()
    // Offset: 0x4767924
    // Implemented from: Newtonsoft.Json.Bson.BsonToken
    // Base method: Newtonsoft.Json.Bson.BsonType BsonToken::get_Type()
    ::Newtonsoft::Json::Bson::BsonType get_Type();
  }; // Newtonsoft.Json.Bson.BsonRegex
  #pragma pack(pop)
  static check_size<sizeof(BsonRegex), 32 + sizeof(::Newtonsoft::Json::Bson::BsonString*)> __Newtonsoft_Json_Bson_BsonRegexSizeCheck;
  static_assert(sizeof(BsonRegex) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonRegex::set_Pattern
// Il2CppName: set_Pattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonRegex::*)(::Newtonsoft::Json::Bson::BsonString*)>(&Newtonsoft::Json::Bson::BsonRegex::set_Pattern)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonString")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonRegex*), "set_Pattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonRegex::set_Options
// Il2CppName: set_Options
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonRegex::*)(::Newtonsoft::Json::Bson::BsonString*)>(&Newtonsoft::Json::Bson::BsonRegex::set_Options)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonString")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonRegex*), "set_Options", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonRegex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonRegex::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonType (Newtonsoft::Json::Bson::BsonRegex::*)()>(&Newtonsoft::Json::Bson::BsonRegex::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonRegex*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
