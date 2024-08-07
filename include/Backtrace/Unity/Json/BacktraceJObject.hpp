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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Json
namespace Backtrace::Unity::Json {
  // Forward declaring type: BacktraceJObject
  class BacktraceJObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Json::BacktraceJObject);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Json::BacktraceJObject*, "Backtrace.Unity.Json", "BacktraceJObject");
// Type namespace: Backtrace.Unity.Json
namespace Backtrace::Unity::Json {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Json.BacktraceJObject
  // [TokenAttribute] Offset: FFFFFFFF
  class BacktraceJObject : public ::Il2CppObject {
    public:
    public:
    // readonly System.Collections.Generic.Dictionary`2<System.String,System.String> PrimitiveValues
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* PrimitiveValues;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    // readonly System.Collections.Generic.IDictionary`2<System.String,System.String> UserPrimitives
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* UserPrimitives;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*) == 0x8);
    // readonly System.Collections.Generic.Dictionary`2<System.String,Backtrace.Unity.Json.BacktraceJObject> InnerObjects
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Backtrace::Unity::Json::BacktraceJObject*>* InnerObjects;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Backtrace::Unity::Json::BacktraceJObject*>*) == 0x8);
    // readonly System.Collections.Generic.Dictionary`2<System.String,System.Object> ComplexObjects
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>* ComplexObjects;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*) == 0x8);
    public:
    // Get instance field reference: readonly System.Collections.Generic.Dictionary`2<System.String,System.String> PrimitiveValues
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn_PrimitiveValues();
    // Get instance field reference: readonly System.Collections.Generic.IDictionary`2<System.String,System.String> UserPrimitives
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& dyn_UserPrimitives();
    // Get instance field reference: readonly System.Collections.Generic.Dictionary`2<System.String,Backtrace.Unity.Json.BacktraceJObject> InnerObjects
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::Backtrace::Unity::Json::BacktraceJObject*>*& dyn_InnerObjects();
    // Get instance field reference: readonly System.Collections.Generic.Dictionary`2<System.String,System.Object> ComplexObjects
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*& dyn_ComplexObjects();
    // public System.Void .ctor()
    // Offset: 0x2A69850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BacktraceJObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Json::BacktraceJObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BacktraceJObject*, creationType>()));
    }
    // public System.Void .ctor(System.Collections.Generic.IDictionary`2<System.String,System.String> source)
    // Offset: 0x2A69858
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BacktraceJObject* New_ctor(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Json::BacktraceJObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BacktraceJObject*, creationType>(source)));
    }
    // public System.Void Add(System.String key, System.Boolean value)
    // Offset: 0x2A6CD2C
    void Add(::StringW key, bool value);
    // public System.Void Add(System.String key, System.Single value, System.String format)
    // Offset: 0x2A75510
    void Add(::StringW key, float value, ::StringW format);
    // public System.Void Add(System.String key, System.Double value, System.String format)
    // Offset: 0x2A71314
    void Add(::StringW key, double value, ::StringW format);
    // public System.Void Add(System.String key, System.String value)
    // Offset: 0x2A67AF0
    void Add(::StringW key, ::StringW value);
    // public System.Void Add(System.String key, System.Int64 value)
    // Offset: 0x2A757DC
    void Add(::StringW key, int64_t value);
    // public System.Void Add(System.String key, Backtrace.Unity.Json.BacktraceJObject value)
    // Offset: 0x2A699B4
    void Add(::StringW key, ::Backtrace::Unity::Json::BacktraceJObject* value);
    // public System.Void Add(System.String key, System.Collections.IEnumerable value)
    // Offset: 0x2A68720
    void Add(::StringW key, ::System::Collections::IEnumerable* value);
    // public System.String ToJson()
    // Offset: 0x2A70A04
    ::StringW ToJson();
    // System.Void ToJson(System.Text.StringBuilder stringBuilder)
    // Offset: 0x2A75888
    void ToJson(::System::Text::StringBuilder* stringBuilder);
    // private System.Void AddUserPrimitives(System.Text.StringBuilder stringBuilder)
    // Offset: 0x2A75B68
    void AddUserPrimitives(::System::Text::StringBuilder* stringBuilder);
    // private System.Void AppendPrimitives(System.Text.StringBuilder stringBuilder)
    // Offset: 0x2A75934
    void AppendPrimitives(::System::Text::StringBuilder* stringBuilder);
    // private System.Void AppendJObjects(System.Text.StringBuilder stringBuilder)
    // Offset: 0x2A76070
    void AppendJObjects(::System::Text::StringBuilder* stringBuilder);
    // private System.Void AppendComplexValues(System.Text.StringBuilder stringBuilder)
    // Offset: 0x2A762C4
    void AppendComplexValues(::System::Text::StringBuilder* stringBuilder);
    // private System.Boolean ShouldContinueAddingJSONProperties(System.Text.StringBuilder stringBuilder)
    // Offset: 0x2A769DC
    bool ShouldContinueAddingJSONProperties(::System::Text::StringBuilder* stringBuilder);
    // private System.Void AppendKey(System.String value, System.Text.StringBuilder builder)
    // Offset: 0x2A76A4C
    void AppendKey(::StringW value, ::System::Text::StringBuilder* builder);
    // private System.Void EscapeString(System.String value, System.Text.StringBuilder output)
    // Offset: 0x2A755CC
    void EscapeString(::StringW value, ::System::Text::StringBuilder* output);
    // private System.Char IntToHex(System.Int32 n)
    // Offset: 0x2A76D58
    ::Il2CppChar IntToHex(int n);
    // private System.Void ToCharAsUnicodeToStringBuilder(System.Char c, System.Text.StringBuilder output)
    // Offset: 0x2A76B1C
    void ToCharAsUnicodeToStringBuilder(::Il2CppChar c, ::System::Text::StringBuilder* output);
  }; // Backtrace.Unity.Json.BacktraceJObject
  #pragma pack(pop)
  static check_size<sizeof(BacktraceJObject), 40 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*)> __Backtrace_Unity_Json_BacktraceJObjectSizeCheck;
  static_assert(sizeof(BacktraceJObject) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::StringW, bool)>(&Backtrace::Unity::Json::BacktraceJObject::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::StringW, float, ::StringW)>(&Backtrace::Unity::Json::BacktraceJObject::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value, format});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::StringW, double, ::StringW)>(&Backtrace::Unity::Json::BacktraceJObject::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value, format});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::StringW, ::StringW)>(&Backtrace::Unity::Json::BacktraceJObject::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::StringW, int64_t)>(&Backtrace::Unity::Json::BacktraceJObject::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::StringW, ::Backtrace::Unity::Json::BacktraceJObject*)>(&Backtrace::Unity::Json::BacktraceJObject::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Json", "BacktraceJObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::StringW, ::System::Collections::IEnumerable*)>(&Backtrace::Unity::Json::BacktraceJObject::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::ToJson
// Il2CppName: ToJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Json::BacktraceJObject::*)()>(&Backtrace::Unity::Json::BacktraceJObject::ToJson)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "ToJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::ToJson
// Il2CppName: ToJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::System::Text::StringBuilder*)>(&Backtrace::Unity::Json::BacktraceJObject::ToJson)> {
  static const MethodInfo* get() {
    static auto* stringBuilder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "ToJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringBuilder});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::AddUserPrimitives
// Il2CppName: AddUserPrimitives
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::System::Text::StringBuilder*)>(&Backtrace::Unity::Json::BacktraceJObject::AddUserPrimitives)> {
  static const MethodInfo* get() {
    static auto* stringBuilder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "AddUserPrimitives", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringBuilder});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::AppendPrimitives
// Il2CppName: AppendPrimitives
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::System::Text::StringBuilder*)>(&Backtrace::Unity::Json::BacktraceJObject::AppendPrimitives)> {
  static const MethodInfo* get() {
    static auto* stringBuilder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "AppendPrimitives", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringBuilder});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::AppendJObjects
