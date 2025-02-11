// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonConverter
#include "Newtonsoft/Json/JsonConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
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
  // Forward declaring type: CustomCreationConverter`1<T>
  template<typename T>
  class CustomCreationConverter_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Converters::CustomCreationConverter_1, "Newtonsoft.Json.Converters", "CustomCreationConverter`1");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Converters.CustomCreationConverter`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  template<typename T>
  class CustomCreationConverter_1 : public ::Newtonsoft::Json::JsonConverter {
    public:
    // public T Create(System.Type objectType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Create(::System::Type* objectType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::CustomCreationConverter_1::Create");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Newtonsoft::Json::Converters::CustomCreationConverter_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, objectType);
    }
    // public override System.Void WriteJson(Newtonsoft.Json.JsonWriter writer, System.Object value, Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Void JsonConverter::WriteJson(Newtonsoft.Json.JsonWriter writer, System.Object value, Newtonsoft.Json.JsonSerializer serializer)
    void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::Il2CppObject* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::CustomCreationConverter_1::WriteJson");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Newtonsoft::Json::JsonConverter*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, writer, value, serializer);
    }
    // public override System.Object ReadJson(Newtonsoft.Json.JsonReader reader, System.Type objectType, System.Object existingValue, Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Object JsonConverter::ReadJson(Newtonsoft.Json.JsonReader reader, System.Type objectType, System.Object existingValue, Newtonsoft.Json.JsonSerializer serializer)
    ::Il2CppObject* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Il2CppObject* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::CustomCreationConverter_1::ReadJson");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Newtonsoft::Json::JsonConverter*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method, reader, objectType, existingValue, serializer);
    }
    // public override System.Boolean CanConvert(System.Type objectType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Boolean JsonConverter::CanConvert(System.Type objectType)
    bool CanConvert(::System::Type* objectType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::CustomCreationConverter_1::CanConvert");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Newtonsoft::Json::JsonConverter*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, objectType);
    }
    // public override System.Boolean get_CanWrite()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Boolean JsonConverter::get_CanWrite()
    bool get_CanWrite() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::CustomCreationConverter_1::get_CanWrite");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Newtonsoft::Json::JsonConverter*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Void JsonConverter::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomCreationConverter_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::CustomCreationConverter_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomCreationConverter_1<T>*, creationType>()));
    }
  }; // Newtonsoft.Json.Converters.CustomCreationConverter`1
  // Could not write size check! Type: Newtonsoft.Json.Converters.CustomCreationConverter`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
