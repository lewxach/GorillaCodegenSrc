// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: EventInfo
  class EventInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: RuntimeReflectionExtensions
  class RuntimeReflectionExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::RuntimeReflectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeReflectionExtensions*, "System.Reflection", "RuntimeReflectionExtensions");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.RuntimeReflectionExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class RuntimeReflectionExtensions : public ::Il2CppObject {
    public:
    // static public System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> GetRuntimeFields(System.Type type)
    // Offset: 0x458D2A8
    static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetRuntimeFields(::System::Type* type);
    // static public System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> GetRuntimeMethods(System.Type type)
    // Offset: 0x458D370
    static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* GetRuntimeMethods(::System::Type* type);
    // static public System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> GetRuntimeProperties(System.Type type)
    // Offset: 0x458D438
    static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetRuntimeProperties(::System::Type* type);
    // static public System.Collections.Generic.IEnumerable`1<System.Reflection.EventInfo> GetRuntimeEvents(System.Type type)
    // Offset: 0x458D500
    static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::EventInfo*>* GetRuntimeEvents(::System::Type* type);
  }; // System.Reflection.RuntimeReflectionExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::RuntimeReflectionExtensions::GetRuntimeFields
// Il2CppName: GetRuntimeFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* (*)(::System::Type*)>(&System::Reflection::RuntimeReflectionExtensions::GetRuntimeFields)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeReflectionExtensions*), "GetRuntimeFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeReflectionExtensions::GetRuntimeMethods
// Il2CppName: GetRuntimeMethods
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* (*)(::System::Type*)>(&System::Reflection::RuntimeReflectionExtensions::GetRuntimeMethods)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeReflectionExtensions*), "GetRuntimeMethods", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeReflectionExtensions::GetRuntimeProperties
// Il2CppName: GetRuntimeProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* (*)(::System::Type*)>(&System::Reflection::RuntimeReflectionExtensions::GetRuntimeProperties)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeReflectionExtensions*), "GetRuntimeProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeReflectionExtensions::GetRuntimeEvents
// Il2CppName: GetRuntimeEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::EventInfo*>* (*)(::System::Type*)>(&System::Reflection::RuntimeReflectionExtensions::GetRuntimeEvents)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeReflectionExtensions*), "GetRuntimeEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};