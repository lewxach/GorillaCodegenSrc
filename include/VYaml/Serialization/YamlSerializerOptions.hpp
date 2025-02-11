// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VYaml::Serialization
namespace VYaml::Serialization {
  // Forward declaring type: IYamlFormatterResolver
  class IYamlFormatterResolver;
}
// Forward declaring namespace: VYaml::Emitter
namespace VYaml::Emitter {
  // Forward declaring type: YamlEmitOptions
  class YamlEmitOptions;
}
// Completed forward declares
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Forward declaring type: YamlSerializerOptions
  class YamlSerializerOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VYaml::Serialization::YamlSerializerOptions);
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Serialization::YamlSerializerOptions*, "VYaml.Serialization", "YamlSerializerOptions");
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: VYaml.Serialization.YamlSerializerOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  class YamlSerializerOptions : public ::Il2CppObject {
    public:
    public:
    // private VYaml.Serialization.IYamlFormatterResolver <Resolver>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::VYaml::Serialization::IYamlFormatterResolver* Resolver;
    // Field size check
    static_assert(sizeof(::VYaml::Serialization::IYamlFormatterResolver*) == 0x8);
    // private VYaml.Emitter.YamlEmitOptions <EmitOptions>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::VYaml::Emitter::YamlEmitOptions* EmitOptions;
    // Field size check
    static_assert(sizeof(::VYaml::Emitter::YamlEmitOptions*) == 0x8);
    // private System.Boolean <EnableAliasForDeserialization>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool EnableAliasForDeserialization;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private VYaml.Serialization.IYamlFormatterResolver <Resolver>k__BackingField
    [[deprecated("Use field access instead!")]] ::VYaml::Serialization::IYamlFormatterResolver*& dyn_$Resolver$k__BackingField();
    // Get instance field reference: private VYaml.Emitter.YamlEmitOptions <EmitOptions>k__BackingField
    [[deprecated("Use field access instead!")]] ::VYaml::Emitter::YamlEmitOptions*& dyn_$EmitOptions$k__BackingField();
    // Get instance field reference: private System.Boolean <EnableAliasForDeserialization>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$EnableAliasForDeserialization$k__BackingField();
    // static public VYaml.Serialization.YamlSerializerOptions get_Standard()
    // Offset: 0x5730D78
    static ::VYaml::Serialization::YamlSerializerOptions* get_Standard();
    // public VYaml.Serialization.IYamlFormatterResolver get_Resolver()
    // Offset: 0x5730ED8
    ::VYaml::Serialization::IYamlFormatterResolver* get_Resolver();
    // public System.Void set_Resolver(VYaml.Serialization.IYamlFormatterResolver value)
    // Offset: 0x5730EE0
    void set_Resolver(::VYaml::Serialization::IYamlFormatterResolver* value);
    // public VYaml.Emitter.YamlEmitOptions get_EmitOptions()
    // Offset: 0x5730EE8
    ::VYaml::Emitter::YamlEmitOptions* get_EmitOptions();
    // public System.Void set_EmitOptions(VYaml.Emitter.YamlEmitOptions value)
    // Offset: 0x5730EF0
    void set_EmitOptions(::VYaml::Emitter::YamlEmitOptions* value);
    // public System.Boolean get_EnableAliasForDeserialization()
    // Offset: 0x5730EF8
    bool get_EnableAliasForDeserialization();
    // public System.Void set_EnableAliasForDeserialization(System.Boolean value)
    // Offset: 0x5730F00
    void set_EnableAliasForDeserialization(bool value);
    // public System.Void .ctor()
    // Offset: 0x5730E64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static YamlSerializerOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::YamlSerializerOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<YamlSerializerOptions*, creationType>()));
    }
  }; // VYaml.Serialization.YamlSerializerOptions
  #pragma pack(pop)
  static check_size<sizeof(YamlSerializerOptions), 32 + sizeof(bool)> __VYaml_Serialization_YamlSerializerOptionsSizeCheck;
  static_assert(sizeof(YamlSerializerOptions) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializerOptions::get_Standard
// Il2CppName: get_Standard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VYaml::Serialization::YamlSerializerOptions* (*)()>(&VYaml::Serialization::YamlSerializerOptions::get_Standard)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializerOptions*), "get_Standard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializerOptions::get_Resolver
// Il2CppName: get_Resolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VYaml::Serialization::IYamlFormatterResolver* (VYaml::Serialization::YamlSerializerOptions::*)()>(&VYaml::Serialization::YamlSerializerOptions::get_Resolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializerOptions*), "get_Resolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializerOptions::set_Resolver
// Il2CppName: set_Resolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VYaml::Serialization::YamlSerializerOptions::*)(::VYaml::Serialization::IYamlFormatterResolver*)>(&VYaml::Serialization::YamlSerializerOptions::set_Resolver)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VYaml.Serialization", "IYamlFormatterResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializerOptions*), "set_Resolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializerOptions::get_EmitOptions
// Il2CppName: get_EmitOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VYaml::Emitter::YamlEmitOptions* (VYaml::Serialization::YamlSerializerOptions::*)()>(&VYaml::Serialization::YamlSerializerOptions::get_EmitOptions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializerOptions*), "get_EmitOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializerOptions::set_EmitOptions
// Il2CppName: set_EmitOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VYaml::Serialization::YamlSerializerOptions::*)(::VYaml::Emitter::YamlEmitOptions*)>(&VYaml::Serialization::YamlSerializerOptions::set_EmitOptions)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VYaml.Emitter", "YamlEmitOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializerOptions*), "set_EmitOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializerOptions::get_EnableAliasForDeserialization
// Il2CppName: get_EnableAliasForDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VYaml::Serialization::YamlSerializerOptions::*)()>(&VYaml::Serialization::YamlSerializerOptions::get_EnableAliasForDeserialization)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializerOptions*), "get_EnableAliasForDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializerOptions::set_EnableAliasForDeserialization
// Il2CppName: set_EnableAliasForDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VYaml::Serialization::YamlSerializerOptions::*)(bool)>(&VYaml::Serialization::YamlSerializerOptions::set_EnableAliasForDeserialization)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializerOptions*), "set_EnableAliasForDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializerOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
