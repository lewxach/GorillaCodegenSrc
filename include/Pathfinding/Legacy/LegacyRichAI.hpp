// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.RichAI
#include "Pathfinding/RichAI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Pathfinding.Legacy
namespace Pathfinding::Legacy {
  // Forward declaring type: LegacyRichAI
  class LegacyRichAI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Legacy::LegacyRichAI);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Legacy::LegacyRichAI*, "Pathfinding.Legacy", "LegacyRichAI");
// Type namespace: Pathfinding.Legacy
namespace Pathfinding::Legacy {
  // Size: 0x1B8
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Legacy.LegacyRichAI
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class LegacyRichAI : public ::Pathfinding::RichAI {
    public:
    public:
    // public System.Boolean preciseSlowdown
    // Size: 0x1
    // Offset: 0x190
    bool preciseSlowdown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean raycastingForGroundPlacement
    // Size: 0x1
    // Offset: 0x191
    bool raycastingForGroundPlacement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: raycastingForGroundPlacement and: velocity
    char __padding1[0x2] = {};
    // private UnityEngine.Vector3 velocity
    // Size: 0xC
    // Offset: 0x194
    ::UnityEngine::Vector3 velocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastTargetPoint
    // Size: 0xC
    // Offset: 0x1A0
    ::UnityEngine::Vector3 lastTargetPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 currentTargetDirection
    // Size: 0xC
    // Offset: 0x1AC
    ::UnityEngine::Vector3 currentTargetDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get static field: static private System.Single deltaTime
    static float _get_deltaTime();
    // Set static field: static private System.Single deltaTime
    static void _set_deltaTime(float value);
    // Get instance field reference: public System.Boolean preciseSlowdown
    [[deprecated("Use field access instead!")]] bool& dyn_preciseSlowdown();
    // Get instance field reference: public System.Boolean raycastingForGroundPlacement
    [[deprecated("Use field access instead!")]] bool& dyn_raycastingForGroundPlacement();
    // Get instance field reference: private UnityEngine.Vector3 velocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_velocity();
    // Get instance field reference: private UnityEngine.Vector3 lastTargetPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastTargetPoint();
    // Get instance field reference: private UnityEngine.Vector3 currentTargetDirection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_currentTargetDirection();
    // private System.Boolean RotateTowards(UnityEngine.Vector3 trotdir)
    // Offset: 0x2A0F850
    bool RotateTowards(::UnityEngine::Vector3 trotdir);
    // protected override System.Void Awake()
    // Offset: 0x2A0E7A0
    // Implemented from: Pathfinding.VersionedMonoBehaviour
    // Base method: System.Void VersionedMonoBehaviour::Awake()
    void Awake();
    // protected override System.Void Update()
    // Offset: 0x2A0E8B0
    // Implemented from: Pathfinding.AIBase
    // Base method: System.Void AIBase::Update()
    void Update();
    // private UnityEngine.Vector3 RaycastPosition(UnityEngine.Vector3 position, System.Single lasty)
    // Offset: 0x2A0FA84
    // Implemented from: Pathfinding.AIBase
    // Base method: UnityEngine.Vector3 AIBase::RaycastPosition(UnityEngine.Vector3 position, System.Single lasty)
    ::UnityEngine::Vector3 RaycastPosition(::UnityEngine::Vector3 position, float lasty);
    // public System.Void .ctor()
    // Offset: 0x2A0FC68
    // Implemented from: Pathfinding.RichAI
    // Base method: System.Void RichAI::.ctor()
    // Base method: System.Void AIBase::.ctor()
    // Base method: System.Void VersionedMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LegacyRichAI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Legacy::LegacyRichAI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LegacyRichAI*, creationType>()));
    }
  }; // Pathfinding.Legacy.LegacyRichAI
  #pragma pack(pop)
  static check_size<sizeof(LegacyRichAI), 428 + sizeof(::UnityEngine::Vector3)> __Pathfinding_Legacy_LegacyRichAISizeCheck;
  static_assert(sizeof(LegacyRichAI) == 0x1B8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Legacy::LegacyRichAI::RotateTowards
// Il2CppName: RotateTowards
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Legacy::LegacyRichAI::*)(::UnityEngine::Vector3)>(&Pathfinding::Legacy::LegacyRichAI::RotateTowards)> {
  static const MethodInfo* get() {
    static auto* trotdir = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Legacy::LegacyRichAI*), "RotateTowards", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trotdir});
  }
};
// Writing MetadataGetter for method: Pathfinding::Legacy::LegacyRichAI::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Legacy::LegacyRichAI::*)()>(&Pathfinding::Legacy::LegacyRichAI::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Legacy::LegacyRichAI*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Legacy::LegacyRichAI::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Legacy::LegacyRichAI::*)()>(&Pathfinding::Legacy::LegacyRichAI::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Legacy::LegacyRichAI*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Legacy::LegacyRichAI::RaycastPosition
// Il2CppName: RaycastPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::Legacy::LegacyRichAI::*)(::UnityEngine::Vector3, float)>(&Pathfinding::Legacy::LegacyRichAI::RaycastPosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* lasty = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Legacy::LegacyRichAI*), "RaycastPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, lasty});
  }
};
// Writing MetadataGetter for method: Pathfinding::Legacy::LegacyRichAI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!