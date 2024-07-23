// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Linq.JObject
#include "Newtonsoft/Json/Linq/JObject.hpp"
// Including type: Newtonsoft.Json.Utilities.DynamicProxy`1
#include "Newtonsoft/Json/Utilities/DynamicProxy_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Linq
namespace Newtonsoft::Json::Linq {
}
// Forward declaring namespace: System::Dynamic
namespace System::Dynamic {
  // Forward declaring type: GetMemberBinder
  class GetMemberBinder;
  // Forward declaring type: SetMemberBinder
  class SetMemberBinder;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy*, "Newtonsoft.Json.Linq", "JObject/JObjectDynamicProxy");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  class JObject::JObjectDynamicProxy : public ::Newtonsoft::Json::Utilities::DynamicProxy_1<::Newtonsoft::Json::Linq::JObject*> {
    public:
    // Nested type: ::Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy::$$c
    class $$c;
    // public System.Boolean TryGetMember(Newtonsoft.Json.Linq.JObject instance, System.Dynamic.GetMemberBinder binder, out System.Object result)
    // Offset: 0x4743F84
    bool TryGetMember(::Newtonsoft::Json::Linq::JObject* instance, ::System::Dynamic::GetMemberBinder* binder, ByRef<::Il2CppObject*> result);
    // public System.Boolean TrySetMember(Newtonsoft.Json.Linq.JObject instance, System.Dynamic.SetMemberBinder binder, System.Object value)
    // Offset: 0x4743FC4
    bool TrySetMember(::Newtonsoft::Json::Linq::JObject* instance, ::System::Dynamic::SetMemberBinder* binder, ::Il2CppObject* value);
    // public System.Collections.Generic.IEnumerable`1<System.String> GetDynamicMemberNames(Newtonsoft.Json.Linq.JObject instance)
    // Offset: 0x47440A4
    ::System::Collections::Generic::IEnumerable_1<::StringW>* GetDynamicMemberNames(::Newtonsoft::Json::Linq::JObject* instance);
    // public System.Void .ctor()
    // Offset: 0x4743F3C
    // Implemented from: Newtonsoft.Json.Utilities.DynamicProxy`1
    // Base method: System.Void DynamicProxy_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JObject::JObjectDynamicProxy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JObject::JObjectDynamicProxy*, creationType>()));
    }
  }; // Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy::TryGetMember
// Il2CppName: TryGetMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy::*)(::Newtonsoft::Json::Linq::JObject*, ::System::Dynamic::GetMemberBinder*, ByRef<::Il2CppObject*>)>(&Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy::TryGetMember)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JObject")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Dynamic", "GetMemberBinder")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy*), "TryGetMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, binder, result});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy::TrySetMember
// Il2CppName: TrySetMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy::*)(::Newtonsoft::Json::Linq::JObject*, ::System::Dynamic::SetMemberBinder*, ::Il2CppObject*)>(&Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy::TrySetMember)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JObject")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Dynamic", "SetMemberBinder")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy*), "TrySetMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, binder, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy::GetDynamicMemberNames
// Il2CppName: GetDynamicMemberNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy::*)(::Newtonsoft::Json::Linq::JObject*)>(&Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy::GetDynamicMemberNames)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy*), "GetDynamicMemberNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JObject::JObjectDynamicProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!