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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WWWForm
  class WWWForm;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::WWWForm);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WWWForm*, "UnityEngine", "WWWForm");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.WWWForm
  // [TokenAttribute] Offset: FFFFFFFF
  class WWWForm : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.List`1<System.Byte[]> formData
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* formData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> fieldNames
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::StringW>* fieldNames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> fileNames
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::StringW>* fileNames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> types
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::StringW>* types;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // private System.Byte[] boundary
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> boundary;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Boolean containsFiles
    // Size: 0x1
    // Offset: 0x38
    bool containsFiles;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private System.Byte[] dDash
    static ::ArrayW<uint8_t> _get_dDash();
    // Set static field: static private System.Byte[] dDash
    static void _set_dDash(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] crlf
    static ::ArrayW<uint8_t> _get_crlf();
    // Set static field: static private System.Byte[] crlf
    static void _set_crlf(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] contentTypeHeader
    static ::ArrayW<uint8_t> _get_contentTypeHeader();
    // Set static field: static private System.Byte[] contentTypeHeader
    static void _set_contentTypeHeader(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] dispositionHeader
    static ::ArrayW<uint8_t> _get_dispositionHeader();
    // Set static field: static private System.Byte[] dispositionHeader
    static void _set_dispositionHeader(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] endQuote
    static ::ArrayW<uint8_t> _get_endQuote();
    // Set static field: static private System.Byte[] endQuote
    static void _set_endQuote(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] fileNameField
    static ::ArrayW<uint8_t> _get_fileNameField();
    // Set static field: static private System.Byte[] fileNameField
    static void _set_fileNameField(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] ampersand
    static ::ArrayW<uint8_t> _get_ampersand();
    // Set static field: static private System.Byte[] ampersand
    static void _set_ampersand(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] equal
    static ::ArrayW<uint8_t> _get_equal();
    // Set static field: static private System.Byte[] equal
    static void _set_equal(::ArrayW<uint8_t> value);
    // Get instance field reference: private System.Collections.Generic.List`1<System.Byte[]> formData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& dyn_formData();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> fieldNames
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_fieldNames();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> fileNames
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_fileNames();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> types
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_types();
    // Get instance field reference: private System.Byte[] boundary
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_boundary();
    // Get instance field reference: private System.Boolean containsFiles
    [[deprecated("Use field access instead!")]] bool& dyn_containsFiles();
    // static System.Text.Encoding get_DefaultEncoding()
    // Offset: 0x57098F8
    static ::System::Text::Encoding* get_DefaultEncoding();
    // public System.Void .ctor()
    // Offset: 0x5709900
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WWWForm* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::WWWForm::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WWWForm*, creationType>()));
    }
    // public System.Void AddField(System.String fieldName, System.String value)
    // Offset: 0x5709AB8
    void AddField(::StringW fieldName, ::StringW value);
    // public System.Void AddField(System.String fieldName, System.String value, System.Text.Encoding e)
    // Offset: 0x5709AF0
    void AddField(::StringW fieldName, ::StringW value, ::System::Text::Encoding* e);
    // public System.Void AddField(System.String fieldName, System.Int32 i)
    // Offset: 0x5709D60
    void AddField(::StringW fieldName, int i);
    // public System.Collections.Generic.Dictionary`2<System.String,System.String> get_headers()
    // Offset: 0x5709DB4
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_headers();
    // public System.Byte[] get_data()
    // Offset: 0x5709F00
    ::ArrayW<uint8_t> get_data();
    // static private System.Void .cctor()
    // Offset: 0x570AFBC
    static void _cctor();
  }; // UnityEngine.WWWForm
  #pragma pack(pop)
  static check_size<sizeof(WWWForm), 56 + sizeof(bool)> __UnityEngine_WWWFormSizeCheck;
  static_assert(sizeof(WWWForm) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::WWWForm::get_DefaultEncoding
// Il2CppName: get_DefaultEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&UnityEngine::WWWForm::get_DefaultEncoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWForm*), "get_DefaultEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWForm::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::WWWForm::AddField
// Il2CppName: AddField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::WWWForm::*)(::StringW, ::StringW)>(&UnityEngine::WWWForm::AddField)> {
  static const MethodInfo* get() {
    static auto* fieldName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWForm*), "AddField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fieldName, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWForm::AddField
// Il2CppName: AddField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::WWWForm::*)(::StringW, ::StringW, ::System::Text::Encoding*)>(&UnityEngine::WWWForm::AddField)> {
  static const MethodInfo* get() {
    static auto* fieldName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWForm*), "AddField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fieldName, value, e});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWForm::AddField
// Il2CppName: AddField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::WWWForm::*)(::StringW, int)>(&UnityEngine::WWWForm::AddField)> {
  static const MethodInfo* get() {
    static auto* fieldName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWForm*), "AddField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fieldName, i});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWForm::get_headers
// Il2CppName: get_headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (UnityEngine::WWWForm::*)()>(&UnityEngine::WWWForm::get_headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWForm*), "get_headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWForm::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (UnityEngine::WWWForm::*)()>(&UnityEngine::WWWForm::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWForm*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWForm::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::WWWForm::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWForm*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};