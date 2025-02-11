// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.VersionedMonoBehaviour
#include "Pathfinding/VersionedMonoBehaviour.hpp"
// Including type: Pathfinding.RVO.RVOLayer
#include "Pathfinding/RVO/RVOLayer.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::RVO
namespace Pathfinding::RVO {
  // Forward declaring type: Simulator
  class Simulator;
  // Forward declaring type: ObstacleVertex
  class ObstacleVertex;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Pathfinding.RVO
namespace Pathfinding::RVO {
  // Forward declaring type: RVOObstacle
  class RVOObstacle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::RVO::RVOObstacle);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::RVO::RVOObstacle*, "Pathfinding.RVO", "RVOObstacle");
// Type namespace: Pathfinding.RVO
namespace Pathfinding::RVO {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.RVO.RVOObstacle
  // [TokenAttribute] Offset: FFFFFFFF
  class RVOObstacle : public ::Pathfinding::VersionedMonoBehaviour {
    public:
    // Nested type: ::Pathfinding::RVO::RVOObstacle::ObstacleVertexWinding
    struct ObstacleVertexWinding;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Pathfinding.RVO.RVOObstacle/ObstacleVertexWinding
    // [TokenAttribute] Offset: FFFFFFFF
    struct ObstacleVertexWinding/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ObstacleVertexWinding
      constexpr ObstacleVertexWinding(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Pathfinding.RVO.RVOObstacle/ObstacleVertexWinding KeepOut
      static constexpr const int KeepOut = 0;
      // Get static field: static public Pathfinding.RVO.RVOObstacle/ObstacleVertexWinding KeepOut
      static ::Pathfinding::RVO::RVOObstacle::ObstacleVertexWinding _get_KeepOut();
      // Set static field: static public Pathfinding.RVO.RVOObstacle/ObstacleVertexWinding KeepOut
      static void _set_KeepOut(::Pathfinding::RVO::RVOObstacle::ObstacleVertexWinding value);
      // static field const value: static public Pathfinding.RVO.RVOObstacle/ObstacleVertexWinding KeepIn
      static constexpr const int KeepIn = 1;
      // Get static field: static public Pathfinding.RVO.RVOObstacle/ObstacleVertexWinding KeepIn
      static ::Pathfinding::RVO::RVOObstacle::ObstacleVertexWinding _get_KeepIn();
      // Set static field: static public Pathfinding.RVO.RVOObstacle/ObstacleVertexWinding KeepIn
      static void _set_KeepIn(::Pathfinding::RVO::RVOObstacle::ObstacleVertexWinding value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Pathfinding.RVO.RVOObstacle/ObstacleVertexWinding
    #pragma pack(pop)
    static check_size<sizeof(RVOObstacle::ObstacleVertexWinding), 0 + sizeof(int)> __Pathfinding_RVO_RVOObstacle_ObstacleVertexWindingSizeCheck;
    static_assert(sizeof(RVOObstacle::ObstacleVertexWinding) == 0x4);
    public:
    // public Pathfinding.RVO.RVOObstacle/ObstacleVertexWinding obstacleMode
    // Size: 0x4
    // Offset: 0x24
    ::Pathfinding::RVO::RVOObstacle::ObstacleVertexWinding obstacleMode;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::RVOObstacle::ObstacleVertexWinding) == 0x4);
    // public Pathfinding.RVO.RVOLayer layer
    // Size: 0x4
    // Offset: 0x28
    ::Pathfinding::RVO::RVOLayer layer;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::RVOLayer) == 0x4);
    // Padding between fields: layer and: sim
    char __padding1[0x4] = {};
    // protected Pathfinding.RVO.Simulator sim
    // Size: 0x8
    // Offset: 0x30
    ::Pathfinding::RVO::Simulator* sim;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::Simulator*) == 0x8);
    // private System.Collections.Generic.List`1<Pathfinding.RVO.ObstacleVertex> addedObstacles
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* addedObstacles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector3[]> sourceObstacles
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>* sourceObstacles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>*) == 0x8);
    // private System.Boolean gizmoDrawing
    // Size: 0x1
    // Offset: 0x48
    bool gizmoDrawing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: gizmoDrawing and: gizmoVerts
    char __padding5[0x7] = {};
    // private System.Collections.Generic.List`1<UnityEngine.Vector3[]> gizmoVerts
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>* gizmoVerts;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>*) == 0x8);
    // private Pathfinding.RVO.RVOObstacle/ObstacleVertexWinding _obstacleMode
    // Size: 0x4
    // Offset: 0x58
    ::Pathfinding::RVO::RVOObstacle::ObstacleVertexWinding obstacleMode;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::RVOObstacle::ObstacleVertexWinding) == 0x4);
    // private UnityEngine.Matrix4x4 prevUpdateMatrix
    // Size: 0x40
    // Offset: 0x5C
    ::UnityEngine::Matrix4x4 prevUpdateMatrix;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    public:
    // Get instance field reference: public Pathfinding.RVO.RVOObstacle/ObstacleVertexWinding obstacleMode
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::RVOObstacle::ObstacleVertexWinding& dyn_obstacleMode();
    // Get instance field reference: public Pathfinding.RVO.RVOLayer layer
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::RVOLayer& dyn_layer();
    // Get instance field reference: protected Pathfinding.RVO.Simulator sim
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::Simulator*& dyn_sim();
    // Get instance field reference: private System.Collections.Generic.List`1<Pathfinding.RVO.ObstacleVertex> addedObstacles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*& dyn_addedObstacles();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Vector3[]> sourceObstacles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>*& dyn_sourceObstacles();
    // Get instance field reference: private System.Boolean gizmoDrawing
    [[deprecated("Use field access instead!")]] bool& dyn_gizmoDrawing();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Vector3[]> gizmoVerts
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>*& dyn_gizmoVerts();
    // Get instance field reference: private Pathfinding.RVO.RVOObstacle/ObstacleVertexWinding _obstacleMode
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::RVOObstacle::ObstacleVertexWinding& dyn__obstacleMode();
    // Get instance field reference: private UnityEngine.Matrix4x4 prevUpdateMatrix
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_prevUpdateMatrix();
    // protected System.Void CreateObstacles()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CreateObstacles();
    // protected System.Boolean get_ExecuteInEditor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_ExecuteInEditor();
    // protected System.Boolean get_LocalCoordinates()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_LocalCoordinates();
    // protected System.Boolean get_StaticObstacle()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_StaticObstacle();
    // protected System.Single get_Height()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_Height();
    // protected System.Boolean AreGizmosDirty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool AreGizmosDirty();
    // public System.Void OnDrawGizmos()
    // Offset: 0x2A3B88C
    void OnDrawGizmos();
    // public System.Void OnDrawGizmosSelected()
    // Offset: 0x2A3C01C
    void OnDrawGizmosSelected();
    // public System.Void OnDrawGizmos(System.Boolean selected)
    // Offset: 0x2A3B894
    void OnDrawGizmos(bool selected);
    // protected UnityEngine.Matrix4x4 GetMatrix()
    // Offset: 0x2A3C024
    ::UnityEngine::Matrix4x4 GetMatrix();
    // public System.Void OnDisable()
    // Offset: 0x2A3C0C4
    void OnDisable();
    // public System.Void OnEnable()
    // Offset: 0x2A3C1B0
    void OnEnable();
    // public System.Void Start()
    // Offset: 0x2A3C2CC
    void Start();
    // public System.Void Update()
    // Offset: 0x2A3C3F0
    void Update();
    // protected System.Void FindSimulator()
    // Offset: 0x2A3C56C
    void FindSimulator();
    // protected System.Void AddObstacle(UnityEngine.Vector3[] vertices, System.Single height)
    // Offset: 0x2A3C6A8
    void AddObstacle(::ArrayW<::UnityEngine::Vector3> vertices, float height);
    // private System.Void AddObstacleInternal(UnityEngine.Vector3[] vertices, System.Single height)
    // Offset: 0x2A3CB98
    void AddObstacleInternal(::ArrayW<::UnityEngine::Vector3> vertices, float height);
    // private System.Void WindCorrectly(UnityEngine.Vector3[] vertices)
    // Offset: 0x2A3C8BC
    void WindCorrectly(::ArrayW<::UnityEngine::Vector3> vertices);
    // protected System.Void .ctor()
    // Offset: 0x2A3CD2C
    // Implemented from: Pathfinding.VersionedMonoBehaviour
    // Base method: System.Void VersionedMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RVOObstacle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::RVO::RVOObstacle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RVOObstacle*, creationType>()));
    }
  }; // Pathfinding.RVO.RVOObstacle
  #pragma pack(pop)
  static check_size<sizeof(RVOObstacle), 92 + sizeof(::UnityEngine::Matrix4x4)> __Pathfinding_RVO_RVOObstacleSizeCheck;
  static_assert(sizeof(RVOObstacle) == 0x9C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::RVO::RVOObstacle::ObstacleVertexWinding, "Pathfinding.RVO", "RVOObstacle/ObstacleVertexWinding");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::CreateObstacles