// Il2CppName: AppendJObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::System::Text::StringBuilder*)>(&Backtrace::Unity::Json::BacktraceJObject::AppendJObjects)> {
  static const MethodInfo* get() {
    static auto* stringBuilder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "AppendJObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringBuilder});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::AppendComplexValues
// Il2CppName: AppendComplexValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::System::Text::StringBuilder*)>(&Backtrace::Unity::Json::BacktraceJObject::AppendComplexValues)> {
  static const MethodInfo* get() {
    static auto* stringBuilder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "AppendComplexValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringBuilder});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::ShouldContinueAddingJSONProperties
// Il2CppName: ShouldContinueAddingJSONProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Json::BacktraceJObject::*)(::System::Text::StringBuilder*)>(&Backtrace::Unity::Json::BacktraceJObject::ShouldContinueAddingJSONProperties)> {
  static const MethodInfo* get() {
    static auto* stringBuilder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "ShouldContinueAddingJSONProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringBuilder});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::AppendKey
// Il2CppName: AppendKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::StringW, ::System::Text::StringBuilder*)>(&Backtrace::Unity::Json::BacktraceJObject::AppendKey)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* builder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "AppendKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, builder});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::EscapeString
// Il2CppName: EscapeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::StringW, ::System::Text::StringBuilder*)>(&Backtrace::Unity::Json::BacktraceJObject::EscapeString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "EscapeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, output});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::IntToHex
// Il2CppName: IntToHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (Backtrace::Unity::Json::BacktraceJObject::*)(int)>(&Backtrace::Unity::Json::BacktraceJObject::IntToHex)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "IntToHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Json::BacktraceJObject::ToCharAsUnicodeToStringBuilder
// Il2CppName: ToCharAsUnicodeToStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Json::BacktraceJObject::*)(::Il2CppChar, ::System::Text::StringBuilder*)>(&Backtrace::Unity::Json::BacktraceJObject::ToCharAsUnicodeToStringBuilder)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Json::BacktraceJObject*), "ToCharAsUnicodeToStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, output});
  }
};
