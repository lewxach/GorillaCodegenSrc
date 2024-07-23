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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Forward declaring type: FrameRate
  struct FrameRate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::FrameRate, "UnityEngine.Playables", "FrameRate");
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Playables.FrameRate
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct FrameRate/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Playables::FrameRate>*/ {
    public:
    public:
    // private System.Int32 m_Rate
    // Size: 0x4
    // Offset: 0x0
    int m_Rate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FrameRate
    constexpr FrameRate(int m_Rate_ = {}) noexcept : m_Rate{m_Rate_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Playables::FrameRate>
    operator ::System::IEquatable_1<::UnityEngine::Playables::FrameRate>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Playables::FrameRate>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Rate;
    }
    // Get static field: static public readonly UnityEngine.Playables.FrameRate k_24Fps
    static ::UnityEngine::Playables::FrameRate _get_k_24Fps();
    // Set static field: static public readonly UnityEngine.Playables.FrameRate k_24Fps
    static void _set_k_24Fps(::UnityEngine::Playables::FrameRate value);
    // Get static field: static public readonly UnityEngine.Playables.FrameRate k_23_976Fps
    static ::UnityEngine::Playables::FrameRate _get_k_23_976Fps();
    // Set static field: static public readonly UnityEngine.Playables.FrameRate k_23_976Fps
    static void _set_k_23_976Fps(::UnityEngine::Playables::FrameRate value);
    // Get static field: static public readonly UnityEngine.Playables.FrameRate k_25Fps
    static ::UnityEngine::Playables::FrameRate _get_k_25Fps();
    // Set static field: static public readonly UnityEngine.Playables.FrameRate k_25Fps
    static void _set_k_25Fps(::UnityEngine::Playables::FrameRate value);
    // Get static field: static public readonly UnityEngine.Playables.FrameRate k_30Fps
    static ::UnityEngine::Playables::FrameRate _get_k_30Fps();
    // Set static field: static public readonly UnityEngine.Playables.FrameRate k_30Fps
    static void _set_k_30Fps(::UnityEngine::Playables::FrameRate value);
    // Get static field: static public readonly UnityEngine.Playables.FrameRate k_29_97Fps
    static ::UnityEngine::Playables::FrameRate _get_k_29_97Fps();
    // Set static field: static public readonly UnityEngine.Playables.FrameRate k_29_97Fps
    static void _set_k_29_97Fps(::UnityEngine::Playables::FrameRate value);
    // Get static field: static public readonly UnityEngine.Playables.FrameRate k_50Fps
    static ::UnityEngine::Playables::FrameRate _get_k_50Fps();
    // Set static field: static public readonly UnityEngine.Playables.FrameRate k_50Fps
    static void _set_k_50Fps(::UnityEngine::Playables::FrameRate value);
    // Get static field: static public readonly UnityEngine.Playables.FrameRate k_60Fps
    static ::UnityEngine::Playables::FrameRate _get_k_60Fps();
    // Set static field: static public readonly UnityEngine.Playables.FrameRate k_60Fps
    static void _set_k_60Fps(::UnityEngine::Playables::FrameRate value);
    // Get static field: static public readonly UnityEngine.Playables.FrameRate k_59_94Fps
    static ::UnityEngine::Playables::FrameRate _get_k_59_94Fps();
    // Set static field: static public readonly UnityEngine.Playables.FrameRate k_59_94Fps
    static void _set_k_59_94Fps(::UnityEngine::Playables::FrameRate value);
    // Get instance field reference: private System.Int32 m_Rate
    [[deprecated("Use field access instead!")]] int& dyn_m_Rate();
    // public System.Boolean get_dropFrame()
    // Offset: 0x54F0768
    bool get_dropFrame();
    // public System.Double get_rate()
    // Offset: 0x54F0774
    double get_rate();
    // public System.Void .ctor(System.UInt32 frameRate, System.Boolean drop)
    // Offset: 0x54F079C
    FrameRate(uint frameRate, bool drop);
    // public System.Boolean IsValid()
    // Offset: 0x54F07AC
    bool IsValid();
    // public System.Boolean Equals(UnityEngine.Playables.FrameRate other)
    // Offset: 0x54F07BC
    bool Equals(::UnityEngine::Playables::FrameRate other);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x54F0864
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // static UnityEngine.Playables.FrameRate DoubleToFrameRate(System.Double framerate)
    // Offset: 0x54F0A04
    static ::UnityEngine::Playables::FrameRate DoubleToFrameRate(double framerate);
    // static private System.Void .cctor()
    // Offset: 0x54F0AC8
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x54F07CC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x54F0850
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x54F0858
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Playables.FrameRate
  #pragma pack(pop)
  static check_size<sizeof(FrameRate), 0 + sizeof(int)> __UnityEngine_Playables_FrameRateSizeCheck;
  static_assert(sizeof(FrameRate) == 0x4);
  // static public System.Boolean op_Equality(UnityEngine.Playables.FrameRate a, UnityEngine.Playables.FrameRate b)
  // Offset: 0x54F0844
  bool operator ==(const ::UnityEngine::Playables::FrameRate& a, const ::UnityEngine::Playables::FrameRate& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::FrameRate::get_dropFrame
// Il2CppName: get_dropFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::FrameRate::*)()>(&UnityEngine::Playables::FrameRate::get_dropFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameRate), "get_dropFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameRate::get_rate
// Il2CppName: get_rate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Playables::FrameRate::*)()>(&UnityEngine::Playables::FrameRate::get_rate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameRate), "get_rate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameRate::FrameRate
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Playables::FrameRate::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::FrameRate::*)()>(&UnityEngine::Playables::FrameRate::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameRate), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameRate::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::FrameRate::*)(::UnityEngine::Playables::FrameRate)>(&UnityEngine::Playables::FrameRate::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameRate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameRate), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameRate::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Playables::FrameRate::*)(::StringW, ::System::IFormatProvider*)>(&UnityEngine::Playables::FrameRate::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameRate), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameRate::DoubleToFrameRate
// Il2CppName: DoubleToFrameRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::FrameRate (*)(double)>(&UnityEngine::Playables::FrameRate::DoubleToFrameRate)> {
  static const MethodInfo* get() {
    static auto* framerate = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameRate), "DoubleToFrameRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{framerate});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameRate::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Playables::FrameRate::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameRate), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameRate::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::FrameRate::*)(::Il2CppObject*)>(&UnityEngine::Playables::FrameRate::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameRate), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameRate::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Playables::FrameRate::*)()>(&UnityEngine::Playables::FrameRate::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameRate), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameRate::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Playables::FrameRate::*)()>(&UnityEngine::Playables::FrameRate::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameRate), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameRate::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!