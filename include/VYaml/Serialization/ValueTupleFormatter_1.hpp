// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VYaml.Serialization.IYamlFormatter`1
#include "VYaml/Serialization/IYamlFormatter_1.hpp"
// Including type: System.ValueTuple`1
#include "System/ValueTuple_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VYaml::Serialization
namespace VYaml::Serialization {
  // Forward declaring type: YamlSerializationContext
  class YamlSerializationContext;
  // Forward declaring type: YamlDeserializationContext
  class YamlDeserializationContext;
}
// Completed forward declares
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Forward declaring type: ValueTupleFormatter`1<T1>
  template<typename T1>
  class ValueTupleFormatter_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::VYaml::Serialization::ValueTupleFormatter_1, "VYaml.Serialization", "ValueTupleFormatter`1");
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: VYaml.Serialization.ValueTupleFormatter`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1>
  class ValueTupleFormatter_1 : public ::Il2CppObject/*, public ::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_1<T1>>*/ {
    public:
    // Creating interface conversion operator: operator ::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_1<T1>>
    operator ::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_1<T1>>() noexcept {
      return *reinterpret_cast<::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_1<T1>>*>(this);
    }
    // public System.Void Serialize(ref VYaml.Emitter.Utf8YamlEmitter emitter, System.ValueTuple`1<T1> value, VYaml.Serialization.YamlSerializationContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Serialize(ByRef<::VYaml::Emitter::Utf8YamlEmitter> emitter, ::System::ValueTuple_1<T1> value, ::VYaml::Serialization::YamlSerializationContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::ValueTupleFormatter_1::Serialize");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::VYaml::Serialization::ValueTupleFormatter_1<T1>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(emitter), value, context);
    }
    // public System.ValueTuple`1<T1> Deserialize(ref VYaml.Parser.YamlParser parser, VYaml.Serialization.YamlDeserializationContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ValueTuple_1<T1> Deserialize(ByRef<::VYaml::Parser::YamlParser> parser, ::VYaml::Serialization::YamlDeserializationContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::ValueTupleFormatter_1::Deserialize");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::VYaml::Serialization::ValueTupleFormatter_1<T1>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::ValueTuple_1<T1>, false>(this, ___internal__method, byref(parser), context);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueTupleFormatter_1<T1>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::ValueTupleFormatter_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueTupleFormatter_1<T1>*, creationType>()));
    }
  }; // VYaml.Serialization.ValueTupleFormatter`1
  // Could not write size check! Type: VYaml.Serialization.ValueTupleFormatter`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"