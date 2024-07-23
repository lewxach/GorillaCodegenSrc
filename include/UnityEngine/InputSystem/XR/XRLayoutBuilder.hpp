// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.XR.XRFeatureDescriptor
#include "UnityEngine/InputSystem/XR/XRFeatureDescriptor.hpp"
// Including type: UnityEngine.InputSystem.XR.FeatureType
#include "UnityEngine/InputSystem/XR/FeatureType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::XR
namespace UnityEngine::InputSystem::XR {
  // Forward declaring type: XRDeviceDescriptor
  class XRDeviceDescriptor;
}
// Forward declaring namespace: UnityEngine::InputSystem::Layouts
namespace UnityEngine::InputSystem::Layouts {
  // Forward declaring type: InputDeviceDescription
  struct InputDeviceDescription;
  // Forward declaring type: InputControlLayout
  class InputControlLayout;
}
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputDeviceExecuteCommandDelegate
  class InputDeviceExecuteCommandDelegate;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Forward declaring type: XRLayoutBuilder
  class XRLayoutBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRLayoutBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRLayoutBuilder*, "UnityEngine.InputSystem.XR", "XRLayoutBuilder");
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.XR.XRLayoutBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class XRLayoutBuilder : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::InputSystem::XR::XRLayoutBuilder::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    public:
    // private System.String parentLayout
    // Size: 0x8
    // Offset: 0x10
    ::StringW parentLayout;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String interfaceName
    // Size: 0x8
    // Offset: 0x18
    ::StringW interfaceName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.InputSystem.XR.XRDeviceDescriptor descriptor
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* descriptor;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::XR::XRDeviceDescriptor*) == 0x8);
    public:
    // Get static field: static private readonly System.String[] poseSubControlNames
    static ::ArrayW<::StringW> _get_poseSubControlNames();
    // Set static field: static private readonly System.String[] poseSubControlNames
    static void _set_poseSubControlNames(::ArrayW<::StringW> value);
    // Get static field: static private readonly UnityEngine.InputSystem.XR.FeatureType[] poseSubControlTypes
    static ::ArrayW<::UnityEngine::InputSystem::XR::FeatureType> _get_poseSubControlTypes();
    // Set static field: static private readonly UnityEngine.InputSystem.XR.FeatureType[] poseSubControlTypes
    static void _set_poseSubControlTypes(::ArrayW<::UnityEngine::InputSystem::XR::FeatureType> value);
    // Get instance field reference: private System.String parentLayout
    [[deprecated("Use field access instead!")]] ::StringW& dyn_parentLayout();
    // Get instance field reference: private System.String interfaceName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_interfaceName();
    // Get instance field reference: private UnityEngine.InputSystem.XR.XRDeviceDescriptor descriptor
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::XR::XRDeviceDescriptor*& dyn_descriptor();
    // static private System.UInt32 GetSizeOfFeature(UnityEngine.InputSystem.XR.XRFeatureDescriptor featureDescriptor)
    // Offset: 0x5128364
    static uint GetSizeOfFeature(::UnityEngine::InputSystem::XR::XRFeatureDescriptor featureDescriptor);
    // static private System.String SanitizeString(System.String original, System.Boolean allowPaths)
    // Offset: 0x51283DC
    static ::StringW SanitizeString(::StringW original, bool allowPaths);
    // static System.String OnFindLayoutForDevice(ref UnityEngine.InputSystem.Layouts.InputDeviceDescription description, System.String matchedLayout, UnityEngine.InputSystem.LowLevel.InputDeviceExecuteCommandDelegate executeCommandDelegate)
    // Offset: 0x5128538
    static ::StringW OnFindLayoutForDevice(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeCommandDelegate);
    // static private System.String ConvertPotentialAliasToName(UnityEngine.InputSystem.Layouts.InputControlLayout layout, System.String nameOrAlias)
    // Offset: 0x5128988
    static ::StringW ConvertPotentialAliasToName(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::StringW nameOrAlias);
    // private System.Boolean IsSubControl(System.String name)
    // Offset: 0x5128B04
    bool IsSubControl(::StringW name);
    // private System.String GetParentControlName(System.String name)
    // Offset: 0x5128B20
    ::StringW GetParentControlName(::StringW name);
    // private System.Boolean IsPoseControl(System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.XRFeatureDescriptor> features, System.Int32 startIndex)
    // Offset: 0x5128B58
    bool IsPoseControl(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* features, int startIndex);
    // private UnityEngine.InputSystem.Layouts.InputControlLayout Build()
    // Offset: 0x5128CAC
    ::UnityEngine::InputSystem::Layouts::InputControlLayout* Build();
    // public System.Void .ctor()
    // Offset: 0x5128980
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRLayoutBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::XR::XRLayoutBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRLayoutBuilder*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x5129790
    static void _cctor();
  }; // UnityEngine.InputSystem.XR.XRLayoutBuilder
  #pragma pack(pop)
  static check_size<sizeof(XRLayoutBuilder), 32 + sizeof(::UnityEngine::InputSystem::XR::XRDeviceDescriptor*)> __UnityEngine_InputSystem_XR_XRLayoutBuilderSizeCheck;
  static_assert(sizeof(XRLayoutBuilder) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::GetSizeOfFeature
// Il2CppName: GetSizeOfFeature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::UnityEngine::InputSystem::XR::XRFeatureDescriptor)>(&UnityEngine::InputSystem::XR::XRLayoutBuilder::GetSizeOfFeature)> {
  static const MethodInfo* get() {
    static auto* featureDescriptor = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.XR", "XRFeatureDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRLayoutBuilder*), "GetSizeOfFeature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{featureDescriptor});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::SanitizeString
// Il2CppName: SanitizeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool)>(&UnityEngine::InputSystem::XR::XRLayoutBuilder::SanitizeString)> {
  static const MethodInfo* get() {
    static auto* original = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* allowPaths = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRLayoutBuilder*), "SanitizeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{original, allowPaths});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::OnFindLayoutForDevice
// Il2CppName: OnFindLayoutForDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, ::StringW, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*)>(&UnityEngine::InputSystem::XR::XRLayoutBuilder::OnFindLayoutForDevice)> {
  static const MethodInfo* get() {
    static auto* description = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Layouts", "InputDeviceDescription")->this_arg;
    static auto* matchedLayout = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* executeCommandDelegate = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputDeviceExecuteCommandDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRLayoutBuilder*), "OnFindLayoutForDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{description, matchedLayout, executeCommandDelegate});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::ConvertPotentialAliasToName
// Il2CppName: ConvertPotentialAliasToName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::StringW)>(&UnityEngine::InputSystem::XR::XRLayoutBuilder::ConvertPotentialAliasToName)> {
  static const MethodInfo* get() {
    static auto* layout = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Layouts", "InputControlLayout")->byval_arg;
    static auto* nameOrAlias = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRLayoutBuilder*), "ConvertPotentialAliasToName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layout, nameOrAlias});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::IsSubControl
// Il2CppName: IsSubControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::XR::XRLayoutBuilder::*)(::StringW)>(&UnityEngine::InputSystem::XR::XRLayoutBuilder::IsSubControl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRLayoutBuilder*), "IsSubControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::GetParentControlName
// Il2CppName: GetParentControlName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::XR::XRLayoutBuilder::*)(::StringW)>(&UnityEngine::InputSystem::XR::XRLayoutBuilder::GetParentControlName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRLayoutBuilder*), "GetParentControlName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::IsPoseControl
// Il2CppName: IsPoseControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::XR::XRLayoutBuilder::*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*, int)>(&UnityEngine::InputSystem::XR::XRLayoutBuilder::IsPoseControl)> {
  static const MethodInfo* get() {
    static auto* features = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.XR", "XRFeatureDescriptor")})->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRLayoutBuilder*), "IsPoseControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{features, startIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::Build
// Il2CppName: Build
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (UnityEngine::InputSystem::XR::XRLayoutBuilder::*)()>(&UnityEngine::InputSystem::XR::XRLayoutBuilder::Build)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRLayoutBuilder*), "Build", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRLayoutBuilder::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::XR::XRLayoutBuilder::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRLayoutBuilder*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};