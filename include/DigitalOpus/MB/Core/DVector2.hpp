// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: DRect
  struct DRect;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: DVector2
  struct DVector2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::DVector2, "DigitalOpus.MB.Core", "DVector2");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: DigitalOpus.MB.Core.DVector2
  // [TokenAttribute] Offset: FFFFFFFF
  struct DVector2/*, public ::System::ValueType*/ {
    public:
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
    // Creating value type constructor for type: DVector2
    constexpr DVector2(double x_ = {}, double y_ = {}) noexcept : x{x_}, y{y_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private System.Double epsilon
    static double _get_epsilon();
    // Set static field: static private System.Double epsilon
    static void _set_epsilon(double value);
    // Get instance field reference: public System.Double x
    [[deprecated("Use field access instead!")]] double& dyn_x();
    // Get instance field reference: public System.Double y
    [[deprecated("Use field access instead!")]] double& dyn_y();
    // static public DigitalOpus.MB.Core.DVector2 Subtract(DigitalOpus.MB.Core.DVector2 a, DigitalOpus.MB.Core.DVector2 b)
    // Offset: 0x43D199C
    static ::DigitalOpus::MB::Core::DVector2 Subtract(::DigitalOpus::MB::Core::DVector2 a, ::DigitalOpus::MB::Core::DVector2 b);
    // public System.Void .ctor(System.Double xx, System.Double yy)
    // Offset: 0x43D19A8
    // ABORTED: conflicts with another method.  DVector2(double xx, double yy);
    // public System.Void .ctor(DigitalOpus.MB.Core.DVector2 r)
    // Offset: 0x43D19B0
    // ABORTED: is copy constructor.  DVector2(::DigitalOpus::MB::Core::DVector2 r);
    // public UnityEngine.Vector2 GetVector2()
    // Offset: 0x43D19B8
    ::UnityEngine::Vector2 GetVector2();
    // public System.Boolean IsContainedIn(DigitalOpus.MB.Core.DRect r)
    // Offset: 0x43D19C8
    bool IsContainedIn(::DigitalOpus::MB::Core::DRect r);
    // public System.Boolean IsContainedInWithMargin(DigitalOpus.MB.Core.DRect r)
    // Offset: 0x43D1A08
    bool IsContainedInWithMargin(::DigitalOpus::MB::Core::DRect r);
    // public System.String ToString(System.String formatS)
    // Offset: 0x43D1BD0
    ::StringW ToString(::StringW formatS);
    // static public System.Double Distance(DigitalOpus.MB.Core.DVector2 a, DigitalOpus.MB.Core.DVector2 b)
    // Offset: 0x43D1C54
    static double Distance(::DigitalOpus::MB::Core::DVector2 a, ::DigitalOpus::MB::Core::DVector2 b);
    // static private System.Void .cctor()
    // Offset: 0x43D1CD8
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0x43D1B28
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // DigitalOpus.MB.Core.DVector2
  #pragma pack(pop)
  static check_size<sizeof(DVector2), 8 + sizeof(double)> __DigitalOpus_MB_Core_DVector2SizeCheck;
  static_assert(sizeof(DVector2) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DVector2::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::DVector2 (*)(::DigitalOpus::MB::Core::DVector2, ::DigitalOpus::MB::Core::DVector2)>(&DigitalOpus::MB::Core::DVector2::Subtract)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "DVector2")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "DVector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DVector2), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DVector2::DVector2
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DVector2::DVector2
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DVector2::GetVector2
// Il2CppName: GetVector2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (DigitalOpus::MB::Core::DVector2::*)()>(&DigitalOpus::MB::Core::DVector2::GetVector2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DVector2), "GetVector2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DVector2::IsContainedIn
// Il2CppName: IsContainedIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::DVector2::*)(::DigitalOpus::MB::Core::DRect)>(&DigitalOpus::MB::Core::DVector2::IsContainedIn)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "DRect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DVector2), "IsContainedIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DVector2::IsContainedInWithMargin
// Il2CppName: IsContainedInWithMargin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::DVector2::*)(::DigitalOpus::MB::Core::DRect)>(&DigitalOpus::MB::Core::DVector2::IsContainedInWithMargin)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "DRect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DVector2), "IsContainedInWithMargin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DVector2::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (DigitalOpus::MB::Core::DVector2::*)(::StringW)>(&DigitalOpus::MB::Core::DVector2::ToString)> {
  static const MethodInfo* get() {
    static auto* formatS = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DVector2), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{formatS});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DVector2::Distance
// Il2CppName: Distance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(::DigitalOpus::MB::Core::DVector2, ::DigitalOpus::MB::Core::DVector2)>(&DigitalOpus::MB::Core::DVector2::Distance)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "DVector2")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "DVector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DVector2), "Distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DVector2::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&DigitalOpus::MB::Core::DVector2::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DVector2), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DVector2::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (DigitalOpus::MB::Core::DVector2::*)()>(&DigitalOpus::MB::Core::DVector2::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DVector2), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
