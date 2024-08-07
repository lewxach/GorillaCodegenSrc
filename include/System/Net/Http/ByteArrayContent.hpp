// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.HttpContent
#include "System/Net/Http/HttpContent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Forward declaring type: ByteArrayContent
  class ByteArrayContent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::ByteArrayContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::ByteArrayContent*, "System.Net.Http", "ByteArrayContent");
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.ByteArrayContent
  // [TokenAttribute] Offset: FFFFFFFF
  class ByteArrayContent : public ::System::Net::Http::HttpContent {
    public:
    // Writing base type padding for base size: 0x19 to desired offset: 0x20
    char ___base_padding[0x7] = {};
    public:
    // private readonly System.Byte[] content
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> content;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.Int32 count
    // Size: 0x4
    // Offset: 0x28
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly System.Byte[] content
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_content();
    // Get instance field reference: private readonly System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count();
    // public System.Void .ctor(System.Byte[] content)
    // Offset: 0x4CF8E44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ByteArrayContent* New_ctor(::ArrayW<uint8_t> content) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::ByteArrayContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ByteArrayContent*, creationType>(content)));
    }
  }; // System.Net.Http.ByteArrayContent
  #pragma pack(pop)
  static check_size<sizeof(ByteArrayContent), 40 + sizeof(int)> __System_Net_Http_ByteArrayContentSizeCheck;
  static_assert(sizeof(ByteArrayContent) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::ByteArrayContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
