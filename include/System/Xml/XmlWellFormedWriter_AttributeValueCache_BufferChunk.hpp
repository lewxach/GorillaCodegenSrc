// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlWellFormedWriter/AttributeValueCache
#include "System/Xml/XmlWellFormedWriter_AttributeValueCache.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlWellFormedWriter::AttributeValueCache::BufferChunk);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWellFormedWriter::AttributeValueCache::BufferChunk*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/BufferChunk");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlWellFormedWriter/AttributeValueCache/BufferChunk
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlWellFormedWriter::AttributeValueCache::BufferChunk : public ::Il2CppObject {
    public:
    public:
    // System.Char[] buffer
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Il2CppChar> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // System.Int32 index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 count
    // Size: 0x4
    // Offset: 0x1C
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Char[] buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn_buffer();
    // Get instance field reference: System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count();
    // System.Void .ctor(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x4E03EE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlWellFormedWriter::AttributeValueCache::BufferChunk* New_ctor(::ArrayW<::Il2CppChar> buffer, int index, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlWellFormedWriter::AttributeValueCache::BufferChunk::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlWellFormedWriter::AttributeValueCache::BufferChunk*, creationType>(buffer, index, count)));
    }
  }; // System.Xml.XmlWellFormedWriter/AttributeValueCache/BufferChunk
  #pragma pack(pop)
  static check_size<sizeof(XmlWellFormedWriter::AttributeValueCache::BufferChunk), 28 + sizeof(int)> __System_Xml_XmlWellFormedWriter_AttributeValueCache_BufferChunkSizeCheck;
  static_assert(sizeof(XmlWellFormedWriter::AttributeValueCache::BufferChunk) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::BufferChunk::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
