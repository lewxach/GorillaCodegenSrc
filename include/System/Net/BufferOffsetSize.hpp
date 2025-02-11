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
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: BufferOffsetSize
  class BufferOffsetSize;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::BufferOffsetSize);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::BufferOffsetSize*, "System.Net", "BufferOffsetSize");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.BufferOffsetSize
  // [TokenAttribute] Offset: FFFFFFFF
  class BufferOffsetSize : public ::Il2CppObject {
    public:
    public:
    // System.Byte[] Buffer
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> Buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.Int32 Offset
    // Size: 0x4
    // Offset: 0x18
    int Offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Size
    // Size: 0x4
    // Offset: 0x1C
    int Size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Byte[] Buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Buffer();
    // Get instance field reference: System.Int32 Offset
    [[deprecated("Use field access instead!")]] int& dyn_Offset();
    // Get instance field reference: System.Int32 Size
    [[deprecated("Use field access instead!")]] int& dyn_Size();
    // System.Void .ctor(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.Boolean copyBuffer)
    // Offset: 0x4FEB208
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BufferOffsetSize* New_ctor(::ArrayW<uint8_t> buffer, int offset, int size, bool copyBuffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::BufferOffsetSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BufferOffsetSize*, creationType>(buffer, offset, size, copyBuffer)));
    }
    // System.Void .ctor(System.Byte[] buffer, System.Boolean copyBuffer)
    // Offset: 0x4FEB2C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BufferOffsetSize* New_ctor(::ArrayW<uint8_t> buffer, bool copyBuffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::BufferOffsetSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BufferOffsetSize*, creationType>(buffer, copyBuffer)));
    }
  }; // System.Net.BufferOffsetSize
  #pragma pack(pop)
  static check_size<sizeof(BufferOffsetSize), 28 + sizeof(int)> __System_Net_BufferOffsetSizeSizeCheck;
  static_assert(sizeof(BufferOffsetSize) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::BufferOffsetSize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::BufferOffsetSize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
