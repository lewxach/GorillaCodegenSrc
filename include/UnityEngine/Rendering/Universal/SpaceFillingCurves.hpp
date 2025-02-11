// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Mathematics
namespace Unity::Mathematics {
  // Forward declaring type: uint2
  struct uint2;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: SpaceFillingCurves
  class SpaceFillingCurves;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::SpaceFillingCurves);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::SpaceFillingCurves*, "UnityEngine.Rendering.Universal", "SpaceFillingCurves");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.SpaceFillingCurves
  // [TokenAttribute] Offset: FFFFFFFF
  class SpaceFillingCurves : public ::Il2CppObject {
    public:
    // static private System.UInt32 Part1By1(System.UInt32 x)
    // Offset: 0x52DE5A0
    static uint Part1By1(uint x);
    // static private System.UInt32 Compact1By1(System.UInt32 x)
    // Offset: 0x52DE5C8
    static uint Compact1By1(uint x);
    // static public System.UInt32 EncodeMorton2D(Unity.Mathematics.uint2 coord)
    // Offset: 0x52DE5F0
    static uint EncodeMorton2D(::Unity::Mathematics::uint2 coord);
    // static public Unity.Mathematics.uint2 DecodeMorton2D(System.UInt32 code)
    // Offset: 0x52D2D94
    static ::Unity::Mathematics::uint2 DecodeMorton2D(uint code);
  }; // UnityEngine.Rendering.Universal.SpaceFillingCurves
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SpaceFillingCurves::Part1By1
// Il2CppName: Part1By1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&UnityEngine::Rendering::Universal::SpaceFillingCurves::Part1By1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::SpaceFillingCurves*), "Part1By1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SpaceFillingCurves::Compact1By1
// Il2CppName: Compact1By1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&UnityEngine::Rendering::Universal::SpaceFillingCurves::Compact1By1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::SpaceFillingCurves*), "Compact1By1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SpaceFillingCurves::EncodeMorton2D
// Il2CppName: EncodeMorton2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Unity::Mathematics::uint2)>(&UnityEngine::Rendering::Universal::SpaceFillingCurves::EncodeMorton2D)> {
  static const MethodInfo* get() {
    static auto* coord = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "uint2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::SpaceFillingCurves*), "EncodeMorton2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{coord});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SpaceFillingCurves::DecodeMorton2D
// Il2CppName: DecodeMorton2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::uint2 (*)(uint)>(&UnityEngine::Rendering::Universal::SpaceFillingCurves::DecodeMorton2D)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::SpaceFillingCurves*), "DecodeMorton2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code});
  }
};
