// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Mathematics
namespace Unity::Mathematics {
  // Forward declaring type: float2
  struct float2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Unity.Mathematics
namespace Unity::Mathematics {
  // Forward declaring type: double2
  struct double2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double2, "Unity.Mathematics", "double2");
// Type namespace: Unity.Mathematics
namespace Unity::Mathematics {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Mathematics.double2
  // [TokenAttribute] Offset: FFFFFFFF
  // [Il2CppEagerStaticClassConstructionAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  struct double2/*, public ::System::ValueType, public ::System::IEquatable_1<::Unity::Mathematics::double2>, public ::System::IFormattable*/ {
    public:
    // Nested type: ::Unity::Mathematics::double2::DebuggerProxy
    class DebuggerProxy;
    public:
    // public System.Double x
    // Size: 0x8
    // Offset: 0x0
    double x;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double y
    // Size: 0x8
    // Offset: 0x8
    double y;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating value type constructor for type: double2
    constexpr double2(double x_ = {}, double y_ = {}) noexcept : x{x_}, y{y_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Unity::Mathematics::double2>
    operator ::System::IEquatable_1<::Unity::Mathematics::double2>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Unity::Mathematics::double2>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Get static field: static public readonly Unity.Mathematics.double2 zero
    static ::Unity::Mathematics::double2 _get_zero();
    // Set static field: static public readonly Unity.Mathematics.double2 zero
    static void _set_zero(::Unity::Mathematics::double2 value);
    // Get instance field reference: public System.Double x
    [[deprecated("Use field access instead!")]] double& dyn_x();
    // Get instance field reference: public System.Double y
    [[deprecated("Use field access instead!")]] double& dyn_y();
    // public System.Void .ctor(System.Double x, System.Double y)
    // Offset: 0x517C220
    // ABORTED: conflicts with another method.  double2(double x, double y);
    // public System.Void .ctor(Unity.Mathematics.float2 v)
    // Offset: 0x517C228
    double2(::Unity::Mathematics::float2 v);
    // public System.Boolean Equals(Unity.Mathematics.double2 rhs)
    // Offset: 0x517C250
    bool Equals(::Unity::Mathematics::double2 rhs);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x517C3E4
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x517C274
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x517C2FC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x517C33C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Unity.Mathematics.double2
  #pragma pack(pop)
  static check_size<sizeof(double2), 8 + sizeof(double)> __Unity_Mathematics_double2SizeCheck;
  static_assert(sizeof(double2) == 0x10);
  // static public Unity.Mathematics.double2 op_Subtraction(Unity.Mathematics.double2 lhs, Unity.Mathematics.double2 rhs)
  // Offset: 0x517C244
  ::Unity::Mathematics::double2 operator-(const ::Unity::Mathematics::double2& lhs, const ::Unity::Mathematics::double2& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Mathematics::double2::double2
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Mathematics::double2::double2
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Mathematics::double2::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::Mathematics::double2::*)(::Unity::Mathematics::double2)>(&Unity::Mathematics::double2::Equals)> {
  static const MethodInfo* get() {
    static auto* rhs = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::double2), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rhs});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::double2::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Mathematics::double2::*)(::StringW, ::System::IFormatProvider*)>(&Unity::Mathematics::double2::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::double2), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::double2::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::Mathematics::double2::*)(::Il2CppObject*)>(&Unity::Mathematics::double2::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::double2), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::double2::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Unity::Mathematics::double2::*)()>(&Unity::Mathematics::double2::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::double2), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::double2::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Mathematics::double2::*)()>(&Unity::Mathematics::double2::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::double2), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::double2::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
