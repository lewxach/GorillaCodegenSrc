// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils
#include "UnityEngine/Rendering/Universal/LibTessDotNet/MeshUtils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal::LibTessDotNet
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
  // Forward declaring type: WindingRule
  struct WindingRule;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal.LibTessDotNet
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
  // Forward declaring type: Geom
  class Geom;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LibTessDotNet::Geom);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::Geom*, "UnityEngine.Rendering.Universal.LibTessDotNet", "Geom");
// Type namespace: UnityEngine.Rendering.Universal.LibTessDotNet
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.LibTessDotNet.Geom
  // [TokenAttribute] Offset: FFFFFFFF
  class Geom : public ::Il2CppObject {
    public:
    // static public System.Boolean IsWindingInside(UnityEngine.Rendering.Universal.LibTessDotNet.WindingRule rule, System.Int32 n)
    // Offset: 0x52FA35C
    static bool IsWindingInside(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule rule, int n);
    // static public System.Boolean VertCCW(UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex u, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex v, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex w)
    // Offset: 0x52FA404
    static bool VertCCW(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* u, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* v, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* w);
    // static public System.Boolean VertEq(UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex lhs, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex rhs)
    // Offset: 0x52FA454
    static bool VertEq(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* lhs, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* rhs);
    // static public System.Boolean VertLeq(UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex lhs, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex rhs)
    // Offset: 0x52FA494
    static bool VertLeq(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* lhs, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* rhs);
    // static public System.Single EdgeEval(UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex u, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex v, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex w)
    // Offset: 0x52FA4E0
    static float EdgeEval(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* u, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* v, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* w);
    // static public System.Single EdgeSign(UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex u, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex v, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex w)
    // Offset: 0x52FA550
    static float EdgeSign(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* u, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* v, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* w);
    // static public System.Boolean TransLeq(UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex lhs, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex rhs)
    // Offset: 0x52FA5B0
    static bool TransLeq(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* lhs, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* rhs);
    // static public System.Single TransEval(UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex u, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex v, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex w)
    // Offset: 0x52FA5FC
    static float TransEval(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* u, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* v, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* w);
    // static public System.Single TransSign(UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex u, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex v, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex w)
    // Offset: 0x52FA66C
    static float TransSign(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* u, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* v, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* w);
    // static public System.Boolean EdgeGoesLeft(UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Edge e)
    // Offset: 0x52FA6CC
    static bool EdgeGoesLeft(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge* e);
    // static public System.Boolean EdgeGoesRight(UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Edge e)
    // Offset: 0x52FA710
    static bool EdgeGoesRight(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge* e);
    // static public System.Single VertL1dist(UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex u, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex v)
    // Offset: 0x52FA734
    static float VertL1dist(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* u, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* v);
    // static public System.Void AddWinding(UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Edge eDst, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Edge eSrc)
    // Offset: 0x52FA7B8
    static void AddWinding(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge* eDst, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge* eSrc);
    // static public System.Single Interpolate(System.Single a, System.Single x, System.Single b, System.Single y)
    // Offset: 0x52FA800
    static float Interpolate(float a, float x, float b, float y);
    // static private System.Void Swap(ref UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex a, ref UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex b)
    // Offset: 0x52FA85C
    static void Swap(ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*> a, ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*> b);
    // static public System.Void EdgeIntersect(UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex o1, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex d1, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex o2, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex d2, UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex v)
    // Offset: 0x52FA890
    static void EdgeIntersect(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* o1, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* d1, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* o2, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* d2, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex* v);
  }; // UnityEngine.Rendering.Universal.LibTessDotNet.Geom
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::IsWindingInside
// Il2CppName: IsWindingInside
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule, int)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::IsWindingInside)> {
  static const MethodInfo* get() {
    static auto* rule = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "WindingRule")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "IsWindingInside", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rule, n});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::VertCCW
// Il2CppName: VertCCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::VertCCW)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "VertCCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u, v, w});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::VertEq
// Il2CppName: VertEq
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::VertEq)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "VertEq", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::VertLeq
// Il2CppName: VertLeq
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::VertLeq)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "VertLeq", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::EdgeEval
// Il2CppName: EdgeEval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::EdgeEval)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "EdgeEval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u, v, w});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::EdgeSign
// Il2CppName: EdgeSign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::EdgeSign)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "EdgeSign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u, v, w});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::TransLeq
// Il2CppName: TransLeq
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::TransLeq)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "TransLeq", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::TransEval
// Il2CppName: TransEval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::TransEval)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "TransEval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u, v, w});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::TransSign
// Il2CppName: TransSign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::TransSign)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "TransSign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u, v, w});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::EdgeGoesLeft
// Il2CppName: EdgeGoesLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::EdgeGoesLeft)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "EdgeGoesLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::EdgeGoesRight
// Il2CppName: EdgeGoesRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::EdgeGoesRight)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "EdgeGoesRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::VertL1dist
// Il2CppName: VertL1dist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::VertL1dist)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "VertL1dist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u, v});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::AddWinding
// Il2CppName: AddWinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::AddWinding)> {
  static const MethodInfo* get() {
    static auto* eDst = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Edge")->byval_arg;
    static auto* eSrc = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "AddWinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eDst, eSrc});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::Interpolate
// Il2CppName: Interpolate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, float)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::Interpolate)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "Interpolate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, x, b, y});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::Swap
// Il2CppName: Swap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*>, ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*>)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::Swap)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->this_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "Swap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::Geom::EdgeIntersect
// Il2CppName: EdgeIntersect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Vertex*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::Geom::EdgeIntersect)> {
  static const MethodInfo* get() {
    static auto* o1 = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* d1 = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* o2 = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* d2 = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::Geom*), "EdgeIntersect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o1, d1, o2, d2, v});
  }
};
