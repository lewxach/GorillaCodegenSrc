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
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: Angle
  struct Angle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Angle, "Fusion", "Angle");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.Angle
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkStructWeavedAttribute] Offset: FFFFFFFF
  struct Angle/*, public ::System::ValueType, public ::Fusion::INetworkStruct, public ::System::IEquatable_1<::Fusion::Angle>*/ {
    public:
    public:
    // private System.Int32 _value
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Angle
    constexpr Angle(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::INetworkStruct
    operator ::Fusion::INetworkStruct() noexcept {
      return *reinterpret_cast<::Fusion::INetworkStruct*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Fusion::Angle>
    operator ::System::IEquatable_1<::Fusion::Angle>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Fusion::Angle>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Int32 SIZE
    static constexpr const int SIZE = 4;
    // Get static field: static public System.Int32 SIZE
    static int _get_SIZE();
    // Set static field: static public System.Int32 SIZE
    static void _set_SIZE(int value);
    // static field const value: static private System.Int32 ACCURACY
    static constexpr const int ACCURACY = 10000;
    // Get static field: static private System.Int32 ACCURACY
    static int _get_ACCURACY();
    // Set static field: static private System.Int32 ACCURACY
    static void _set_ACCURACY(int value);
    // static field const value: static private System.Int32 DECIMALS
    static constexpr const int DECIMALS = 4;
    // Get static field: static private System.Int32 DECIMALS
    static int _get_DECIMALS();
    // Set static field: static private System.Int32 DECIMALS
    static void _set_DECIMALS(int value);
    // static field const value: static private System.Int32 _360
    static constexpr const int _360 = 3600000;
    // Get static field: static private System.Int32 _360
    static int _get__360();
    // Set static field: static private System.Int32 _360
    static void _set__360(int value);
    // Get instance field reference: private System.Int32 _value
    [[deprecated("Use field access instead!")]] int& dyn__value();
    // public System.Void Clamp(Fusion.Angle min, Fusion.Angle max)
    // Offset: 0x2B44DE0
    void Clamp(::Fusion::Angle min, ::Fusion::Angle max);
    // static public Fusion.Angle Min(Fusion.Angle a, Fusion.Angle b)
    // Offset: 0x2B44E0C
    static ::Fusion::Angle Min(::Fusion::Angle a, ::Fusion::Angle b);
    // static public Fusion.Angle Max(Fusion.Angle a, Fusion.Angle b)
    // Offset: 0x2B44E1C
    static ::Fusion::Angle Max(::Fusion::Angle a, ::Fusion::Angle b);
    // static public Fusion.Angle Lerp(Fusion.Angle a, Fusion.Angle b, System.Single t)
    // Offset: 0x2B44E2C
    static ::Fusion::Angle Lerp(::Fusion::Angle a, ::Fusion::Angle b, float t);
    // static public Fusion.Angle Clamp(Fusion.Angle value, Fusion.Angle min, Fusion.Angle max)
    // Offset: 0x2B44FE4
    static ::Fusion::Angle Clamp(::Fusion::Angle value, ::Fusion::Angle min, ::Fusion::Angle max);
    // public System.Boolean Equals(Fusion.Angle other)
    // Offset: 0x2B4504C
    bool Equals(::Fusion::Angle other);
    // static public System.Single op_Explicit(Fusion.Angle value)
    // Offset: 0x2B44F3C
    explicit operator float();
    // static public System.Double op_Explicit(Fusion.Angle value)
    // Offset: 0x2B45130
    explicit operator double();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2B4505C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2B450D4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x2B4522C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Fusion.Angle
  #pragma pack(pop)
  static check_size<sizeof(Angle), 0 + sizeof(int)> __Fusion_AngleSizeCheck;
  static_assert(sizeof(Angle) == 0x4);
  // static public System.Boolean op_LessThan(Fusion.Angle a, Fusion.Angle b)
  // Offset: 0x2B45004
  bool operator <(const ::Fusion::Angle& a, const ::Fusion::Angle& b);
  // static public System.Boolean op_LessThanOrEqual(Fusion.Angle a, Fusion.Angle b)
  // Offset: 0x2B45010
  bool operator <=(const ::Fusion::Angle& a, const ::Fusion::Angle& b);
  // static public System.Boolean op_GreaterThan(Fusion.Angle a, Fusion.Angle b)
  // Offset: 0x2B4501C
  bool operator >(const ::Fusion::Angle& a, const ::Fusion::Angle& b);
  // static public System.Boolean op_GreaterThanOrEqual(Fusion.Angle a, Fusion.Angle b)
  // Offset: 0x2B45028
  bool operator >=(const ::Fusion::Angle& a, const ::Fusion::Angle& b);
  // static public System.Boolean op_Equality(Fusion.Angle a, Fusion.Angle b)
  // Offset: 0x2B45034
  bool operator ==(const ::Fusion::Angle& a, const ::Fusion::Angle& b);
  // static public System.Boolean op_Inequality(Fusion.Angle a, Fusion.Angle b)
  // Offset: 0x2B45040
  bool operator !=(const ::Fusion::Angle& a, const ::Fusion::Angle& b);
  // static public Fusion.Angle op_Addition(Fusion.Angle a, Fusion.Angle b)
  // Offset: 0x2B450DC
  ::Fusion::Angle operator+(const ::Fusion::Angle& a, const ::Fusion::Angle& b);
  // static public Fusion.Angle op_Subtraction(Fusion.Angle a, Fusion.Angle b)
  // Offset: 0x2B45114
  ::Fusion::Angle operator-(const ::Fusion::Angle& a, const ::Fusion::Angle& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Angle::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Angle::*)(::Fusion::Angle, ::Fusion::Angle)>(&Fusion::Angle::Clamp)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("Fusion", "Angle")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("Fusion", "Angle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Angle), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max});
  }
};
// Writing MetadataGetter for method: Fusion::Angle::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Angle (*)(::Fusion::Angle, ::Fusion::Angle)>(&Fusion::Angle::Min)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Fusion", "Angle")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Fusion", "Angle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Angle), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Fusion::Angle::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Angle (*)(::Fusion::Angle, ::Fusion::Angle)>(&Fusion::Angle::Max)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Fusion", "Angle")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Fusion", "Angle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Angle), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Fusion::Angle::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Angle (*)(::Fusion::Angle, ::Fusion::Angle, float)>(&Fusion::Angle::Lerp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Fusion", "Angle")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Fusion", "Angle")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Angle), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: Fusion::Angle::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Angle (*)(::Fusion::Angle, ::Fusion::Angle, ::Fusion::Angle)>(&Fusion::Angle::Clamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Fusion", "Angle")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("Fusion", "Angle")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("Fusion", "Angle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Angle), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: Fusion::Angle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Angle::*)(::Fusion::Angle)>(&Fusion::Angle::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Fusion", "Angle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Angle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Fusion::Angle::operator float
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::Angle::operator double
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::Angle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Angle::*)(::Il2CppObject*)>(&Fusion::Angle::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Angle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Fusion::Angle::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Angle::*)()>(&Fusion::Angle::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Angle), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Angle::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Angle::*)()>(&Fusion::Angle::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Angle), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Angle::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::Angle::operator <=
// Il2CppName: op_LessThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::Angle::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::Angle::operator >=
// Il2CppName: op_GreaterThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::Angle::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::Angle::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::Angle::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::Angle::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
