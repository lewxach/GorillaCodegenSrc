// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer
#include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer.hpp"
// Including type: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ISerializationAdapter`1
#include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer_ISerializationAdapter_1.hpp"
// Including type: UnityEngine.Hash128
#include "UnityEngine/Hash128.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::Util
namespace UnityEngine::ResourceManagement::Util {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/BuiltinTypesSerializer");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer
  // [TokenAttribute] Offset: FFFFFFFF
  class BinaryStorageBuffer::BuiltinTypesSerializer : public ::Il2CppObject/*, public ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<int>, public ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<bool>, public ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<int64_t>, public ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<::StringW>, public ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<::UnityEngine::Hash128>*/ {
    public:
    // Nested type: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::ObjectToStringRemap
    struct ObjectToStringRemap;
    // Nested type: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Creating interface conversion operator: operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<int>
    operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<int>() noexcept {
      return *reinterpret_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<int>*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<bool>
    operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<bool>() noexcept {
      return *reinterpret_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<bool>*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<int64_t>
    operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<int64_t>() noexcept {
      return *reinterpret_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<int64_t>*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<::StringW>
    operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<::StringW>() noexcept {
      return *reinterpret_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<::StringW>*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<::UnityEngine::Hash128>
    operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<::UnityEngine::Hash128>() noexcept {
      return *reinterpret_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter_1<::UnityEngine::Hash128>*>(this);
    }
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ISerializationAdapter> get_Dependencies()
    // Offset: 0x532BC34
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter*>* get_Dependencies();
    // public System.Object Deserialize(UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader reader, System.Type t, System.UInt32 offset)
    // Offset: 0x532BC3C
    ::Il2CppObject* Deserialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::Reader* reader, ::System::Type* t, uint offset);
    // private System.Char FindBestSeparator(System.String str, params System.Char[] seps)
    // Offset: 0x532BFAC
    ::Il2CppChar FindBestSeparator(::StringW str, ::ArrayW<::Il2CppChar> seps);
    // public System.UInt32 Serialize(UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer writer, System.Object val)
    // Offset: 0x532C16C
    uint Serialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::Writer* writer, ::Il2CppObject* val);
    // public System.Void .ctor()
    // Offset: 0x532C5D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryStorageBuffer::BuiltinTypesSerializer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryStorageBuffer::BuiltinTypesSerializer*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::get_Dependencies
// Il2CppName: get_Dependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ISerializationAdapter*>* (UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::*)()>(&UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::get_Dependencies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer*), "get_Dependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::*)(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::Reader*, ::System::Type*, uint)>(&UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/Reader")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, t, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::FindBestSeparator
// Il2CppName: FindBestSeparator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::*)(::StringW, ::ArrayW<::Il2CppChar>)>(&UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::FindBestSeparator)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* seps = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer*), "FindBestSeparator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, seps});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::*)(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::Writer*, ::Il2CppObject*)>(&UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/Writer")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, val});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!