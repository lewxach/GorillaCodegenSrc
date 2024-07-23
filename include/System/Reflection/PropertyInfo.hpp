// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.MemberInfo
#include "System/Reflection/MemberInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: MemberTypes
  struct MemberTypes;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::PropertyInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::PropertyInfo*, "System.Reflection", "PropertyInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.PropertyInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class PropertyInfo : public ::System::Reflection::MemberInfo {
    public:
    // public System.Type get_PropertyType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* get_PropertyType();
    // public System.Reflection.ParameterInfo[] GetIndexParameters()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::System::Reflection::ParameterInfo*> GetIndexParameters();
    // public System.Boolean get_CanRead()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_CanRead();
    // public System.Boolean get_CanWrite()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_CanWrite();
    // public System.Reflection.MethodInfo get_GetMethod()
    // Offset: 0x4589B88
    ::System::Reflection::MethodInfo* get_GetMethod();
    // public System.Reflection.MethodInfo GetGetMethod()
    // Offset: 0x4589B9C
    ::System::Reflection::MethodInfo* GetGetMethod();
    // public System.Reflection.MethodInfo GetGetMethod(System.Boolean nonPublic)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Reflection::MethodInfo* GetGetMethod(bool nonPublic);
    // public System.Reflection.MethodInfo GetSetMethod()
    // Offset: 0x4589BB0
    ::System::Reflection::MethodInfo* GetSetMethod();
    // public System.Reflection.MethodInfo GetSetMethod(System.Boolean nonPublic)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Reflection::MethodInfo* GetSetMethod(bool nonPublic);
    // public System.Object GetValue(System.Object obj)
    // Offset: 0x4589BC4
    ::Il2CppObject* GetValue(::Il2CppObject* obj);
    // public System.Object GetValue(System.Object obj, System.Object[] index)
    // Offset: 0x4589BD8
    ::Il2CppObject* GetValue(::Il2CppObject* obj, ::ArrayW<::Il2CppObject*> index);
    // public System.Object GetValue(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* GetValue(::Il2CppObject* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::Il2CppObject*> index, ::System::Globalization::CultureInfo* culture);
    // public System.Void SetValue(System.Object obj, System.Object value)
    // Offset: 0x4589BF8
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value);
    // public System.Void SetValue(System.Object obj, System.Object value, System.Object[] index)
    // Offset: 0x4589C0C
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value, ::ArrayW<::Il2CppObject*> index);
    // public System.Void SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::Il2CppObject*> index, ::System::Globalization::CultureInfo* culture);
    // protected System.Void .ctor()
    // Offset: 0x4589B78
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::PropertyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyInfo*, creationType>()));
    }
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x4589B80
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    ::System::Reflection::MemberTypes get_MemberType();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4589C2C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4589C34
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Int32 MemberInfo::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.PropertyInfo
  #pragma pack(pop)
  // static public System.Boolean op_Equality(System.Reflection.PropertyInfo left, System.Reflection.PropertyInfo right)
  // Offset: 0x4588178
  bool operator ==(::System::Reflection::PropertyInfo* left, ::System::Reflection::PropertyInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.PropertyInfo left, System.Reflection.PropertyInfo right)
  // Offset: 0x458813C
  bool operator !=(::System::Reflection::PropertyInfo* left, ::System::Reflection::PropertyInfo& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::get_PropertyType
// Il2CppName: get_PropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::get_PropertyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "get_PropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetIndexParameters
// Il2CppName: GetIndexParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::GetIndexParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetIndexParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::get_GetMethod
// Il2CppName: get_GetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::get_GetMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "get_GetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetGetMethod
// Il2CppName: GetGetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::GetGetMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetGetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetGetMethod
// Il2CppName: GetGetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::PropertyInfo::*)(bool)>(&System::Reflection::PropertyInfo::GetGetMethod)> {
  static const MethodInfo* get() {
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetGetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nonPublic});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetSetMethod
// Il2CppName: GetSetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::GetSetMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetSetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetSetMethod
// Il2CppName: GetSetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::PropertyInfo::*)(bool)>(&System::Reflection::PropertyInfo::GetSetMethod)> {
  static const MethodInfo* get() {
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetSetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nonPublic});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::PropertyInfo::*)(::Il2CppObject*)>(&System::Reflection::PropertyInfo::GetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::PropertyInfo::*)(::Il2CppObject*, ::ArrayW<::Il2CppObject*>)>(&System::Reflection::PropertyInfo::GetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* index = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, index});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::PropertyInfo::*)(::Il2CppObject*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::Il2CppObject*>, ::System::Globalization::CultureInfo*)>(&System::Reflection::PropertyInfo::GetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* index = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, invokeAttr, binder, index, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::PropertyInfo::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Reflection::PropertyInfo::SetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, value});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::PropertyInfo::*)(::Il2CppObject*, ::Il2CppObject*, ::ArrayW<::Il2CppObject*>)>(&System::Reflection::PropertyInfo::SetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* index = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, value, index});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::PropertyInfo::*)(::Il2CppObject*, ::Il2CppObject*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::Il2CppObject*>, ::System::Globalization::CultureInfo*)>(&System::Reflection::PropertyInfo::SetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* index = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, value, invokeAttr, binder, index, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberTypes (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::get_MemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::PropertyInfo::*)(::Il2CppObject*)>(&System::Reflection::PropertyInfo::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!