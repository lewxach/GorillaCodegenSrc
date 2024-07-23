// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: GorillaTag.ISpawnable
#include "GorillaTag/ISpawnable.hpp"
// Including type: GorillaNetworking.CosmeticsController/CosmeticSlots
#include "GorillaNetworking/CosmeticsController.hpp"
// Including type: TransferrableObject
#include "GlobalNamespace/TransferrableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRRig
  class VRRig;
  // Forward declaring type: VRRigAnchorOverrides
  class VRRigAnchorOverrides;
}
// Forward declaring namespace: GorillaTag
namespace GorillaTag {
  // Forward declaring type: GTLogErrorLimiter
  class GTLogErrorLimiter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CosmeticAnchors
  class CosmeticAnchors;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CosmeticAnchors);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticAnchors*, "", "CosmeticAnchors");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xCA
  #pragma pack(push, 1)
  // Autogenerated type: CosmeticAnchors
  // [TokenAttribute] Offset: FFFFFFFF
  class CosmeticAnchors : public ::UnityEngine::MonoBehaviour/*, public ::GorillaTag::ISpawnable*/ {
    public:
    public:
    // protected UnityEngine.GameObject nameAnchor
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* nameAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // protected System.String nameAnchor_path
    // Size: 0x8
    // Offset: 0x28
    ::StringW nameAnchor_path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected UnityEngine.GameObject leftArmAnchor
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* leftArmAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // protected System.String leftArmAnchor_path
    // Size: 0x8
    // Offset: 0x38
    ::StringW leftArmAnchor_path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected UnityEngine.GameObject rightArmAnchor
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* rightArmAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // protected System.String rightArmAnchor_path
    // Size: 0x8
    // Offset: 0x48
    ::StringW rightArmAnchor_path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected UnityEngine.GameObject chestAnchor
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::GameObject* chestAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // protected System.String chestAnchor_path
    // Size: 0x8
    // Offset: 0x58
    ::StringW chestAnchor_path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected UnityEngine.GameObject huntComputerAnchor
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::GameObject* huntComputerAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // protected System.String huntComputerAnchor_path
    // Size: 0x8
    // Offset: 0x68
    ::StringW huntComputerAnchor_path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected UnityEngine.GameObject builderWatchAnchor
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::GameObject* builderWatchAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // protected System.String builderWatchAnchor_path
    // Size: 0x8
    // Offset: 0x78
    ::StringW builderWatchAnchor_path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected UnityEngine.GameObject friendshipBraceletLeftOverride
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::GameObject* friendshipBraceletLeftOverride;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // protected System.String friendshipBraceletLeftOverride_path
    // Size: 0x8
    // Offset: 0x88
    ::StringW friendshipBraceletLeftOverride_path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected UnityEngine.GameObject friendshipBraceletRightOverride
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::GameObject* friendshipBraceletRightOverride;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // protected System.String friendshipBraceletRightOverride_path
    // Size: 0x8
    // Offset: 0x98
    ::StringW friendshipBraceletRightOverride_path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected UnityEngine.GameObject badgeAnchor
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::GameObject* badgeAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // protected System.String badgeAnchor_path
    // Size: 0x8
    // Offset: 0xA8
    ::StringW badgeAnchor_path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public GorillaNetworking.CosmeticsController/CosmeticSlots slot
    // Size: 0x4
    // Offset: 0xB0
    ::GorillaNetworking::CosmeticsController::CosmeticSlots slot;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::CosmeticsController::CosmeticSlots) == 0x4);
    // Padding between fields: slot and: vrRig
    char __padding18[0x4] = {};
    // private VRRig vrRig
    // Size: 0x8
    // Offset: 0xB8
    ::GlobalNamespace::VRRig* vrRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    // private VRRigAnchorOverrides anchorOverrides
    // Size: 0x8
    // Offset: 0xC0
    ::GlobalNamespace::VRRigAnchorOverrides* anchorOverrides;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRigAnchorOverrides*) == 0x8);
    // private System.Boolean anchorEnabled
    // Size: 0x1
    // Offset: 0xC8
    bool anchorEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <GorillaTag.ISpawnable.IsSpawned>k__BackingField
    // Size: 0x1
    // Offset: 0xC9
    bool IsSpawned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GorillaTag::ISpawnable
    operator ::GorillaTag::ISpawnable() noexcept {
      return *reinterpret_cast<::GorillaTag::ISpawnable*>(this);
    }
    // Get static field: static private GorillaTag.GTLogErrorLimiter k_debugLogError_anchorOverridesNull
    static ::GorillaTag::GTLogErrorLimiter* _get_k_debugLogError_anchorOverridesNull();
    // Set static field: static private GorillaTag.GTLogErrorLimiter k_debugLogError_anchorOverridesNull
    static void _set_k_debugLogError_anchorOverridesNull(::GorillaTag::GTLogErrorLimiter* value);
    // Get instance field reference: protected UnityEngine.GameObject nameAnchor
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_nameAnchor();
    // Get instance field reference: protected System.String nameAnchor_path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_nameAnchor_path();
    // Get instance field reference: protected UnityEngine.GameObject leftArmAnchor
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_leftArmAnchor();
    // Get instance field reference: protected System.String leftArmAnchor_path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_leftArmAnchor_path();
    // Get instance field reference: protected UnityEngine.GameObject rightArmAnchor
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_rightArmAnchor();
    // Get instance field reference: protected System.String rightArmAnchor_path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_rightArmAnchor_path();
    // Get instance field reference: protected UnityEngine.GameObject chestAnchor
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_chestAnchor();
    // Get instance field reference: protected System.String chestAnchor_path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_chestAnchor_path();
    // Get instance field reference: protected UnityEngine.GameObject huntComputerAnchor
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_huntComputerAnchor();
    // Get instance field reference: protected System.String huntComputerAnchor_path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_huntComputerAnchor_path();
    // Get instance field reference: protected UnityEngine.GameObject builderWatchAnchor
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_builderWatchAnchor();
    // Get instance field reference: protected System.String builderWatchAnchor_path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_builderWatchAnchor_path();
    // Get instance field reference: protected UnityEngine.GameObject friendshipBraceletLeftOverride
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_friendshipBraceletLeftOverride();
    // Get instance field reference: protected System.String friendshipBraceletLeftOverride_path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_friendshipBraceletLeftOverride_path();
    // Get instance field reference: protected UnityEngine.GameObject friendshipBraceletRightOverride
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_friendshipBraceletRightOverride();
    // Get instance field reference: protected System.String friendshipBraceletRightOverride_path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_friendshipBraceletRightOverride_path();
    // Get instance field reference: protected UnityEngine.GameObject badgeAnchor
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_badgeAnchor();
    // Get instance field reference: protected System.String badgeAnchor_path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_badgeAnchor_path();
    // Get instance field reference: public GorillaNetworking.CosmeticsController/CosmeticSlots slot
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::CosmeticsController::CosmeticSlots& dyn_slot();
    // Get instance field reference: private VRRig vrRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_vrRig();
    // Get instance field reference: private VRRigAnchorOverrides anchorOverrides
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRigAnchorOverrides*& dyn_anchorOverrides();
    // Get instance field reference: private System.Boolean anchorEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_anchorEnabled();
    // Get instance field reference: private System.Boolean <GorillaTag.ISpawnable.IsSpawned>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$GorillaTag_ISpawnable_IsSpawned$k__BackingField();
    // private System.Boolean GorillaTag.ISpawnable.get_IsSpawned()
    // Offset: 0x26B0D38
    bool GorillaTag_ISpawnable_get_IsSpawned();
    // private System.Void GorillaTag.ISpawnable.set_IsSpawned(System.Boolean value)
    // Offset: 0x26B0D40
    void GorillaTag_ISpawnable_set_IsSpawned(bool value);
    // private System.Void GorillaTag.ISpawnable.OnSpawn()
    // Offset: 0x26B0D4C
    void GorillaTag_ISpawnable_OnSpawn();
    // private System.Void GorillaTag.ISpawnable.OnDespawn()
    // Offset: 0x26B1108
    void GorillaTag_ISpawnable_OnDespawn();
    // private System.Void AssignAnchorToPath(ref UnityEngine.GameObject anchorGObjRef, System.String path)
    // Offset: 0x26B0F58
    void AssignAnchorToPath(ByRef<::UnityEngine::GameObject*> anchorGObjRef, ::StringW path);
    // private System.Void OnEnable()
    // Offset: 0x26B110C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x26B11C8
    void OnDisable();
    // public System.Void TryUpdate()
    // Offset: 0x26B08B4
    void TryUpdate();
    // public System.Void EnableAnchor(System.Boolean enable)
    // Offset: 0x26B1564
    void EnableAnchor(bool enable);
    // private System.Void SetHuntComputerAnchor(System.Boolean enable)
    // Offset: 0x26B1284
    void SetHuntComputerAnchor(bool enable);
    // private System.Void SetBuilderWatchAnchor(System.Boolean enable)
    // Offset: 0x26B13F4
    void SetBuilderWatchAnchor(bool enable);
    // private System.Void SetCustomAnchor(UnityEngine.Transform target, System.Boolean enable, UnityEngine.GameObject overrideAnchor, UnityEngine.Transform defaultAnchor)
    // Offset: 0x26B17E0
    void SetCustomAnchor(::UnityEngine::Transform* target, bool enable, ::UnityEngine::GameObject* overrideAnchor, ::UnityEngine::Transform* defaultAnchor);
    // public UnityEngine.Transform GetPositionAnchor(TransferrableObject/PositionState pos)
    // Offset: 0x26B19F0
    ::UnityEngine::Transform* GetPositionAnchor(::GlobalNamespace::TransferrableObject::PositionState pos);
    // public UnityEngine.Transform GetNameAnchor()
    // Offset: 0x26B1AFC
    ::UnityEngine::Transform* GetNameAnchor();
    // public System.Boolean AffectedByHunt()
    // Offset: 0x26B060C
    bool AffectedByHunt();
    // public System.Boolean AffectedByBuilder()
    // Offset: 0x26B066C
    bool AffectedByBuilder();
    // public System.Void .ctor()
    // Offset: 0x26B1B80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CosmeticAnchors* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CosmeticAnchors::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CosmeticAnchors*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x26B1B88
    static void _cctor();
  }; // CosmeticAnchors
  #pragma pack(pop)
  static check_size<sizeof(CosmeticAnchors), 201 + sizeof(bool)> __GlobalNamespace_CosmeticAnchorsSizeCheck;
  static_assert(sizeof(CosmeticAnchors) == 0xCA);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_get_IsSpawned
