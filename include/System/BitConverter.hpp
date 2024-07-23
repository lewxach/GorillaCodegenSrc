// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Span`1<T>
  template<typename T>
  struct Span_1;
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: BitConverter
  class BitConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::BitConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::BitConverter*, "System", "BitConverter");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.BitConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class BitConverter : public ::Il2CppObject {
    public:
    // Nested type: ::System::BitConverter::$$c
    class $$c;
    // Get static field: static public readonly System.Boolean IsLittleEndian
    static bool _get_IsLittleEndian();
    // Set static field: static public readonly System.Boolean IsLittleEndian
    static void _set_IsLittleEndian(bool value);
    // static public System.Byte[] GetBytes(System.Boolean value)
    // Offset: 0x45BAF40
    static ::ArrayW<uint8_t> GetBytes(bool value);
    // static public System.Byte[] GetBytes(System.Char value)
    // Offset: 0x45BAFA8
    static ::ArrayW<uint8_t> GetBytes(::Il2CppChar value);
    // static public System.Byte[] GetBytes(System.Int16 value)
    // Offset: 0x45BB00C
    static ::ArrayW<uint8_t> GetBytes(int16_t value);
    // static public System.Byte[] GetBytes(System.Int32 value)
    // Offset: 0x45BB070
    static ::ArrayW<uint8_t> GetBytes(int value);
    // static public System.Byte[] GetBytes(System.Int64 value)
    // Offset: 0x45BB0D4
    static ::ArrayW<uint8_t> GetBytes(int64_t value);
    // static public System.Byte[] GetBytes(System.UInt16 value)
    // Offset: 0x45BB138
    static ::ArrayW<uint8_t> GetBytes(uint16_t value);
    // static public System.Byte[] GetBytes(System.UInt32 value)
    // Offset: 0x45BB19C
    static ::ArrayW<uint8_t> GetBytes(uint value);
    // static public System.Boolean TryWriteBytes(System.Span`1<System.Byte> destination, System.UInt32 value)
    // Offset: 0x45BB200
    static bool TryWriteBytes(::System::Span_1<uint8_t> destination, uint value);
    // static public System.Byte[] GetBytes(System.UInt64 value)
    // Offset: 0x45BB280
    static ::ArrayW<uint8_t> GetBytes(uint64_t value);
    // static public System.Byte[] GetBytes(System.Single value)
    // Offset: 0x45BB2E4
    static ::ArrayW<uint8_t> GetBytes(float value);
    // static public System.Byte[] GetBytes(System.Double value)
    // Offset: 0x45BB350
    static ::ArrayW<uint8_t> GetBytes(double value);
    // static public System.Int16 ToInt16(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x45BB3BC
    static int16_t ToInt16(::ArrayW<uint8_t> value, int startIndex);
    // static public System.Int32 ToInt32(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x45BB440
    static int ToInt32(::ArrayW<uint8_t> value, int startIndex);
    // static public System.Int32 ToInt32(System.ReadOnlySpan`1<System.Byte> value)
    // Offset: 0x45BB4C4
    static int ToInt32(::System::ReadOnlySpan_1<uint8_t> value);
    // static public System.Int64 ToInt64(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x45BB53C
    static int64_t ToInt64(::ArrayW<uint8_t> value, int startIndex);
    // static public System.UInt16 ToUInt16(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x45BB5C0
    static uint16_t ToUInt16(::ArrayW<uint8_t> value, int startIndex);
    // static public System.UInt32 ToUInt32(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x45BB5C4
    static uint ToUInt32(::ArrayW<uint8_t> value, int startIndex);
    // static public System.UInt64 ToUInt64(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x45BB5C8
    static uint64_t ToUInt64(::ArrayW<uint8_t> value, int startIndex);
    // static public System.Single ToSingle(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x45BB5CC
    static float ToSingle(::ArrayW<uint8_t> value, int startIndex);
    // static public System.Double ToDouble(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x45BB5E0
    static double ToDouble(::ArrayW<uint8_t> value, int startIndex);
    // static public System.String ToString(System.Byte[] value, System.Int32 startIndex, System.Int32 length)
    // Offset: 0x45BB5F4
    static ::StringW ToString(::ArrayW<uint8_t> value, int startIndex, int length);
    // static public System.String ToString(System.Byte[] value)
    // Offset: 0x45BB8E0
    static ::StringW ToString(::ArrayW<uint8_t> value);
    // static public System.Int64 DoubleToInt64Bits(System.Double value)
    // Offset: 0x45BB908
    static int64_t DoubleToInt64Bits(double value);
    // static public System.Double Int64BitsToDouble(System.Int64 value)
    // Offset: 0x45BB910
    static double Int64BitsToDouble(int64_t value);
    // static public System.Int32 SingleToInt32Bits(System.Single value)
    // Offset: 0x45BB918
    static int SingleToInt32Bits(float value);
    // static public System.Single Int32BitsToSingle(System.Int32 value)
    // Offset: 0x45BB920
    static float Int32BitsToSingle(int value);
    // static private System.Void .cctor()
    // Offset: 0x45BB928
    static void _cctor();
  }; // System.BitConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(bool)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::Il2CppChar)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int16_t)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int64_t)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(uint16_t)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(uint)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::TryWriteBytes
// Il2CppName: TryWriteBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Span_1<uint8_t>, uint)>(&System::BitConverter::TryWriteBytes)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "TryWriteBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(uint64_t)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(float)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(double)>(&System::BitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToInt16
// Il2CppName: ToInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToInt16)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToInt32
// Il2CppName: ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToInt32)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToInt32
// Il2CppName: ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::ReadOnlySpan_1<uint8_t>)>(&System::BitConverter::ToInt32)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToInt64
// Il2CppName: ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToInt64)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToUInt16
// Il2CppName: ToUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToUInt16)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToUInt32
// Il2CppName: ToUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToUInt32)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToUInt64
// Il2CppName: ToUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToUInt64)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToSingle
// Il2CppName: ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToSingle)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToDouble
// Il2CppName: ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(::ArrayW<uint8_t>, int)>(&System::BitConverter::ToDouble)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int, int)>(&System::BitConverter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex, length});
  }
};
// Writing MetadataGetter for method: System::BitConverter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&System::BitConverter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::DoubleToInt64Bits
// Il2CppName: DoubleToInt64Bits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(double)>(&System::BitConverter::DoubleToInt64Bits)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "DoubleToInt64Bits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::Int64BitsToDouble
// Il2CppName: Int64BitsToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(int64_t)>(&System::BitConverter::Int64BitsToDouble)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "Int64BitsToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::SingleToInt32Bits
// Il2CppName: SingleToInt32Bits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&System::BitConverter::SingleToInt32Bits)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "SingleToInt32Bits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::Int32BitsToSingle
// Il2CppName: Int32BitsToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int)>(&System::BitConverter::Int32BitsToSingle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), "Int32BitsToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::BitConverter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::BitConverter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::BitConverter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};