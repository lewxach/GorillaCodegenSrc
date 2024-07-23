// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Forward declaring type: NavMeshBuildMarkup
  struct NavMeshBuildMarkup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMeshBuildMarkup, "UnityEngine.AI", "NavMeshBuildMarkup");
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AI.NavMeshBuildMarkup
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  struct NavMeshBuildMarkup/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 m_OverrideArea
    // Size: 0x4
    // Offset: 0x0
    int m_OverrideArea;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Area
    // Size: 0x4
    // Offset: 0x4
    int m_Area;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_InheritIgnoreFromBuild
    // Size: 0x4
    // Offset: 0x8
    int m_InheritIgnoreFromBuild;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_IgnoreFromBuild
    // Size: 0x4
    // Offset: 0xC
    int m_IgnoreFromBuild;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_OverrideGenerateLinks
    // Size: 0x4
    // Offset: 0x10
    int m_OverrideGenerateLinks;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_GenerateLinks
    // Size: 0x4
    // Offset: 0x14
    int m_GenerateLinks;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_InstanceID
    // Size: 0x4
    // Offset: 0x18
    int m_InstanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_IgnoreChildren
    // Size: 0x4
    // Offset: 0x1C
    int m_IgnoreChildren;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NavMeshBuildMarkup
    constexpr NavMeshBuildMarkup(int m_OverrideArea_ = {}, int m_Area_ = {}, int m_InheritIgnoreFromBuild_ = {}, int m_IgnoreFromBuild_ = {}, int m_OverrideGenerateLinks_ = {}, int m_GenerateLinks_ = {}, int m_InstanceID_ = {}, int m_IgnoreChildren_ = {}) noexcept : m_OverrideArea{m_OverrideArea_}, m_Area{m_Area_}, m_InheritIgnoreFromBuild{m_InheritIgnoreFromBuild_}, m_IgnoreFromBuild{m_IgnoreFromBuild_}, m_OverrideGenerateLinks{m_OverrideGenerateLinks_}, m_GenerateLinks{m_GenerateLinks_}, m_InstanceID{m_InstanceID_}, m_IgnoreChildren{m_IgnoreChildren_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 m_OverrideArea
    [[deprecated("Use field access instead!")]] int& dyn_m_OverrideArea();
    // Get instance field reference: private System.Int32 m_Area
    [[deprecated("Use field access instead!")]] int& dyn_m_Area();
    // Get instance field reference: private System.Int32 m_InheritIgnoreFromBuild
    [[deprecated("Use field access instead!")]] int& dyn_m_InheritIgnoreFromBuild();
    // Get instance field reference: private System.Int32 m_IgnoreFromBuild
    [[deprecated("Use field access instead!")]] int& dyn_m_IgnoreFromBuild();
    // Get instance field reference: private System.Int32 m_OverrideGenerateLinks
    [[deprecated("Use field access instead!")]] int& dyn_m_OverrideGenerateLinks();
    // Get instance field reference: private System.Int32 m_GenerateLinks
    [[deprecated("Use field access instead!")]] int& dyn_m_GenerateLinks();
    // Get instance field reference: private System.Int32 m_InstanceID
    [[deprecated("Use field access instead!")]] int& dyn_m_InstanceID();
    // Get instance field reference: private System.Int32 m_IgnoreChildren
    [[deprecated("Use field access instead!")]] int& dyn_m_IgnoreChildren();
    // public System.Void set_overrideArea(System.Boolean value)
    // Offset: 0x544FCD4
    void set_overrideArea(bool value);
    // public System.Void set_area(System.Int32 value)
    // Offset: 0x544FCE0
    void set_area(int value);
    // public System.Void set_ignoreFromBuild(System.Boolean value)
    // Offset: 0x544FCE8
    void set_ignoreFromBuild(bool value);
    // public System.Void set_root(UnityEngine.Transform value)
    // Offset: 0x544FCF4
    void set_root(::UnityEngine::Transform* value);
  }; // UnityEngine.AI.NavMeshBuildMarkup
  #pragma pack(pop)
  static check_size<sizeof(NavMeshBuildMarkup), 28 + sizeof(int)> __UnityEngine_AI_NavMeshBuildMarkupSizeCheck;
  static_assert(sizeof(NavMeshBuildMarkup) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshBuildMarkup::set_overrideArea
// Il2CppName: set_overrideArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshBuildMarkup::*)(bool)>(&UnityEngine::AI::NavMeshBuildMarkup::set_overrideArea)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshBuildMarkup), "set_overrideArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshBuildMarkup::set_area
// Il2CppName: set_area
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshBuildMarkup::*)(int)>(&UnityEngine::AI::NavMeshBuildMarkup::set_area)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshBuildMarkup), "set_area", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshBuildMarkup::set_ignoreFromBuild
// Il2CppName: set_ignoreFromBuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshBuildMarkup::*)(bool)>(&UnityEngine::AI::NavMeshBuildMarkup::set_ignoreFromBuild)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshBuildMarkup), "set_ignoreFromBuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshBuildMarkup::set_root
// Il2CppName: set_root
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshBuildMarkup::*)(::UnityEngine::Transform*)>(&UnityEngine::AI::NavMeshBuildMarkup::set_root)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshBuildMarkup), "set_root", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};