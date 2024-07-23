// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Animations.Rigging.PropertyDescriptor
#include "UnityEngine/Animations/Rigging/PropertyDescriptor.hpp"
// Including type: UnityEngine.Animations.Rigging.Property
#include "UnityEngine/Animations/Rigging/Property.hpp"
// Including type: UnityEngine.Animations.Rigging.SyncableProperties
#include "UnityEngine/Animations/Rigging/SyncableProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: IAnimationJobBinder
  class IAnimationJobBinder;
  // Forward declaring type: IRigConstraint
  class IRigConstraint;
  // Forward declaring type: Rig
  class Rig;
  // Forward declaring type: IRigLayer
  class IRigLayer;
  // Forward declaring type: IAnimationJobData
  class IAnimationJobData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Forward declaring type: IAnimationJob
  class IAnimationJob;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: RigUtils
  class RigUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::RigUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::RigUtils*, "UnityEngine.Animations.Rigging", "RigUtils");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.RigUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class RigUtils : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Animations::Rigging::RigUtils::RigSyncSceneToStreamData
    struct RigSyncSceneToStreamData;
    // Nested type: ::UnityEngine::Animations::Rigging::RigUtils::$$c
    class $$c;
    // Get static field: static readonly System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Animations.Rigging.PropertyDescriptor> s_SupportedPropertyTypeToDescriptor
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Animations::Rigging::PropertyDescriptor>* _get_s_SupportedPropertyTypeToDescriptor();
    // Set static field: static readonly System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Animations.Rigging.PropertyDescriptor> s_SupportedPropertyTypeToDescriptor
    static void _set_s_SupportedPropertyTypeToDescriptor(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Animations::Rigging::PropertyDescriptor>* value);
    // Get static field: static private readonly UnityEngine.Animations.Rigging.IAnimationJobBinder <syncSceneToStreamBinder>k__BackingField
    static ::UnityEngine::Animations::Rigging::IAnimationJobBinder* _get_$syncSceneToStreamBinder$k__BackingField();
    // Set static field: static private readonly UnityEngine.Animations.Rigging.IAnimationJobBinder <syncSceneToStreamBinder>k__BackingField
    static void _set_$syncSceneToStreamBinder$k__BackingField(::UnityEngine::Animations::Rigging::IAnimationJobBinder* value);
    // static public UnityEngine.Animations.Rigging.IRigConstraint[] GetConstraints(UnityEngine.Animations.Rigging.Rig rig)
    // Offset: 0x507A878
    static ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> GetConstraints(::UnityEngine::Animations::Rigging::Rig* rig);
    // static private UnityEngine.Transform[] GetSyncableRigTransforms(UnityEngine.Animator animator)
    // Offset: 0x507AF6C
    static ::ArrayW<::UnityEngine::Transform*> GetSyncableRigTransforms(::UnityEngine::Animator* animator);
    // static private System.Boolean ExtractTransformType(UnityEngine.Animator animator, System.Reflection.FieldInfo field, System.Object data, System.Collections.Generic.List`1<UnityEngine.Transform> syncableTransforms)
    // Offset: 0x507B094
    static bool ExtractTransformType(::UnityEngine::Animator* animator, ::System::Reflection::FieldInfo* field, ::Il2CppObject* data, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* syncableTransforms);
    // static private System.Boolean ExtractPropertyType(System.Reflection.FieldInfo field, System.Object data, System.Collections.Generic.List`1<UnityEngine.Animations.Rigging.Property> syncableProperties, System.String namePrefix)
    // Offset: 0x507B728
    static bool ExtractPropertyType(::System::Reflection::FieldInfo* field, ::Il2CppObject* data, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>* syncableProperties, ::StringW namePrefix);
    // static private System.Boolean ExtractWeightedTransforms(UnityEngine.Animator animator, System.Reflection.FieldInfo field, System.Object data, System.Collections.Generic.List`1<UnityEngine.Transform> syncableTransforms, System.Collections.Generic.List`1<UnityEngine.Animations.Rigging.Property> syncableProperties)
    // Offset: 0x507B8B4
    static bool ExtractWeightedTransforms(::UnityEngine::Animator* animator, ::System::Reflection::FieldInfo* field, ::Il2CppObject* data, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* syncableTransforms, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>* syncableProperties);
    // static private System.Boolean ExtractNestedPropertyType(UnityEngine.Animator animator, System.Reflection.FieldInfo field, System.Object data, System.Collections.Generic.List`1<UnityEngine.Transform> syncableTransforms, System.Collections.Generic.List`1<UnityEngine.Animations.Rigging.Property> syncableProperties, System.String namePrefix)
    // Offset: 0x507C208
    static bool ExtractNestedPropertyType(::UnityEngine::Animator* animator, ::System::Reflection::FieldInfo* field, ::Il2CppObject* data, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* syncableTransforms, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>* syncableProperties, ::StringW namePrefix);
    // static private System.Void ExtractAllSyncableData(UnityEngine.Animator animator, System.Collections.Generic.IList`1<UnityEngine.Animations.Rigging.IRigLayer> layers, out System.Collections.Generic.List`1<UnityEngine.Transform> syncableTransforms, out System.Collections.Generic.List`1<UnityEngine.Animations.Rigging.SyncableProperties> syncableProperties)
    // Offset: 0x507C7FC
    static void ExtractAllSyncableData(::UnityEngine::Animator* animator, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>* layers, ByRef<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> syncableTransforms, ByRef<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::SyncableProperties>*> syncableProperties);
    // static public UnityEngine.Animations.IAnimationJob[] CreateAnimationJobs(UnityEngine.Animator animator, UnityEngine.Animations.Rigging.IRigConstraint[] constraints)
    // Offset: 0x507AA94
    static ::ArrayW<::UnityEngine::Animations::IAnimationJob*> CreateAnimationJobs(::UnityEngine::Animator* animator, ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> constraints);
    // static public System.Void DestroyAnimationJobs(UnityEngine.Animations.Rigging.IRigConstraint[] constraints, UnityEngine.Animations.IAnimationJob[] jobs)
    // Offset: 0x507ADCC
    static void DestroyAnimationJobs(::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> constraints, ::ArrayW<::UnityEngine::Animations::IAnimationJob*> jobs);
    // static UnityEngine.Animations.Rigging.IAnimationJobData CreateSyncSceneToStreamData(UnityEngine.Animator animator, System.Collections.Generic.IList`1<UnityEngine.Animations.Rigging.IRigLayer> layers)
    // Offset: 0x507D6C8
    static ::UnityEngine::Animations::Rigging::IAnimationJobData* CreateSyncSceneToStreamData(::UnityEngine::Animator* animator, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>* layers);
    // static public UnityEngine.Animations.Rigging.IAnimationJobBinder get_syncSceneToStreamBinder()
    // Offset: 0x507DA54
    static ::UnityEngine::Animations::Rigging::IAnimationJobBinder* get_syncSceneToStreamBinder();
    // static private System.Void .cctor()
    // Offset: 0x507DAAC
    static void _cctor();
  }; // UnityEngine.Animations.Rigging.RigUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigUtils::GetConstraints
