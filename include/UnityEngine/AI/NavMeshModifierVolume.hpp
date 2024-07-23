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
  // Forward declaring type: NavMeshModifierVolume
  class NavMeshModifierVolume;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AI::NavMeshModifierVolume);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMeshModifierVolume*, "UnityEngine.AI", "NavMeshModifierVolume");
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AI.NavMeshModifierVolume
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class NavMeshModifierVolume : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Vector3 m_Size
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 m_Size;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_Center
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 m_Center;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Int32 m_Area
    // Size: 0x4
    // Offset: 0x38
    int m_Area;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_Area and: m_AffectedAgents
    char __padding2[0x4] = {};
    // private System.Collections.Generic.List`1<System.Int32> m_AffectedAgents
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<int>* m_AffectedAgents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    public:
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.AI.NavMeshModifierVolume> s_NavMeshModifiers
    static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifierVolume*>* _get_s_NavMeshModifiers();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.AI.NavMeshModifierVolume> s_NavMeshModifiers
    static void _set_s_NavMeshModifiers(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifierVolume*>* value);
    // Get instance field reference: private UnityEngine.Vector3 m_Size
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Size();
    // Get instance field reference: private UnityEngine.Vector3 m_Center
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Center();
    // Get instance field reference: private System.Int32 m_Area
    [[deprecated("Use field access instead!")]] int& dyn_m_Area();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32> m_AffectedAgents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int>*& dyn_m_AffectedAgents();
    // public UnityEngine.Vector3 get_size()
    // Offset: 0x46E5660
    ::UnityEngine::Vector3 get_size();
    // public System.Void set_size(UnityEngine.Vector3 value)
    // Offset: 0x46E566C
    void set_size(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_center()
    // Offset: 0x46E5678
    ::UnityEngine::Vector3 get_center();
    // public System.Void set_center(UnityEngine.Vector3 value)
    // Offset: 0x46E5684
    void set_center(::UnityEngine::Vector3 value);
    // public System.Int32 get_area()
    // Offset: 0x46E5690
    int get_area();
    // public System.Void set_area(System.Int32 value)
    // Offset: 0x46E5698
    void set_area(int value);
    // static public System.Collections.Generic.List`1<UnityEngine.AI.NavMeshModifierVolume> get_activeModifiers()
    // Offset: 0x46E56A0
    static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifierVolume*>* get_activeModifiers();
    // private System.Void OnEnable()
    // Offset: 0x46E56F8
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x46E581C
    void OnDisable();
    // public System.Boolean AffectsAgentType(System.Int32 agentTypeID)
    // Offset: 0x46E589C
    bool AffectsAgentType(int agentTypeID);
    // public System.Void .ctor()
    // Offset: 0x46E5954
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NavMeshModifierVolume* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AI::NavMeshModifierVolume::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NavMeshModifierVolume*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x46E5A30
    static void _cctor();
  }; // UnityEngine.AI.NavMeshModifierVolume
  #pragma pack(pop)
  static check_size<sizeof(NavMeshModifierVolume), 64 + sizeof(::System::Collections::Generic::List_1<int>*)> __UnityEngine_AI_NavMeshModifierVolumeSizeCheck;
  static_assert(sizeof(NavMeshModifierVolume) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifierVolume::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::AI::NavMeshModifierVolume::*)()>(&UnityEngine::AI::NavMeshModifierVolume::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifierVolume*), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifierVolume::set_size
// Il2CppName: set_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshModifierVolume::*)(::UnityEngine::Vector3)>(&UnityEngine::AI::NavMeshModifierVolume::set_size)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifierVolume*), "set_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifierVolume::get_center
// Il2CppName: get_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::AI::NavMeshModifierVolume::*)()>(&UnityEngine::AI::NavMeshModifierVolume::get_center)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifierVolume*), "get_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifierVolume::set_center
// Il2CppName: set_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshModifierVolume::*)(::UnityEngine::Vector3)>(&UnityEngine::AI::NavMeshModifierVolume::set_center)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifierVolume*), "set_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifierVolume::get_area
// Il2CppName: get_area
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AI::NavMeshModifierVolume::*)()>(&UnityEngine::AI::NavMeshModifierVolume::get_area)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifierVolume*), "get_area", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifierVolume::set_area
// Il2CppName: set_area
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshModifierVolume::*)(int)>(&UnityEngine::AI::NavMeshModifierVolume::set_area)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifierVolume*), "set_area", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifierVolume::get_activeModifiers
// Il2CppName: get_activeModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifierVolume*>* (*)()>(&UnityEngine::AI::NavMeshModifierVolume::get_activeModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifierVolume*), "get_activeModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifierVolume::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshModifierVolume::*)()>(&UnityEngine::AI::NavMeshModifierVolume::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifierVolume*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifierVolume::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshModifierVolume::*)()>(&UnityEngine::AI::NavMeshModifierVolume::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifierVolume*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifierVolume::AffectsAgentType
// Il2CppName: AffectsAgentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AI::NavMeshModifierVolume::*)(int)>(&UnityEngine::AI::NavMeshModifierVolume::AffectsAgentType)> {
  static const MethodInfo* get() {
    static auto* agentTypeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifierVolume*), "AffectsAgentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{agentTypeID});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifierVolume::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshModifierVolume::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AI::NavMeshModifierVolume::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshModifierVolume*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};