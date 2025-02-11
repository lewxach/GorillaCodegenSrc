// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: DeserializationEventHandler
  class DeserializationEventHandler;
  // Forward declaring type: SerializationEventHandler
  class SerializationEventHandler;
  // Forward declaring type: ObjectHolder
  class ObjectHolder;
  // Forward declaring type: ObjectHolderList
  class ObjectHolderList;
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
  // Forward declaring type: FixupHolder
  class FixupHolder;
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: RuntimeConstructorInfo
  class RuntimeConstructorInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ObjectManager
  class ObjectManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::ObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ObjectManager*, "System.Runtime.Serialization", "ObjectManager");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.ObjectManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class ObjectManager : public ::Il2CppObject {
    public:
    public:
    // private System.Runtime.Serialization.DeserializationEventHandler m_onDeserializationHandler
    // Size: 0x8
    // Offset: 0x10
    ::System::Runtime::Serialization::DeserializationEventHandler* m_onDeserializationHandler;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::DeserializationEventHandler*) == 0x8);
    // private System.Runtime.Serialization.SerializationEventHandler m_onDeserializedHandler
    // Size: 0x8
    // Offset: 0x18
    ::System::Runtime::Serialization::SerializationEventHandler* m_onDeserializedHandler;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::SerializationEventHandler*) == 0x8);
    // System.Runtime.Serialization.ObjectHolder[] m_objects
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::System::Runtime::Serialization::ObjectHolder*> m_objects;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Runtime::Serialization::ObjectHolder*>) == 0x8);
    // System.Object m_topObject
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* m_topObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Runtime.Serialization.ObjectHolderList m_specialFixupObjects
    // Size: 0x8
    // Offset: 0x30
    ::System::Runtime::Serialization::ObjectHolderList* m_specialFixupObjects;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::ObjectHolderList*) == 0x8);
    // System.Int64 m_fixupCount
    // Size: 0x8
    // Offset: 0x38
    int64_t m_fixupCount;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Runtime.Serialization.ISurrogateSelector m_selector
    // Size: 0x8
    // Offset: 0x40
    ::System::Runtime::Serialization::ISurrogateSelector* m_selector;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::ISurrogateSelector*) == 0x8);
    // System.Runtime.Serialization.StreamingContext m_context
    // Size: 0xC
    // Offset: 0x48
    ::System::Runtime::Serialization::StreamingContext m_context;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::StreamingContext) == 0xC);
    public:
    // Get instance field reference: private System.Runtime.Serialization.DeserializationEventHandler m_onDeserializationHandler
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::DeserializationEventHandler*& dyn_m_onDeserializationHandler();
    // Get instance field reference: private System.Runtime.Serialization.SerializationEventHandler m_onDeserializedHandler
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::SerializationEventHandler*& dyn_m_onDeserializedHandler();
    // Get instance field reference: System.Runtime.Serialization.ObjectHolder[] m_objects
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Runtime::Serialization::ObjectHolder*>& dyn_m_objects();
    // Get instance field reference: System.Object m_topObject
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_topObject();
    // Get instance field reference: System.Runtime.Serialization.ObjectHolderList m_specialFixupObjects
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::ObjectHolderList*& dyn_m_specialFixupObjects();
    // Get instance field reference: System.Int64 m_fixupCount
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_fixupCount();
    // Get instance field reference: System.Runtime.Serialization.ISurrogateSelector m_selector
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::ISurrogateSelector*& dyn_m_selector();
    // Get instance field reference: System.Runtime.Serialization.StreamingContext m_context
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::StreamingContext& dyn_m_context();
    // System.Void .ctor(System.Runtime.Serialization.ISurrogateSelector selector, System.Runtime.Serialization.StreamingContext context, System.Boolean checkSecurity, System.Boolean isCrossAppDomain)
    // Offset: 0x4554BD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectManager* New_ctor(::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context, bool checkSecurity, bool isCrossAppDomain) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::ObjectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectManager*, creationType>(selector, context, checkSecurity, isCrossAppDomain)));
    }
    // private System.Boolean CanCallGetType(System.Object obj)
    // Offset: 0x4554C78
    bool CanCallGetType(::Il2CppObject* obj);
    // System.Void set_TopObject(System.Object value)
    // Offset: 0x4554C80
    void set_TopObject(::Il2CppObject* value);
    // System.Object get_TopObject()
    // Offset: 0x4554C88
    ::Il2CppObject* get_TopObject();
    // System.Runtime.Serialization.ObjectHolderList get_SpecialFixupObjects()
    // Offset: 0x4554C90
    ::System::Runtime::Serialization::ObjectHolderList* get_SpecialFixupObjects();
    // System.Runtime.Serialization.ObjectHolder FindObjectHolder(System.Int64 objectID)
    // Offset: 0x4554D08
    ::System::Runtime::Serialization::ObjectHolder* FindObjectHolder(int64_t objectID);
    // System.Runtime.Serialization.ObjectHolder FindOrCreateObjectHolder(System.Int64 objectID)
    // Offset: 0x4554D60
    ::System::Runtime::Serialization::ObjectHolder* FindOrCreateObjectHolder(int64_t objectID);
    // private System.Void AddObjectHolder(System.Runtime.Serialization.ObjectHolder holder)
    // Offset: 0x4554E2C
    void AddObjectHolder(::System::Runtime::Serialization::ObjectHolder* holder);
    // private System.Boolean GetCompletionInfo(System.Runtime.Serialization.FixupHolder fixup, out System.Runtime.Serialization.ObjectHolder holder, out System.Object member, System.Boolean bThrowIfMissing)
    // Offset: 0x4554F58
    bool GetCompletionInfo(::System::Runtime::Serialization::FixupHolder* fixup, ByRef<::System::Runtime::Serialization::ObjectHolder*> holder, ByRef<::Il2CppObject*> member, bool bThrowIfMissing);
    // private System.Void FixupSpecialObject(System.Runtime.Serialization.ObjectHolder holder)
    // Offset: 0x4555270
    void FixupSpecialObject(::System::Runtime::Serialization::ObjectHolder* holder);
    // private System.Boolean ResolveObjectReference(System.Runtime.Serialization.ObjectHolder holder)
    // Offset: 0x4556068
    bool ResolveObjectReference(::System::Runtime::Serialization::ObjectHolder* holder);
    // private System.Boolean DoValueTypeFixup(System.Reflection.FieldInfo memberToFix, System.Runtime.Serialization.ObjectHolder holder, System.Object value)
    // Offset: 0x4555A24
    bool DoValueTypeFixup(::System::Reflection::FieldInfo* memberToFix, ::System::Runtime::Serialization::ObjectHolder* holder, ::Il2CppObject* value);
    // System.Void CompleteObject(System.Runtime.Serialization.ObjectHolder holder, System.Boolean bObjectFullyComplete)
    // Offset: 0x45562F4
    void CompleteObject(::System::Runtime::Serialization::ObjectHolder* holder, bool bObjectFullyComplete);
    // private System.Void DoNewlyRegisteredObjectFixups(System.Runtime.Serialization.ObjectHolder holder)
    // Offset: 0x4555F90
    void DoNewlyRegisteredObjectFixups(::System::Runtime::Serialization::ObjectHolder* holder);
    // public System.Object GetObject(System.Int64 objectID)
    // Offset: 0x4556B94
    ::Il2CppObject* GetObject(int64_t objectID);
    // System.Void RegisterString(System.String obj, System.Int64 objectID, System.Runtime.Serialization.SerializationInfo info, System.Int64 idOfContainingObj, System.Reflection.MemberInfo member)
    // Offset: 0x4556C44
    void RegisterString(::StringW obj, int64_t objectID, ::System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, ::System::Reflection::MemberInfo* member);
    // public System.Void RegisterObject(System.Object obj, System.Int64 objectID, System.Runtime.Serialization.SerializationInfo info, System.Int64 idOfContainingObj, System.Reflection.MemberInfo member, System.Int32[] arrayIndex)
    // Offset: 0x4556E64
    void RegisterObject(::Il2CppObject* obj, int64_t objectID, ::System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, ::System::Reflection::MemberInfo* member, ::ArrayW<int> arrayIndex);
    // System.Void CompleteISerializableObject(System.Object obj, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4555744
    void CompleteISerializableObject(::Il2CppObject* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // static System.Reflection.RuntimeConstructorInfo GetConstructor(System.RuntimeType t)
    // Offset: 0x4557818
    static ::System::Reflection::RuntimeConstructorInfo* GetConstructor(::System::RuntimeType* t);
    // public System.Void DoFixups()
    // Offset: 0x4557948
    void DoFixups();
    // private System.Void RegisterFixup(System.Runtime.Serialization.FixupHolder fixup, System.Int64 objectToBeFixed, System.Int64 objectRequired)
    // Offset: 0x4557DAC
    void RegisterFixup(::System::Runtime::Serialization::FixupHolder* fixup, int64_t objectToBeFixed, int64_t objectRequired);
    // public System.Void RecordFixup(System.Int64 objectToBeFixed, System.Reflection.MemberInfo member, System.Int64 objectRequired)
    // Offset: 0x4557FD0
    void RecordFixup(int64_t objectToBeFixed, ::System::Reflection::MemberInfo* member, int64_t objectRequired);
    // public System.Void RecordDelayedFixup(System.Int64 objectToBeFixed, System.String memberName, System.Int64 objectRequired)
    // Offset: 0x45582B0
    void RecordDelayedFixup(int64_t objectToBeFixed, ::StringW memberName, int64_t objectRequired);
    // public System.Void RecordArrayElementFixup(System.Int64 arrayToBeFixed, System.Int32[] indices, System.Int64 objectRequired)
    // Offset: 0x4558414
    void RecordArrayElementFixup(int64_t arrayToBeFixed, ::ArrayW<int> indices, int64_t objectRequired);
    // public System.Void RaiseDeserializationEvent()
    // Offset: 0x4558578
    void RaiseDeserializationEvent();
    // System.Void AddOnDeserialization(System.Runtime.Serialization.DeserializationEventHandler handler)
    // Offset: 0x45585C4
    void AddOnDeserialization(::System::Runtime::Serialization::DeserializationEventHandler* handler);
    // System.Void AddOnDeserialized(System.Object obj)
    // Offset: 0x4558654
    void AddOnDeserialized(::Il2CppObject* obj);
    // System.Void RaiseOnDeserializedEvent(System.Object obj)
    // Offset: 0x45586EC
    void RaiseOnDeserializedEvent(::Il2CppObject* obj);
    // public System.Void RaiseOnDeserializingEvent(System.Object obj)
    // Offset: 0x4558770
    void RaiseOnDeserializingEvent(::Il2CppObject* obj);
  }; // System.Runtime.Serialization.ObjectManager
  #pragma pack(pop)
  static check_size<sizeof(ObjectManager), 72 + sizeof(::System::Runtime::Serialization::StreamingContext)> __System_Runtime_Serialization_ObjectManagerSizeCheck;
  static_assert(sizeof(ObjectManager) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::CanCallGetType
// Il2CppName: CanCallGetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::ObjectManager::*)(::Il2CppObject*)>(&System::Runtime::Serialization::ObjectManager::CanCallGetType)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "CanCallGetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::set_TopObject
// Il2CppName: set_TopObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::Il2CppObject*)>(&System::Runtime::Serialization::ObjectManager::set_TopObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "set_TopObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::get_TopObject
// Il2CppName: get_TopObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::ObjectManager::*)()>(&System::Runtime::Serialization::ObjectManager::get_TopObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "get_TopObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::get_SpecialFixupObjects
// Il2CppName: get_SpecialFixupObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ObjectHolderList* (System::Runtime::Serialization::ObjectManager::*)()>(&System::Runtime::Serialization::ObjectManager::get_SpecialFixupObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "get_SpecialFixupObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::FindObjectHolder
// Il2CppName: FindObjectHolder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ObjectHolder* (System::Runtime::Serialization::ObjectManager::*)(int64_t)>(&System::Runtime::Serialization::ObjectManager::FindObjectHolder)> {
  static const MethodInfo* get() {
    static auto* objectID = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "FindObjectHolder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectID});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::FindOrCreateObjectHolder
// Il2CppName: FindOrCreateObjectHolder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ObjectHolder* (System::Runtime::Serialization::ObjectManager::*)(int64_t)>(&System::Runtime::Serialization::ObjectManager::FindOrCreateObjectHolder)> {
  static const MethodInfo* get() {
    static auto* objectID = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "FindOrCreateObjectHolder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectID});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::AddObjectHolder
// Il2CppName: AddObjectHolder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::System::Runtime::Serialization::ObjectHolder*)>(&System::Runtime::Serialization::ObjectManager::AddObjectHolder)> {
  static const MethodInfo* get() {
    static auto* holder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "AddObjectHolder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{holder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::GetCompletionInfo
// Il2CppName: GetCompletionInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::ObjectManager::*)(::System::Runtime::Serialization::FixupHolder*, ByRef<::System::Runtime::Serialization::ObjectHolder*>, ByRef<::Il2CppObject*>, bool)>(&System::Runtime::Serialization::ObjectManager::GetCompletionInfo)> {
  static const MethodInfo* get() {
    static auto* fixup = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "FixupHolder")->byval_arg;
    static auto* holder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->this_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    static auto* bThrowIfMissing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "GetCompletionInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixup, holder, member, bThrowIfMissing});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::FixupSpecialObject
// Il2CppName: FixupSpecialObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::System::Runtime::Serialization::ObjectHolder*)>(&System::Runtime::Serialization::ObjectManager::FixupSpecialObject)> {
  static const MethodInfo* get() {
    static auto* holder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "FixupSpecialObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{holder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::ResolveObjectReference
// Il2CppName: ResolveObjectReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::ObjectManager::*)(::System::Runtime::Serialization::ObjectHolder*)>(&System::Runtime::Serialization::ObjectManager::ResolveObjectReference)> {
  static const MethodInfo* get() {
    static auto* holder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "ResolveObjectReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{holder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::DoValueTypeFixup
// Il2CppName: DoValueTypeFixup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::ObjectManager::*)(::System::Reflection::FieldInfo*, ::System::Runtime::Serialization::ObjectHolder*, ::Il2CppObject*)>(&System::Runtime::Serialization::ObjectManager::DoValueTypeFixup)> {
  static const MethodInfo* get() {
    static auto* memberToFix = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    static auto* holder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "DoValueTypeFixup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{memberToFix, holder, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::CompleteObject
// Il2CppName: CompleteObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::System::Runtime::Serialization::ObjectHolder*, bool)>(&System::Runtime::Serialization::ObjectManager::CompleteObject)> {
  static const MethodInfo* get() {
    static auto* holder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->byval_arg;
    static auto* bObjectFullyComplete = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "CompleteObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{holder, bObjectFullyComplete});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::DoNewlyRegisteredObjectFixups
// Il2CppName: DoNewlyRegisteredObjectFixups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::System::Runtime::Serialization::ObjectHolder*)>(&System::Runtime::Serialization::ObjectManager::DoNewlyRegisteredObjectFixups)> {
  static const MethodInfo* get() {
    static auto* holder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "DoNewlyRegisteredObjectFixups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{holder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::GetObject
// Il2CppName: GetObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::ObjectManager::*)(int64_t)>(&System::Runtime::Serialization::ObjectManager::GetObject)> {
  static const MethodInfo* get() {
    static auto* objectID = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "GetObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectID});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RegisterString
// Il2CppName: RegisterString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::StringW, int64_t, ::System::Runtime::Serialization::SerializationInfo*, int64_t, ::System::Reflection::MemberInfo*)>(&System::Runtime::Serialization::ObjectManager::RegisterString)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* objectID = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* idOfContainingObj = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RegisterString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, objectID, info, idOfContainingObj, member});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RegisterObject
// Il2CppName: RegisterObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::Il2CppObject*, int64_t, ::System::Runtime::Serialization::SerializationInfo*, int64_t, ::System::Reflection::MemberInfo*, ::ArrayW<int>)>(&System::Runtime::Serialization::ObjectManager::RegisterObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* objectID = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* idOfContainingObj = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* arrayIndex = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RegisterObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, objectID, info, idOfContainingObj, member, arrayIndex});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::CompleteISerializableObject
// Il2CppName: CompleteISerializableObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::Il2CppObject*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::ObjectManager::CompleteISerializableObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "CompleteISerializableObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, info, context});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::GetConstructor
// Il2CppName: GetConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeConstructorInfo* (*)(::System::RuntimeType*)>(&System::Runtime::Serialization::ObjectManager::GetConstructor)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "GetConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::DoFixups
// Il2CppName: DoFixups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)()>(&System::Runtime::Serialization::ObjectManager::DoFixups)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "DoFixups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RegisterFixup
// Il2CppName: RegisterFixup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::System::Runtime::Serialization::FixupHolder*, int64_t, int64_t)>(&System::Runtime::Serialization::ObjectManager::RegisterFixup)> {
  static const MethodInfo* get() {
    static auto* fixup = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "FixupHolder")->byval_arg;
    static auto* objectToBeFixed = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* objectRequired = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RegisterFixup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixup, objectToBeFixed, objectRequired});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RecordFixup
// Il2CppName: RecordFixup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(int64_t, ::System::Reflection::MemberInfo*, int64_t)>(&System::Runtime::Serialization::ObjectManager::RecordFixup)> {
  static const MethodInfo* get() {
    static auto* objectToBeFixed = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* objectRequired = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RecordFixup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectToBeFixed, member, objectRequired});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RecordDelayedFixup
// Il2CppName: RecordDelayedFixup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(int64_t, ::StringW, int64_t)>(&System::Runtime::Serialization::ObjectManager::RecordDelayedFixup)> {
  static const MethodInfo* get() {
    static auto* objectToBeFixed = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* memberName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* objectRequired = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RecordDelayedFixup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectToBeFixed, memberName, objectRequired});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RecordArrayElementFixup
// Il2CppName: RecordArrayElementFixup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(int64_t, ::ArrayW<int>, int64_t)>(&System::Runtime::Serialization::ObjectManager::RecordArrayElementFixup)> {
  static const MethodInfo* get() {
    static auto* arrayToBeFixed = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* indices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* objectRequired = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RecordArrayElementFixup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arrayToBeFixed, indices, objectRequired});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RaiseDeserializationEvent
// Il2CppName: RaiseDeserializationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)()>(&System::Runtime::Serialization::ObjectManager::RaiseDeserializationEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RaiseDeserializationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::AddOnDeserialization
// Il2CppName: AddOnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::System::Runtime::Serialization::DeserializationEventHandler*)>(&System::Runtime::Serialization::ObjectManager::AddOnDeserialization)> {
  static const MethodInfo* get() {
    static auto* handler = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "DeserializationEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "AddOnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handler});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::AddOnDeserialized
// Il2CppName: AddOnDeserialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::Il2CppObject*)>(&System::Runtime::Serialization::ObjectManager::AddOnDeserialized)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "AddOnDeserialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RaiseOnDeserializedEvent
// Il2CppName: RaiseOnDeserializedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::Il2CppObject*)>(&System::Runtime::Serialization::ObjectManager::RaiseOnDeserializedEvent)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RaiseOnDeserializedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RaiseOnDeserializingEvent
// Il2CppName: RaiseOnDeserializingEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::Il2CppObject*)>(&System::Runtime::Serialization::ObjectManager::RaiseOnDeserializingEvent)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RaiseOnDeserializingEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
