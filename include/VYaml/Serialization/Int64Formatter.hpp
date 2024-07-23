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
// Forward declaring namespace: VYaml::Emitter
namespace VYaml::Emitter {
  // Skipping declaration: Utf8YamlEmitter because it is already included!
}
// Forward declaring namespace: VYaml::Serialization
namespace VYaml::Serialization {
  // Forward declaring type: YamlSerializationContext
  class YamlSerializationContext;
  // Forward declaring type: YamlDeserializationContext
  class YamlDeserializationContext;
}
// Forward declaring namespace: VYaml::Parser
namespace VYaml::Parser {
  // Skipping declaration: YamlParser because it is already included!
}
// Completed forward declares
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Forward declaring type: Int64Formatter
  class Int64Formatter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VYaml::Serialization::Int64Formatter);
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Serialization::Int64Formatter*, "VYaml.Serialization", "Int64Formatter");
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VYaml.Serialization.Int64Formatter
  // [TokenAttribute] Offset: FFFFFFFF
  class Int64Formatter : public ::Il2CppObject/*, public ::VYaml::Serialization::IYamlFormatter_1<int64_t>*/ {
    public:
    // Creating interface conversion operator: operator ::VYaml::Serialization::IYamlFormatter_1<int64_t>
    operator ::VYaml::Serialization::IYamlFormatter_1<int64_t>() noexcept {
      return *reinterpret_cast<::VYaml::Serialization::IYamlFormatter_1<int64_t>*>(this);
    }
    // Get static field: static public readonly VYaml.Serialization.Int64Formatter Instance
    static ::VYaml::Serialization::Int64Formatter* _get_Instance();
    // Set static field: static public readonly VYaml.Serialization.Int64Formatter Instance
    static void _set_Instance(::VYaml::Serialization::Int64Formatter* value);
    // public System.Void Serialize(ref VYaml.Emitter.Utf8YamlEmitter emitter, System.Int64 value, VYaml.Serialization.YamlSerializationContext context)
    // Offset: 0x572A44C
    void Serialize(ByRef<::VYaml::Emitter::Utf8YamlEmitter> emitter, int64_t value, ::VYaml::Serialization::YamlSerializationContext* context);
    // public System.Int64 Deserialize(ref VYaml.Parser.YamlParser parser, VYaml.Serialization.YamlDeserializationContext context)
    // Offset: 0x572A45C
    int64_t Deserialize(ByRef<::VYaml::Parser::YamlParser> parser, ::VYaml::Serialization::YamlDeserializationContext* context);
    // public System.Void .ctor()
    // Offset: 0x572A528
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Int64Formatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::Int64Formatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Int64Formatter*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x572A530
    static void _cctor();
  }; // VYaml.Serialization.Int64Formatter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VYaml::Serialization::Int64Formatter::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VYaml::Serialization::Int64Formatter::*)(ByRef<::VYaml::Emitter::Utf8YamlEmitter>, int64_t, ::VYaml::Serialization::YamlSerializationContext*)>(&VYaml::Serialization::Int64Formatter::Serialize)> {
  static const MethodInfo* get() {
    static auto* emitter = &::il2cpp_utils::GetClassFromName("VYaml.Emitter", "Utf8YamlEmitter")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("VYaml.Serialization", "YamlSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::Int64Formatter*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{emitter, value, context});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::Int64Formatter::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (VYaml::Serialization::Int64Formatter::*)(ByRef<::VYaml::Parser::YamlParser>, ::VYaml::Serialization::YamlDeserializationContext*)>(&VYaml::Serialization::Int64Formatter::Deserialize)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("VYaml.Parser", "YamlParser")->this_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("VYaml.Serialization", "YamlDeserializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::Int64Formatter*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser, context});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::Int64Formatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VYaml::Serialization::Int64Formatter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VYaml::Serialization::Int64Formatter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::Int64Formatter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};