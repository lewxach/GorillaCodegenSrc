// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Forward declaring type: XCompare
  struct XCompare;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UTess::XCompare, "UnityEngine.Rendering.Universal.UTess", "XCompare");
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.UTess.XCompare
  // [TokenAttribute] Offset: FFFFFFFF
  struct XCompare/*, public ::System::ValueType, public ::System::Collections::Generic::IComparer_1<double>*/ {
    public:
    // Creating value type constructor for type: XCompare
    constexpr XCompare() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<double>
    operator ::System::Collections::Generic::IComparer_1<double>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<double>*>(this);
    }
    // public System.Int32 Compare(System.Double a, System.Double b)
    // Offset: 0x5321B40
    int Compare(double a, double b);
  }; // UnityEngine.Rendering.Universal.UTess.XCompare
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::XCompare::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::Universal::UTess::XCompare::*)(double, double)>(&UnityEngine::Rendering::Universal::UTess::XCompare::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::XCompare), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
