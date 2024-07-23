// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Behaviour
#include "Fusion/Behaviour.hpp"
// Including type: Fusion.RunnerVisibilityNode/PreferredRunners
#include "Fusion/RunnerVisibilityNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Component because it is already included!
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: RunnerVisibilityNodes
  class RunnerVisibilityNodes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::RunnerVisibilityNodes);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::RunnerVisibilityNodes*, "Fusion", "RunnerVisibilityNodes");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.RunnerVisibilityNodes
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class RunnerVisibilityNodes : public ::Fusion::Behaviour {
    public:
    public:
    // public Fusion.RunnerVisibilityNode/PreferredRunners PreferredRunner
    // Size: 0x4
    // Offset: 0x20
    ::Fusion::RunnerVisibilityNode::PreferredRunners PreferredRunner;
    // Field size check
    static_assert(sizeof(::Fusion::RunnerVisibilityNode::PreferredRunners) == 0x4);
    // Padding between fields: PreferredRunner and: Components
    char __padding0[0x4] = {};
    // public UnityEngine.Component[] Components
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Component*> Components;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Component*>) == 0x8);
    // private System.String _guid
    // Size: 0x8
    // Offset: 0x30
    ::StringW guid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Component> reusableComponentsList
    static ::System::Collections::Generic::List_1<::UnityEngine::Component*>* _get_reusableComponentsList();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Component> reusableComponentsList
    static void _set_reusableComponentsList(::System::Collections::Generic::List_1<::UnityEngine::Component*>* value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Component> reusableComponentsList2
    static ::System::Collections::Generic::List_1<::UnityEngine::Component*>* _get_reusableComponentsList2();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Component> reusableComponentsList2
    static void _set_reusableComponentsList2(::System::Collections::Generic::List_1<::UnityEngine::Component*>* value);
    // Get instance field reference: public Fusion.RunnerVisibilityNode/PreferredRunners PreferredRunner
    [[deprecated("Use field access instead!")]] ::Fusion::RunnerVisibilityNode::PreferredRunners& dyn_PreferredRunner();
    // Get instance field reference: public UnityEngine.Component[] Components
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Component*>& dyn_Components();
    // Get instance field reference: private System.String _guid
    [[deprecated("Use field access instead!")]] ::StringW& dyn__guid();
    // System.Void AddNodes()
    // Offset: 0x2B1609C
    void AddNodes();
    // public System.Void FindRecognizedTypes()
    // Offset: 0x2B17578
    void FindRecognizedTypes();
    // public System.Void FindNestedRecognizedTypes()
    // Offset: 0x2B1798C
    void FindNestedRecognizedTypes();
    // static UnityEngine.Component[] FindRecognizedComponentsOnGameObject(UnityEngine.GameObject go)
    // Offset: 0x2B175F0
    static ::ArrayW<::UnityEngine::Component*> FindRecognizedComponentsOnGameObject(::UnityEngine::GameObject* go);
    // static UnityEngine.Component[] FindRecognizedNestedComponents(UnityEngine.GameObject go)
    // Offset: 0x2B17A04
    static ::ArrayW<::UnityEngine::Component*> FindRecognizedNestedComponents(::UnityEngine::GameObject* go);
    // static private System.Void .cctor()
    // Offset: 0x2B17E98
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2B17DE8
    // Implemented from: Fusion.Behaviour
    // Base method: System.Void Behaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RunnerVisibilityNodes* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::RunnerVisibilityNodes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RunnerVisibilityNodes*, creationType>()));
    }
  }; // Fusion.RunnerVisibilityNodes
  #pragma pack(pop)
  static check_size<sizeof(RunnerVisibilityNodes), 48 + sizeof(::StringW)> __Fusion_RunnerVisibilityNodesSizeCheck;
  static_assert(sizeof(RunnerVisibilityNodes) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::RunnerVisibilityNodes::AddNodes
// Il2CppName: AddNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::RunnerVisibilityNodes::*)()>(&Fusion::RunnerVisibilityNodes::AddNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RunnerVisibilityNodes*), "AddNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RunnerVisibilityNodes::FindRecognizedTypes
// Il2CppName: FindRecognizedTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::RunnerVisibilityNodes::*)()>(&Fusion::RunnerVisibilityNodes::FindRecognizedTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RunnerVisibilityNodes*), "FindRecognizedTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RunnerVisibilityNodes::FindNestedRecognizedTypes
// Il2CppName: FindNestedRecognizedTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::RunnerVisibilityNodes::*)()>(&Fusion::RunnerVisibilityNodes::FindNestedRecognizedTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RunnerVisibilityNodes*), "FindNestedRecognizedTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RunnerVisibilityNodes::FindRecognizedComponentsOnGameObject
// Il2CppName: FindRecognizedComponentsOnGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Component*> (*)(::UnityEngine::GameObject*)>(&Fusion::RunnerVisibilityNodes::FindRecognizedComponentsOnGameObject)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::RunnerVisibilityNodes*), "FindRecognizedComponentsOnGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go});
  }
};
// Writing MetadataGetter for method: Fusion::RunnerVisibilityNodes::FindRecognizedNestedComponents
// Il2CppName: FindRecognizedNestedComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Component*> (*)(::UnityEngine::GameObject*)>(&Fusion::RunnerVisibilityNodes::FindRecognizedNestedComponents)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::RunnerVisibilityNodes*), "FindRecognizedNestedComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go});
  }
};
// Writing MetadataGetter for method: Fusion::RunnerVisibilityNodes::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Fusion::RunnerVisibilityNodes::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RunnerVisibilityNodes*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RunnerVisibilityNodes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!