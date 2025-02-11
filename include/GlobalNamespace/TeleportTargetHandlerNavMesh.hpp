// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TeleportTargetHandler
#include "GlobalNamespace/TeleportTargetHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AI
namespace UnityEngine::AI {
  // Forward declaring type: NavMeshPath
  class NavMeshPath;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Nullable`1 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TeleportTargetHandlerNavMesh
  class TeleportTargetHandlerNavMesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TeleportTargetHandlerNavMesh);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleportTargetHandlerNavMesh*, "", "TeleportTargetHandlerNavMesh");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: TeleportTargetHandlerNavMesh
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportTargetHandlerNavMesh : public ::GlobalNamespace::TeleportTargetHandler {
    public:
    public:
    // public System.Int32 NavMeshAreaMask
    // Size: 0x4
    // Offset: 0x48
    int NavMeshAreaMask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: NavMeshAreaMask and: path
    char __padding0[0x4] = {};
    // private UnityEngine.AI.NavMeshPath _path
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::AI::NavMeshPath* path;
    // Field size check
    static_assert(sizeof(::UnityEngine::AI::NavMeshPath*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 NavMeshAreaMask
    [[deprecated("Use field access instead!")]] int& dyn_NavMeshAreaMask();
    // Get instance field reference: private UnityEngine.AI.NavMeshPath _path
    [[deprecated("Use field access instead!")]] ::UnityEngine::AI::NavMeshPath*& dyn__path();
    // private System.Void Awake()
    // Offset: 0x29262F0
    void Awake();
    // private System.Void OnDrawGizmos()
    // Offset: 0x29265A8
    void OnDrawGizmos();
    // protected override System.Boolean ConsiderTeleport(UnityEngine.Vector3 start, ref UnityEngine.Vector3 end)
    // Offset: 0x2926350
    // Implemented from: TeleportTargetHandler
    // Base method: System.Boolean TeleportTargetHandler::ConsiderTeleport(UnityEngine.Vector3 start, ref UnityEngine.Vector3 end)
    bool ConsiderTeleport(::UnityEngine::Vector3 start, ByRef<::UnityEngine::Vector3> end);
    // public override System.Nullable`1<UnityEngine.Vector3> ConsiderDestination(UnityEngine.Vector3 location)
    // Offset: 0x29264BC
    // Implemented from: TeleportTargetHandler
    // Base method: System.Nullable`1<UnityEngine.Vector3> TeleportTargetHandler::ConsiderDestination(UnityEngine.Vector3 location)
    ::System::Nullable_1<::UnityEngine::Vector3> ConsiderDestination(::UnityEngine::Vector3 location);
    // public System.Void .ctor()
    // Offset: 0x29265AC
    // Implemented from: TeleportTargetHandler
    // Base method: System.Void TeleportTargetHandler::.ctor()
    // Base method: System.Void TeleportSupport::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportTargetHandlerNavMesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TeleportTargetHandlerNavMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportTargetHandlerNavMesh*, creationType>()));
    }
  }; // TeleportTargetHandlerNavMesh
  #pragma pack(pop)
  static check_size<sizeof(TeleportTargetHandlerNavMesh), 80 + sizeof(::UnityEngine::AI::NavMeshPath*)> __GlobalNamespace_TeleportTargetHandlerNavMeshSizeCheck;
  static_assert(sizeof(TeleportTargetHandlerNavMesh) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandlerNavMesh::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportTargetHandlerNavMesh::*)()>(&GlobalNamespace::TeleportTargetHandlerNavMesh::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportTargetHandlerNavMesh*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandlerNavMesh::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportTargetHandlerNavMesh::*)()>(&GlobalNamespace::TeleportTargetHandlerNavMesh::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportTargetHandlerNavMesh*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandlerNavMesh::ConsiderTeleport
// Il2CppName: ConsiderTeleport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::TeleportTargetHandlerNavMesh::*)(::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>)>(&GlobalNamespace::TeleportTargetHandlerNavMesh::ConsiderTeleport)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportTargetHandlerNavMesh*), "ConsiderTeleport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandlerNavMesh::ConsiderDestination
// Il2CppName: ConsiderDestination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (GlobalNamespace::TeleportTargetHandlerNavMesh::*)(::UnityEngine::Vector3)>(&GlobalNamespace::TeleportTargetHandlerNavMesh::ConsiderDestination)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportTargetHandlerNavMesh*), "ConsiderDestination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandlerNavMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