// Il2CppName: GetConstraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> (*)(::UnityEngine::Animations::Rigging::Rig*)>(&UnityEngine::Animations::Rigging::RigUtils::GetConstraints)> {
  static const MethodInfo* get() {
    static auto* rig = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "Rig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigUtils*), "GetConstraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rig});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigUtils::GetSyncableRigTransforms
// Il2CppName: GetSyncableRigTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*> (*)(::UnityEngine::Animator*)>(&UnityEngine::Animations::Rigging::RigUtils::GetSyncableRigTransforms)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigUtils*), "GetSyncableRigTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigUtils::ExtractTransformType
// Il2CppName: ExtractTransformType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Animator*, ::System::Reflection::FieldInfo*, ::Il2CppObject*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*)>(&UnityEngine::Animations::Rigging::RigUtils::ExtractTransformType)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* field = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* syncableTransforms = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigUtils*), "ExtractTransformType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, field, data, syncableTransforms});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigUtils::ExtractPropertyType
// Il2CppName: ExtractPropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::FieldInfo*, ::Il2CppObject*, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*, ::StringW)>(&UnityEngine::Animations::Rigging::RigUtils::ExtractPropertyType)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* syncableProperties = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "Property")})->byval_arg;
    static auto* namePrefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigUtils*), "ExtractPropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field, data, syncableProperties, namePrefix});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigUtils::ExtractWeightedTransforms
