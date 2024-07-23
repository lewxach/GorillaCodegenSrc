// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.DateTimeConverterBase
#include "Newtonsoft/Json/Converters/DateTimeConverterBase.hpp"
// Including type: System.Globalization.DateTimeStyles
#include "System/Globalization/DateTimeStyles.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonWriter
  class JsonWriter;
  // Forward declaring type: JsonSerializer
  class JsonSerializer;
  // Forward declaring type: JsonReader
  class JsonReader;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: IsoDateTimeConverter
  class IsoDateTimeConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::IsoDateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::IsoDateTimeConverter*, "Newtonsoft.Json.Converters", "IsoDateTimeConverter");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.IsoDateTimeConverter
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  class IsoDateTimeConverter : public ::Newtonsoft::Json::Converters::DateTimeConverterBase {
    public:
    public:
    // private System.Globalization.DateTimeStyles _dateTimeStyles
    // Size: 0x4
    // Offset: 0x10
    ::System::Globalization::DateTimeStyles dateTimeStyles;
    // Field size check
    static_assert(sizeof(::System::Globalization::DateTimeStyles) == 0x4);
    // Padding between fields: dateTimeStyles and: dateTimeFormat
    char __padding0[0x4] = {};
    // private System.String _dateTimeFormat
    // Size: 0x8
    // Offset: 0x18
    ::StringW dateTimeFormat;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Globalization.CultureInfo _culture
    // Size: 0x8
    // Offset: 0x20
    ::System::Globalization::CultureInfo* culture;
    // Field size check
    static_assert(sizeof(::System::Globalization::CultureInfo*) == 0x8);
    public:
    // static field const value: static private System.String DefaultDateTimeFormat
    static constexpr const char* DefaultDateTimeFormat = "yyyy'-'MM'-'dd'T'HH':'mm':'ss.FFFFFFFK";
    // Get static field: static private System.String DefaultDateTimeFormat
    static ::StringW _get_DefaultDateTimeFormat();
    // Set static field: static private System.String DefaultDateTimeFormat
    static void _set_DefaultDateTimeFormat(::StringW value);
    // Get instance field reference: private System.Globalization.DateTimeStyles _dateTimeStyles
    [[deprecated("Use field access instead!")]] ::System::Globalization::DateTimeStyles& dyn__dateTimeStyles();
    // Get instance field reference: private System.String _dateTimeFormat
    [[deprecated("Use field access instead!")]] ::StringW& dyn__dateTimeFormat();
    // Get instance field reference: private System.Globalization.CultureInfo _culture
    [[deprecated("Use field access instead!")]] ::System::Globalization::CultureInfo*& dyn__culture();
    // public System.Globalization.DateTimeStyles get_DateTimeStyles()
    // Offset: 0x47579D8
    ::System::Globalization::DateTimeStyles get_DateTimeStyles();
    // public System.Void set_DateTimeStyles(System.Globalization.DateTimeStyles value)
    // Offset: 0x47579E0
    void set_DateTimeStyles(::System::Globalization::DateTimeStyles value);
    // public System.String get_DateTimeFormat()
    // Offset: 0x47579E8
    ::StringW get_DateTimeFormat();
    // public System.Void set_DateTimeFormat(System.String value)
    // Offset: 0x4757A3C
    void set_DateTimeFormat(::StringW value);
    // public System.Globalization.CultureInfo get_Culture()
    // Offset: 0x4757A7C
    ::System::Globalization::CultureInfo* get_Culture();
    // public System.Void set_Culture(System.Globalization.CultureInfo value)
    // Offset: 0x4757AE4
    void set_Culture(::System::Globalization::CultureInfo* value);
    // public override System.Void WriteJson(Newtonsoft.Json.JsonWriter writer, System.Object value, Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0x4757AEC
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Void JsonConverter::WriteJson(Newtonsoft.Json.JsonWriter writer, System.Object value, Newtonsoft.Json.JsonSerializer serializer)
    void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::Il2CppObject* value, ::Newtonsoft::Json::JsonSerializer* serializer);
    // public override System.Object ReadJson(Newtonsoft.Json.JsonReader reader, System.Type objectType, System.Object existingValue, Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0x4757D04
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Object JsonConverter::ReadJson(Newtonsoft.Json.JsonReader reader, System.Type objectType, System.Object existingValue, Newtonsoft.Json.JsonSerializer serializer)
    ::Il2CppObject* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Il2CppObject* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);
    // public System.Void .ctor()
    // Offset: 0x47581FC
    // Implemented from: Newtonsoft.Json.Converters.DateTimeConverterBase
    // Base method: System.Void DateTimeConverterBase::.ctor()
    // Base method: System.Void JsonConverter::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IsoDateTimeConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::IsoDateTimeConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IsoDateTimeConverter*, creationType>()));
    }
  }; // Newtonsoft.Json.Converters.IsoDateTimeConverter
  #pragma pack(pop)
  static check_size<sizeof(IsoDateTimeConverter), 32 + sizeof(::System::Globalization::CultureInfo*)> __Newtonsoft_Json_Converters_IsoDateTimeConverterSizeCheck;
  static_assert(sizeof(IsoDateTimeConverter) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::IsoDateTimeConverter::get_DateTimeStyles
// Il2CppName: get_DateTimeStyles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DateTimeStyles (Newtonsoft::Json::Converters::IsoDateTimeConverter::*)()>(&Newtonsoft::Json::Converters::IsoDateTimeConverter::get_DateTimeStyles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::IsoDateTimeConverter*), "get_DateTimeStyles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::IsoDateTimeConverter::set_DateTimeStyles
// Il2CppName: set_DateTimeStyles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::IsoDateTimeConverter::*)(::System::Globalization::DateTimeStyles)>(&Newtonsoft::Json::Converters::IsoDateTimeConverter::set_DateTimeStyles)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeStyles")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::IsoDateTimeConverter*), "set_DateTimeStyles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::IsoDateTimeConverter::get_DateTimeFormat
// Il2CppName: get_DateTimeFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::IsoDateTimeConverter::*)()>(&Newtonsoft::Json::Converters::IsoDateTimeConverter::get_DateTimeFormat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::IsoDateTimeConverter*), "get_DateTimeFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::IsoDateTimeConverter::set_DateTimeFormat
// Il2CppName: set_DateTimeFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::IsoDateTimeConverter::*)(::StringW)>(&Newtonsoft::Json::Converters::IsoDateTimeConverter::set_DateTimeFormat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::IsoDateTimeConverter*), "set_DateTimeFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::IsoDateTimeConverter::get_Culture
// Il2CppName: get_Culture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (Newtonsoft::Json::Converters::IsoDateTimeConverter::*)()>(&Newtonsoft::Json::Converters::IsoDateTimeConverter::get_Culture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::IsoDateTimeConverter*), "get_Culture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::IsoDateTimeConverter::set_Culture
// Il2CppName: set_Culture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::IsoDateTimeConverter::*)(::System::Globalization::CultureInfo*)>(&Newtonsoft::Json::Converters::IsoDateTimeConverter::set_Culture)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::IsoDateTimeConverter*), "set_Culture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::IsoDateTimeConverter::WriteJson
// Il2CppName: WriteJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::IsoDateTimeConverter::*)(::Newtonsoft::Json::JsonWriter*, ::Il2CppObject*, ::Newtonsoft::Json::JsonSerializer*)>(&Newtonsoft::Json::Converters::IsoDateTimeConverter::WriteJson)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonWriter")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* serializer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonSerializer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::IsoDateTimeConverter*), "WriteJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, value, serializer});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::IsoDateTimeConverter::ReadJson
// Il2CppName: ReadJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Converters::IsoDateTimeConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Il2CppObject*, ::Newtonsoft::Json::JsonSerializer*)>(&Newtonsoft::Json::Converters::IsoDateTimeConverter::ReadJson)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* existingValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* serializer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonSerializer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::IsoDateTimeConverter*), "ReadJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, objectType, existingValue, serializer});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::IsoDateTimeConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!