// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: emotitron.Compression
namespace emotitron::Compression {
  // Forward declaring type: PrimitivePackBytesExt
  class PrimitivePackBytesExt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::emotitron::Compression::PrimitivePackBytesExt);
DEFINE_IL2CPP_ARG_TYPE(::emotitron::Compression::PrimitivePackBytesExt*, "emotitron.Compression", "PrimitivePackBytesExt");
// Type namespace: emotitron.Compression
namespace emotitron::Compression {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: emotitron.Compression.PrimitivePackBytesExt
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class PrimitivePackBytesExt : public ::Il2CppObject {
    public:
    // static public System.UInt64 WritePackedBytes(System.UInt64 buffer, System.UInt64 value, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C7644
    static uint64_t WritePackedBytes(uint64_t buffer, uint64_t value, ByRef<int> bitposition, int bits);
    // static public System.UInt32 WritePackedBytes(System.UInt32 buffer, System.UInt32 value, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C7720
    static uint WritePackedBytes(uint buffer, uint value, ByRef<int> bitposition, int bits);
    // static public System.Void InjectPackedBytes(System.UInt64 value, ref System.UInt64 buffer, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C7818
    static void InjectPackedBytes(uint64_t value, ByRef<uint64_t> buffer, ByRef<int> bitposition, int bits);
    // static public System.Void InjectPackedBytes(System.UInt32 value, ref System.UInt32 buffer, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C78F8
    static void InjectPackedBytes(uint value, ByRef<uint> buffer, ByRef<int> bitposition, int bits);
    // static public System.UInt64 ReadPackedBytes(System.UInt64 buffer, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C7A04
    static uint64_t ReadPackedBytes(uint64_t buffer, ByRef<int> bitposition, int bits);
    // static public System.UInt32 ReadPackedBytes(System.UInt32 buffer, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C7AA8
    static uint ReadPackedBytes(uint buffer, ByRef<int> bitposition, int bits);
    // static public System.UInt64 WriteSignedPackedBytes(System.UInt64 buffer, System.Int32 value, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C7B4C
    static uint64_t WriteSignedPackedBytes(uint64_t buffer, int value, ByRef<int> bitposition, int bits);
    // static public System.Int32 ReadSignedPackedBytes(System.UInt64 buffer, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C7B58
    static int ReadSignedPackedBytes(uint64_t buffer, ByRef<int> bitposition, int bits);
  }; // emotitron.Compression.PrimitivePackBytesExt
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: emotitron::Compression::PrimitivePackBytesExt::WritePackedBytes
// Il2CppName: WritePackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t, ByRef<int>, int)>(&emotitron::Compression::PrimitivePackBytesExt::WritePackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::PrimitivePackBytesExt*), "WritePackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, value, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::PrimitivePackBytesExt::WritePackedBytes
// Il2CppName: WritePackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, ByRef<int>, int)>(&emotitron::Compression::PrimitivePackBytesExt::WritePackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::PrimitivePackBytesExt*), "WritePackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, value, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::PrimitivePackBytesExt::InjectPackedBytes
// Il2CppName: InjectPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ByRef<uint64_t>, ByRef<int>, int)>(&emotitron::Compression::PrimitivePackBytesExt::InjectPackedBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::PrimitivePackBytesExt*), "InjectPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, buffer, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::PrimitivePackBytesExt::InjectPackedBytes
// Il2CppName: InjectPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ByRef<uint>, ByRef<int>, int)>(&emotitron::Compression::PrimitivePackBytesExt::InjectPackedBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::PrimitivePackBytesExt*), "InjectPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, buffer, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::PrimitivePackBytesExt::ReadPackedBytes
// Il2CppName: ReadPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, ByRef<int>, int)>(&emotitron::Compression::PrimitivePackBytesExt::ReadPackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::PrimitivePackBytesExt*), "ReadPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::PrimitivePackBytesExt::ReadPackedBytes
// Il2CppName: ReadPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, ByRef<int>, int)>(&emotitron::Compression::PrimitivePackBytesExt::ReadPackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::PrimitivePackBytesExt*), "ReadPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::PrimitivePackBytesExt::WriteSignedPackedBytes
// Il2CppName: WriteSignedPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, int, ByRef<int>, int)>(&emotitron::Compression::PrimitivePackBytesExt::WriteSignedPackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::PrimitivePackBytesExt*), "WriteSignedPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, value, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::PrimitivePackBytesExt::ReadSignedPackedBytes
// Il2CppName: ReadSignedPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint64_t, ByRef<int>, int)>(&emotitron::Compression::PrimitivePackBytesExt::ReadSignedPackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::PrimitivePackBytesExt*), "ReadSignedPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bitposition, bits});
  }
};