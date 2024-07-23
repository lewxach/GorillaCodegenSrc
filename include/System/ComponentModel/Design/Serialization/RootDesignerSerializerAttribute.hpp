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
// Type namespace: System.ComponentModel.Design.Serialization
namespace System::ComponentModel::Design::Serialization {
  // Forward declaring type: RootDesignerSerializerAttribute
  class RootDesignerSerializerAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*, "System.ComponentModel.Design.Serialization", "RootDesignerSerializerAttribute");
// Type namespace: System.ComponentModel.Design.Serialization
namespace System::ComponentModel::Design::Serialization {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  class RootDesignerSerializerAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String _typeId
    // Size: 0x8
    // Offset: 0x10
    ::StringW typeId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Boolean <Reloadable>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool Reloadable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Reloadable and: SerializerTypeName
    char __padding1[0x7] = {};
    // private readonly System.String <SerializerTypeName>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW SerializerTypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String <SerializerBaseTypeName>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW SerializerBaseTypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _typeId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__typeId();
    // Get instance field reference: private readonly System.Boolean <Reloadable>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Reloadable$k__BackingField();
    // Get instance field reference: private readonly System.String <SerializerTypeName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$SerializerTypeName$k__BackingField();
    // Get instance field reference: private readonly System.String <SerializerBaseTypeName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$SerializerBaseTypeName$k__BackingField();
    // public System.Void .ctor(System.String serializerTypeName, System.String baseSerializerTypeName, System.Boolean reloadable)
    // Offset: 0x4F49C44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RootDesignerSerializerAttribute* New_ctor(::StringW serializerTypeName, ::StringW baseSerializerTypeName, bool reloadable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RootDesignerSerializerAttribute*, creationType>(serializerTypeName, baseSerializerTypeName, reloadable)));
    }
    // public System.String get_SerializerBaseTypeName()
    // Offset: 0x4F49C9C
    ::StringW get_SerializerBaseTypeName();
    // public override System.Object get_TypeId()
    // Offset: 0x4F49CA4
    // Implemented from: System.Attribute
    // Base method: System.Object Attribute::get_TypeId()
    ::Il2CppObject* get_TypeId();
  }; // System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
  #pragma pack(pop)
  static check_size<sizeof(RootDesignerSerializerAttribute), 40 + sizeof(::StringW)> __System_ComponentModel_Design_Serialization_RootDesignerSerializerAttributeSizeCheck;
  static_assert(sizeof(RootDesignerSerializerAttribute) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_SerializerBaseTypeName
// Il2CppName: get_SerializerBaseTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::*)()>(&System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_SerializerBaseTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*), "get_SerializerBaseTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_TypeId
// Il2CppName: get_TypeId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::*)()>(&System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_TypeId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*), "get_TypeId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};