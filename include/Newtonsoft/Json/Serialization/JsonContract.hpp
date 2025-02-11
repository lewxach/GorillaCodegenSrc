// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.ReadType
#include "Newtonsoft/Json/ReadType.hpp"
// Including type: Newtonsoft.Json.Serialization.JsonContractType
#include "Newtonsoft/Json/Serialization/JsonContractType.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: SerializationCallback
  class SerializationCallback;
  // Forward declaring type: SerializationErrorCallback
  class SerializationErrorCallback;
  // Forward declaring type: ErrorContext
  class ErrorContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonConverter
  class JsonConverter;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonContract
  class JsonContract;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonContract*, "Newtonsoft.Json.Serialization", "JsonContract");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonContract
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  class JsonContract : public ::Il2CppObject {
    public:
    // Nested type: ::Newtonsoft::Json::Serialization::JsonContract::$$c__DisplayClass57_0
    class $$c__DisplayClass57_0;
    // Nested type: ::Newtonsoft::Json::Serialization::JsonContract::$$c__DisplayClass58_0
    class $$c__DisplayClass58_0;
    public:
    // System.Boolean IsNullable
    // Size: 0x1
    // Offset: 0x10
    bool IsNullable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean IsConvertable
    // Size: 0x1
    // Offset: 0x11
    bool IsConvertable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean IsEnum
    // Size: 0x1
    // Offset: 0x12
    bool IsEnum;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Type NonNullableUnderlyingType
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* NonNullableUnderlyingType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // Newtonsoft.Json.ReadType InternalReadType
    // Size: 0x4
    // Offset: 0x20
    ::Newtonsoft::Json::ReadType InternalReadType;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::ReadType) == 0x4);
    // Newtonsoft.Json.Serialization.JsonContractType ContractType
    // Size: 0x4
    // Offset: 0x24
    ::Newtonsoft::Json::Serialization::JsonContractType ContractType;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonContractType) == 0x4);
    // System.Boolean IsReadOnlyOrFixedSize
    // Size: 0x1
    // Offset: 0x28
    bool IsReadOnlyOrFixedSize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean IsSealed
    // Size: 0x1
    // Offset: 0x29
    bool IsSealed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean IsInstantiable
    // Size: 0x1
    // Offset: 0x2A
    bool IsInstantiable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.SerializationCallback> _onDeserializedCallbacks
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* onDeserializedCallbacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*) == 0x8);
    // private System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.SerializationCallback> _onDeserializingCallbacks
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* onDeserializingCallbacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*) == 0x8);
    // private System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.SerializationCallback> _onSerializedCallbacks
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* onSerializedCallbacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*) == 0x8);
    // private System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.SerializationCallback> _onSerializingCallbacks
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* onSerializingCallbacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*) == 0x8);
    // private System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.SerializationErrorCallback> _onErrorCallbacks
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* onErrorCallbacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*) == 0x8);
    // private System.Type _createdType
    // Size: 0x8
    // Offset: 0x58
    ::System::Type* createdType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private readonly System.Type <UnderlyingType>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::System::Type* UnderlyingType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Nullable`1<System.Boolean> <IsReference>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x68
    ::System::Nullable_1<bool> IsReference;
    // private Newtonsoft.Json.JsonConverter <Converter>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    ::Newtonsoft::Json::JsonConverter* Converter;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::JsonConverter*) == 0x8);
    // private Newtonsoft.Json.JsonConverter <InternalConverter>k__BackingField
    // Size: 0x8
    // Offset: 0x78
    ::Newtonsoft::Json::JsonConverter* InternalConverter;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::JsonConverter*) == 0x8);
    // private System.Func`1<System.Object> <DefaultCreator>k__BackingField
    // Size: 0x8
    // Offset: 0x80
    ::System::Func_1<::Il2CppObject*>* DefaultCreator;
    // Field size check
    static_assert(sizeof(::System::Func_1<::Il2CppObject*>*) == 0x8);
    // private System.Boolean <DefaultCreatorNonPublic>k__BackingField
    // Size: 0x1
    // Offset: 0x88
    bool DefaultCreatorNonPublic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: System.Boolean IsNullable
    [[deprecated("Use field access instead!")]] bool& dyn_IsNullable();
    // Get instance field reference: System.Boolean IsConvertable
    [[deprecated("Use field access instead!")]] bool& dyn_IsConvertable();
    // Get instance field reference: System.Boolean IsEnum
    [[deprecated("Use field access instead!")]] bool& dyn_IsEnum();
    // Get instance field reference: System.Type NonNullableUnderlyingType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_NonNullableUnderlyingType();
    // Get instance field reference: Newtonsoft.Json.ReadType InternalReadType
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::ReadType& dyn_InternalReadType();
    // Get instance field reference: Newtonsoft.Json.Serialization.JsonContractType ContractType
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::JsonContractType& dyn_ContractType();
    // Get instance field reference: System.Boolean IsReadOnlyOrFixedSize
    [[deprecated("Use field access instead!")]] bool& dyn_IsReadOnlyOrFixedSize();
    // Get instance field reference: System.Boolean IsSealed
    [[deprecated("Use field access instead!")]] bool& dyn_IsSealed();
    // Get instance field reference: System.Boolean IsInstantiable
    [[deprecated("Use field access instead!")]] bool& dyn_IsInstantiable();
    // Get instance field reference: private System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.SerializationCallback> _onDeserializedCallbacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& dyn__onDeserializedCallbacks();
    // Get instance field reference: private System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.SerializationCallback> _onDeserializingCallbacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& dyn__onDeserializingCallbacks();
    // Get instance field reference: private System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.SerializationCallback> _onSerializedCallbacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& dyn__onSerializedCallbacks();
    // Get instance field reference: private System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.SerializationCallback> _onSerializingCallbacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& dyn__onSerializingCallbacks();
    // Get instance field reference: private System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.SerializationErrorCallback> _onErrorCallbacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*& dyn__onErrorCallbacks();
    // Get instance field reference: private System.Type _createdType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__createdType();
    // Get instance field reference: private readonly System.Type <UnderlyingType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$UnderlyingType$k__BackingField();
    // Get instance field reference: private System.Nullable`1<System.Boolean> <IsReference>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_$IsReference$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.JsonConverter <Converter>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::JsonConverter*& dyn_$Converter$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.JsonConverter <InternalConverter>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::JsonConverter*& dyn_$InternalConverter$k__BackingField();
    // Get instance field reference: private System.Func`1<System.Object> <DefaultCreator>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Func_1<::Il2CppObject*>*& dyn_$DefaultCreator$k__BackingField();
    // Get instance field reference: private System.Boolean <DefaultCreatorNonPublic>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$DefaultCreatorNonPublic$k__BackingField();
    // public System.Type get_UnderlyingType()
    // Offset: 0x472132C
    ::System::Type* get_UnderlyingType();
    // public System.Type get_CreatedType()
    // Offset: 0x4721334
    ::System::Type* get_CreatedType();
    // public System.Void set_CreatedType(System.Type value)
    // Offset: 0x472041C
    void set_CreatedType(::System::Type* value);
    // public System.Nullable`1<System.Boolean> get_IsReference()
    // Offset: 0x472133C
    ::System::Nullable_1<bool> get_IsReference();
    // public System.Void set_IsReference(System.Nullable`1<System.Boolean> value)
    // Offset: 0x4721344
    void set_IsReference(::System::Nullable_1<bool> value);
    // public Newtonsoft.Json.JsonConverter get_Converter()
    // Offset: 0x472134C
    ::Newtonsoft::Json::JsonConverter* get_Converter();
    // public System.Void set_Converter(Newtonsoft.Json.JsonConverter value)
    // Offset: 0x4721354
    void set_Converter(::Newtonsoft::Json::JsonConverter* value);
    // public Newtonsoft.Json.JsonConverter get_InternalConverter()
    // Offset: 0x472135C
    ::Newtonsoft::Json::JsonConverter* get_InternalConverter();
    // System.Void set_InternalConverter(Newtonsoft.Json.JsonConverter value)
    // Offset: 0x4721364
    void set_InternalConverter(::Newtonsoft::Json::JsonConverter* value);
    // public System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> get_OnDeserializedCallbacks()
    // Offset: 0x472136C
    ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnDeserializedCallbacks();
    // public System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> get_OnDeserializingCallbacks()
    // Offset: 0x47213F0
    ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnDeserializingCallbacks();
    // public System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> get_OnSerializedCallbacks()
    // Offset: 0x4721474
    ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnSerializedCallbacks();
    // public System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> get_OnSerializingCallbacks()
    // Offset: 0x47214F8
    ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnSerializingCallbacks();
    // public System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationErrorCallback> get_OnErrorCallbacks()
    // Offset: 0x472157C
    ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* get_OnErrorCallbacks();
    // public System.Func`1<System.Object> get_DefaultCreator()
    // Offset: 0x4721600
    ::System::Func_1<::Il2CppObject*>* get_DefaultCreator();
    // public System.Void set_DefaultCreator(System.Func`1<System.Object> value)
    // Offset: 0x4721608
    void set_DefaultCreator(::System::Func_1<::Il2CppObject*>* value);
    // public System.Boolean get_DefaultCreatorNonPublic()
    // Offset: 0x4721610
    bool get_DefaultCreatorNonPublic();
    // public System.Void set_DefaultCreatorNonPublic(System.Boolean value)
    // Offset: 0x4721618
    void set_DefaultCreatorNonPublic(bool value);
    // System.Void .ctor(System.Type underlyingType)
    // Offset: 0x4720D34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonContract* New_ctor(::System::Type* underlyingType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonContract::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonContract*, creationType>(underlyingType)));
    }
    // System.Void InvokeOnSerializing(System.Object o, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4721624
    void InvokeOnSerializing(::Il2CppObject* o, ::System::Runtime::Serialization::StreamingContext context);
    // System.Void InvokeOnSerialized(System.Object o, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4721784
    void InvokeOnSerialized(::Il2CppObject* o, ::System::Runtime::Serialization::StreamingContext context);
    // System.Void InvokeOnDeserializing(System.Object o, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x47218E4
    void InvokeOnDeserializing(::Il2CppObject* o, ::System::Runtime::Serialization::StreamingContext context);
    // System.Void InvokeOnDeserialized(System.Object o, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4721A44
    void InvokeOnDeserialized(::Il2CppObject* o, ::System::Runtime::Serialization::StreamingContext context);
    // System.Void InvokeOnError(System.Object o, System.Runtime.Serialization.StreamingContext context, Newtonsoft.Json.Serialization.ErrorContext errorContext)
    // Offset: 0x4721BA4
    void InvokeOnError(::Il2CppObject* o, ::System::Runtime::Serialization::StreamingContext context, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext);
    // static Newtonsoft.Json.Serialization.SerializationCallback CreateSerializationCallback(System.Reflection.MethodInfo callbackMethodInfo)
    // Offset: 0x4721D14
    static ::Newtonsoft::Json::Serialization::SerializationCallback* CreateSerializationCallback(::System::Reflection::MethodInfo* callbackMethodInfo);
    // static Newtonsoft.Json.Serialization.SerializationErrorCallback CreateSerializationErrorCallback(System.Reflection.MethodInfo callbackMethodInfo)
    // Offset: 0x4721DD4
    static ::Newtonsoft::Json::Serialization::SerializationErrorCallback* CreateSerializationErrorCallback(::System::Reflection::MethodInfo* callbackMethodInfo);
  }; // Newtonsoft.Json.Serialization.JsonContract
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::get_UnderlyingType
// Il2CppName: get_UnderlyingType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::Serialization::JsonContract::*)()>(&Newtonsoft::Json::Serialization::JsonContract::get_UnderlyingType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "get_UnderlyingType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::get_CreatedType
// Il2CppName: get_CreatedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::Serialization::JsonContract::*)()>(&Newtonsoft::Json::Serialization::JsonContract::get_CreatedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "get_CreatedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::set_CreatedType
// Il2CppName: set_CreatedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContract::*)(::System::Type*)>(&Newtonsoft::Json::Serialization::JsonContract::set_CreatedType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "set_CreatedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::get_IsReference
// Il2CppName: get_IsReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (Newtonsoft::Json::Serialization::JsonContract::*)()>(&Newtonsoft::Json::Serialization::JsonContract::get_IsReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "get_IsReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::set_IsReference
// Il2CppName: set_IsReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContract::*)(::System::Nullable_1<bool>)>(&Newtonsoft::Json::Serialization::JsonContract::set_IsReference)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "set_IsReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::get_Converter
// Il2CppName: get_Converter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonConverter* (Newtonsoft::Json::Serialization::JsonContract::*)()>(&Newtonsoft::Json::Serialization::JsonContract::get_Converter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "get_Converter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::set_Converter
// Il2CppName: set_Converter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContract::*)(::Newtonsoft::Json::JsonConverter*)>(&Newtonsoft::Json::Serialization::JsonContract::set_Converter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonConverter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "set_Converter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::get_InternalConverter
// Il2CppName: get_InternalConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonConverter* (Newtonsoft::Json::Serialization::JsonContract::*)()>(&Newtonsoft::Json::Serialization::JsonContract::get_InternalConverter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "get_InternalConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::set_InternalConverter
// Il2CppName: set_InternalConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContract::*)(::Newtonsoft::Json::JsonConverter*)>(&Newtonsoft::Json::Serialization::JsonContract::set_InternalConverter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonConverter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "set_InternalConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::get_OnDeserializedCallbacks
// Il2CppName: get_OnDeserializedCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* (Newtonsoft::Json::Serialization::JsonContract::*)()>(&Newtonsoft::Json::Serialization::JsonContract::get_OnDeserializedCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "get_OnDeserializedCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::get_OnDeserializingCallbacks
// Il2CppName: get_OnDeserializingCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* (Newtonsoft::Json::Serialization::JsonContract::*)()>(&Newtonsoft::Json::Serialization::JsonContract::get_OnDeserializingCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "get_OnDeserializingCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::get_OnSerializedCallbacks
// Il2CppName: get_OnSerializedCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* (Newtonsoft::Json::Serialization::JsonContract::*)()>(&Newtonsoft::Json::Serialization::JsonContract::get_OnSerializedCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "get_OnSerializedCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::get_OnSerializingCallbacks
// Il2CppName: get_OnSerializingCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* (Newtonsoft::Json::Serialization::JsonContract::*)()>(&Newtonsoft::Json::Serialization::JsonContract::get_OnSerializingCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "get_OnSerializingCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::get_OnErrorCallbacks
// Il2CppName: get_OnErrorCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* (Newtonsoft::Json::Serialization::JsonContract::*)()>(&Newtonsoft::Json::Serialization::JsonContract::get_OnErrorCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "get_OnErrorCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::get_DefaultCreator
// Il2CppName: get_DefaultCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<::Il2CppObject*>* (Newtonsoft::Json::Serialization::JsonContract::*)()>(&Newtonsoft::Json::Serialization::JsonContract::get_DefaultCreator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "get_DefaultCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::set_DefaultCreator
// Il2CppName: set_DefaultCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContract::*)(::System::Func_1<::Il2CppObject*>*)>(&Newtonsoft::Json::Serialization::JsonContract::set_DefaultCreator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "set_DefaultCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::get_DefaultCreatorNonPublic
// Il2CppName: get_DefaultCreatorNonPublic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonContract::*)()>(&Newtonsoft::Json::Serialization::JsonContract::get_DefaultCreatorNonPublic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "get_DefaultCreatorNonPublic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::set_DefaultCreatorNonPublic
// Il2CppName: set_DefaultCreatorNonPublic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContract::*)(bool)>(&Newtonsoft::Json::Serialization::JsonContract::set_DefaultCreatorNonPublic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "set_DefaultCreatorNonPublic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::InvokeOnSerializing
// Il2CppName: InvokeOnSerializing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContract::*)(::Il2CppObject*, ::System::Runtime::Serialization::StreamingContext)>(&Newtonsoft::Json::Serialization::JsonContract::InvokeOnSerializing)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "InvokeOnSerializing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, context});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::InvokeOnSerialized
// Il2CppName: InvokeOnSerialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContract::*)(::Il2CppObject*, ::System::Runtime::Serialization::StreamingContext)>(&Newtonsoft::Json::Serialization::JsonContract::InvokeOnSerialized)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "InvokeOnSerialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, context});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::InvokeOnDeserializing
// Il2CppName: InvokeOnDeserializing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContract::*)(::Il2CppObject*, ::System::Runtime::Serialization::StreamingContext)>(&Newtonsoft::Json::Serialization::JsonContract::InvokeOnDeserializing)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "InvokeOnDeserializing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, context});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::InvokeOnDeserialized
// Il2CppName: InvokeOnDeserialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContract::*)(::Il2CppObject*, ::System::Runtime::Serialization::StreamingContext)>(&Newtonsoft::Json::Serialization::JsonContract::InvokeOnDeserialized)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "InvokeOnDeserialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, context});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::InvokeOnError
// Il2CppName: InvokeOnError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContract::*)(::Il2CppObject*, ::System::Runtime::Serialization::StreamingContext, ::Newtonsoft::Json::Serialization::ErrorContext*)>(&Newtonsoft::Json::Serialization::JsonContract::InvokeOnError)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* errorContext = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "ErrorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "InvokeOnError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, context, errorContext});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::CreateSerializationCallback
// Il2CppName: CreateSerializationCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::SerializationCallback* (*)(::System::Reflection::MethodInfo*)>(&Newtonsoft::Json::Serialization::JsonContract::CreateSerializationCallback)> {
  static const MethodInfo* get() {
    static auto* callbackMethodInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "CreateSerializationCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackMethodInfo});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::CreateSerializationErrorCallback
// Il2CppName: CreateSerializationErrorCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::SerializationErrorCallback* (*)(::System::Reflection::MethodInfo*)>(&Newtonsoft::Json::Serialization::JsonContract::CreateSerializationErrorCallback)> {
  static const MethodInfo* get() {
    static auto* callbackMethodInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract*), "CreateSerializationErrorCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackMethodInfo});
  }
};
