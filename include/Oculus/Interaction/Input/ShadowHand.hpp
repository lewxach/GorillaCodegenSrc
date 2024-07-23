// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: HandJointId
  struct HandJointId;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: ShadowHand
  class ShadowHand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Input::ShadowHand);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::ShadowHand*, "Oculus.Interaction.Input", "ShadowHand");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Input.ShadowHand
  // [TokenAttribute] Offset: FFFFFFFF
  class ShadowHand : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.Pose[] _localJointMap
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::Pose> localJointMap;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Pose>) == 0x8);
    // private UnityEngine.Pose[] _worldJointMap
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Pose> worldJointMap;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Pose>) == 0x8);
    // private UnityEngine.Pose _rootPose
    // Size: 0x1C
    // Offset: 0x20
    ::UnityEngine::Pose rootPose;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // private System.Single _rootScale
    // Size: 0x4
    // Offset: 0x3C
    float rootScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _dirtyMap
    // Size: 0x4
    // Offset: 0x40
    int dirtyMap;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.Pose[] _localJointMap
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Pose>& dyn__localJointMap();
    // Get instance field reference: private UnityEngine.Pose[] _worldJointMap
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Pose>& dyn__worldJointMap();
    // Get instance field reference: private UnityEngine.Pose _rootPose
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn__rootPose();
    // Get instance field reference: private System.Single _rootScale
    [[deprecated("Use field access instead!")]] float& dyn__rootScale();
    // Get instance field reference: private System.Int32 _dirtyMap
    [[deprecated("Use field access instead!")]] int& dyn__dirtyMap();
    // public System.Void .ctor()
    // Offset: 0x481D7EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShadowHand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::ShadowHand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShadowHand*, creationType>()));
    }
    // public UnityEngine.Pose GetLocalPose(Oculus.Interaction.Input.HandJointId handJointId)
    // Offset: 0x481D9B4
    ::UnityEngine::Pose GetLocalPose(::Oculus::Interaction::Input::HandJointId handJointId);
    // public System.Void SetLocalPose(Oculus.Interaction.Input.HandJointId jointId, UnityEngine.Pose pose)
    // Offset: 0x481D9F4
    void SetLocalPose(::Oculus::Interaction::Input::HandJointId jointId, ::UnityEngine::Pose pose);
    // public UnityEngine.Pose GetWorldPose(Oculus.Interaction.Input.HandJointId jointId)
    // Offset: 0x481DB40
    ::UnityEngine::Pose GetWorldPose(::Oculus::Interaction::Input::HandJointId jointId);
    // public UnityEngine.Pose GetRoot()
    // Offset: 0x481DDF0
    ::UnityEngine::Pose GetRoot();
    // public System.Void SetRoot(UnityEngine.Pose rootPose)
    // Offset: 0x481DE04
    void SetRoot(::UnityEngine::Pose rootPose);
    // public System.Single GetRootScale()
    // Offset: 0x481DE24
    float GetRootScale();
    // public System.Void SetRootScale(System.Single scale)
    // Offset: 0x481DE2C
    void SetRootScale(float scale);
    // private System.Boolean CheckDirtyBit(System.Int32 i)
    // Offset: 0x481DE38
    bool CheckDirtyBit(int i);
    // private System.Void SetDirtyBit(System.Int32 i)
    // Offset: 0x481DE48
    void SetDirtyBit(int i);
    // private System.Void ClearDirtyBit(System.Int32 i)
    // Offset: 0x481DE60
    void ClearDirtyBit(int i);
    // private System.Void MarkDirty(Oculus.Interaction.Input.HandJointId jointId)
    // Offset: 0x481DA5C
    void MarkDirty(::Oculus::Interaction::Input::HandJointId jointId);
    // private System.Void UpdateDirty(Oculus.Interaction.Input.HandJointId jointId)
    // Offset: 0x481DB98
    void UpdateDirty(::Oculus::Interaction::Input::HandJointId jointId);
    // public System.Void Copy(Oculus.Interaction.Input.ShadowHand hand)
    // Offset: 0x481DE78
    void Copy(::Oculus::Interaction::Input::ShadowHand* hand);
  }; // Oculus.Interaction.Input.ShadowHand
  #pragma pack(pop)
  static check_size<sizeof(ShadowHand), 64 + sizeof(int)> __Oculus_Interaction_Input_ShadowHandSizeCheck;
  static_assert(sizeof(ShadowHand) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Input::ShadowHand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Input::ShadowHand::GetLocalPose
// Il2CppName: GetLocalPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (Oculus::Interaction::Input::ShadowHand::*)(::Oculus::Interaction::Input::HandJointId)>(&Oculus::Interaction::Input::ShadowHand::GetLocalPose)> {
  static const MethodInfo* get() {
    static auto* handJointId = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandJointId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::ShadowHand*), "GetLocalPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handJointId});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::ShadowHand::SetLocalPose
// Il2CppName: SetLocalPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::ShadowHand::*)(::Oculus::Interaction::Input::HandJointId, ::UnityEngine::Pose)>(&Oculus::Interaction::Input::ShadowHand::SetLocalPose)> {
  static const MethodInfo* get() {
    static auto* jointId = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandJointId")->byval_arg;
    static auto* pose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::ShadowHand*), "SetLocalPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jointId, pose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::ShadowHand::GetWorldPose
// Il2CppName: GetWorldPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (Oculus::Interaction::Input::ShadowHand::*)(::Oculus::Interaction::Input::HandJointId)>(&Oculus::Interaction::Input::ShadowHand::GetWorldPose)> {
  static const MethodInfo* get() {
    static auto* jointId = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandJointId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::ShadowHand*), "GetWorldPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jointId});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::ShadowHand::GetRoot
// Il2CppName: GetRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (Oculus::Interaction::Input::ShadowHand::*)()>(&Oculus::Interaction::Input::ShadowHand::GetRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::ShadowHand*), "GetRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::ShadowHand::SetRoot
// Il2CppName: SetRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::ShadowHand::*)(::UnityEngine::Pose)>(&Oculus::Interaction::Input::ShadowHand::SetRoot)> {
  static const MethodInfo* get() {
    static auto* rootPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::ShadowHand*), "SetRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rootPose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::ShadowHand::GetRootScale
// Il2CppName: GetRootScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Input::ShadowHand::*)()>(&Oculus::Interaction::Input::ShadowHand::GetRootScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::ShadowHand*), "GetRootScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::ShadowHand::SetRootScale
// Il2CppName: SetRootScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::ShadowHand::*)(float)>(&Oculus::Interaction::Input::ShadowHand::SetRootScale)> {
  static const MethodInfo* get() {
    static auto* scale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::ShadowHand*), "SetRootScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scale});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::ShadowHand::CheckDirtyBit
// Il2CppName: CheckDirtyBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Input::ShadowHand::*)(int)>(&Oculus::Interaction::Input::ShadowHand::CheckDirtyBit)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::ShadowHand*), "CheckDirtyBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::ShadowHand::SetDirtyBit
// Il2CppName: SetDirtyBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::ShadowHand::*)(int)>(&Oculus::Interaction::Input::ShadowHand::SetDirtyBit)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::ShadowHand*), "SetDirtyBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::ShadowHand::ClearDirtyBit
// Il2CppName: ClearDirtyBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::ShadowHand::*)(int)>(&Oculus::Interaction::Input::ShadowHand::ClearDirtyBit)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::ShadowHand*), "ClearDirtyBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::ShadowHand::MarkDirty
// Il2CppName: MarkDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::ShadowHand::*)(::Oculus::Interaction::Input::HandJointId)>(&Oculus::Interaction::Input::ShadowHand::MarkDirty)> {
  static const MethodInfo* get() {
    static auto* jointId = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandJointId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::ShadowHand*), "MarkDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jointId});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::ShadowHand::UpdateDirty
// Il2CppName: UpdateDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::ShadowHand::*)(::Oculus::Interaction::Input::HandJointId)>(&Oculus::Interaction::Input::ShadowHand::UpdateDirty)> {
  static const MethodInfo* get() {
    static auto* jointId = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandJointId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::ShadowHand*), "UpdateDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jointId});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::ShadowHand::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::ShadowHand::*)(::Oculus::Interaction::Input::ShadowHand*)>(&Oculus::Interaction::Input::ShadowHand::Copy)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "ShadowHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::ShadowHand*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};