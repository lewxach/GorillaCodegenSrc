// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: LengthUnit
  struct LengthUnit;
  // Skipping declaration: Unit because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Length
  struct Length;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Length, "UnityEngine.UIElements", "Length");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.Length
  // [TokenAttribute] Offset: FFFFFFFF
  struct Length/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::UIElements::Length>*/ {
    public:
    // Nested type: ::UnityEngine::UIElements::Length::Unit
    struct Unit;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UIElements.Length/Unit
    // [TokenAttribute] Offset: FFFFFFFF
    struct Unit/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Unit
      constexpr Unit(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UIElements.Length/Unit Pixel
      static constexpr const int Pixel = 0;
      // Get static field: static public UnityEngine.UIElements.Length/Unit Pixel
      static ::UnityEngine::UIElements::Length::Unit _get_Pixel();
      // Set static field: static public UnityEngine.UIElements.Length/Unit Pixel
      static void _set_Pixel(::UnityEngine::UIElements::Length::Unit value);
      // static field const value: static public UnityEngine.UIElements.Length/Unit Percent
      static constexpr const int Percent = 1;
      // Get static field: static public UnityEngine.UIElements.Length/Unit Percent
      static ::UnityEngine::UIElements::Length::Unit _get_Percent();
      // Set static field: static public UnityEngine.UIElements.Length/Unit Percent
      static void _set_Percent(::UnityEngine::UIElements::Length::Unit value);
      // static field const value: static public UnityEngine.UIElements.Length/Unit Auto
      static constexpr const int Auto = 2;
      // Get static field: static public UnityEngine.UIElements.Length/Unit Auto
      static ::UnityEngine::UIElements::Length::Unit _get_Auto();
      // Set static field: static public UnityEngine.UIElements.Length/Unit Auto
      static void _set_Auto(::UnityEngine::UIElements::Length::Unit value);
      // static field const value: static public UnityEngine.UIElements.Length/Unit None
      static constexpr const int None = 3;
      // Get static field: static public UnityEngine.UIElements.Length/Unit None
      static ::UnityEngine::UIElements::Length::Unit _get_None();
      // Set static field: static public UnityEngine.UIElements.Length/Unit None
      static void _set_None(::UnityEngine::UIElements::Length::Unit value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.UIElements.Length/Unit
    #pragma pack(pop)
    static check_size<sizeof(Length::Unit), 0 + sizeof(int)> __UnityEngine_UIElements_Length_UnitSizeCheck;
    static_assert(sizeof(Length::Unit) == 0x4);
    public:
    // private System.Single m_Value
    // Size: 0x4
    // Offset: 0x0
    float m_Value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.UIElements.Length/Unit m_Unit
    // Size: 0x4
    // Offset: 0x4
    ::UnityEngine::UIElements::Length::Unit m_Unit;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Length::Unit) == 0x4);
    public:
    // Creating value type constructor for type: Length
    constexpr Length(float m_Value_ = {}, ::UnityEngine::UIElements::Length::Unit m_Unit_ = {}) noexcept : m_Value{m_Value_}, m_Unit{m_Unit_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::Length>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::Length>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::Length>*>(this);
    }
    // static field const value: static System.Single k_MaxValue
    static constexpr const float k_MaxValue = 8388608;
    // Get static field: static System.Single k_MaxValue
    static float _get_k_MaxValue();
    // Set static field: static System.Single k_MaxValue
    static void _set_k_MaxValue(float value);
    // Get instance field reference: private System.Single m_Value
    [[deprecated("Use field access instead!")]] float& dyn_m_Value();
    // Get instance field reference: private UnityEngine.UIElements.Length/Unit m_Unit
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Length::Unit& dyn_m_Unit();
    // static public UnityEngine.UIElements.Length Percent(System.Single value)
    // Offset: 0x56A7A74
    static ::UnityEngine::UIElements::Length Percent(float value);
    // static public UnityEngine.UIElements.Length Auto()
    // Offset: 0x56A7AC4
    static ::UnityEngine::UIElements::Length Auto();
    // static public UnityEngine.UIElements.Length None()
    // Offset: 0x56A7AF4
    static ::UnityEngine::UIElements::Length None();
    // public System.Single get_value()
    // Offset: 0x56A7AFC
    float get_value();
    // public System.Void set_value(System.Single value)
    // Offset: 0x56A7B04
    void set_value(float value);
    // public UnityEngine.UIElements.LengthUnit get_unit()
    // Offset: 0x56A7B28
    ::UnityEngine::UIElements::LengthUnit get_unit();
    // public System.Boolean IsAuto()
    // Offset: 0x56A7B30
    bool IsAuto();
    // public System.Boolean IsNone()
    // Offset: 0x56A7B40
    bool IsNone();
    // public System.Void .ctor(System.Single value)
    // Offset: 0x56A7B50
    Length(float value);
    // public System.Void .ctor(System.Single value, UnityEngine.UIElements.LengthUnit unit)
    // Offset: 0x56A7A9C
    Length(float value, ::UnityEngine::UIElements::LengthUnit unit);
    // private System.Void .ctor(System.Single value, UnityEngine.UIElements.Length/Unit unit)
    // Offset: 0x56A7ACC
    // ABORTED: conflicts with another method.  Length(float value, ::UnityEngine::UIElements::Length::Unit unit);
    // public System.Boolean Equals(UnityEngine.UIElements.Length other)
    // Offset: 0x56A7BC4
    bool Equals(::UnityEngine::UIElements::Length other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x56A7BEC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x56A56EC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x56A7C78
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.UIElements.Length
  #pragma pack(pop)
  static check_size<sizeof(Length), 4 + sizeof(::UnityEngine::UIElements::Length::Unit)> __UnityEngine_UIElements_LengthSizeCheck;
  static_assert(sizeof(Length) == 0x8);
  // static public System.Boolean op_Equality(UnityEngine.UIElements.Length lhs, UnityEngine.UIElements.Length rhs)
  // Offset: 0x56A5354
  bool operator ==(const ::UnityEngine::UIElements::Length& lhs, const ::UnityEngine::UIElements::Length& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.UIElements.Length lhs, UnityEngine.UIElements.Length rhs)
  // Offset: 0x56A7B9C
  bool operator !=(const ::UnityEngine::UIElements::Length& lhs, const ::UnityEngine::UIElements::Length& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Length::Unit, "UnityEngine.UIElements", "Length/Unit");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::Percent
// Il2CppName: Percent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Length (*)(float)>(&UnityEngine::UIElements::Length::Percent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Length), "Percent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::Auto
// Il2CppName: Auto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Length (*)()>(&UnityEngine::UIElements::Length::Auto)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Length), "Auto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::None
// Il2CppName: None
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Length (*)()>(&UnityEngine::UIElements::Length::None)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Length), "None", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::Length::*)()>(&UnityEngine::UIElements::Length::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Length), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::set_value
// Il2CppName: set_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Length::*)(float)>(&UnityEngine::UIElements::Length::set_value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Length), "set_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::get_unit
// Il2CppName: get_unit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::LengthUnit (UnityEngine::UIElements::Length::*)()>(&UnityEngine::UIElements::Length::get_unit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Length), "get_unit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::IsAuto
// Il2CppName: IsAuto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::Length::*)()>(&UnityEngine::UIElements::Length::IsAuto)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Length), "IsAuto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::IsNone
// Il2CppName: IsNone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::Length::*)()>(&UnityEngine::UIElements::Length::IsNone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Length), "IsNone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::Length
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::Length
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::Length
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::Length::*)(::UnityEngine::UIElements::Length)>(&UnityEngine::UIElements::Length::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Length")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Length), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::Length::*)(::Il2CppObject*)>(&UnityEngine::UIElements::Length::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Length), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::Length::*)()>(&UnityEngine::UIElements::Length::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Length), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::Length::*)()>(&UnityEngine::UIElements::Length::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Length), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UIElements::Length::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!