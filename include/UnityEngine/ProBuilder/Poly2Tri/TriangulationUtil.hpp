// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: Orientation
  struct Orientation;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationUtil
  class TriangulationUtil;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationUtil");
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil
  // [TokenAttribute] Offset: FFFFFFFF
  class TriangulationUtil : public ::Il2CppObject {
    public:
    // Get static field: static public System.Double EPSILON
    static double _get_EPSILON();
    // Set static field: static public System.Double EPSILON
    static void _set_EPSILON(double value);
    // static public System.Boolean SmartIncircle(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pa, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pb, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pc, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pd)
    // Offset: 0x519B884
    static bool SmartIncircle(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pa, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pb, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pc, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pd);
    // static public System.Boolean InScanArea(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pa, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pb, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pc, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pd)
    // Offset: 0x519AF74
    static bool InScanArea(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pa, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pb, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pc, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pd);
    // static public UnityEngine.ProBuilder.Poly2Tri.Orientation Orient2d(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pa, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pb, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint pc)
    // Offset: 0x5199794
    static ::UnityEngine::ProBuilder::Poly2Tri::Orientation Orient2d(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pa, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pb, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pc);
    // static private System.Void .cctor()
    // Offset: 0x519CC70
    static void _cctor();
  }; // UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil::SmartIncircle
// Il2CppName: SmartIncircle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil::SmartIncircle)> {
  static const MethodInfo* get() {
    static auto* pa = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* pb = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* pc = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* pd = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil*), "SmartIncircle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pa, pb, pc, pd});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil::InScanArea
// Il2CppName: InScanArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil::InScanArea)> {
  static const MethodInfo* get() {
    static auto* pa = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* pb = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* pc = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* pd = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil*), "InScanArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pa, pb, pc, pd});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil::Orient2d
// Il2CppName: Orient2d
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::Orientation (*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil::Orient2d)> {
  static const MethodInfo* get() {
    static auto* pa = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* pb = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* pc = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil*), "Orient2d", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pa, pb, pc});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
