// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.EventDescriptor
#include "System/ComponentModel/EventDescriptor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Delegate
  class Delegate;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: EventInfo
  class EventInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ReflectEventDescriptor
  class ReflectEventDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ReflectEventDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReflectEventDescriptor*, "System.ComponentModel", "ReflectEventDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x89
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ReflectEventDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectEventDescriptor : public ::System::ComponentModel::EventDescriptor {
    public:
    public:
    // private System.Type _type
    // Size: 0x8
    // Offset: 0x60
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private readonly System.Type _componentClass
    // Size: 0x8
    // Offset: 0x68
    ::System::Type* componentClass;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Reflection.MethodInfo _addMethod
    // Size: 0x8
    // Offset: 0x70
    ::System::Reflection::MethodInfo* addMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private System.Reflection.MethodInfo _removeMethod
    // Size: 0x8
    // Offset: 0x78
    ::System::Reflection::MethodInfo* removeMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private System.Reflection.EventInfo _realEvent
    // Size: 0x8
    // Offset: 0x80
    ::System::Reflection::EventInfo* realEvent;
    // Field size check
    static_assert(sizeof(::System::Reflection::EventInfo*) == 0x8);
    // private System.Boolean _filledMethods
    // Size: 0x1
    // Offset: 0x88
    bool filledMethods;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Type _type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__type();
    // Get instance field reference: private readonly System.Type _componentClass
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__componentClass();
    // Get instance field reference: private System.Reflection.MethodInfo _addMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn__addMethod();
    // Get instance field reference: private System.Reflection.MethodInfo _removeMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn__removeMethod();
    // Get instance field reference: private System.Reflection.EventInfo _realEvent
    [[deprecated("Use field access instead!")]] ::System::Reflection::EventInfo*& dyn__realEvent();
    // Get instance field reference: private System.Boolean _filledMethods
    [[deprecated("Use field access instead!")]] bool& dyn__filledMethods();
    // public System.Void .ctor(System.Type componentClass, System.String name, System.Type type, System.Attribute[] attributes)
    // Offset: 0x4F14BB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectEventDescriptor* New_ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type, ::ArrayW<::System::Attribute*> attributes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ReflectEventDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectEventDescriptor*, creationType>(componentClass, name, type, attributes)));
    }
    // public System.Void .ctor(System.Type componentClass, System.Reflection.EventInfo eventInfo)
    // Offset: 0x4F14D5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectEventDescriptor* New_ctor(::System::Type* componentClass, ::System::Reflection::EventInfo* eventInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ReflectEventDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectEventDescriptor*, creationType>(componentClass, eventInfo)));
    }
    // public System.Void .ctor(System.Type componentType, System.ComponentModel.EventDescriptor oldReflectEventDescriptor, System.Attribute[] attributes)
    // Offset: 0x4F14EE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectEventDescriptor* New_ctor(::System::Type* componentType, ::System::ComponentModel::EventDescriptor* oldReflectEventDescriptor, ::ArrayW<::System::Attribute*> attributes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ReflectEventDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectEventDescriptor*, creationType>(componentType, oldReflectEventDescriptor, attributes)));
    }
    // private System.Void FillEventInfoAttribute(System.Reflection.EventInfo realEventInfo, System.Collections.IList attributes)
    // Offset: 0x4F15DE4
    void FillEventInfoAttribute(::System::Reflection::EventInfo* realEventInfo, ::System::Collections::IList* attributes);
    // private System.Void FillMethods()
    // Offset: 0x4F14FE0
    void FillMethods();
    // private System.Void FillSingleMethodAttribute(System.Reflection.MethodInfo realMethodInfo, System.Collections.IList attributes)
    // Offset: 0x4F16114
    void FillSingleMethodAttribute(::System::Reflection::MethodInfo* realMethodInfo, ::System::Collections::IList* attributes);
    // public override System.Type get_ComponentType()
    // Offset: 0x4F14FC0
    // Implemented from: System.ComponentModel.EventDescriptor
    // Base method: System.Type EventDescriptor::get_ComponentType()
    ::System::Type* get_ComponentType();
    // public override System.Type get_EventType()
    // Offset: 0x4F14FC8
    // Implemented from: System.ComponentModel.EventDescriptor
    // Base method: System.Type EventDescriptor::get_EventType()
    ::System::Type* get_EventType();
    // public override System.Boolean get_IsMulticast()
    // Offset: 0x4F15498
    // Implemented from: System.ComponentModel.EventDescriptor
    // Base method: System.Boolean EventDescriptor::get_IsMulticast()
    bool get_IsMulticast();
    // public override System.Void AddEventHandler(System.Object component, System.Delegate value)
    // Offset: 0x4F15548
    // Implemented from: System.ComponentModel.EventDescriptor
    // Base method: System.Void EventDescriptor::AddEventHandler(System.Object component, System.Delegate value)
    void AddEventHandler(::Il2CppObject* component, ::System::Delegate* value);
    // protected override System.Void FillAttributes(System.Collections.IList attributes)
    // Offset: 0x4F15D80
    // Implemented from: System.ComponentModel.MemberDescriptor
    // Base method: System.Void MemberDescriptor::FillAttributes(System.Collections.IList attributes)
    void FillAttributes(::System::Collections::IList* attributes);
    // public override System.Void RemoveEventHandler(System.Object component, System.Delegate value)
    // Offset: 0x4F168D0
    // Implemented from: System.ComponentModel.EventDescriptor
    // Base method: System.Void EventDescriptor::RemoveEventHandler(System.Object component, System.Delegate value)
    void RemoveEventHandler(::Il2CppObject* component, ::System::Delegate* value);
  }; // System.ComponentModel.ReflectEventDescriptor
  #pragma pack(pop)
  static check_size<sizeof(ReflectEventDescriptor), 136 + sizeof(bool)> __System_ComponentModel_ReflectEventDescriptorSizeCheck;
  static_assert(sizeof(ReflectEventDescriptor) == 0x89);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ReflectEventDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ReflectEventDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ReflectEventDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ReflectEventDescriptor::FillEventInfoAttribute
