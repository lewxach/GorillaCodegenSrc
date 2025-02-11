// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Int3
  struct Int3;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Int2
  struct Int2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Int2, "Pathfinding", "Int2");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.Int2
  // [TokenAttribute] Offset: FFFFFFFF
  struct Int2/*, public ::System::ValueType, public ::System::IEquatable_1<::Pathfinding::Int2>*/ {
    public:
    public:
    // public System.Int32 x
    // Size: 0x4
    // Offset: 0x0
    int x;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 y
    // Size: 0x4
    // Offset: 0x4
    int y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Int2
    constexpr Int2(int x_ = {}, int y_ = {}) noexcept : x{x_}, y{y_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Pathfinding::Int2>
    operator ::System::IEquatable_1<::Pathfinding::Int2>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Pathfinding::Int2>*>(this);
    }
    // Get instance field reference: public System.Int32 x
    [[deprecated("Use field access instead!")]] int& dyn_x();
    // Get instance field reference: public System.Int32 y
    [[deprecated("Use field access instead!")]] int& dyn_y();
    // public System.Void .ctor(System.Int32 x, System.Int32 y)
    // Offset: 0x29AEB28
    // ABORTED: conflicts with another method.  Int2(int x, int y);
    // public System.Int64 get_sqrMagnitudeLong()
    // Offset: 0x29AEB30
    int64_t get_sqrMagnitudeLong();
    // static public System.Int64 DotLong(Pathfinding.Int2 a, Pathfinding.Int2 b)
    // Offset: 0x29AEBC0
    static int64_t DotLong(::Pathfinding::Int2 a, ::Pathfinding::Int2 b);
    // public System.Boolean Equals(Pathfinding.Int2 other)
    // Offset: 0x29AEC68
    bool Equals(::Pathfinding::Int2 other);
    // static public Pathfinding.Int2 Min(Pathfinding.Int2 a, Pathfinding.Int2 b)
    // Offset: 0x29AECAC
    static ::Pathfinding::Int2 Min(::Pathfinding::Int2 a, ::Pathfinding::Int2 b);
    // static public Pathfinding.Int2 Max(Pathfinding.Int2 a, Pathfinding.Int2 b)
    // Offset: 0x29AED40
    static ::Pathfinding::Int2 Max(::Pathfinding::Int2 a, ::Pathfinding::Int2 b);
    // static public Pathfinding.Int2 FromInt3XZ(Pathfinding.Int3 o)
    // Offset: 0x29AEDD4
    static ::Pathfinding::Int2 FromInt3XZ(::Pathfinding::Int3 o);
    // static public Pathfinding.Int3 ToInt3XZ(Pathfinding.Int2 o)
    // Offset: 0x29AEDDC
    static ::Pathfinding::Int3 ToInt3XZ(::Pathfinding::Int2 o);
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x29AEBD4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x29AEC90
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x29AEDE8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Pathfinding.Int2
  #pragma pack(pop)
  static check_size<sizeof(Int2), 4 + sizeof(int)> __Pathfinding_Int2SizeCheck;
  static_assert(sizeof(Int2) == 0x8);
  // static public Pathfinding.Int2 op_UnaryNegation(Pathfinding.Int2 lhs)
  // Offset: 0x29AEB40
  ::Pathfinding::Int2 operator-(const ::Pathfinding::Int2& lhs);
  // static public Pathfinding.Int2 op_Addition(Pathfinding.Int2 a, Pathfinding.Int2 b)
  // Offset: 0x29AEB50
  ::Pathfinding::Int2 operator+(const ::Pathfinding::Int2& a, const ::Pathfinding::Int2& b);
  // static public Pathfinding.Int2 op_Subtraction(Pathfinding.Int2 a, Pathfinding.Int2 b)
  // Offset: 0x29AEB68
  ::Pathfinding::Int2 operator-(const ::Pathfinding::Int2& a, const ::Pathfinding::Int2& b);
  // static public System.Boolean op_Equality(Pathfinding.Int2 a, Pathfinding.Int2 b)
  // Offset: 0x29AEB80
  bool operator ==(const ::Pathfinding::Int2& a, const ::Pathfinding::Int2& b);
  // static public System.Boolean op_Inequality(Pathfinding.Int2 a, Pathfinding.Int2 b)
  // Offset: 0x29AEBA0
  bool operator !=(const ::Pathfinding::Int2& a, const ::Pathfinding::Int2& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Int2::Int2
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Int2::get_sqrMagnitudeLong
// Il2CppName: get_sqrMagnitudeLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Pathfinding::Int2::*)()>(&Pathfinding::Int2::get_sqrMagnitudeLong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int2), "get_sqrMagnitudeLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int2::DotLong
// Il2CppName: DotLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::Pathfinding::Int2, ::Pathfinding::Int2)>(&Pathfinding::Int2::DotLong)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int2")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int2), "DotLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int2::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Int2::*)(::Pathfinding::Int2)>(&Pathfinding::Int2::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int2), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int2::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int2 (*)(::Pathfinding::Int2, ::Pathfinding::Int2)>(&Pathfinding::Int2::Min)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int2")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int2), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int2::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int2 (*)(::Pathfinding::Int2, ::Pathfinding::Int2)>(&Pathfinding::Int2::Max)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int2")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int2), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int2::FromInt3XZ
// Il2CppName: FromInt3XZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int2 (*)(::Pathfinding::Int3)>(&Pathfinding::Int2::FromInt3XZ)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int2), "FromInt3XZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int2::ToInt3XZ
// Il2CppName: ToInt3XZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int3 (*)(::Pathfinding::Int2)>(&Pathfinding::Int2::ToInt3XZ)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int2), "ToInt3XZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int2::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Int2::*)(::Il2CppObject*)>(&Pathfinding::Int2::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int2), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int2::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Int2::*)()>(&Pathfinding::Int2::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int2), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int2::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Pathfinding::Int2::*)()>(&Pathfinding::Int2::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Int2), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Int2::operator-
// Il2CppName: op_UnaryNegation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::Int2::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::Int2::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::Int2::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::Int2::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
