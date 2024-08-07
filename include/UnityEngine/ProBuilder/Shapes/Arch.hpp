// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Shapes.Shape
#include "UnityEngine/ProBuilder/Shapes/Shape.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Shapes
namespace UnityEngine::ProBuilder::Shapes {
  // Forward declaring type: Arch
  class Arch;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Arch);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Arch*, "UnityEngine.ProBuilder.Shapes", "Arch");
// Type namespace: UnityEngine.ProBuilder.Shapes
namespace UnityEngine::ProBuilder::Shapes {
  // Size: 0x1E
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Shapes.Arch
  // [TokenAttribute] Offset: FFFFFFFF
  // [ShapeAttribute] Offset: FFFFFFFF
  class Arch : public ::UnityEngine::ProBuilder::Shapes::Shape {
    public:
    public:
    // private System.Single m_Thickness
    // Size: 0x4
    // Offset: 0x10
    float m_Thickness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_NumberOfSides
    // Size: 0x4
    // Offset: 0x14
    int m_NumberOfSides;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single m_ArchDegrees
    // Size: 0x4
    // Offset: 0x18
    float m_ArchDegrees;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_EndCaps
    // Size: 0x1
    // Offset: 0x1C
    bool m_EndCaps;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_Smooth
    // Size: 0x1
    // Offset: 0x1D
    bool m_Smooth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Single m_Thickness
    [[deprecated("Use field access instead!")]] float& dyn_m_Thickness();
    // Get instance field reference: private System.Int32 m_NumberOfSides
    [[deprecated("Use field access instead!")]] int& dyn_m_NumberOfSides();
    // Get instance field reference: private System.Single m_ArchDegrees
    [[deprecated("Use field access instead!")]] float& dyn_m_ArchDegrees();
    // Get instance field reference: private System.Boolean m_EndCaps
    [[deprecated("Use field access instead!")]] bool& dyn_m_EndCaps();
    // Get instance field reference: private System.Boolean m_Smooth
    [[deprecated("Use field access instead!")]] bool& dyn_m_Smooth();
    // private UnityEngine.Vector3[] GetFace(UnityEngine.Vector2 vertex1, UnityEngine.Vector2 vertex2, System.Single depth)
    // Offset: 0x51EAE40
    ::ArrayW<::UnityEngine::Vector3> GetFace(::UnityEngine::Vector2 vertex1, ::UnityEngine::Vector2 vertex2, float depth);
    // public override System.Void CopyShape(UnityEngine.ProBuilder.Shapes.Shape shape)
    // Offset: 0x51EADA4
    // Implemented from: UnityEngine.ProBuilder.Shapes.Shape
    // Base method: System.Void Shape::CopyShape(UnityEngine.ProBuilder.Shapes.Shape shape)
    void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);
    // public override UnityEngine.Bounds RebuildMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Vector3 size, UnityEngine.Quaternion rotation)
    // Offset: 0x51EAF04
    // Implemented from: UnityEngine.ProBuilder.Shapes.Shape
    // Base method: UnityEngine.Bounds Shape::RebuildMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Vector3 size, UnityEngine.Quaternion rotation)
    ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x51EBA48
    // Implemented from: UnityEngine.ProBuilder.Shapes.Shape
    // Base method: System.Void Shape::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Arch* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Shapes::Arch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Arch*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.Shapes.Arch
  #pragma pack(pop)
  static check_size<sizeof(Arch), 29 + sizeof(bool)> __UnityEngine_ProBuilder_Shapes_ArchSizeCheck;
  static_assert(sizeof(Arch) == 0x1E);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Arch::GetFace
// Il2CppName: GetFace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3> (UnityEngine::ProBuilder::Shapes::Arch::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float)>(&UnityEngine::ProBuilder::Shapes::Arch::GetFace)> {
  static const MethodInfo* get() {
    static auto* vertex1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* vertex2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Shapes::Arch*), "GetFace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertex1, vertex2, depth});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Arch::CopyShape
// Il2CppName: CopyShape
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Shapes::Arch::*)(::UnityEngine::ProBuilder::Shapes::Shape*)>(&UnityEngine::ProBuilder::Shapes::Arch::CopyShape)> {
  static const MethodInfo* get() {
    static auto* shape = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Shapes", "Shape")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Shapes::Arch*), "CopyShape", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shape});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Arch::RebuildMesh
// Il2CppName: RebuildMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (UnityEngine::ProBuilder::Shapes::Arch::*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&UnityEngine::ProBuilder::Shapes::Arch::RebuildMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Shapes::Arch*), "RebuildMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, size, rotation});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::Arch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
