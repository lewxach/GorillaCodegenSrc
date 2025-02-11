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
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: Tick
  struct Tick;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Tick, "Fusion", "Tick");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.Tick
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkStructWeavedAttribute] Offset: FFFFFFFF
  struct Tick/*, public ::System::ValueType, public ::Fusion::INetworkStruct, public ::System::IComparable_1<::Fusion::Tick>, public ::System::IEquatable_1<::Fusion::Tick>*/ {
    public:
    // Nested type: ::Fusion::Tick::RelationalComparer
    class RelationalComparer;
    // Nested type: ::Fusion::Tick::EqualityComparer
    class EqualityComparer;
    public:
    // public System.Int32 Raw
    // Size: 0x4
    // Offset: 0x0
    int Raw;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Tick
    constexpr Tick(int Raw_ = {}) noexcept : Raw{Raw_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::INetworkStruct
    operator ::Fusion::INetworkStruct() noexcept {
      return *reinterpret_cast<::Fusion::INetworkStruct*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::Fusion::Tick>
    operator ::System::IComparable_1<::Fusion::Tick>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::Fusion::Tick>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Fusion::Tick>
    operator ::System::IEquatable_1<::Fusion::Tick>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Fusion::Tick>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return Raw;
    }
    // static field const value: static public System.Int32 SIZE
    static constexpr const int SIZE = 4;
    // Get static field: static public System.Int32 SIZE
    static int _get_SIZE();
    // Set static field: static public System.Int32 SIZE
    static void _set_SIZE(int value);
    // static field const value: static public System.Int32 ALIGNMENT
    static constexpr const int ALIGNMENT = 4;
    // Get static field: static public System.Int32 ALIGNMENT
    static int _get_ALIGNMENT();
    // Set static field: static public System.Int32 ALIGNMENT
    static void _set_ALIGNMENT(int value);
    // Get instance field reference: public System.Int32 Raw
    [[deprecated("Use field access instead!")]] int& dyn_Raw();
    // public Fusion.Tick Next(System.Int32 increment)
    // Offset: 0x2B4A5B0
    ::Fusion::Tick Next(int increment);
    // public System.Boolean Equals(Fusion.Tick other)
    // Offset: 0x2B4A5BC
    bool Equals(::Fusion::Tick other);
    // public System.Int32 CompareTo(Fusion.Tick other)
    // Offset: 0x2B45A64
    int CompareTo(::Fusion::Tick other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2B4A5CC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2B4A644
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x2B4A64C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Fusion.Tick
  #pragma pack(pop)
  static check_size<sizeof(Tick), 0 + sizeof(int)> __Fusion_TickSizeCheck;
  static_assert(sizeof(Tick) == 0x4);
  // static public System.Boolean op_GreaterThan(Fusion.Tick a, Fusion.Tick b)
  // Offset: 0x2B4A6D0
  bool operator >(const ::Fusion::Tick& a, const ::Fusion::Tick& b);
  // static public System.Boolean op_GreaterThanOrEqual(Fusion.Tick a, Fusion.Tick b)
  // Offset: 0x2B4A6DC
  bool operator >=(const ::Fusion::Tick& a, const ::Fusion::Tick& b);
  // static public System.Boolean op_LessThan(Fusion.Tick a, Fusion.Tick b)
  // Offset: 0x2B4A6E8
  bool operator <(const ::Fusion::Tick& a, const ::Fusion::Tick& b);
  // static public System.Boolean op_LessThanOrEqual(Fusion.Tick a, Fusion.Tick b)
  // Offset: 0x2B4A6F4
  bool operator <=(const ::Fusion::Tick& a, const ::Fusion::Tick& b);
  // static public System.Boolean op_Equality(Fusion.Tick a, Fusion.Tick b)
  // Offset: 0x2B4A700
  bool operator ==(const ::Fusion::Tick& a, const ::Fusion::Tick& b);
  // static public System.Boolean op_Inequality(Fusion.Tick a, Fusion.Tick b)
  // Offset: 0x2B4A70C
  bool operator !=(const ::Fusion::Tick& a, const ::Fusion::Tick& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Tick::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Tick (Fusion::Tick::*)(int)>(&Fusion::Tick::Next)> {
  static const MethodInfo* get() {
    static auto* increment = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Tick), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{increment});
  }
};
// Writing MetadataGetter for method: Fusion::Tick::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Tick::*)(::Fusion::Tick)>(&Fusion::Tick::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Tick), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Fusion::Tick::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Tick::*)(::Fusion::Tick)>(&Fusion::Tick::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Tick), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Fusion::Tick::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Tick::*)(::Il2CppObject*)>(&Fusion::Tick::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Tick), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Fusion::Tick::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Tick::*)()>(&Fusion::Tick::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Tick), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Tick::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Tick::*)()>(&Fusion::Tick::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Tick), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Tick::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::Tick::operator >=
// Il2CppName: op_GreaterThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::Tick::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::Tick::operator <=
// Il2CppName: op_LessThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::Tick::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::Tick::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
