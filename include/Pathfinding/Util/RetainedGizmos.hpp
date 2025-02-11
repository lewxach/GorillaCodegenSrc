// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Util
namespace Pathfinding::Util {
  // Forward declaring type: GraphGizmoHelper
  class GraphGizmoHelper;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AstarPath
  class AstarPath;
}
// Completed forward declares
// Type namespace: Pathfinding.Util
namespace Pathfinding::Util {
  // Forward declaring type: RetainedGizmos
  class RetainedGizmos;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Util::RetainedGizmos);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Util::RetainedGizmos*, "Pathfinding.Util", "RetainedGizmos");
// Type namespace: Pathfinding.Util
namespace Pathfinding::Util {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Util.RetainedGizmos
  // [TokenAttribute] Offset: FFFFFFFF
  class RetainedGizmos : public ::Il2CppObject {
    public:
    // Nested type: ::Pathfinding::Util::RetainedGizmos::Hasher
    struct Hasher;
    // Nested type: ::Pathfinding::Util::RetainedGizmos::Builder
    class Builder;
    // Nested type: ::Pathfinding::Util::RetainedGizmos::MeshWithHash
    struct MeshWithHash;
    // Size: 0x11
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Pathfinding.Util.RetainedGizmos/MeshWithHash
    // [TokenAttribute] Offset: FFFFFFFF
    struct MeshWithHash/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.UInt64 hash
      // Size: 0x8
      // Offset: 0x0
      uint64_t hash;
      // Field size check
      static_assert(sizeof(uint64_t) == 0x8);
      // public UnityEngine.Mesh mesh
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::Mesh* mesh;
      // Field size check
      static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
      // public System.Boolean lines
      // Size: 0x1
      // Offset: 0x10
      bool lines;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      public:
      // Creating value type constructor for type: MeshWithHash
      constexpr MeshWithHash(uint64_t hash_ = {}, ::UnityEngine::Mesh* mesh_ = {}, bool lines_ = {}) noexcept : hash{hash_}, mesh{mesh_}, lines{lines_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.UInt64 hash
      [[deprecated("Use field access instead!")]] uint64_t& dyn_hash();
      // Get instance field reference: public UnityEngine.Mesh mesh
      [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_mesh();
      // Get instance field reference: public System.Boolean lines
      [[deprecated("Use field access instead!")]] bool& dyn_lines();
    }; // Pathfinding.Util.RetainedGizmos/MeshWithHash
    #pragma pack(pop)
    static check_size<sizeof(RetainedGizmos::MeshWithHash), 16 + sizeof(bool)> __Pathfinding_Util_RetainedGizmos_MeshWithHashSizeCheck;
    static_assert(sizeof(RetainedGizmos::MeshWithHash) == 0x11);
    public:
    // private System.Collections.Generic.List`1<Pathfinding.Util.RetainedGizmos/MeshWithHash> meshes
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Pathfinding::Util::RetainedGizmos::MeshWithHash>* meshes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::Util::RetainedGizmos::MeshWithHash>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.UInt64> usedHashes
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::HashSet_1<uint64_t>* usedHashes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<uint64_t>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.UInt64> existingHashes
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::HashSet_1<uint64_t>* existingHashes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<uint64_t>*) == 0x8);
    // private System.Collections.Generic.Stack`1<UnityEngine.Mesh> cachedMeshes
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Stack_1<::UnityEngine::Mesh*>* cachedMeshes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<::UnityEngine::Mesh*>*) == 0x8);
    // public UnityEngine.Material surfaceMaterial
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Material* surfaceMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.Material lineMaterial
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* lineMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<Pathfinding.Util.RetainedGizmos/MeshWithHash> meshes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::Util::RetainedGizmos::MeshWithHash>*& dyn_meshes();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.UInt64> usedHashes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<uint64_t>*& dyn_usedHashes();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.UInt64> existingHashes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<uint64_t>*& dyn_existingHashes();
    // Get instance field reference: private System.Collections.Generic.Stack`1<UnityEngine.Mesh> cachedMeshes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<::UnityEngine::Mesh*>*& dyn_cachedMeshes();
    // Get instance field reference: public UnityEngine.Material surfaceMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_surfaceMaterial();
    // Get instance field reference: public UnityEngine.Material lineMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_lineMaterial();
    // public Pathfinding.Util.GraphGizmoHelper GetSingleFrameGizmoHelper(AstarPath active)
    // Offset: 0x2A32B54
    ::Pathfinding::Util::GraphGizmoHelper* GetSingleFrameGizmoHelper(::GlobalNamespace::AstarPath* active);
    // public Pathfinding.Util.GraphGizmoHelper GetGizmoHelper(AstarPath active, Pathfinding.Util.RetainedGizmos/Hasher hasher)
    // Offset: 0x2A32C64
    ::Pathfinding::Util::GraphGizmoHelper* GetGizmoHelper(::GlobalNamespace::AstarPath* active, ::Pathfinding::Util::RetainedGizmos::Hasher hasher);
    // private System.Void PoolMesh(UnityEngine.Mesh mesh)
    // Offset: 0x2A32D04
    void PoolMesh(::UnityEngine::Mesh* mesh);
    // private UnityEngine.Mesh GetMesh()
    // Offset: 0x2A32D6C
    ::UnityEngine::Mesh* GetMesh();
    // public System.Boolean HasCachedMesh(Pathfinding.Util.RetainedGizmos/Hasher hasher)
    // Offset: 0x2A32E20
    bool HasCachedMesh(::Pathfinding::Util::RetainedGizmos::Hasher hasher);
    // public System.Boolean Draw(Pathfinding.Util.RetainedGizmos/Hasher hasher)
    // Offset: 0x2A32BE0
    bool Draw(::Pathfinding::Util::RetainedGizmos::Hasher hasher);
    // public System.Void DrawExisting()
    // Offset: 0x2A32E78
    void DrawExisting();
    // public System.Void FinalizeDraw()
    // Offset: 0x2A32F38
    void FinalizeDraw();
    // public System.Void ClearCache()
    // Offset: 0x2A33420
    void ClearCache();
    // private System.Void RemoveUnusedMeshes(System.Collections.Generic.List`1<Pathfinding.Util.RetainedGizmos/MeshWithHash> meshList)
    // Offset: 0x2A33238
    void RemoveUnusedMeshes(::System::Collections::Generic::List_1<::Pathfinding::Util::RetainedGizmos::MeshWithHash>* meshList);
    // public System.Void .ctor()
    // Offset: 0x2A33504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RetainedGizmos* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::RetainedGizmos::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RetainedGizmos*, creationType>()));
    }
  }; // Pathfinding.Util.RetainedGizmos
  #pragma pack(pop)
  static check_size<sizeof(RetainedGizmos), 56 + sizeof(::UnityEngine::Material*)> __Pathfinding_Util_RetainedGizmosSizeCheck;
  static_assert(sizeof(RetainedGizmos) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Util::RetainedGizmos::MeshWithHash, "Pathfinding.Util", "RetainedGizmos/MeshWithHash");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Util::RetainedGizmos::GetSingleFrameGizmoHelper
// Il2CppName: GetSingleFrameGizmoHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Util::GraphGizmoHelper* (Pathfinding::Util::RetainedGizmos::*)(::GlobalNamespace::AstarPath*)>(&Pathfinding::Util::RetainedGizmos::GetSingleFrameGizmoHelper)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("", "AstarPath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::RetainedGizmos*), "GetSingleFrameGizmoHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active});
  }
};
// Writing MetadataGetter for method: Pathfinding::Util::RetainedGizmos::GetGizmoHelper
// Il2CppName: GetGizmoHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Util::GraphGizmoHelper* (Pathfinding::Util::RetainedGizmos::*)(::GlobalNamespace::AstarPath*, ::Pathfinding::Util::RetainedGizmos::Hasher)>(&Pathfinding::Util::RetainedGizmos::GetGizmoHelper)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("", "AstarPath")->byval_arg;
    static auto* hasher = &::il2cpp_utils::GetClassFromName("Pathfinding.Util", "RetainedGizmos/Hasher")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::RetainedGizmos*), "GetGizmoHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active, hasher});
  }
};
// Writing MetadataGetter for method: Pathfinding::Util::RetainedGizmos::PoolMesh
// Il2CppName: PoolMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Util::RetainedGizmos::*)(::UnityEngine::Mesh*)>(&Pathfinding::Util::RetainedGizmos::PoolMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::RetainedGizmos*), "PoolMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: Pathfinding::Util::RetainedGizmos::GetMesh
// Il2CppName: GetMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (Pathfinding::Util::RetainedGizmos::*)()>(&Pathfinding::Util::RetainedGizmos::GetMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::RetainedGizmos*), "GetMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Util::RetainedGizmos::HasCachedMesh
// Il2CppName: HasCachedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Util::RetainedGizmos::*)(::Pathfinding::Util::RetainedGizmos::Hasher)>(&Pathfinding::Util::RetainedGizmos::HasCachedMesh)> {
  static const MethodInfo* get() {
    static auto* hasher = &::il2cpp_utils::GetClassFromName("Pathfinding.Util", "RetainedGizmos/Hasher")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::RetainedGizmos*), "HasCachedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasher});
  }
};
// Writing MetadataGetter for method: Pathfinding::Util::RetainedGizmos::Draw
// Il2CppName: Draw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Util::RetainedGizmos::*)(::Pathfinding::Util::RetainedGizmos::Hasher)>(&Pathfinding::Util::RetainedGizmos::Draw)> {
  static const MethodInfo* get() {
    static auto* hasher = &::il2cpp_utils::GetClassFromName("Pathfinding.Util", "RetainedGizmos/Hasher")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::RetainedGizmos*), "Draw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasher});
  }
};
// Writing MetadataGetter for method: Pathfinding::Util::RetainedGizmos::DrawExisting
// Il2CppName: DrawExisting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Util::RetainedGizmos::*)()>(&Pathfinding::Util::RetainedGizmos::DrawExisting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::RetainedGizmos*), "DrawExisting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Util::RetainedGizmos::FinalizeDraw
// Il2CppName: FinalizeDraw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Util::RetainedGizmos::*)()>(&Pathfinding::Util::RetainedGizmos::FinalizeDraw)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::RetainedGizmos*), "FinalizeDraw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Util::RetainedGizmos::ClearCache
// Il2CppName: ClearCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Util::RetainedGizmos::*)()>(&Pathfinding::Util::RetainedGizmos::ClearCache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::RetainedGizmos*), "ClearCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Util::RetainedGizmos::RemoveUnusedMeshes
// Il2CppName: RemoveUnusedMeshes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Util::RetainedGizmos::*)(::System::Collections::Generic::List_1<::Pathfinding::Util::RetainedGizmos::MeshWithHash>*)>(&Pathfinding::Util::RetainedGizmos::RemoveUnusedMeshes)> {
  static const MethodInfo* get() {
    static auto* meshList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding.Util", "RetainedGizmos/MeshWithHash")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::RetainedGizmos*), "RemoveUnusedMeshes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{meshList});
  }
};
// Writing MetadataGetter for method: Pathfinding::Util::RetainedGizmos::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
