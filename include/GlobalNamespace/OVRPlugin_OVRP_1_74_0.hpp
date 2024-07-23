// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_74_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_74_0*, "", "OVRPlugin/OVRP_1_74_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_74_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_74_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static public OVRPlugin/Result ovrp_GetSpaceUuid(in System.UInt64 space, out System.Guid uuid)
    // Offset: 0x4915014
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetSpaceUuid(ByRef<uint64_t> space, ByRef<::System::Guid> uuid);
    // static public OVRPlugin/Result ovrp_CreateVirtualKeyboard(OVRPlugin/VirtualKeyboardCreateInfo createInfo)
    // Offset: 0x4915098
    static ::GlobalNamespace::OVRPlugin::Result ovrp_CreateVirtualKeyboard(::GlobalNamespace::OVRPlugin::VirtualKeyboardCreateInfo createInfo);
    // static public OVRPlugin/Result ovrp_DestroyVirtualKeyboard()
    // Offset: 0x4915104
    static ::GlobalNamespace::OVRPlugin::Result ovrp_DestroyVirtualKeyboard();
    // static public OVRPlugin/Result ovrp_SendVirtualKeyboardInput(OVRPlugin/VirtualKeyboardInputInfo inputInfo, ref OVRPlugin/Posef interactorRootPose)
    // Offset: 0x491516C
    static ::GlobalNamespace::OVRPlugin::Result ovrp_SendVirtualKeyboardInput(::GlobalNamespace::OVRPlugin::VirtualKeyboardInputInfo inputInfo, ByRef<::GlobalNamespace::OVRPlugin::Posef> interactorRootPose);
    // static public OVRPlugin/Result ovrp_ChangeVirtualKeyboardTextContext(System.String textContext)
    // Offset: 0x4915200
    static ::GlobalNamespace::OVRPlugin::Result ovrp_ChangeVirtualKeyboardTextContext(::StringW textContext);
    // static public OVRPlugin/Result ovrp_CreateVirtualKeyboardSpace(OVRPlugin/VirtualKeyboardSpaceCreateInfo createInfo, out System.UInt64 keyboardSpace)
    // Offset: 0x4915294
    static ::GlobalNamespace::OVRPlugin::Result ovrp_CreateVirtualKeyboardSpace(::GlobalNamespace::OVRPlugin::VirtualKeyboardSpaceCreateInfo createInfo, ByRef<uint64_t> keyboardSpace);
    // static public OVRPlugin/Result ovrp_SuggestVirtualKeyboardLocation(OVRPlugin/VirtualKeyboardLocationInfo locationInfo)
    // Offset: 0x4915320
    static ::GlobalNamespace::OVRPlugin::Result ovrp_SuggestVirtualKeyboardLocation(::GlobalNamespace::OVRPlugin::VirtualKeyboardLocationInfo locationInfo);
    // static public OVRPlugin/Result ovrp_GetVirtualKeyboardScale(out System.Single location)
    // Offset: 0x49153AC
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetVirtualKeyboardScale(ByRef<float> location);
    // static public OVRPlugin/Result ovrp_GetRenderModelProperties2(System.String path, OVRPlugin/RenderModelFlags flags, out OVRPlugin/RenderModelPropertiesInternal properties)
    // Offset: 0x4915428
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetRenderModelProperties2(::StringW path, ::GlobalNamespace::OVRPlugin::RenderModelFlags flags, ByRef<::GlobalNamespace::OVRPlugin::RenderModelPropertiesInternal> properties);
    // static private System.Void .cctor()
    // Offset: 0x4915534
    static void _cctor();
  }; // OVRPlugin/OVRP_1_74_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_GetSpaceUuid
// Il2CppName: ovrp_GetSpaceUuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<uint64_t>, ByRef<::System::Guid>)>(&GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_GetSpaceUuid)> {
  static const MethodInfo* get() {
    static auto* space = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* uuid = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_74_0*), "ovrp_GetSpaceUuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{space, uuid});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_CreateVirtualKeyboard
// Il2CppName: ovrp_CreateVirtualKeyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::VirtualKeyboardCreateInfo)>(&GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_CreateVirtualKeyboard)> {
  static const MethodInfo* get() {
    static auto* createInfo = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/VirtualKeyboardCreateInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_74_0*), "ovrp_CreateVirtualKeyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{createInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_DestroyVirtualKeyboard
// Il2CppName: ovrp_DestroyVirtualKeyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_DestroyVirtualKeyboard)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_74_0*), "ovrp_DestroyVirtualKeyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_SendVirtualKeyboardInput
// Il2CppName: ovrp_SendVirtualKeyboardInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::VirtualKeyboardInputInfo, ByRef<::GlobalNamespace::OVRPlugin::Posef>)>(&GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_SendVirtualKeyboardInput)> {
  static const MethodInfo* get() {
    static auto* inputInfo = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/VirtualKeyboardInputInfo")->byval_arg;
    static auto* interactorRootPose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_74_0*), "ovrp_SendVirtualKeyboardInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputInfo, interactorRootPose});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_ChangeVirtualKeyboardTextContext
// Il2CppName: ovrp_ChangeVirtualKeyboardTextContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::StringW)>(&GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_ChangeVirtualKeyboardTextContext)> {
  static const MethodInfo* get() {
    static auto* textContext = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_74_0*), "ovrp_ChangeVirtualKeyboardTextContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textContext});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_CreateVirtualKeyboardSpace
// Il2CppName: ovrp_CreateVirtualKeyboardSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::VirtualKeyboardSpaceCreateInfo, ByRef<uint64_t>)>(&GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_CreateVirtualKeyboardSpace)> {
  static const MethodInfo* get() {
    static auto* createInfo = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/VirtualKeyboardSpaceCreateInfo")->byval_arg;
    static auto* keyboardSpace = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_74_0*), "ovrp_CreateVirtualKeyboardSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{createInfo, keyboardSpace});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_SuggestVirtualKeyboardLocation
// Il2CppName: ovrp_SuggestVirtualKeyboardLocation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::VirtualKeyboardLocationInfo)>(&GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_SuggestVirtualKeyboardLocation)> {
  static const MethodInfo* get() {
    static auto* locationInfo = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/VirtualKeyboardLocationInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_74_0*), "ovrp_SuggestVirtualKeyboardLocation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{locationInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_GetVirtualKeyboardScale
// Il2CppName: ovrp_GetVirtualKeyboardScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<float>)>(&GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_GetVirtualKeyboardScale)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_74_0*), "ovrp_GetVirtualKeyboardScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_GetRenderModelProperties2
// Il2CppName: ovrp_GetRenderModelProperties2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::StringW, ::GlobalNamespace::OVRPlugin::RenderModelFlags, ByRef<::GlobalNamespace::OVRPlugin::RenderModelPropertiesInternal>)>(&GlobalNamespace::OVRPlugin::OVRP_1_74_0::ovrp_GetRenderModelProperties2)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/RenderModelFlags")->byval_arg;
    static auto* properties = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/RenderModelPropertiesInternal")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_74_0*), "ovrp_GetRenderModelProperties2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, flags, properties});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_74_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_74_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_74_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};