// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VYaml.Serialization.IYamlFormatter`1
#include "VYaml/Serialization/IYamlFormatter_1.hpp"
// Including type: System.ValueTuple`7
#include "System/ValueTuple_7.hpp"
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
  // Forward declaring type: ValueTupleFormatter`7<T1, T2, T3, T4, T5, T6, T7>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
  class ValueTupleFormatter_7;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::VYaml::Serialization::ValueTupleFormatter_7, "VYaml.Serialization", "ValueTupleFormatter`7");
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: VYaml.Serialization.ValueTupleFormatter`7
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
  class ValueTupleFormatter_7 : public ::Il2CppObject/*, public ::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>*/ {
    public:
    // Creating interface conversion operator: operator ::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>
    operator ::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>() noexcept {
      return *reinterpret_cast<::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>*>(this);
    }
    // public System.Void Serialize(ref VYaml.Emitter.Utf8YamlEmitter emitter, System.ValueTuple`7<T1,T2,T3,T4,T5,T6,T7> value, VYaml.Serialization.YamlSerializationContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Serialize(ByRef<::VYaml::Emitter::Utf8YamlEmitter> emitter, ::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7> value, ::VYaml::Serialization::YamlSerializationContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::ValueTupleFormatter_7::Serialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::VYaml::Serialization::ValueTupleFormatter_7<T1, T2, T3, T4, T5, T6, T7>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(emitter), value, context);
    }
    // public System.ValueTuple`7<T1,T2,T3,T4,T5,T6,T7> Deserialize(ref VYaml.Parser.YamlParser parser, VYaml.Serialization.YamlDeserializationContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7> Deserialize(ByRef<::VYaml::Parser::YamlParser> parser, ::VYaml::Serialization::YamlDeserializationContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::ValueTupleFormatter_7::Deserialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::VYaml::Serialization::ValueTupleFormatter_7<T1, T2, T3, T4, T5, T6, T7>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>, false>(this, ___internal__method, byref(parser), context);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueTupleFormatter_7<T1, T2, T3, T4, T5, T6, T7>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::ValueTupleFormatter_7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueTupleFormatter_7<T1, T2, T3, T4, T5, T6, T7>*, creationType>()));
    }
  }; // VYaml.Serialization.ValueTupleFormatter`7
  // Could not write size check! Type: VYaml.Serialization.ValueTupleFormatter`7 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