// Il2CppName: CreateObstacles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOObstacle::*)()>(&Pathfinding::RVO::RVOObstacle::CreateObstacles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "CreateObstacles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::get_ExecuteInEditor
// Il2CppName: get_ExecuteInEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::RVO::RVOObstacle::*)()>(&Pathfinding::RVO::RVOObstacle::get_ExecuteInEditor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "get_ExecuteInEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::get_LocalCoordinates
// Il2CppName: get_LocalCoordinates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::RVO::RVOObstacle::*)()>(&Pathfinding::RVO::RVOObstacle::get_LocalCoordinates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "get_LocalCoordinates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::get_StaticObstacle
// Il2CppName: get_StaticObstacle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::RVO::RVOObstacle::*)()>(&Pathfinding::RVO::RVOObstacle::get_StaticObstacle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "get_StaticObstacle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::get_Height
// Il2CppName: get_Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::RVO::RVOObstacle::*)()>(&Pathfinding::RVO::RVOObstacle::get_Height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "get_Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::AreGizmosDirty
// Il2CppName: AreGizmosDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::RVO::RVOObstacle::*)()>(&Pathfinding::RVO::RVOObstacle::AreGizmosDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "AreGizmosDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOObstacle::*)()>(&Pathfinding::RVO::RVOObstacle::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOObstacle::*)()>(&Pathfinding::RVO::RVOObstacle::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOObstacle::*)(bool)>(&Pathfinding::RVO::RVOObstacle::OnDrawGizmos)> {
  static const MethodInfo* get() {
    static auto* selected = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selected});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::GetMatrix