// Il2CppName: ExtractWeightedTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Animator*, ::System::Reflection::FieldInfo*, ::Il2CppObject*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*)>(&UnityEngine::Animations::Rigging::RigUtils::ExtractWeightedTransforms)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* field = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* syncableTransforms = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")})->byval_arg;
    static auto* syncableProperties = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "Property")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigUtils*), "ExtractWeightedTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, field, data, syncableTransforms, syncableProperties});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigUtils::ExtractNestedPropertyType
// Il2CppName: ExtractNestedPropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Animator*, ::System::Reflection::FieldInfo*, ::Il2CppObject*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*, ::StringW)>(&UnityEngine::Animations::Rigging::RigUtils::ExtractNestedPropertyType)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* field = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* syncableTransforms = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")})->byval_arg;
    static auto* syncableProperties = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "Property")})->byval_arg;
    static auto* namePrefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigUtils*), "ExtractNestedPropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, field, data, syncableTransforms, syncableProperties, namePrefix});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigUtils::ExtractAllSyncableData
// Il2CppName: ExtractAllSyncableData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Animator*, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*, ByRef<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*>, ByRef<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::SyncableProperties>*>)>(&UnityEngine::Animations::Rigging::RigUtils::ExtractAllSyncableData)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* layers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "IRigLayer")})->byval_arg;
    static auto* syncableTransforms = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")})->this_arg;
    static auto* syncableProperties = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "SyncableProperties")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigUtils*), "ExtractAllSyncableData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, layers, syncableTransforms, syncableProperties});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigUtils::CreateAnimationJobs
// Il2CppName: CreateAnimationJobs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Animations::IAnimationJob*> (*)(::UnityEngine::Animator*, ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>)>(&UnityEngine::Animations::Rigging::RigUtils::CreateAnimationJobs)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* constraints = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "IRigConstraint"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigUtils*), "CreateAnimationJobs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, constraints});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigUtils::DestroyAnimationJobs
// Il2CppName: DestroyAnimationJobs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>, ::ArrayW<::UnityEngine::Animations::IAnimationJob*>)>(&UnityEngine::Animations::Rigging::RigUtils::DestroyAnimationJobs)> {
  static const MethodInfo* get() {
    static auto* constraints = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "IRigConstraint"), 1)->byval_arg;
    static auto* jobs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "IAnimationJob"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigUtils*), "DestroyAnimationJobs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraints, jobs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigUtils::CreateSyncSceneToStreamData
// Il2CppName: CreateSyncSceneToStreamData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::IAnimationJobData* (*)(::UnityEngine::Animator*, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*)>(&UnityEngine::Animations::Rigging::RigUtils::CreateSyncSceneToStreamData)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* layers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "IRigLayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigUtils*), "CreateSyncSceneToStreamData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, layers});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigUtils::get_syncSceneToStreamBinder
// Il2CppName: get_syncSceneToStreamBinder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::IAnimationJobBinder* (*)()>(&UnityEngine::Animations::Rigging::RigUtils::get_syncSceneToStreamBinder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigUtils*), "get_syncSceneToStreamBinder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Animations::Rigging::RigUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};