// Il2CppName: FillEventInfoAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectEventDescriptor::*)(::System::Reflection::EventInfo*, ::System::Collections::IList*)>(&System::ComponentModel::ReflectEventDescriptor::FillEventInfoAttribute)> {
  static const MethodInfo* get() {
    static auto* realEventInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "EventInfo")->byval_arg;
    static auto* attributes = &::il2cpp_utils::GetClassFromName("System.Collections", "IList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectEventDescriptor*), "FillEventInfoAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{realEventInfo, attributes});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectEventDescriptor::FillMethods
// Il2CppName: FillMethods
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectEventDescriptor::*)()>(&System::ComponentModel::ReflectEventDescriptor::FillMethods)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectEventDescriptor*), "FillMethods", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectEventDescriptor::FillSingleMethodAttribute
// Il2CppName: FillSingleMethodAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectEventDescriptor::*)(::System::Reflection::MethodInfo*, ::System::Collections::IList*)>(&System::ComponentModel::ReflectEventDescriptor::FillSingleMethodAttribute)> {
  static const MethodInfo* get() {
    static auto* realMethodInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* attributes = &::il2cpp_utils::GetClassFromName("System.Collections", "IList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectEventDescriptor*), "FillSingleMethodAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{realMethodInfo, attributes});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectEventDescriptor::get_ComponentType
// Il2CppName: get_ComponentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::ReflectEventDescriptor::*)()>(&System::ComponentModel::ReflectEventDescriptor::get_ComponentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectEventDescriptor*), "get_ComponentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectEventDescriptor::get_EventType
// Il2CppName: get_EventType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::ReflectEventDescriptor::*)()>(&System::ComponentModel::ReflectEventDescriptor::get_EventType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectEventDescriptor*), "get_EventType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectEventDescriptor::get_IsMulticast
// Il2CppName: get_IsMulticast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ReflectEventDescriptor::*)()>(&System::ComponentModel::ReflectEventDescriptor::get_IsMulticast)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectEventDescriptor*), "get_IsMulticast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectEventDescriptor::AddEventHandler
// Il2CppName: AddEventHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectEventDescriptor::*)(::Il2CppObject*, ::System::Delegate*)>(&System::ComponentModel::ReflectEventDescriptor::AddEventHandler)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectEventDescriptor*), "AddEventHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectEventDescriptor::FillAttributes
// Il2CppName: FillAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectEventDescriptor::*)(::System::Collections::IList*)>(&System::ComponentModel::ReflectEventDescriptor::FillAttributes)> {
  static const MethodInfo* get() {
    static auto* attributes = &::il2cpp_utils::GetClassFromName("System.Collections", "IList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectEventDescriptor*), "FillAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReflectEventDescriptor::RemoveEventHandler
// Il2CppName: RemoveEventHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectEventDescriptor::*)(::Il2CppObject*, ::System::Delegate*)>(&System::ComponentModel::ReflectEventDescriptor::RemoveEventHandler)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReflectEventDescriptor*), "RemoveEventHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, value});
  }
};