// Il2CppName: GetMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (Pathfinding::RVO::RVOObstacle::*)()>(&Pathfinding::RVO::RVOObstacle::GetMatrix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "GetMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOObstacle::*)()>(&Pathfinding::RVO::RVOObstacle::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOObstacle::*)()>(&Pathfinding::RVO::RVOObstacle::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOObstacle::*)()>(&Pathfinding::RVO::RVOObstacle::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOObstacle::*)()>(&Pathfinding::RVO::RVOObstacle::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::FindSimulator
// Il2CppName: FindSimulator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOObstacle::*)()>(&Pathfinding::RVO::RVOObstacle::FindSimulator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "FindSimulator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::AddObstacle
// Il2CppName: AddObstacle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOObstacle::*)(::ArrayW<::UnityEngine::Vector3>, float)>(&Pathfinding::RVO::RVOObstacle::AddObstacle)> {
  static const MethodInfo* get() {
    static auto* vertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "AddObstacle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices, height});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::AddObstacleInternal
// Il2CppName: AddObstacleInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOObstacle::*)(::ArrayW<::UnityEngine::Vector3>, float)>(&Pathfinding::RVO::RVOObstacle::AddObstacleInternal)> {
  static const MethodInfo* get() {
    static auto* vertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "AddObstacleInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices, height});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::WindCorrectly
// Il2CppName: WindCorrectly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOObstacle::*)(::ArrayW<::UnityEngine::Vector3>)>(&Pathfinding::RVO::RVOObstacle::WindCorrectly)> {
  static const MethodInfo* get() {
    static auto* vertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOObstacle*), "WindCorrectly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOObstacle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
