// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector2Int
  struct Vector2Int;
}
// Forward declaring namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Forward declaring type: BuilderItem
  class BuilderItem;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BuilderPiece
  class BuilderPiece;
  // Forward declaring type: SnapBounds
  struct SnapBounds;
}
// Completed forward declares
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Forward declaring type: BuilderAttachGridPlane
  class BuilderAttachGridPlane;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTagScripts::BuilderAttachGridPlane);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTagScripts::BuilderAttachGridPlane*, "GorillaTagScripts", "BuilderAttachGridPlane");
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTagScripts.BuilderAttachGridPlane
  // [TokenAttribute] Offset: FFFFFFFF
  class BuilderAttachGridPlane : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean male
    // Size: 0x1
    // Offset: 0x20
    bool male;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: male and: center
    char __padding0[0x7] = {};
    // public UnityEngine.Transform center
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* center;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Int32 width
    // Size: 0x4
    // Offset: 0x30
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 length
    // Size: 0x4
    // Offset: 0x34
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public GorillaTagScripts.BuilderItem item
    // Size: 0x8
    // Offset: 0x38
    ::GorillaTagScripts::BuilderItem* item;
    // Field size check
    static_assert(sizeof(::GorillaTagScripts::BuilderItem*) == 0x8);
    // public BuilderPiece piece
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BuilderPiece* piece;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BuilderPiece*) == 0x8);
    // public System.Int32 attachIndex
    // Size: 0x4
    // Offset: 0x48
    int attachIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single boundingRadius
    // Size: 0x4
    // Offset: 0x4C
    float boundingRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 pieceToGridPosition
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 pieceToGridPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion pieceToGridRotation
    // Size: 0x10
    // Offset: 0x5C
    ::UnityEngine::Quaternion pieceToGridRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // Padding between fields: pieceToGridRotation and: connected
    char __padding9[0x4] = {};
    // public System.Boolean[] connected
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<bool> connected;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    public:
    // Get instance field reference: public System.Boolean male
    [[deprecated("Use field access instead!")]] bool& dyn_male();
    // Get instance field reference: public UnityEngine.Transform center
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_center();
    // Get instance field reference: public System.Int32 width
    [[deprecated("Use field access instead!")]] int& dyn_width();
    // Get instance field reference: public System.Int32 length
    [[deprecated("Use field access instead!")]] int& dyn_length();
    // Get instance field reference: public GorillaTagScripts.BuilderItem item
    [[deprecated("Use field access instead!")]] ::GorillaTagScripts::BuilderItem*& dyn_item();
    // Get instance field reference: public BuilderPiece piece
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BuilderPiece*& dyn_piece();
    // Get instance field reference: public System.Int32 attachIndex
    [[deprecated("Use field access instead!")]] int& dyn_attachIndex();
    // Get instance field reference: public System.Single boundingRadius
    [[deprecated("Use field access instead!")]] float& dyn_boundingRadius();
    // Get instance field reference: public UnityEngine.Vector3 pieceToGridPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_pieceToGridPosition();
    // Get instance field reference: public UnityEngine.Quaternion pieceToGridRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_pieceToGridRotation();
    // Get instance field reference: public System.Boolean[] connected
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn_connected();
    // private System.Void Awake()
    // Offset: 0x27F0F98
    void Awake();
    // public System.Void Setup(BuilderPiece piece, System.Int32 attachIndex, System.Single gridSize)
    // Offset: 0x27F1034
    void Setup(::GlobalNamespace::BuilderPiece* piece, int attachIndex, float gridSize);
    // public UnityEngine.Vector3 GetGridPosition(System.Int32 x, System.Int32 z, System.Single gridSize)
    // Offset: 0x27F1208
    ::UnityEngine::Vector3 GetGridPosition(int x, int z, float gridSize);
    // public System.Void SetConnected(SnapBounds bounds, System.Boolean connect)
    // Offset: 0x27F12E4
    void SetConnected(::GlobalNamespace::SnapBounds bounds, bool connect);
    // public System.Boolean IsConnected(SnapBounds bounds)
    // Offset: 0x27F1424
    bool IsConnected(::GlobalNamespace::SnapBounds bounds);
    // public System.Void CalcGridOverlap(GorillaTagScripts.BuilderAttachGridPlane otherGridPlane, UnityEngine.Vector3 otherPieceLocalPos, UnityEngine.Quaternion otherPieceLocalRot, System.Single gridSize, out UnityEngine.Vector2Int min, out UnityEngine.Vector2Int max)
    // Offset: 0x27F1564
    void CalcGridOverlap(::GorillaTagScripts::BuilderAttachGridPlane* otherGridPlane, ::UnityEngine::Vector3 otherPieceLocalPos, ::UnityEngine::Quaternion otherPieceLocalRot, float gridSize, ByRef<::UnityEngine::Vector2Int> min, ByRef<::UnityEngine::Vector2Int> max);
    // protected System.Void OnDrawGizmosSelected()
    // Offset: 0x27F1CA8
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x27F1CAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuilderAttachGridPlane* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTagScripts::BuilderAttachGridPlane::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuilderAttachGridPlane*, creationType>()));
    }
  }; // GorillaTagScripts.BuilderAttachGridPlane
  #pragma pack(pop)
  static check_size<sizeof(BuilderAttachGridPlane), 112 + sizeof(::ArrayW<bool>)> __GorillaTagScripts_BuilderAttachGridPlaneSizeCheck;
  static_assert(sizeof(BuilderAttachGridPlane) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTagScripts::BuilderAttachGridPlane::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::BuilderAttachGridPlane::*)()>(&GorillaTagScripts::BuilderAttachGridPlane::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::BuilderAttachGridPlane*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::BuilderAttachGridPlane::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::BuilderAttachGridPlane::*)(::GlobalNamespace::BuilderPiece*, int, float)>(&GorillaTagScripts::BuilderAttachGridPlane::Setup)> {
  static const MethodInfo* get() {
    static auto* piece = &::il2cpp_utils::GetClassFromName("", "BuilderPiece")->byval_arg;
    static auto* attachIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* gridSize = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::BuilderAttachGridPlane*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{piece, attachIndex, gridSize});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::BuilderAttachGridPlane::GetGridPosition
// Il2CppName: GetGridPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GorillaTagScripts::BuilderAttachGridPlane::*)(int, int, float)>(&GorillaTagScripts::BuilderAttachGridPlane::GetGridPosition)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* gridSize = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::BuilderAttachGridPlane*), "GetGridPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z, gridSize});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::BuilderAttachGridPlane::SetConnected
// Il2CppName: SetConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::BuilderAttachGridPlane::*)(::GlobalNamespace::SnapBounds, bool)>(&GorillaTagScripts::BuilderAttachGridPlane::SetConnected)> {
  static const MethodInfo* get() {
    static auto* bounds = &::il2cpp_utils::GetClassFromName("", "SnapBounds")->byval_arg;
    static auto* connect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::BuilderAttachGridPlane*), "SetConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bounds, connect});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::BuilderAttachGridPlane::IsConnected
// Il2CppName: IsConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaTagScripts::BuilderAttachGridPlane::*)(::GlobalNamespace::SnapBounds)>(&GorillaTagScripts::BuilderAttachGridPlane::IsConnected)> {
  static const MethodInfo* get() {
    static auto* bounds = &::il2cpp_utils::GetClassFromName("", "SnapBounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::BuilderAttachGridPlane*), "IsConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bounds});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::BuilderAttachGridPlane::CalcGridOverlap
// Il2CppName: CalcGridOverlap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::BuilderAttachGridPlane::*)(::GorillaTagScripts::BuilderAttachGridPlane*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float, ByRef<::UnityEngine::Vector2Int>, ByRef<::UnityEngine::Vector2Int>)>(&GorillaTagScripts::BuilderAttachGridPlane::CalcGridOverlap)> {
  static const MethodInfo* get() {
    static auto* otherGridPlane = &::il2cpp_utils::GetClassFromName("GorillaTagScripts", "BuilderAttachGridPlane")->byval_arg;
    static auto* otherPieceLocalPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* otherPieceLocalRot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* gridSize = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2Int")->this_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2Int")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::BuilderAttachGridPlane*), "CalcGridOverlap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherGridPlane, otherPieceLocalPos, otherPieceLocalRot, gridSize, min, max});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::BuilderAttachGridPlane::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::BuilderAttachGridPlane::*)()>(&GorillaTagScripts::BuilderAttachGridPlane::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::BuilderAttachGridPlane*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::BuilderAttachGridPlane::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
