// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VYaml.Serialization.IYamlFormatter`1
#include "VYaml/Serialization/IYamlFormatter_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`5<T1, T2, T3, T4, T5>
  template<typename T1, typename T2, typename T3, typename T4, typename T5>
  class Tuple_5;
}
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
  // Forward declaring type: TupleFormatter`5<T1, T2, T3, T4, T5>
  template<typename T1, typename T2, typename T3, typename T4, typename T5>
  class TupleFormatter_5;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::VYaml::Serialization::TupleFormatter_5, "VYaml.Serialization", "TupleFormatter`5");
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: VYaml.Serialization.TupleFormatter`5
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2, typename T3, typename T4, typename T5>
  class TupleFormatter_5 : public ::Il2CppObject/*, public ::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_5<T1, T2, T3, T4, T5>*>*/ {
    public:
    // Creating interface conversion operator: operator ::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_5<T1, T2, T3, T4, T5>*>
    operator ::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_5<T1, T2, T3, T4, T5>*>() noexcept {
      return *reinterpret_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_5<T1, T2, T3, T4, T5>*>*>(this);
    }
    // public System.Void Serialize(ref VYaml.Emitter.Utf8YamlEmitter emitter, System.Tuple`5<T1,T2,T3,T4,T5> value, VYaml.Serialization.YamlSerializationContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Serialize(ByRef<::VYaml::Emitter::Utf8YamlEmitter> emitter, ::System::Tuple_5<T1, T2, T3, T4, T5>* value, ::VYaml::Serialization::YamlSerializationContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::TupleFormatter_5::Serialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::VYaml::Serialization::TupleFormatter_5<T1, T2, T3, T4, T5>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(emitter), value, context);
    }
    // public System.Tuple`5<T1,T2,T3,T4,T5> Deserialize(ref VYaml.Parser.YamlParser parser, VYaml.Serialization.YamlDeserializationContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Tuple_5<T1, T2, T3, T4, T5>* Deserialize(ByRef<::VYaml::Parser::YamlParser> parser, ::VYaml::Serialization::YamlDeserializationContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::TupleFormatter_5::Deserialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::VYaml::Serialization::TupleFormatter_5<T1, T2, T3, T4, T5>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::System::Tuple_5<T1, T2, T3, T4, T5>*, false>(this, ___internal__method, byref(parser), context);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TupleFormatter_5<T1, T2, T3, T4, T5>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::TupleFormatter_5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TupleFormatter_5<T1, T2, T3, T4, T5>*, creationType>()));
    }
  }; // VYaml.Serialization.TupleFormatter`5
  // Could not write size check! Type: VYaml.Serialization.TupleFormatter`5 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"