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
// Including type: Unity.Mathematics.int4
#include "Unity/Mathematics/int4.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Forward declaring type: DelaEdgeCompare
  struct DelaEdgeCompare;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UTess::DelaEdgeCompare, "UnityEngine.Rendering.Universal.UTess", "DelaEdgeCompare");
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.UTess.DelaEdgeCompare
  // [TokenAttribute] Offset: FFFFFFFF
  struct DelaEdgeCompare/*, public ::System::ValueType, public ::System::Collections::Generic::IComparer_1<::Unity::Mathematics::int4>*/ {
    public:
    // Creating value type constructor for type: DelaEdgeCompare
    constexpr DelaEdgeCompare() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<::Unity::Mathematics::int4>
    operator ::System::Collections::Generic::IComparer_1<::Unity::Mathematics::int4>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<::Unity::Mathematics::int4>*>(this);
    }
    // public System.Int32 Compare(Unity.Mathematics.int4 a, Unity.Mathematics.int4 b)
    // Offset: 0x5321DE8
    int Compare(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b);
  }; // UnityEngine.Rendering.Universal.UTess.DelaEdgeCompare
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::DelaEdgeCompare::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::Universal::UTess::DelaEdgeCompare::*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&UnityEngine::Rendering::Universal::UTess::DelaEdgeCompare::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int4")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::DelaEdgeCompare), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
