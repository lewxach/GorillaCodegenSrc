// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.INetworkStruct
#include "Fusion/INetworkStruct.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: BitSet128
  struct BitSet128;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::BitSet128, "Fusion", "BitSet128");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.BitSet128
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkStructWeavedAttribute] Offset: FFFFFFFF
  struct BitSet128/*, public ::System::ValueType, public ::Fusion::INetworkStruct, public ::System::IEquatable_1<::Fusion::BitSet128>, public ::System::Collections::Generic::IEnumerable_1<int>*/ {
    public:
    // Nested type: ::Fusion::BitSet128::Enumerator
    struct Enumerator;
    // Nested type: ::Fusion::BitSet128::$Bits$e__FixedBuffer
    struct $Bits$e__FixedBuffer;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion.BitSet128/<Bits>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    struct $Bits$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.UInt64 FixedElementField
      // Size: 0x8
      // Offset: 0x0
      uint64_t FixedElementField;
      // Field size check
      static_assert(sizeof(uint64_t) == 0x8);
      public:
      // Creating value type constructor for type: $Bits$e__FixedBuffer
      constexpr $Bits$e__FixedBuffer(uint64_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator uint64_t
      constexpr operator uint64_t() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.UInt64 FixedElementField
      [[deprecated("Use field access instead!")]] uint64_t& dyn_FixedElementField();
    }; // Fusion.BitSet128/<Bits>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(BitSet128::$Bits$e__FixedBuffer), 0 + sizeof(uint64_t)> __Fusion_BitSet128_$Bits$e__FixedBufferSizeCheck;
    static_assert(sizeof(BitSet128::$Bits$e__FixedBuffer) == 0x8);
    public:
    // public Fusion.BitSet128/<Bits>e__FixedBuffer Bits
    // Size: 0x8
    // Offset: 0x0
    ::Fusion::BitSet128::$Bits$e__FixedBuffer Bits;
    // Field size check
    static_assert(sizeof(::Fusion::BitSet128::$Bits$e__FixedBuffer) == 0x8);
    public:
    // Creating value type constructor for type: BitSet128
    constexpr BitSet128(::Fusion::BitSet128::$Bits$e__FixedBuffer Bits_ = {}) noexcept : Bits{Bits_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::INetworkStruct
    operator ::Fusion::INetworkStruct() noexcept {
      return *reinterpret_cast<::Fusion::INetworkStruct*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Fusion::BitSet128>
    operator ::System::IEquatable_1<::Fusion::BitSet128>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Fusion::BitSet128>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<int>
    operator ::System::Collections::Generic::IEnumerable_1<int>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<int>*>(this);
    }
    // Creating conversion operator: operator ::Fusion::BitSet128::$Bits$e__FixedBuffer
    constexpr operator ::Fusion::BitSet128::$Bits$e__FixedBuffer() const noexcept {
      return Bits;
    }
    // static field const value: static public System.Int32 SIZE
    static constexpr const int SIZE = 16;
    // Get static field: static public System.Int32 SIZE
    static int _get_SIZE();
    // Set static field: static public System.Int32 SIZE
    static void _set_SIZE(int value);
    // Get instance field reference: public Fusion.BitSet128/<Bits>e__FixedBuffer Bits
    [[deprecated("Use field access instead!")]] ::Fusion::BitSet128::$Bits$e__FixedBuffer& dyn_Bits();
    // public System.Int32 get_Length()
    // Offset: 0x2B46F04
    int get_Length();
    // static public Fusion.BitSet128 FromArray(System.UInt64[] values)
    // Offset: 0x2B46F0C
    static ::Fusion::BitSet128 FromArray(::ArrayW<uint64_t> values);
    // public System.Void Set(System.Int32 bit)
    // Offset: 0x2B47014
    void Set(int bit);
    // public System.Void Clear(System.Int32 bit)
    // Offset: 0x2B4703C
    void Clear(int bit);
    // public System.Void ClearAll()
    // Offset: 0x2B47064
    void ClearAll();
    // public System.Boolean IsSet(System.Int32 bit)
    // Offset: 0x2B470B0
    bool IsSet(int bit);
    // public System.Int32 GetSetCount()
    // Offset: 0x2B470D0
    int GetSetCount();
    // public System.Boolean Any()
    // Offset: 0x2B47188
    bool Any();
    // public System.Boolean Equals(Fusion.BitSet128 other)
    // Offset: 0x2B47270
    bool Equals(::Fusion::BitSet128 other);
    // public Fusion.BitSet128/Enumerator GetEnumerator()
    // Offset: 0x2B47300
    ::Fusion::BitSet128::Enumerator GetEnumerator();
    // private System.Collections.Generic.IEnumerator`1<System.Int32> System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
    // Offset: 0x2B47318
    ::System::Collections::Generic::IEnumerator_1<int>* System_Collections_Generic_IEnumerable$System_Int32$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x2B47374
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override System.Int32 GetHashCode()
    // Offset: 0x2B471A8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2B471F8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // Fusion.BitSet128
  #pragma pack(pop)
  static check_size<sizeof(BitSet128), 0 + sizeof(::Fusion::BitSet128::$Bits$e__FixedBuffer)> __Fusion_BitSet128SizeCheck;
  static_assert(sizeof(BitSet128) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::BitSet128::$Bits$e__FixedBuffer, "Fusion", "BitSet128/<Bits>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::BitSet128::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::BitSet128::*)()>(&Fusion::BitSet128::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet128), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet128::FromArray
// Il2CppName: FromArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::BitSet128 (*)(::ArrayW<uint64_t>)>(&Fusion::BitSet128::FromArray)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet128), "FromArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet128::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::BitSet128::*)(int)>(&Fusion::BitSet128::Set)> {
  static const MethodInfo* get() {
    static auto* bit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet128), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bit});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet128::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::BitSet128::*)(int)>(&Fusion::BitSet128::Clear)> {
  static const MethodInfo* get() {
    static auto* bit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet128), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bit});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet128::ClearAll
// Il2CppName: ClearAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::BitSet128::*)()>(&Fusion::BitSet128::ClearAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet128), "ClearAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet128::IsSet
// Il2CppName: IsSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::BitSet128::*)(int)>(&Fusion::BitSet128::IsSet)> {
  static const MethodInfo* get() {
    static auto* bit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet128), "IsSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bit});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet128::GetSetCount
// Il2CppName: GetSetCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::BitSet128::*)()>(&Fusion::BitSet128::GetSetCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet128), "GetSetCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet128::Any
// Il2CppName: Any
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::BitSet128::*)()>(&Fusion::BitSet128::Any)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet128), "Any", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet128::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::BitSet128::*)(::Fusion::BitSet128)>(&Fusion::BitSet128::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Fusion", "BitSet128")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet128), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet128::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::BitSet128::Enumerator (Fusion::BitSet128::*)()>(&Fusion::BitSet128::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet128), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet128::System_Collections_Generic_IEnumerable$System_Int32$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<int>* (Fusion::BitSet128::*)()>(&Fusion::BitSet128::System_Collections_Generic_IEnumerable$System_Int32$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet128), "System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet128::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Fusion::BitSet128::*)()>(&Fusion::BitSet128::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet128), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet128::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::BitSet128::*)()>(&Fusion::BitSet128::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet128), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet128::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::BitSet128::*)(::Il2CppObject*)>(&Fusion::BitSet128::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet128), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};