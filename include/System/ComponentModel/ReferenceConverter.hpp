// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeConverter
#include "System/ComponentModel/TypeConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ITypeDescriptorContext
  class ITypeDescriptorContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ReferenceConverter
  class ReferenceConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ReferenceConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReferenceConverter*, "System.ComponentModel", "ReferenceConverter");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ReferenceConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class ReferenceConverter : public ::System::ComponentModel::TypeConverter {
    public:
    // Nested type: ::System::ComponentModel::ReferenceConverter::ReferenceComparer
    class ReferenceComparer;
    public:
    // private System.Type _type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return type;
    }
    // Get static field: static private readonly System.String s_none
    static ::StringW _get_s_none();
    // Set static field: static private readonly System.String s_none
    static void _set_s_none(::StringW value);
    // Get instance field reference: private System.Type _type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__type();
    // public System.Void .ctor(System.Type type)
    // Offset: 0x4F139A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReferenceConverter* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ReferenceConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReferenceConverter*, creationType>(type)));
    }
    // protected System.Boolean IsValueAllowed(System.ComponentModel.ITypeDescriptorContext context, System.Object value)
    // Offset: 0x4F14A88
    bool IsValueAllowed(::System::ComponentModel::ITypeDescriptorContext* context, ::Il2CppObject* value);
    // static private System.Void .cctor()
    // Offset: 0x4F14A90
    static void _cctor();
    // public override System.Boolean CanConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Type sourceType)
    // Offset: 0x4F139D4
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Type sourceType)
    bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);
    // public override System.Object ConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value)
    // Offset: 0x4F13AA0
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Object TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value)
    ::Il2CppObject* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value);
    // public override System.Object ConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    // Offset: 0x4F13DEC
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Object TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    ::Il2CppObject* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value, ::System::Type* destinationType);
    // public override System.ComponentModel.TypeConverter/StandardValuesCollection GetStandardValues(System.ComponentModel.ITypeDescriptorContext context)
    // Offset: 0x4F1423C
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.ComponentModel.TypeConverter/StandardValuesCollection TypeConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext context)
    ::System::ComponentModel::TypeConverter::StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);
    // public override System.Boolean GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext context)
    // Offset: 0x4F14A78
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext context)
    bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);
    // public override System.Boolean GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext context)
    // Offset: 0x4F14A80
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext context)
    bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);
  }; // System.ComponentModel.ReferenceConverter
  #pragma pack(pop)
  static check_size<sizeof(ReferenceConverter), 16 + sizeof(::System::Type*)> __System_ComponentModel_ReferenceConverterSizeCheck;
  static_assert(sizeof(ReferenceConverter) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ReferenceConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ReferenceConverter::IsValueAllowed
// Il2CppName: IsValueAllowed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::Il2CppObject*)>(&System::ComponentModel::ReferenceConverter::IsValueAllowed)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReferenceConverter*), "IsValueAllowed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReferenceConverter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::ReferenceConverter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReferenceConverter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReferenceConverter::CanConvertFrom
// Il2CppName: CanConvertFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&System::ComponentModel::ReferenceConverter::CanConvertFrom)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* sourceType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReferenceConverter*), "CanConvertFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, sourceType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReferenceConverter::ConvertFrom
// Il2CppName: ConvertFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*)>(&System::ComponentModel::ReferenceConverter::ConvertFrom)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReferenceConverter*), "ConvertFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, culture, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReferenceConverter::ConvertTo
// Il2CppName: ConvertTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*, ::System::Type*)>(&System::ComponentModel::ReferenceConverter::ConvertTo)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReferenceConverter*), "ConvertTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, culture, value, destinationType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReferenceConverter::GetStandardValues
// Il2CppName: GetStandardValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter::StandardValuesCollection* (System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&System::ComponentModel::ReferenceConverter::GetStandardValues)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReferenceConverter*), "GetStandardValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReferenceConverter::GetStandardValuesExclusive
// Il2CppName: GetStandardValuesExclusive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&System::ComponentModel::ReferenceConverter::GetStandardValuesExclusive)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReferenceConverter*), "GetStandardValuesExclusive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ReferenceConverter::GetStandardValuesSupported
// Il2CppName: GetStandardValuesSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&System::ComponentModel::ReferenceConverter::GetStandardValuesSupported)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ReferenceConverter*), "GetStandardValuesSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
