// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Networking.IMultipartFormSection
#include "UnityEngine/Networking/IMultipartFormSection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Forward declaring type: MultipartFormDataSection
  class MultipartFormDataSection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Networking::MultipartFormDataSection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::MultipartFormDataSection*, "UnityEngine.Networking", "MultipartFormDataSection");
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.MultipartFormDataSection
  // [TokenAttribute] Offset: FFFFFFFF
  class MultipartFormDataSection : public ::Il2CppObject/*, public ::UnityEngine::Networking::IMultipartFormSection*/ {
    public:
    public:
    // private System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte[] data
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.String content
    // Size: 0x8
    // Offset: 0x20
    ::StringW content;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Networking::IMultipartFormSection
    operator ::UnityEngine::Networking::IMultipartFormSection() noexcept {
      return *reinterpret_cast<::UnityEngine::Networking::IMultipartFormSection*>(this);
    }
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: private System.Byte[] data
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_data();
    // Get instance field reference: private System.String content
    [[deprecated("Use field access instead!")]] ::StringW& dyn_content();
    // public System.Void .ctor(System.String name, System.String data, System.Text.Encoding encoding, System.String contentType)
    // Offset: 0x570CC20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultipartFormDataSection* New_ctor(::StringW name, ::StringW data, ::System::Text::Encoding* encoding, ::StringW contentType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::MultipartFormDataSection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultipartFormDataSection*, creationType>(name, data, encoding, contentType)));
    }
    // public System.Void .ctor(System.String name, System.String data, System.String contentType)
    // Offset: 0x570CD98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultipartFormDataSection* New_ctor(::StringW name, ::StringW data, ::StringW contentType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::MultipartFormDataSection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultipartFormDataSection*, creationType>(name, data, contentType)));
    }
    // public System.Void .ctor(System.String name, System.String data)
    // Offset: 0x570CDE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultipartFormDataSection* New_ctor(::StringW name, ::StringW data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::MultipartFormDataSection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultipartFormDataSection*, creationType>(name, data)));
    }
    // public System.String get_sectionName()
    // Offset: 0x570CE50
    ::StringW get_sectionName();
    // public System.Byte[] get_sectionData()
    // Offset: 0x570CE58
    ::ArrayW<uint8_t> get_sectionData();
    // public System.String get_fileName()
    // Offset: 0x570CE60
    ::StringW get_fileName();
    // public System.String get_contentType()
    // Offset: 0x570CE68
    ::StringW get_contentType();
  }; // UnityEngine.Networking.MultipartFormDataSection
  #pragma pack(pop)
  static check_size<sizeof(MultipartFormDataSection), 32 + sizeof(::StringW)> __UnityEngine_Networking_MultipartFormDataSectionSizeCheck;
  static_assert(sizeof(MultipartFormDataSection) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::MultipartFormDataSection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::MultipartFormDataSection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::MultipartFormDataSection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::MultipartFormDataSection::get_sectionName
// Il2CppName: get_sectionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Networking::MultipartFormDataSection::*)()>(&UnityEngine::Networking::MultipartFormDataSection::get_sectionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::MultipartFormDataSection*), "get_sectionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::MultipartFormDataSection::get_sectionData
// Il2CppName: get_sectionData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (UnityEngine::Networking::MultipartFormDataSection::*)()>(&UnityEngine::Networking::MultipartFormDataSection::get_sectionData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::MultipartFormDataSection*), "get_sectionData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::MultipartFormDataSection::get_fileName
// Il2CppName: get_fileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Networking::MultipartFormDataSection::*)()>(&UnityEngine::Networking::MultipartFormDataSection::get_fileName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::MultipartFormDataSection*), "get_fileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::MultipartFormDataSection::get_contentType
// Il2CppName: get_contentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Networking::MultipartFormDataSection::*)()>(&UnityEngine::Networking::MultipartFormDataSection::get_contentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::MultipartFormDataSection*), "get_contentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};