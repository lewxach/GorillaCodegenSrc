// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: Edge
  struct Edge;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: UVEditing
  class UVEditing;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::UVEditing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::UVEditing*, "UnityEngine.ProBuilder.MeshOperations", "UVEditing");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.UVEditing
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class UVEditing : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c
    class $$c;
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // static public System.Boolean AutoStitch(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face f1, UnityEngine.ProBuilder.Face f2, System.Int32 channel)
    // Offset: 0x5225488
    static bool AutoStitch(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* f1, ::UnityEngine::ProBuilder::Face* f2, int channel);
    // static private System.Boolean AlignEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face faceToMove, UnityEngine.ProBuilder.Edge edgeToAlignTo, UnityEngine.ProBuilder.Edge edgeToBeAligned, System.Int32 channel)
    // Offset: 0x522574C
    static bool AlignEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* faceToMove, ::UnityEngine::ProBuilder::Edge edgeToAlignTo, ::UnityEngine::ProBuilder::Edge edgeToBeAligned, int channel);
    // static UnityEngine.Vector2[] GetUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 channel)
    // Offset: 0x52261A4
    static ::ArrayW<::UnityEngine::Vector2> GetUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int channel);
    // static System.Void ApplyUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Vector2[] uvs, System.Int32 channel, System.Boolean applyToMesh)
    // Offset: 0x522677C
    static void ApplyUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::Vector2> uvs, int channel, bool applyToMesh);
    // static public System.Void SewUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes, System.Single delta)
    // Offset: 0x5226AD8
    static void SewUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int> indexes, float delta);
    // static public System.Void CollapseUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes)
    // Offset: 0x5227064
    static void CollapseUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int> indexes);
    // static public System.Void SplitUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> indexes)
    // Offset: 0x52263EC
    static void SplitUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int>* indexes);
    // static System.Void SplitUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x522712C
    static void SplitUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);
    // static System.Void ProjectFacesAuto(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face[] faces, System.Int32 channel)
    // Offset: 0x522753C
    static void ProjectFacesAuto(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*> faces, int channel);
    // static public System.Void ProjectFacesBox(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face[] faces, System.Int32 channel)
    // Offset: 0x52278E8
    static void ProjectFacesBox(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*> faces, int channel);
    // static UnityEngine.Vector2 FindMinimalUV(UnityEngine.Vector2[] uvs, System.Int32[] indices, System.Single xMin, System.Single yMin)
    // Offset: 0x5227ED8
    static ::UnityEngine::Vector2 FindMinimalUV(::ArrayW<::UnityEngine::Vector2> uvs, ::ArrayW<int> indices, float xMin, float yMin);
    // static public System.Void ProjectFacesBox(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face[] faces, UnityEngine.Vector2 lowerLeftAnchor, System.Int32 channel)
    // Offset: 0x5227FC0
    static void ProjectFacesBox(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*> faces, ::UnityEngine::Vector2 lowerLeftAnchor, int channel);
    // static public System.Void ProjectFacesSphere(UnityEngine.ProBuilder.ProBuilderMesh pb, System.Int32[] indexes, System.Int32 channel)
    // Offset: 0x52285D4
    static void ProjectFacesSphere(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::ArrayW<int> indexes, int channel);
    // static public UnityEngine.Vector2[] FitUVs(UnityEngine.Vector2[] uvs)
    // Offset: 0x522874C
    static ::ArrayW<::UnityEngine::Vector2> FitUVs(::ArrayW<::UnityEngine::Vector2> uvs);
  }; // UnityEngine.ProBuilder.MeshOperations.UVEditing
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::AutoStitch
// Il2CppName: AutoStitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*, int)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::AutoStitch)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* f1 = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    static auto* f2 = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing*), "AutoStitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, f1, f2, channel});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::AlignEdges
// Il2CppName: AlignEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge, int)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::AlignEdges)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faceToMove = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    static auto* edgeToAlignTo = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    static auto* edgeToBeAligned = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing*), "AlignEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faceToMove, edgeToAlignTo, edgeToBeAligned, channel});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::GetUVs
// Il2CppName: GetUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, int)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::GetUVs)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing*), "GetUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, channel});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::ApplyUVs
// Il2CppName: ApplyUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::Vector2>, int, bool)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::ApplyUVs)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* uvs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* applyToMesh = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing*), "ApplyUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, uvs, channel, applyToMesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::SewUVs
// Il2CppName: SewUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int>, float)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::SewUVs)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indexes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* delta = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing*), "SewUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, indexes, delta});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::CollapseUVs
// Il2CppName: CollapseUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int>)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::CollapseUVs)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indexes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing*), "CollapseUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, indexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::SplitUVs
// Il2CppName: SplitUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::SplitUVs)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing*), "SplitUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, indexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::SplitUVs
// Il2CppName: SplitUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::SplitUVs)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing*), "SplitUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesAuto
// Il2CppName: ProjectFacesAuto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::ProBuilder::Face*>, int)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesAuto)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face"), 1)->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing*), "ProjectFacesAuto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces, channel});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesBox
// Il2CppName: ProjectFacesBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::ProBuilder::Face*>, int)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesBox)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face"), 1)->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing*), "ProjectFacesBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces, channel});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::FindMinimalUV
// Il2CppName: FindMinimalUV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::ArrayW<::UnityEngine::Vector2>, ::ArrayW<int>, float, float)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::FindMinimalUV)> {
  static const MethodInfo* get() {
    static auto* uvs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    static auto* indices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* xMin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* yMin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing*), "FindMinimalUV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uvs, indices, xMin, yMin});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesBox
// Il2CppName: ProjectFacesBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::ProBuilder::Face*>, ::UnityEngine::Vector2, int)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesBox)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face"), 1)->byval_arg;
    static auto* lowerLeftAnchor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing*), "ProjectFacesBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces, lowerLeftAnchor, channel});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesSphere
// Il2CppName: ProjectFacesSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int>, int)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::ProjectFacesSphere)> {
  static const MethodInfo* get() {
    static auto* pb = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indexes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing*), "ProjectFacesSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pb, indexes, channel});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::FitUVs
// Il2CppName: FitUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)(::ArrayW<::UnityEngine::Vector2>)>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::FitUVs)> {
  static const MethodInfo* get() {
    static auto* uvs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing*), "FitUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uvs});
  }
};