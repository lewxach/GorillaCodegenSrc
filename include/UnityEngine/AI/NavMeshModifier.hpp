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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Forward declaring type: NavMeshModifier
  class NavMeshModifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AI::NavMeshModifier);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMeshModifier*, "UnityEngine.AI", "NavMeshModifier");
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AI.NavMeshModifier
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class NavMeshModifier : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Boolean m_OverrideArea
    // Size: 0x1
    // Offset: 0x20
    bool m_OverrideArea;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_OverrideArea and: m_Area
    char __padding0[0x3] = {};
    // private System.Int32 m_Area
    // Size: 0x4
    // Offset: 0x24
    int m_Area;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_IgnoreFromBuild
    // Size: 0x1
    // Offset: 0x28
    bool m_IgnoreFromBuild;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IgnoreFromBuild and: m_AffectedAgents
    char __padding2[0x7] = {};
    // private System.Collections.Generic.List`1<System.Int32> m_AffectedAgents
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<int>* m_AffectedAgents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    public:
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.AI.NavMeshModifier> s_NavMeshModifiers
    static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifier*>* _get_s_NavMeshModifiers();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.AI.NavMeshModifier> s_NavMeshModifiers
    static void _set_s_NavMeshModifiers(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifier*>* value);
    // Get instance field reference: private System.Boolean m_OverrideArea
    [[deprecated("Use field access instead!")]] bool& dyn_m_OverrideArea();
    // Get instance field reference: private System.Int32 m_Area
    [[deprecated("Use field access instead!")]] int& dyn_m_Area();
    // Get instance field reference: private System.Boolean m_IgnoreFromBuild
    [[deprecated("Use field access instead!")]] bool& dyn_m_IgnoreFromBuild();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32> m_AffectedAgents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int>*& dyn_m_AffectedAgents();
    // public System.Boolean get_overrideArea()
    // Offset: 0x46E5218
    bool get_overrideArea();
    // public System.Void set_overrideArea(System.Boolean value)
    // Offset: 0x46E5220
    void set_overrideArea(bool value);
    // public System.Int32 get_area()
    // Offset: 0x46E522C
    int get_area();
    // public System.Void set_area(System.Int32 value)
    // Offset: 0x46E5234
    void set_area(int value);
    // public System.Boolean get_ignoreFromBuild()
    // Offset: 0x46E523C
    bool get_ignoreFromBuild();
    // public System.Void set_ignoreFromBuild(System.Boolean value)
    // Offset: 0x46E5244
    void set_ignoreFromBuild(bool value);
    // static public System.Collections.Generic.List`1<UnityEngine.AI.NavMeshModifier> get_activeModifiers()
    // Offset: 0x46E5250
    static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifier*>* get_activeModifiers();
    // private System.Void OnEnable()
    // Offset: 0x46E52A8
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x46E53CC
    void OnDisable();
    // public System.Boolean AffectsAgentType(System.Int32 agentTypeID)
    // Offset: 0x46E544C
    bool AffectsAgentType(int agentTypeID);
    // public System.Void .ctor()
    // Offset: 0x46E5504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NavMeshModifier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AI::NavMeshModifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NavMeshModifier*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x46E55C8
    static void _cctor();
  }; // UnityEngine.AI.NavMeshModifier
  #pragma pack(pop)
  static check_size<sizeof(NavMeshModifier), 48 + sizeof(::System::Collections::Generic::List_1<int>*)> __UnityEngine_AI_NavMeshModifierSizeCheck;
  static_assert(sizeof(NavMeshModifier) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifier::get_overrideArea
// Il2CppName: get_overrideArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AI::NavMeshModifier::*)()>(&UnityEngine::AI::NavMeshModifier::get_overrideArea)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifier*), "get_overrideArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifier::set_overrideArea
// Il2CppName: set_overrideArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshModifier::*)(bool)>(&UnityEngine::AI::NavMeshModifier::set_overrideArea)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifier*), "set_overrideArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifier::get_area
// Il2CppName: get_area
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AI::NavMeshModifier::*)()>(&UnityEngine::AI::NavMeshModifier::get_area)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifier*), "get_area", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifier::set_area
// Il2CppName: set_area
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshModifier::*)(int)>(&UnityEngine::AI::NavMeshModifier::set_area)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifier*), "set_area", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifier::get_ignoreFromBuild
// Il2CppName: get_ignoreFromBuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AI::NavMeshModifier::*)()>(&UnityEngine::AI::NavMeshModifier::get_ignoreFromBuild)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifier*), "get_ignoreFromBuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifier::set_ignoreFromBuild
// Il2CppName: set_ignoreFromBuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshModifier::*)(bool)>(&UnityEngine::AI::NavMeshModifier::set_ignoreFromBuild)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifier*), "set_ignoreFromBuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifier::get_activeModifiers
// Il2CppName: get_activeModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifier*>* (*)()>(&UnityEngine::AI::NavMeshModifier::get_activeModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifier*), "get_activeModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifier::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshModifier::*)()>(&UnityEngine::AI::NavMeshModifier::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifier*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifier::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshModifier::*)()>(&UnityEngine::AI::NavMeshModifier::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifier*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifier::AffectsAgentType
// Il2CppName: AffectsAgentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AI::NavMeshModifier::*)(int)>(&UnityEngine::AI::NavMeshModifier::AffectsAgentType)> {
  static const MethodInfo* get() {
    static auto* agentTypeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifier*), "AffectsAgentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{agentTypeID});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifier::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AI::NavMeshModifier::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifier*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};