// Il2CppName: GorillaTag.ISpawnable.get_IsSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CosmeticAnchors::*)()>(&GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_get_IsSpawned)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "GorillaTag.ISpawnable.get_IsSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_set_IsSpawned
// Il2CppName: GorillaTag.ISpawnable.set_IsSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticAnchors::*)(bool)>(&GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_set_IsSpawned)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "GorillaTag.ISpawnable.set_IsSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_OnSpawn
// Il2CppName: GorillaTag.ISpawnable.OnSpawn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticAnchors::*)()>(&GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_OnSpawn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "GorillaTag.ISpawnable.OnSpawn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_OnDespawn
// Il2CppName: GorillaTag.ISpawnable.OnDespawn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticAnchors::*)()>(&GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_OnDespawn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "GorillaTag.ISpawnable.OnDespawn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::AssignAnchorToPath
// Il2CppName: AssignAnchorToPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticAnchors::*)(ByRef<::UnityEngine::GameObject*>, ::StringW)>(&GlobalNamespace::CosmeticAnchors::AssignAnchorToPath)> {
  static const MethodInfo* get() {
    static auto* anchorGObjRef = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->this_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "AssignAnchorToPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorGObjRef, path});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticAnchors::*)()>(&GlobalNamespace::CosmeticAnchors::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticAnchors::*)()>(&GlobalNamespace::CosmeticAnchors::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::TryUpdate
// Il2CppName: TryUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticAnchors::*)()>(&GlobalNamespace::CosmeticAnchors::TryUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "TryUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::EnableAnchor
// Il2CppName: EnableAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticAnchors::*)(bool)>(&GlobalNamespace::CosmeticAnchors::EnableAnchor)> {
  static const MethodInfo* get() {
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "EnableAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::SetHuntComputerAnchor
// Il2CppName: SetHuntComputerAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticAnchors::*)(bool)>(&GlobalNamespace::CosmeticAnchors::SetHuntComputerAnchor)> {
  static const MethodInfo* get() {
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "SetHuntComputerAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::SetBuilderWatchAnchor
// Il2CppName: SetBuilderWatchAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticAnchors::*)(bool)>(&GlobalNamespace::CosmeticAnchors::SetBuilderWatchAnchor)> {
  static const MethodInfo* get() {
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "SetBuilderWatchAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::SetCustomAnchor
// Il2CppName: SetCustomAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticAnchors::*)(::UnityEngine::Transform*, bool, ::UnityEngine::GameObject*, ::UnityEngine::Transform*)>(&GlobalNamespace::CosmeticAnchors::SetCustomAnchor)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* overrideAnchor = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* defaultAnchor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "SetCustomAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, enable, overrideAnchor, defaultAnchor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::GetPositionAnchor
// Il2CppName: GetPositionAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::CosmeticAnchors::*)(::GlobalNamespace::TransferrableObject::PositionState)>(&GlobalNamespace::CosmeticAnchors::GetPositionAnchor)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("", "TransferrableObject/PositionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "GetPositionAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::GetNameAnchor
// Il2CppName: GetNameAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::CosmeticAnchors::*)()>(&GlobalNamespace::CosmeticAnchors::GetNameAnchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "GetNameAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::AffectedByHunt
// Il2CppName: AffectedByHunt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CosmeticAnchors::*)()>(&GlobalNamespace::CosmeticAnchors::AffectedByHunt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "AffectedByHunt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::AffectedByBuilder
// Il2CppName: AffectedByBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CosmeticAnchors::*)()>(&GlobalNamespace::CosmeticAnchors::AffectedByBuilder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), "AffectedByBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CosmeticAnchors::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::CosmeticAnchors::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticAnchors*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};