// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ToolboxItemAttribute
  class ToolboxItemAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ToolboxItemAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ToolboxItemAttribute*, "System.ComponentModel", "ToolboxItemAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ToolboxItemAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class ToolboxItemAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Type _toolboxItemType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* toolboxItemType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.String _toolboxItemTypeName
    // Size: 0x8
    // Offset: 0x18
    ::StringW toolboxItemTypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static public readonly System.ComponentModel.ToolboxItemAttribute Default
    static ::System::ComponentModel::ToolboxItemAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.ToolboxItemAttribute Default
    static void _set_Default(::System::ComponentModel::ToolboxItemAttribute* value);
    // Get static field: static public readonly System.ComponentModel.ToolboxItemAttribute None
    static ::System::ComponentModel::ToolboxItemAttribute* _get_None();
    // Set static field: static public readonly System.ComponentModel.ToolboxItemAttribute None
    static void _set_None(::System::ComponentModel::ToolboxItemAttribute* value);
    // Get instance field reference: private System.Type _toolboxItemType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__toolboxItemType();
    // Get instance field reference: private System.String _toolboxItemTypeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__toolboxItemTypeName();
    // public System.Void .ctor(System.Boolean defaultType)
    // Offset: 0x4F01524
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToolboxItemAttribute* New_ctor(bool defaultType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ToolboxItemAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToolboxItemAttribute*, creationType>(defaultType)));
    }
    // public System.Void .ctor(System.String toolboxItemTypeName)
    // Offset: 0x4F01590
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToolboxItemAttribute* New_ctor(::StringW toolboxItemTypeName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ToolboxItemAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToolboxItemAttribute*, creationType>(toolboxItemTypeName)));
    }
    // public System.Void .ctor(System.Type toolboxItemType)
    // Offset: 0x4F01624
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToolboxItemAttribute* New_ctor(::System::Type* toolboxItemType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ToolboxItemAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToolboxItemAttribute*, creationType>(toolboxItemType)));
    }
    // public System.Type get_ToolboxItemType()
    // Offset: 0x4F01680
    ::System::Type* get_ToolboxItemType();
    // public System.String get_ToolboxItemTypeName()
    // Offset: 0x4F0182C
    ::StringW get_ToolboxItemTypeName();
    // static private System.Void .cctor()
    // Offset: 0x4F019A0
    static void _cctor();
    // public override System.Boolean IsDefaultAttribute()
    // Offset: 0x4F014BC
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::IsDefaultAttribute()
    bool IsDefaultAttribute();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4F01880
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4F0197C
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.ToolboxItemAttribute
  #pragma pack(pop)
  static check_size<sizeof(ToolboxItemAttribute), 24 + sizeof(::StringW)> __System_ComponentModel_ToolboxItemAttributeSizeCheck;
  static_assert(sizeof(ToolboxItemAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemAttribute::get_ToolboxItemType
// Il2CppName: get_ToolboxItemType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::ToolboxItemAttribute::*)()>(&System::ComponentModel::ToolboxItemAttribute::get_ToolboxItemType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ToolboxItemAttribute*), "get_ToolboxItemType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemAttribute::get_ToolboxItemTypeName
// Il2CppName: get_ToolboxItemTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::ToolboxItemAttribute::*)()>(&System::ComponentModel::ToolboxItemAttribute::get_ToolboxItemTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ToolboxItemAttribute*), "get_ToolboxItemTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::ToolboxItemAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ToolboxItemAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemAttribute::IsDefaultAttribute
// Il2CppName: IsDefaultAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ToolboxItemAttribute::*)()>(&System::ComponentModel::ToolboxItemAttribute::IsDefaultAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ToolboxItemAttribute*), "IsDefaultAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ToolboxItemAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::ToolboxItemAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ToolboxItemAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::ToolboxItemAttribute::*)()>(&System::ComponentModel::ToolboxItemAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ToolboxItemAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
