// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer
#include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer_Writer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::Writer::Chunk);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::Writer::Chunk*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/Writer/Chunk");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer/Chunk
  // [TokenAttribute] Offset: FFFFFFFF
  class BinaryStorageBuffer::Writer::Chunk : public ::Il2CppObject {
    public:
    public:
    // public System.UInt32 position
    // Size: 0x4
    // Offset: 0x10
    uint position;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: position and: data
    char __padding0[0x4] = {};
    // public System.Byte[] data
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: public System.UInt32 position
    [[deprecated("Use field access instead!")]] uint& dyn_position();
    // Get instance field reference: public System.Byte[] data
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_data();
    // public System.Void .ctor()
    // Offset: 0x532D87C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryStorageBuffer::Writer::Chunk* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::Writer::Chunk::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryStorageBuffer::Writer::Chunk*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer/Chunk
  #pragma pack(pop)
  static check_size<sizeof(BinaryStorageBuffer::Writer::Chunk), 24 + sizeof(::ArrayW<uint8_t>)> __UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Writer_ChunkSizeCheck;
  static_assert(sizeof(BinaryStorageBuffer::Writer::Chunk) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::Writer::Chunk::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
